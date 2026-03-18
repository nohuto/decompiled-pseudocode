/*
 * XREFs of EngDeleteDriverObj @ 0x1C00FCA60
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgLockEx @ 0x1C00325B0 (HmgLockEx.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  HSEMAPHORE *v8; // rbx
  int v9; // r14d
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx
  struct OBJECT *v12; // rbx
  HSEMAPHORE *v14; // [rsp+68h] [rbp+20h] BYREF

  v6 = HmgLockEx((unsigned int)hdo, 28, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(HSEMAPHORE **)(v6 + 40);
    v14 = v8;
    if ( !bCallBack )
      goto LABEL_12;
    EngAcquireSemaphore(v8[5]);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v8[5], 11);
    v9 = (*(__int64 (__fastcall **)(__int64))(v7 + 32))(v7 + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
    v10 = (struct _ERESOURCE *)v8[5];
    if ( v10 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion(v11);
    }
    if ( v9 )
    {
LABEL_12:
      v12 = HmgRemoveObjectImpl((struct HOBJ__ *)hdo, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
      if ( v12 )
      {
        PDEVOBJ::vUnreferencePdev((PDEV **)&v14, 0);
        FreeObject((__int64)v12, 28);
        return 1;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
  }
  return 0;
}

/*
 * XREFs of EngDeleteDriverObj @ 0x1C00FCED0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     HmgLockEx @ 0x1C004D1C0 (HmgLockEx.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // r14d
  int v10; // r8d
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rbx
  int v14; // r8d
  PDEV **v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = HmgLockEx((struct HOBJ__ *)hdo, 28, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v16 = (PDEV **)v8;
    if ( !bCallBack )
      goto LABEL_12;
    EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 40));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v8 + 40), 11);
    v9 = (*(__int64 (__fastcall **)(__int64))(v7 + 32))(v7 + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v8 + 40), v10);
    v11 = *(struct _ERESOURCE **)(v8 + 40);
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion(v12);
    }
    if ( v9 )
    {
LABEL_12:
      v13 = HmgRemoveObject((struct HOBJ__ *)hdo, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
      if ( v13 )
      {
        PDEVOBJ::vUnreferencePdev(&v16, 0, v14);
        FreeObject((__int64)v13, 28);
        return 1;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
  }
  return 0;
}

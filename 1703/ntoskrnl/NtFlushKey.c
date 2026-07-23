/*
 * XREFs of NtFlushKey @ 0x140455BC8
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     CmpDoFlushAll @ 0x14013D204 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 */

NTSTATUS __stdcall NtFlushKey(HANDLE KeyHandle)
{
  int v1; // ebx
  __int64 v2; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rcx
  int v7; // ebx
  struct _KTHREAD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // r9d
  char IsKeyDeletedForKeyBody; // al
  _QWORD *v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // rsi
  BOOLEAN v14; // al
  void *v15; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  PVOID Object; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-11h] BYREF
  LARGE_INTEGER v22[3]; // [rsp+78h] [rbp+Fh] BYREF

  v1 = (int)KeyHandle;
  memset(v21, 0, sizeof(v21));
  v2 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v22, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    v7 = CmObReferenceObjectByHandle(v1, 0, v4, v5, (__int64)&Object, 0LL);
    if ( v7 >= 0 )
    {
      if ( CmpTraceRoutine && Object )
        v2 = *((_QWORD *)Object + 1);
      v20[1] = v20;
      v20[0] = v20;
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      v9 = Object;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v21[0] = v9;
        LOBYTE(v10) = 1;
        v7 = CmpCallCallBacksEx(30, (unsigned int)v21, 0, v10, 31, (__int64)v9, (__int64)v20);
      }
      if ( v7 < 0 )
      {
        if ( v7 == -1073740541 )
          v7 = 0;
      }
      else
      {
        CmpLockRegistryFreezeAware(0LL);
        CmpLockKcbShared(v9[1]);
        IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(v9, 0LL);
        v12 = (_QWORD *)v9[1];
        if ( IsKeyDeletedForKeyBody )
        {
          v18 = *((_DWORD *)v9 + 12);
          CmpUnlockKcb(v12);
          CmpUnlockRegistry();
          v7 = (v18 & 1) != 0 ? -1073740763 : -1073741444;
        }
        else
        {
          v13 = (struct _EX_RUNDOWN_REF *)v12[3];
          if ( v13 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
          {
            CmpUnlockKcb(v12);
            CmpUnlockRegistry();
            CmpDoFlushAll();
          }
          else
          {
            v14 = ExAcquireRundownProtection(v13 + 347);
            v15 = (void *)v9[1];
            if ( v14 )
            {
              CmpUnlockKcb(v15);
              CmpUnlockRegistry();
              v7 = CmpFlushHive((ULONG_PTR)v13);
              ExReleaseRundownProtection(v13 + 347);
              if ( v7 < 0 )
                v7 = -1073741491;
            }
            else
            {
              CmpUnlockKcb(v15);
              CmpUnlockRegistry();
              v7 = -1073740763;
            }
          }
        }
        v7 = CmPostCallbackNotificationEx(31, (__int64)v9, v7, (__int64)v21, 0LL, v20);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(Object);
    }
    if ( CmpTraceRoutine )
    {
      LOBYTE(v6) = 21;
      CmpTraceRoutine(v6, v22, (unsigned int)v7, 0LL, v2, 0LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v7 = -1073741431;
    if ( CmpTraceRoutine )
    {
      LOBYTE(v17) = 21;
      CmpTraceRoutine(v17, v22, 3221225865LL, 0LL, 0LL, 0LL);
    }
  }
  return v7;
}

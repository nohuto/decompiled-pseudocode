/*
 * XREFs of NtFlushKey @ 0x14059294C
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpDoFlushAll @ 0x1401E3C7C (CmpDoFlushAll.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 */

NTSTATUS __stdcall NtFlushKey(HANDLE KeyHandle)
{
  __int64 v2; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // r8
  __int64 v5; // rcx
  int v6; // edi
  struct _KTHREAD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  _DWORD *v10; // r15
  bool IsKeyDeletedForKeyBody; // al
  ULONG_PTR v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // rbx
  BOOLEAN v14; // al
  ULONG_PTR v15; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  PVOID Object; // [rsp+48h] [rbp-29h] BYREF
  _SLIST_ENTRY v20; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v22[3]; // [rsp+80h] [rbp+Fh] BYREF

  memset(v21, 0, sizeof(v21));
  v2 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v22, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v6 = CmObReferenceObjectByHandle(KeyHandle, 0, v4, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v6 >= 0 )
    {
      if ( CmpTraceRoutine && Object )
        v2 = *((_QWORD *)Object + 1);
      *((_QWORD *)&v20.Next + 1) = &v20;
      v20.Next = &v20;
      v7 = KeGetCurrentThread();
      --v7->KernelApcDisable;
      v8 = Object;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v21[0] = v8;
        v6 = CmpCallCallBacksEx(0x1Eu, (__int64)v21, 0LL, 1, 0x1Fu, (__int64)v8, &v20);
      }
      if ( v6 < 0 )
      {
        if ( v6 == -1073740541 )
          v6 = 0;
      }
      else
      {
        CmpLockRegistryFreezeAware(0);
        v9 = v8[1];
        ExAcquirePushLockSharedEx(v9 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 48));
        v10 = Object;
        IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody((__int64)Object, 0LL);
        v12 = v8[1];
        if ( IsKeyDeletedForKeyBody )
        {
          v18 = v10[12];
          CmpUnlockKcb(v12);
          CmpUnlockRegistry();
          v6 = (v18 & 1) != 0 ? -1073740763 : -1073741444;
        }
        else
        {
          v13 = *(struct _EX_RUNDOWN_REF **)(v12 + 24);
          if ( v13 == CmpMasterHive )
          {
            CmpUnlockKcb(v12);
            CmpUnlockRegistry();
            CmpDoFlushAll();
          }
          else
          {
            v14 = ExAcquireRundownProtection_0(v13 + 347);
            v15 = v8[1];
            if ( v14 )
            {
              CmpUnlockKcb(v15);
              CmpUnlockRegistry();
              v6 = CmpFlushHive((ULONG_PTR)v13, 0);
              ExReleaseRundownProtection_0(v13 + 347);
              if ( v6 < 0 )
                v6 = -1073741491;
            }
            else
            {
              CmpUnlockKcb(v15);
              CmpUnlockRegistry();
              v6 = -1073740763;
            }
          }
        }
        v6 = CmPostCallbackNotificationEx(0x1Fu, (__int64)v10, v6, (__int64)v21, 0LL, &v20);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ObfDereferenceObject(Object);
    }
    if ( CmpTraceRoutine )
    {
      LOBYTE(v5) = 21;
      CmpTraceRoutine(v5, v22, (unsigned int)v6, 0LL, v2, 0LL);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v6;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v17) = 21;
      CmpTraceRoutine(v17, v22, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
}

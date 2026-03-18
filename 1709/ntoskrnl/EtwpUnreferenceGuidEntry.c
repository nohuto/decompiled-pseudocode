/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x140491D2C
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x140134110 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140491780 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x140491B40 (EtwpDeleteRegistrationObject.c)
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404EEC8C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpGetNextGuidEntry @ 0x1404EF174 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404EF2A8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRegisterProvider @ 0x1404F0B1C (EtwpRegisterProvider.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 *     EtwpGetTraceGuidInfo @ 0x1405D8AFC (EtwpGetTraceGuidInfo.c)
 *     EtwpDisallowedGuidAddition @ 0x140743A34 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140743BBC (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1407445C8 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x14074FA80 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14058B77C (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r10d
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rbp
  volatile signed __int64 *v10; // rbp
  __int64 *v11; // rcx
  __int64 **v12; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 2);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *((_DWORD *)BugCheckParameter2 + 9);
    v6 = *((_DWORD *)BugCheckParameter2 + 8);
    v7 = *((_DWORD *)BugCheckParameter2 + 7);
    v8 = *((_DWORD *)BugCheckParameter2 + 6);
    v9 = BugCheckParameter2[47];
    --CurrentThread->KernelApcDisable;
    v10 = (volatile signed __int64 *)(56LL * (((unsigned __int8)v6 ^ (unsigned __int8)(v8 ^ v7 ^ v5)) & 0x3F) + v9 + 480);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
    v11 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v12 = (__int64 **)BugCheckParameter2[1], *v12 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v12 = v11;
    v11[1] = (__int64)v12;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}

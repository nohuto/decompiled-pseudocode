/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x140480BE4
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14003DD38 (EtwGetProviderIdFromHandle.c)
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     EtwpGetTraceGuidInfo @ 0x140454F48 (EtwpGetTraceGuidInfo.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x140480960 (EtwpDeleteRegistrationObject.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpGetNextGuidEntry @ 0x140552724 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140552860 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140554260 (EtwpUpdateGuidEnableInfo.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     EtwpDisallowedGuidAddition @ 0x1405C7F38 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140709A14 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x14070A0B8 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x140711F20 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14044E1FC (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rsi
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  volatile signed __int64 *v7; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 2);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v4 = BugCheckParameter2[47];
    CurrentThread = KeGetCurrentThread();
    v6 = 56LL
       * (((unsigned __int8)*((_DWORD *)BugCheckParameter2 + 6) ^ (unsigned __int8)(*((_DWORD *)BugCheckParameter2 + 7) ^ *((_DWORD *)BugCheckParameter2 + 8) ^ *((_DWORD *)BugCheckParameter2 + 9))) & 0x3F);
    --CurrentThread->KernelApcDisable;
    v7 = (volatile signed __int64 *)(v6 + v4 + 1480);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
    v8 = *BugCheckParameter2;
    v9 = (_QWORD *)BugCheckParameter2[1];
    if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2 || (_QWORD *)*v9 != BugCheckParameter2 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}

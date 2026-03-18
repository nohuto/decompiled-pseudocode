/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x140480CD0
 * Callers:
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     EtwpGetTraceGuidInfo @ 0x140454F48 (EtwpGetTraceGuidInfo.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1405C7F38 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140709A14 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x14070A0B8 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x140711F20 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     EtwpReferenceGuidEntry @ 0x140480DC8 (EtwpReferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpFindGuidEntryByGuid(__int64 a1, _DWORD *a2, int a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v7; // rsi
  signed __int64 *v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rax

  v4 = 0LL;
  v5 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 1432;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD **)(v5 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(v5 + 48);
  ExAcquirePushLockSharedEx(v5 + 48, 0LL);
  v9 = *v7;
  if ( *v7 != v7 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)a2 - v9[3];
      if ( *(_QWORD *)a2 == v9[3] )
        v10 = *((_QWORD *)a2 + 1) - v9[4];
      if ( !v10 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)v9) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v7 )
        goto LABEL_9;
    }
    v4 = v9;
  }
LABEL_9:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v4;
}

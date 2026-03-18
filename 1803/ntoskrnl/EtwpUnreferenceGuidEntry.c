/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1405906D4
 * Callers:
 *     NtTraceEvent @ 0x1400611F0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x140169D24 (EtwGetProviderIdFromHandle.c)
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14058CED4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpGetNextGuidEntry @ 0x14058F080 (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x140590460 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140591B34 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 *     EtwpDisallowedGuidAddition @ 0x1407A5704 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1407A5894 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1407A5FA4 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1407A62B4 (EtwpGetTraceGuidInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407B0900 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14058E35C (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(volatile signed __int64 *P)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  volatile signed __int64 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  volatile signed __int64 v14; // rcx
  PVOID *v15; // rax

  v2 = _InterlockedDecrement64(P + 2);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)P, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *((_DWORD *)P + 6);
    v6 = *((_DWORD *)P + 9);
    v7 = *((_DWORD *)P + 8);
    v8 = *((_DWORD *)P + 7);
    v9 = *((_QWORD *)P + 47);
    --CurrentThread->KernelApcDisable;
    v10 = (volatile signed __int64 *)(56LL * (((unsigned __int8)v8 ^ (unsigned __int8)(v7 ^ v6 ^ v5)) & 0x3F) + v9 + 488);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
    v14 = *P;
    if ( *(volatile signed __int64 **)(*P + 8) != P || (v15 = (PVOID *)*((_QWORD *)P + 1), *v15 != P) )
      __fastfail(3u);
    *v15 = (PVOID)v14;
    *(_QWORD *)(v14 + 8) = v15;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10, v11, v12, v13);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(P);
  }
  return v2;
}

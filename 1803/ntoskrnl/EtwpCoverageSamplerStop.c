/*
 * XREFs of EtwpCoverageSamplerStop @ 0x1407B8748
 * Callers:
 *     EtwpCoverageSamplerClose @ 0x1407B7550 (EtwpCoverageSamplerClose.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B8BD4 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeStopProfile @ 0x140246090 (KeStopProfile.c)
 *     EtwpCovSampCaptureContextStop @ 0x1402B4C98 (EtwpCovSampCaptureContextStop.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14077E200 (PsRemoveLoadImageNotifyRoutine.c)
 *     EtwpCovSampProcessCleanup @ 0x1407B6A0C (EtwpCovSampProcessCleanup.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageSamplerStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v2; // r15
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *v9; // rax
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *i; // rcx
  __int64 v14; // rbp
  struct _KTHREAD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 NextProcess; // rax
  _QWORD *v20; // rsi
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_1403A1CC8 = (__int64)KeGetCurrentThread();
  if ( qword_1403A1CD8 == a1 )
  {
    v7 = *(_DWORD *)(a1 + 1200);
    if ( (v7 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1200) = v7 | 2;
      qword_1403A1CC8 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals, v4, v5, v6);
      KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_1403A1CE0);
      ExRundownCompleted((PEX_RUNDOWN_REF)&stru_1403A1CE0);
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
      v9 = KeGetCurrentThread();
      v2 = (void *)qword_1403A1CD8;
      qword_1403A1CD8 = 0LL;
      v10 = qword_1403A1CE8;
      qword_1403A1CC8 = (__int64)v9;
      v11 = *(_DWORD *)(a1 + 1132);
      if ( (v11 & 8) != 0 )
      {
        KeStopProfile(qword_1403A1CE8 + 16);
        *(_DWORD *)(a1 + 1132) &= ~8u;
        v11 = *(_DWORD *)(a1 + 1132);
      }
      if ( (v11 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)EtwpCovSampImageNotify);
        *(_DWORD *)(a1 + 1132) &= ~2u;
        v11 = *(_DWORD *)(a1 + 1132);
      }
      if ( (v11 & 4) != 0 )
      {
        v12 = EtwpHostSiloState;
        *(_DWORD *)(EtwpHostSiloState + 4516) &= 0xFFFFFDFB;
        *(_DWORD *)(v12 + 4512) &= 0xFFFFEFFB;
        EtwpUpdateGlobalGroupMasks(v12, 0, 9u);
        *(_DWORD *)(a1 + 1132) &= ~4u;
      }
      for ( i = 0LL; ; i = v20 )
      {
        NextProcess = PsGetNextProcess(i);
        v20 = (_QWORD *)NextProcess;
        if ( !NextProcess )
          break;
        v14 = *(_QWORD *)(NextProcess + 2112);
        if ( v14 )
        {
          v15 = KeGetCurrentThread();
          --v15->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v14 + 8, 0LL);
          *(_QWORD *)(v14 + 16) = KeGetCurrentThread();
          EtwpCovSampProcessCleanup(v14, 1);
          *(_QWORD *)(v14 + 16) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 8), v16, v17, v18);
          KeAbPostRelease(v14 + 8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
      EtwpCovSampCaptureContextStop(v10);
      *(_DWORD *)(a1 + 1132) &= ~1u;
    }
  }
  result = KeGetCurrentThread();
  if ( (struct _KTHREAD *)qword_1403A1CC8 == result )
  {
    qword_1403A1CC8 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals, v4, v5, v6);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    result = (struct _KTHREAD *)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v2 )
    return (struct _KTHREAD *)ObfDereferenceObject(v2);
  return result;
}

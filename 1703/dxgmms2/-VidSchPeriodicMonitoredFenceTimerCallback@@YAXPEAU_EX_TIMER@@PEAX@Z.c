/*
 * XREFs of ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00289D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     Template_pqqiix @ 0x1C0024618 (Template_pqqiix.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C00259B0 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C0028928 (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002A590 (VidSchSignalSyncObjectsFromCpu.c)
 */

void __fastcall VidSchPeriodicMonitoredFenceTimerCallback(struct _EX_TIMER *a1, int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  union _LARGE_INTEGER v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-68h]
  int v18; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v4 = *(_QWORD *)(v3 + 8LL * (unsigned int)a2[2] + 2992);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 1880), &LockHandle);
  v5 = *(_QWORD *)(v4 + 18808);
  v6 = *(_QWORD *)(v4 + 18800);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = VidSchiCalculatePeriodicTargetFrameNumber(v7, (__int64)a2, v5, v6, &v20);
  v21 = v9;
  if ( *((_QWORD *)a2 + 7) < v9 )
  {
    if ( (int)VidSchSignalSyncObjectsFromCpu(1LL, a2, 0LL, &v21) >= 0 )
      *((_QWORD *)a2 + 7) = v9;
    v12 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(v5, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 2), v20);
    if ( v12 > 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v11, &EventPerformanceWarning, v13, 25);
      v12 = -*((_QWORD *)a2 + 6);
    }
    ExSetTimer(*((_QWORD *)a2 + 5), v12, 0LL, 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      v18 = a2[6];
      LODWORD(v17) = a2[2];
      Template_pqqiix(v15, v14, v16, *(_QWORD *)a2, v17, v18, v5, v12, v9);
    }
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v8, &EventPerformanceWarning, v10, 25);
    }
    ExSetTimer(*((_QWORD *)a2 + 5), -*((_QWORD *)a2 + 6), 0LL, 0LL);
  }
}

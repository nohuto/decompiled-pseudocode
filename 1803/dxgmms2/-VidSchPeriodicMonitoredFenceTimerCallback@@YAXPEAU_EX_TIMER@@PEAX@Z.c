/*
 * XREFs of ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C002D9B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     McTemplateK0pqqiix @ 0x1C00292A0 (McTemplateK0pqqiix.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C002A7F8 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C002D90C (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002F060 (VidSchSignalSyncObjectsFromCpu.c)
 */

void __fastcall VidSchPeriodicMonitoredFenceTimerCallback(struct _EX_TIMER *a1, int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+20h] [rbp-68h]
  int v17; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v19; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+A0h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v4 = *(_QWORD *)(v3 + 8LL * (unsigned int)a2[2] + 3032);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 1904), &LockHandle);
  v5 = *(_QWORD *)(v4 + 28040);
  v6 = *(_QWORD *)(v4 + 28032);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)a2, v5, v6, &v19);
  v20 = v8;
  if ( *((_QWORD *)a2 + 7) < v8 )
  {
    if ( (int)VidSchSignalSyncObjectsFromCpu(1, (_DWORD)a2, 0, (unsigned int)&v20, 0) >= 0 )
      *((_QWORD *)a2 + 7) = v8;
    v11 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(v5, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 2), v19);
    if ( v11 > 0 )
    {
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, (__int64)&EventPerformanceWarning, v12, 25);
      v11 = -*((_QWORD *)a2 + 6);
    }
    ExSetTimer(*((_QWORD *)a2 + 5), v11, 0LL, 0LL);
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      v17 = a2[6];
      LODWORD(v16) = a2[2];
      McTemplateK0pqqiix(v14, v13, v15, *(_QWORD *)a2, v16, v17, v5, v11, v8);
    }
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v7, (__int64)&EventPerformanceWarning, v9, 25);
    }
    ExSetTimer(*((_QWORD *)a2 + 5), -*((_QWORD *)a2 + 6), 0LL, 0LL);
  }
}

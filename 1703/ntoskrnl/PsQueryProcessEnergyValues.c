/*
 * XREFs of PsQueryProcessEnergyValues @ 0x1405400F0
 * Callers:
 *     PspQueryProcessAccountingInformationCallback @ 0x140475080 (PspQueryProcessAccountingInformationCallback.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140547818 (PspFoldProcessAccountingIntoJob.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406D0F54 (PopEtEnergyContextProcessStateUpdate.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1406D2C20 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlTimelineBitmapMerge @ 0x1401FCDC8 (RtlTimelineBitmapMerge.c)
 *     KeQueryTimelineBitmapTime @ 0x1401FD9A4 (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationCapture @ 0x140234EC4 (RtlStateDurationCapture.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140234FD8 (RtlTimelineBitmapUpdateRange.c)
 */

char __fastcall PsQueryProcessEnergyValues(_QWORD *a1, _OWORD *a2)
{
  char result; // al
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned int TimelineBitmapTime; // r13d
  __int64 v9; // r15
  unsigned int v10; // r8d
  unsigned int *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v15; // rsi
  _QWORD *i; // r11
  _QWORD *v17; // r11
  __int64 v18; // r10
  __int64 v19; // r10
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v24; // [rsp+70h] [rbp+18h]
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  memset(a2, 0, 0x158uLL);
  result = PoEnergyEstimationEnabled();
  if ( result && a1 != PsIdleProcess )
  {
    v24 = a1[229];
    *((_QWORD *)a2 + 8) = *(_QWORD *)(v24 + 64);
    *((_QWORD *)a2 + 9) = *(_QWORD *)(v24 + 72);
    *((_QWORD *)a2 + 10) = *(_QWORD *)(v24 + 80);
    *((_QWORD *)a2 + 11) = *(_QWORD *)(v24 + 88);
    *((_QWORD *)a2 + 12) = *(_QWORD *)(v24 + 96);
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v6 = (__int64)a2 + 104;
    v7 = v24 - (_QWORD)a2;
    TimelineBitmapTime = KeQueryTimelineBitmapTime();
    v9 = 3LL;
    do
    {
      v10 = RtlStateDurationCapture(v6, (_QWORD *)(v7 + v6), v5);
      if ( (_OWORD *)v6 == (_OWORD *)((char *)a2 + 104) )
      {
        v11 = (unsigned int *)(a2 + 19);
      }
      else
      {
        v11 = (unsigned int *)a2 + 78;
        if ( (_OWORD *)v6 != a2 + 7 )
          v11 = 0LL;
      }
      if ( v11 && v10 )
        RtlTimelineBitmapUpdateRange(v11, TimelineBitmapTime - (v10 >> 12), TimelineBitmapTime);
      v6 += 8LL;
      --v9;
    }
    while ( v9 );
    v12 = a2 + 17;
    v13 = 9LL;
    *((_DWORD *)a2 + 32) = *(_DWORD *)(v24 + 128);
    *((_DWORD *)a2 + 33) = *(_DWORD *)(v24 + 132);
    *((_DWORD *)a2 + 34) = *(_DWORD *)(v24 + 136);
    do
    {
      *v12 = *(_QWORD *)((char *)v12 + v7);
      ++v12;
      --v13;
    }
    while ( v13 );
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = a1 + 214;
    ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 214), 0LL);
    *a2 = *(_OWORD *)v24;
    a2[1] = *(_OWORD *)(v24 + 16);
    a2[2] = *(_OWORD *)(v24 + 32);
    a2[3] = *(_OWORD *)(v24 + 48);
    a2[9] = *(_OWORD *)(v24 + 144);
    a2[10] = *(_OWORD *)(v24 + 160);
    a2[11] = *(_OWORD *)(v24 + 176);
    a2[12] = *(_OWORD *)(v24 + 192);
    a2[13] = *(_OWORD *)(v24 + 208);
    a2[14] = *(_OWORD *)(v24 + 224);
    a2[15] = *(_OWORD *)(v24 + 240);
    a2[16] = *(_OWORD *)(v24 + 256);
    for ( i = (_QWORD *)a1[145]; i != a1 + 145; i = (_QWORD *)*v17 )
    {
      v25 = *(_QWORD *)(i[34] + 192LL);
      RtlTimelineBitmapMerge((unsigned int *)a2 + 68, (unsigned int *)&v25);
      v19 = v18 - (_QWORD)a2;
      v20 = a2;
      v21 = 4LL;
      do
      {
        v22 = 2LL;
        do
        {
          *v20 += *(_QWORD *)((char *)v20 + v19);
          v20[18] += *(_QWORD *)((char *)v20 + v19 + 64);
          v20[26] += *(_QWORD *)((char *)v20 + v19 + 128);
          ++v20;
          --v22;
        }
        while ( v22 );
        --v21;
      }
      while ( v21 );
    }
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v15);
    KeAbPostRelease((ULONG_PTR)v15);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}

/*
 * XREFs of PsQueryProcessEnergyValues @ 0x140493140
 * Callers:
 *     PopEtEnergyContextProcessStateUpdate @ 0x1404574E8 (PopEtEnergyContextProcessStateUpdate.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1404579D0 (PopEtProcessEnumSnapshotCallback.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14050CFF0 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140510AB0 (PspQueryProcessAccountingInformationCallback.c)
 * Callees:
 *     RtlTimelineBitmapUpdateRange @ 0x140008488 (RtlTimelineBitmapUpdateRange.c)
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     KeQueryTimelineBitmapTime @ 0x140025A10 (KeQueryTimelineBitmapTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192F40 (memset.c)
 */

char __fastcall PsQueryProcessEnergyValues(_QWORD *a1, _OWORD *a2)
{
  char result; // al
  unsigned __int64 v5; // r12
  unsigned int TimelineBitmapTime; // eax
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // r8
  char *v10; // r11
  __int64 v11; // rsi
  unsigned int v12; // r13d
  unsigned int v13; // r8d
  int v14; // ecx
  __int64 v15; // rax
  _OWORD *v16; // r11
  __int64 v17; // rsi
  int *v18; // r13
  unsigned int v19; // r8d
  int v20; // ecx
  __int64 v21; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v23; // rbx
  _QWORD *v24; // r14
  _QWORD *v25; // r10
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // r9
  __int64 v33; // r8
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // [rsp+70h] [rbp+18h]
  __int64 v41; // [rsp+78h] [rbp+20h]

  memset(a2, 0, 0x1B0uLL);
  result = PoEnergyEstimationEnabled();
  if ( !result || a1 == PsIdleProcess )
    return result;
  v41 = a1[232];
  *((_QWORD *)a2 + 8) = *(_QWORD *)(v41 + 64);
  *((_QWORD *)a2 + 9) = *(_QWORD *)(v41 + 72);
  *((_QWORD *)a2 + 10) = *(_QWORD *)(v41 + 80);
  *((_QWORD *)a2 + 11) = *(_QWORD *)(v41 + 88);
  *((_QWORD *)a2 + 12) = *(_QWORD *)(v41 + 96);
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v40 = TimelineBitmapTime;
  v7 = v41 - (_QWORD)a2;
  v8 = a2 + 17;
  v9 = 14LL;
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v7);
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = (char *)a2 + 104;
  v11 = 3LL;
  v12 = TimelineBitmapTime;
  do
  {
    v13 = 0;
    *(_QWORD *)v10 = *(_QWORD *)&v10[v7];
    v14 = *((_DWORD *)v10 + 1);
    if ( v14 < 0 )
    {
      v34 = v14 & 0x7FFFFFFF;
      *((_DWORD *)v10 + 1) = v34;
      v35 = *(_DWORD *)&v10[v7];
      if ( (unsigned int)v5 > v35 )
      {
        *(_DWORD *)v10 = v5;
        v13 = v5 - v35;
        if ( (_DWORD)v5 - v35 == -1 || ~v13 < v34 )
          v36 = -1;
        else
          v36 = v34 + v13;
        *((_DWORD *)v10 + 1) = v36 & 0x7FFFFFFF;
      }
    }
    if ( v10 == (char *)a2 + 104 )
    {
      v15 = 304LL;
    }
    else
    {
      if ( v10 != (char *)(a2 + 7) )
        goto LABEL_14;
      v15 = 312LL;
    }
    if ( (_OWORD *)((char *)a2 + v15) && v13 )
      RtlTimelineBitmapUpdateRange((__int64 *)((char *)a2 + v15), v12 - (v13 >> 12), v12);
LABEL_14:
    v10 += 8;
    --v11;
  }
  while ( v11 );
  v16 = a2 + 24;
  v17 = 5LL;
  v18 = (int *)(a2 + 17);
  while ( 2 )
  {
    v19 = 0;
    *(_QWORD *)v16 = *(_QWORD *)((char *)v16 + v7);
    v20 = *((_DWORD *)v16 + 1);
    if ( v20 < 0 )
    {
      v37 = v20 & 0x7FFFFFFF;
      *((_DWORD *)v16 + 1) = v37;
      v38 = *(_DWORD *)((char *)v16 + v7);
      if ( (unsigned int)v5 > v38 )
      {
        *(_DWORD *)v16 = v5;
        v19 = v5 - v38;
        if ( (_DWORD)v5 - v38 == -1 || ~v19 < v37 )
          v39 = -1;
        else
          v39 = v37 + v19;
        *((_DWORD *)v16 + 1) = v39 & 0x7FFFFFFF;
      }
    }
    if ( v16 == (_OWORD *)((char *)a2 + 392) )
    {
      v21 = 352LL;
      goto LABEL_22;
    }
    if ( v16 == a2 + 25 )
    {
      v21 = 360LL;
LABEL_22:
      if ( (_OWORD *)((char *)a2 + v21) && v19 )
        RtlTimelineBitmapUpdateRange((__int64 *)((char *)a2 + v21), v40 - (v19 >> 12), v40);
      goto LABEL_25;
    }
    if ( v16 == (_OWORD *)((char *)a2 + 408) )
    {
      v21 = 368LL;
      goto LABEL_22;
    }
LABEL_25:
    v16 = (_OWORD *)((char *)v16 + 8);
    if ( --v17 )
      continue;
    break;
  }
  *((_DWORD *)a2 + 32) = *(_DWORD *)(v41 + 128);
  *((_DWORD *)a2 + 33) = *(_DWORD *)(v41 + 132);
  *((_DWORD *)a2 + 34) = *(_DWORD *)(v41 + 136);
  *((_DWORD *)a2 + 106) = *(_DWORD *)(v41 + 424);
  *((_DWORD *)a2 + 107) = *(_DWORD *)(v41 + 428);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v23 = a1 + 214;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 214), 0LL);
  v24 = a1 + 145;
  *a2 = *(_OWORD *)v41;
  a2[1] = *(_OWORD *)(v41 + 16);
  a2[2] = *(_OWORD *)(v41 + 32);
  a2[3] = *(_OWORD *)(v41 + 48);
  a2[9] = *(_OWORD *)(v41 + 144);
  a2[10] = *(_OWORD *)(v41 + 160);
  a2[11] = *(_OWORD *)(v41 + 176);
  a2[12] = *(_OWORD *)(v41 + 192);
  a2[13] = *(_OWORD *)(v41 + 208);
  a2[14] = *(_OWORD *)(v41 + 224);
  a2[15] = *(_OWORD *)(v41 + 240);
  a2[16] = *(_OWORD *)(v41 + 256);
  v25 = (_QWORD *)*v24;
  if ( (_QWORD *)*v24 != v24 )
  {
    while ( 2 )
    {
      v26 = v25[34];
      v27 = *(_QWORD *)(v26 + 192);
      v28 = *v18;
      if ( (unsigned int)v27 > *v18 )
      {
        *v18 = v27;
        if ( (unsigned int)(v27 - v28) >= 0x20 )
          *((_DWORD *)a2 + 69) = 0;
        else
          *((_DWORD *)a2 + 69) <<= v27 - v28;
        v27 >>= 32;
LABEL_30:
        *((_DWORD *)a2 + 69) |= v27;
      }
      else
      {
        v29 = v28 - v27;
        if ( v29 < 0x20 )
        {
          LODWORD(v27) = HIDWORD(v27) << v29;
          goto LABEL_30;
        }
      }
      v30 = v26 - (_QWORD)a2;
      v31 = a2;
      v32 = 4LL;
      do
      {
        v33 = 2LL;
        do
        {
          *v31 += *(_QWORD *)((char *)v31 + v30);
          v31[18] += *(_QWORD *)((char *)v31 + v30 + 64);
          v31[26] += *(_QWORD *)((char *)v31 + v30 + 128);
          ++v31;
          --v33;
        }
        while ( v33 );
        --v32;
      }
      while ( v32 );
      v25 = (_QWORD *)*v25;
      if ( v25 == v24 )
        break;
      continue;
    }
  }
  if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v23);
  KeAbPostRelease((ULONG_PTR)v23);
  return (unsigned __int8)KeLeaveCriticalRegionThread((__int64)CurrentThread);
}

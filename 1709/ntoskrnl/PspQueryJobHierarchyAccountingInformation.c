/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x14050E678
 * Callers:
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 * Callees:
 *     PsAddProcessEnergyValues @ 0x140013280 (PsAddProcessEnergyValues.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1400D42E0 (KeQuerySchedulingGroupReadyTime.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x1405106D0 (PspLockRootJobShared.c)
 *     PspUnlockJobConditionally @ 0x140510B94 (PspUnlockJobConditionally.c)
 */

__int64 __fastcall PspQueryJobHierarchyAccountingInformation(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // ecx
  PVOID *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _OWORD *v12; // rax
  __int64 *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _QWORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23[82]; // [rsp+40h] [rbp-C0h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v23, 0, sizeof(v23));
  PspLockRootJobShared(Object, CurrentThread, v22);
  v5 = 0;
  v6 = (PVOID *)v22;
  while ( Object != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
      break;
    }
  }
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v23, 1);
  v7 = v23[12];
  *(_QWORD *)a2 = v23[12] + *((_QWORD *)Object + 20);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Object + 23) + v7;
  v8 = v23[11];
  *(_QWORD *)(a2 + 8) = v23[11] + *((_QWORD *)Object + 21);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)Object + 24) + v8;
  *(_DWORD *)(a2 + 32) = LODWORD(v23[27]) + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v23[16] + *((_QWORD *)Object + 61);
  *(_QWORD *)(a2 + 56) = v23[17] + *((_QWORD *)Object + 62);
  *(_QWORD *)(a2 + 64) = v23[18] + *((_QWORD *)Object + 63);
  *(_QWORD *)(a2 + 72) = v23[19] + *((_QWORD *)Object + 64);
  *(_QWORD *)(a2 + 80) = v23[20] + *((_QWORD *)Object + 65);
  *(_QWORD *)(a2 + 88) = v23[21] + *((_QWORD *)Object + 66);
  *(_QWORD *)(a2 + 96) = v23[22] + *((_QWORD *)Object + 67);
  *(_QWORD *)(a2 + 104) = v23[23] + *((_QWORD *)Object + 68);
  *(_QWORD *)(a2 + 112) = v23[24] + *((_QWORD *)Object + 69);
  *(_QWORD *)(a2 + 120) = v23[25] + *((_QWORD *)Object + 70);
  *(_QWORD *)(a2 + 128) = v23[26] + *((_QWORD *)Object + 71);
  *(_QWORD *)(a2 + 136) = v23[15] + *((_QWORD *)Object + 25);
  *(_QWORD *)(a2 + 144) = v23[14] + *((_QWORD *)Object + 22);
  *(_QWORD *)(a2 + 152) = v23[13] + *((_QWORD *)Object + 128);
  v9 = *((_QWORD *)Object + 126);
  if ( v9 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v9 + 128);
  v10 = *((_QWORD *)Object + 164);
  if ( v10 )
  {
    PsAddProcessEnergyValues(&v23[28], v10);
    v11 = 2LL;
    v12 = (_OWORD *)(a2 + 160);
    v13 = &v23[28];
    do
    {
      v14 = *((_OWORD *)v13 + 1);
      *v12 = *(_OWORD *)v13;
      v15 = *((_OWORD *)v13 + 2);
      v12[1] = v14;
      v16 = *((_OWORD *)v13 + 3);
      v12[2] = v15;
      v17 = *((_OWORD *)v13 + 4);
      v12[3] = v16;
      v18 = *((_OWORD *)v13 + 5);
      v12[4] = v17;
      v19 = *((_OWORD *)v13 + 6);
      v12[5] = v18;
      v20 = *((_OWORD *)v13 + 7);
      v13 += 16;
      v12[6] = v19;
      v12 += 8;
      *(v12 - 1) = v20;
      --v11;
    }
    while ( v11 );
    *v12 = *(_OWORD *)v13;
  }
  else
  {
    memset((void *)(a2 + 160), 0, 0x110uLL);
  }
  PspUnlockJobConditionally(Object, v22);
  return PspUnlockJob(v22[0], CurrentThread);
}

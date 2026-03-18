/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x1405361A8
 * Callers:
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsAddProcessEnergyValues @ 0x14008B430 (PsAddProcessEnergyValues.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1400BE1B4 (KeQuerySchedulingGroupReadyTime.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x140537444 (PspLockRootJobShared.c)
 *     PspUnlockJobConditionally @ 0x140537718 (PspUnlockJobConditionally.c)
 */

__int64 __fastcall PspQueryJobHierarchyAccountingInformation(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // ecx
  PVOID *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _OWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _QWORD v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24[82]; // [rsp+40h] [rbp-C0h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v24, 0, sizeof(v24));
  PspLockRootJobShared(Object, CurrentThread, v23);
  v5 = 0;
  v6 = (PVOID *)v23;
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
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v24, 1);
  v8 = v24[12];
  *(_QWORD *)a2 = v24[12] + *((_QWORD *)Object + 20);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Object + 23) + v8;
  v9 = v24[11];
  *(_QWORD *)(a2 + 8) = v24[11] + *((_QWORD *)Object + 21);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)Object + 24) + v9;
  *(_DWORD *)(a2 + 32) = LODWORD(v24[27]) + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v24[16] + *((_QWORD *)Object + 61);
  *(_QWORD *)(a2 + 56) = v24[17] + *((_QWORD *)Object + 62);
  *(_QWORD *)(a2 + 64) = v24[18] + *((_QWORD *)Object + 63);
  *(_QWORD *)(a2 + 72) = v24[19] + *((_QWORD *)Object + 64);
  *(_QWORD *)(a2 + 80) = v24[20] + *((_QWORD *)Object + 65);
  *(_QWORD *)(a2 + 88) = v24[21] + *((_QWORD *)Object + 66);
  *(_QWORD *)(a2 + 96) = v24[22] + *((_QWORD *)Object + 67);
  *(_QWORD *)(a2 + 104) = v24[23] + *((_QWORD *)Object + 68);
  *(_QWORD *)(a2 + 112) = v24[24] + *((_QWORD *)Object + 69);
  *(_QWORD *)(a2 + 120) = v24[25] + *((_QWORD *)Object + 70);
  *(_QWORD *)(a2 + 128) = v24[26] + *((_QWORD *)Object + 71);
  *(_QWORD *)(a2 + 136) = v24[15] + *((_QWORD *)Object + 25);
  *(_QWORD *)(a2 + 144) = v24[14] + *((_QWORD *)Object + 22);
  *(_QWORD *)(a2 + 152) = v24[13] + *((_QWORD *)Object + 128);
  v10 = *((_QWORD *)Object + 126);
  if ( v10 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v10 + 128, v7);
  v11 = *((_QWORD *)Object + 164);
  v12 = (_OWORD *)(a2 + 160);
  if ( v11 )
  {
    PsAddProcessEnergyValues(&v24[28], v11);
    v13 = 2LL;
    v14 = &v24[28];
    do
    {
      v15 = *((_OWORD *)v14 + 1);
      *v12 = *(_OWORD *)v14;
      v16 = *((_OWORD *)v14 + 2);
      v12[1] = v15;
      v17 = *((_OWORD *)v14 + 3);
      v12[2] = v16;
      v18 = *((_OWORD *)v14 + 4);
      v12[3] = v17;
      v19 = *((_OWORD *)v14 + 5);
      v12[4] = v18;
      v20 = *((_OWORD *)v14 + 6);
      v12[5] = v19;
      v21 = *((_OWORD *)v14 + 7);
      v14 += 16;
      v12[6] = v20;
      v12 += 8;
      *(v12 - 1) = v21;
      --v13;
    }
    while ( v13 );
    *v12 = *(_OWORD *)v14;
  }
  else
  {
    memset(v12, 0, 0x110uLL);
  }
  PspUnlockJobConditionally(Object, v23);
  return PspUnlockJob(v23[0], CurrentThread);
}

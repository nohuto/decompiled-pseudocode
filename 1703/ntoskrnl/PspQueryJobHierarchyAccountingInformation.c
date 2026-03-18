/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x140478450
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 * Callees:
 *     KeQuerySchedulingGroupReadyTime @ 0x14002A9C8 (KeQuerySchedulingGroupReadyTime.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsAddProcessEnergyValues @ 0x140238F6C (PsAddProcessEnergyValues.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x140479734 (PspLockRootJobShared.c)
 *     PspUnlockJobConditionally @ 0x140479E68 (PspUnlockJobConditionally.c)
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
  __int64 v12; // rdx
  _OWORD *v13; // rax
  __int64 *v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _QWORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23[72]; // [rsp+40h] [rbp-C0h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v23, 0, 0x238uLL);
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
    PsAddProcessEnergyValues((__int64)&v23[28], v10);
    v12 = 2LL;
    v13 = (_OWORD *)(a2 + 160);
    v14 = &v23[28];
    do
    {
      v15 = *((_OWORD *)v14 + 1);
      *v13 = *(_OWORD *)v14;
      v16 = *((_OWORD *)v14 + 2);
      v13[1] = v15;
      v17 = *((_OWORD *)v14 + 3);
      v13[2] = v16;
      v18 = *((_OWORD *)v14 + 4);
      v13[3] = v17;
      v19 = *((_OWORD *)v14 + 5);
      v13[4] = v18;
      v20 = *((_OWORD *)v14 + 6);
      v13[5] = v19;
      v21 = *((_OWORD *)v14 + 7);
      v14 += 16;
      v13[6] = v20;
      v13 += 8;
      *(v13 - 1) = v21;
      --v12;
    }
    while ( v12 );
    *v13 = *(_OWORD *)v14;
  }
  else
  {
    memset((void *)(a2 + 160), 0, 0x110uLL);
  }
  PspUnlockJobConditionally(Object, v22);
  return PspUnlockJob(v22[0], CurrentThread);
}

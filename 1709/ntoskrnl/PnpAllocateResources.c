/*
 * XREFs of PnpAllocateResources @ 0x140554F4C
 * Callers:
 *     PnpAssignResourcesToDevices @ 0x140554E34 (PnpAssignResourcesToDevices.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140557750 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpBuildCmResourceLists @ 0x14055A75C (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x14055B06C (PnpFindBestConfiguration.c)
 *     IopCommitConfiguration @ 0x14055B530 (IopCommitConfiguration.c)
 *     IopReleaseFilteredBootResources @ 0x14055ECB0 (IopReleaseFilteredBootResources.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14058F1E4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRebalance @ 0x1406D4C1C (PnpRebalance.c)
 */

__int64 __fastcall PnpAllocateResources(unsigned int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rbx
  int ResourceRequirementsForAssignTable; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r14d
  _DWORD *v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // esi
  int *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // r15d
  _DWORD *v22; // r14
  __int64 v23; // rbp
  int BestConfiguration; // eax
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int128 v30; // xmm5
  unsigned int v31; // eax
  _DWORD *v32; // rcx
  _DWORD *i; // rbp
  _DWORD *v34; // rcx
  unsigned __int64 v35; // rax
  int v36; // eax
  _DWORD *v37; // rcx
  unsigned __int64 v38; // rax
  _BYTE v39[16]; // [rsp+30h] [rbp-38h] BYREF
  size_t NumOfElements; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  LODWORD(NumOfElements) = v4;
  v9 = (unsigned __int64)&a2[16 * v4];
  ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(a2, v9, &NumOfElements);
  if ( ResourceRequirementsForAssignTable < 0 )
    goto LABEL_6;
  v12 = 0LL;
  v13 = 3221226029LL;
  v14 = 1;
  if ( !IopBootConfigsReserved )
  {
    v15 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      while ( (int)v15[14] < 0 || *((_QWORD *)v15 + 3) )
      {
        v15 += 16;
        if ( (unsigned __int64)v15 >= v9 )
          goto LABEL_14;
      }
      v12 = 1LL;
    }
LABEL_14:
    if ( v15 != (_DWORD *)v9 && (unsigned __int64)a2 < v9 )
    {
      v34 = a2 + 2;
      v35 = ((unsigned __int64)((v4 << 6) - 1) >> 6) + 1;
      do
      {
        if ( (int)v34[12] < 0 || *((_QWORD *)v34 + 2) )
        {
          *v34 |= 0x20u;
          v34[12] = -1073741267;
        }
        v34 += 16;
        --v35;
      }
      while ( v35 );
    }
    if ( (_DWORD)v12 )
      goto LABEL_48;
  }
  v16 = a2;
  if ( (unsigned __int64)a2 < v9 )
  {
    while ( 1 )
    {
      v12 = *v16 ? *(_QWORD *)(*(_QWORD *)(*v16 + 312LL) + 40LL) : 0LL;
      if ( (*(_DWORD *)(v12 + 396) & 0x40) != 0 && v16[3] )
        break;
      v16 += 8;
      if ( (unsigned __int64)v16 >= v9 )
        goto LABEL_24;
    }
    v14 = 0;
  }
LABEL_24:
  if ( v16 == (_QWORD *)v9 || (unsigned __int64)a2 >= v9 )
  {
    v17 = NumOfElements;
  }
  else
  {
    v17 = NumOfElements;
    v18 = a2 + 2;
    do
    {
      v19 = *((_QWORD *)v18 - 1);
      if ( v19 )
        v12 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
      else
        v12 = 0LL;
      if ( (*(_DWORD *)(v12 + 396) & 0x40) == 0 || !*((_QWORD *)v18 + 2) )
      {
        v20 = *v18;
        if ( (*v18 & 0x20) == 0 )
        {
          v18[12] = -1073741267;
          *v18 = v20 | 0x20;
          --v17;
        }
      }
      v18 += 16;
    }
    while ( (unsigned __int64)(v18 - 2) < v9 );
  }
  if ( !v17 )
  {
    ResourceRequirementsForAssignTable = -1073741823;
    goto LABEL_48;
  }
  if ( v17 != (_DWORD)v4 )
  {
    v26 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      v12 = v9 - 64;
      do
      {
        if ( (v26[2] & 0x20) != 0 )
        {
          v9 -= 64LL;
          v27 = *(_OWORD *)v26;
          v28 = *((_OWORD *)v26 + 1);
          v29 = *((_OWORD *)v26 + 2);
          v30 = *((_OWORD *)v26 + 3);
          *(_OWORD *)v26 = *(_OWORD *)v12;
          *((_OWORD *)v26 + 1) = *(_OWORD *)(v12 + 16);
          *((_OWORD *)v26 + 2) = *(_OWORD *)(v12 + 32);
          *((_OWORD *)v26 + 3) = *(_OWORD *)(v12 + 48);
          *(_OWORD *)v12 = v27;
          *(_OWORD *)(v12 + 16) = v28;
          *(_OWORD *)(v12 + 32) = v29;
          *(_OWORD *)(v12 + 48) = v30;
          v12 -= 64LL;
        }
        else
        {
          v26 += 16;
        }
      }
      while ( (unsigned __int64)v26 < v9 );
    }
  }
  if ( v17 > 1 )
  {
    v31 = 0;
    v32 = a2 + 5;
    do
    {
      *v32 = v31++;
      v32 += 16;
    }
    while ( v31 < v17 );
    qsort(a2, v17, 0x40uLL, PnpCompareResourceRequestPriority);
  }
  if ( v14 )
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration(a2, v17, v39);
  else
    ResourceRequirementsForAssignTable = -1073741823;
  if ( ResourceRequirementsForAssignTable >= 0 )
  {
    ResourceRequirementsForAssignTable = IopCommitConfiguration(v39, v12, v13);
    for ( i = a2; (unsigned __int64)i < v9; i += 16 )
    {
      if ( ResourceRequirementsForAssignTable < 0 )
        i[14] = -1073741800;
      else
        PnpBuildCmResourceLists(i, i + 16, 0LL);
    }
    goto LABEL_47;
  }
  v21 = 0;
  v22 = a2;
  if ( (unsigned __int64)a2 >= v9 )
    goto LABEL_47;
  while ( 1 )
  {
    if ( *(_QWORD *)v22 )
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 312LL) + 40LL);
    else
      v23 = 0LL;
    BestConfiguration = PnpFindBestConfiguration(v22, 1LL, v39);
    ResourceRequirementsForAssignTable = BestConfiguration;
    if ( BestConfiguration >= 0 )
    {
      v21 = 1;
      ResourceRequirementsForAssignTable = IopCommitConfiguration(v39, v25, v13);
      if ( ResourceRequirementsForAssignTable < 0 )
        v22[14] = -1073741800;
      else
        PnpBuildCmResourceLists(v22, v22 + 16, 0LL);
      goto LABEL_45;
    }
    if ( BestConfiguration == -1073741670 )
      goto LABEL_46;
    if ( !v21 && (a2[2] & 0x80u) == 0 )
      break;
    v22[2] |= 0x20u;
    v22[14] = -1073741267;
LABEL_45:
    v22 += 16;
    if ( (unsigned __int64)v22 >= v9 )
      goto LABEL_46;
  }
  PipSetDevNodeFlags(v23, 0x40000);
  ResourceRequirementsForAssignTable = PnpRebalance(v23, v22, 1LL, 0LL);
  PipClearDevNodeFlags(v23, 0x40000);
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    v36 = -1073741800;
    if ( ResourceRequirementsForAssignTable == -1073739512 )
      v36 = -1073739512;
    v22[14] = v36;
    goto LABEL_45;
  }
  if ( a4 )
    *a4 = 1;
  v22 += 16;
LABEL_46:
  if ( (unsigned __int64)v22 < v9 )
  {
    v37 = v22 + 2;
    v38 = ((v9 - (unsigned __int64)v22 - 1) >> 6) + 1;
    do
    {
      if ( ResourceRequirementsForAssignTable == -1073741670 )
      {
        v37[12] = -1073741670;
      }
      else
      {
        *v37 |= 0x20u;
        v37[12] = -1073741267;
      }
      v37 += 16;
      --v38;
    }
    while ( v38 );
  }
LABEL_47:
  IopReleaseFilteredBootResources(a2, v9, v13);
LABEL_48:
  PnpFreeResourceRequirementsForAssignTable(a2, v9, v13);
LABEL_6:
  if ( !a3 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ResourceRequirementsForAssignTable;
}

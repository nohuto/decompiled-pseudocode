/*
 * XREFs of IoFillTriageDumpBuffer @ 0x1401F5B40
 * Callers:
 *     IoWriteCrashDump @ 0x1401F6B7C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F8550 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x1406AEA00 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     IopIsAddressRangeValid @ 0x14015ADD0 (IopIsAddressRangeValid.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1401F6484 (IoGetLoadedDriverInfo.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401F756C (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1401F7A1C (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401F7B74 (IopGetMaxValidMemorySize.c)
 *     IopSizeTriageDumpDataBlocks @ 0x1401F811C (IopSizeTriageDumpDataBlocks.c)
 *     IopWriteDriverList @ 0x1401F8724 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x140201214 (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x14021B7B0 (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x14021B8C8 (MmWriteUnloadedDriverInformation.c)
 */

__int64 __fastcall IoFillTriageDumpBuffer(
        unsigned int a1,
        __int64 *a2,
        char a3,
        __int16 a4,
        int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13)
{
  int v13; // edi
  __int16 v14; // r12
  char v15; // r15
  __int64 result; // rax
  unsigned int v19; // eax
  int v20; // ecx
  char *v21; // r13
  unsigned int v22; // edi
  unsigned __int64 v23; // rdx
  int v24; // esi
  _OWORD *v25; // r14
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r15
  char *DpcStack; // rax
  unsigned __int64 v30; // rax
  unsigned int v31; // r15d
  int MaxValidMemorySize; // eax
  __int64 *v33; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v35; // rcx
  unsigned int v36; // eax
  char *v37; // rcx
  int v38; // edx
  unsigned int v39; // ecx
  __int64 v40; // rdx
  unsigned int v41; // r15d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r9
  _OWORD *v45; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v47; // xmm1
  __int64 v48; // rax
  size_t v49; // r8
  __int64 v50; // rcx
  _OWORD *v51; // rax
  _OWORD *v52; // rcx
  __int128 v53; // xmm1
  __int64 v54; // rax
  _OWORD *v55; // rcx
  __int128 v56; // xmm1
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // edi
  __int64 v60; // rax
  int LoadedDriverInfo; // [rsp+30h] [rbp-48h]
  int v62[17]; // [rsp+34h] [rbp-44h] BYREF
  int v63; // [rsp+80h] [rbp+8h]

  v13 = CmNtCSDVersion;
  a8 = 0;
  v14 = a4;
  v15 = a3;
  LoadedDriverInfo = 0;
  if ( a13 )
    *a13 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a1 < 0x84 )
    return 3221225495LL;
  memset(a2, 0, 0x80uLL);
  v19 = a1 + 0x2000;
  v20 = a9;
  v21 = (char *)(a1 - 4);
  *((_DWORD *)a2 + 1) = v19;
  v63 = (int)v21;
  *((_DWORD *)a2 + 2) = v19 - 4;
  *(_DWORD *)((char *)a2 + (_QWORD)v21) = 0;
  *((_DWORD *)a2 + 16) = 0;
  *(_DWORD *)a2 = v13;
  v22 = 8320;
  v23 = (unsigned int)v21;
  *((_DWORD *)a2 + 3) = 840;
  v24 = (a6 != 0) + 130;
  *((_DWORD *)a2 + 4) = 3840;
  *((_DWORD *)a2 + 17) = v20;
  if ( (v14 & 0x100) != 0 )
  {
    if ( (unsigned int)v21 <= 0x20D0 )
    {
      *((_DWORD *)a2 + 17) = v20 | 0x100;
    }
    else
    {
      *((_DWORD *)a2 + 5) = 8320;
      v24 |= 0x100u;
      v22 = 8400;
    }
  }
  if ( (v14 & 4) != 0 )
  {
    if ( v22 + 32448 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 7) = v22;
      v24 |= 4u;
      v22 += 32448;
    }
  }
  if ( (v14 & 8) != 0 )
  {
    if ( v22 + 2112 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v22;
      v24 |= 8u;
      v22 += 2112;
    }
  }
  if ( (v14 & 0x10) != 0 )
  {
    if ( v22 + 2072 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v22;
      v24 |= 0x10u;
      v22 += 2072;
    }
  }
  v25 = (_OWORD *)a7;
  if ( (v14 & 0x20) != 0 && (*(_DWORD *)(a7 + 120) & 0x20000) != 0 )
  {
    v26 = *(_QWORD *)(a6 + 152);
    v27 = *(_QWORD *)(a7 + 48);
    v28 = *(_QWORD *)(a7 + 56);
    if ( v27 > v26 || v26 >= v28 )
    {
      v26 = *(_QWORD *)(a7 + 48);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && (_KTHREAD *)a7 != KeGetCurrentPrcb()->IdleThread )
      {
        DpcStack = (char *)KeGetPcr()->Prcb.DpcStack;
        v21 = DpcStack + 80;
        if ( IopIsAddressRangeValid((__int64)DpcStack, 80LL) )
        {
          v30 = *((_QWORD *)v21 - 2);
          LODWORD(v21) = v63;
          if ( v27 <= v30 && v30 < v28 )
            v26 = v30;
        }
        else
        {
          LODWORD(v21) = v63;
        }
      }
    }
    if ( v28 - v26 >= 0x7FFF )
      v31 = 0x7FFF;
    else
      v31 = v28 - v26;
    MaxValidMemorySize = IopGetMaxValidMemorySize(v26, v31);
    v14 = a4;
    v15 = a3;
    v23 = (unsigned int)v21;
    if ( MaxValidMemorySize )
    {
      if ( MaxValidMemorySize + v22 >= (unsigned int)v21 )
      {
        *((_DWORD *)a2 + 17) |= 0x100u;
      }
      else
      {
        *((_DWORD *)a2 + 10) = v22;
        v22 = (MaxValidMemorySize + v22 + 7) & 0xFFFFFFF8;
        *((_DWORD *)a2 + 11) = MaxValidMemorySize;
        v24 |= 0x20u;
        a2[9] = v26;
      }
    }
  }
  if ( (v14 & 0x400) != 0 )
  {
    if ( (unsigned __int64)v22 + 872 >= v23 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v22;
      v22 = (v22 + 879) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 872;
      v24 |= 0x400u;
    }
  }
  v33 = a2 - 1024;
  if ( !v15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v35 = MmUnloadedDrivers != 0LL ? 0xAF0 : 0;
  v36 = v22 + v35 + 8;
  if ( v36 >= (unsigned int)v21 )
  {
    *((_DWORD *)a2 + 17) |= 0x100u;
  }
  else
  {
    v24 |= 0x40u;
    *((_DWORD *)a2 + 6) = v22;
    v37 = (char *)v33 + v22;
    v22 = v36;
    MmWriteUnloadedDriverInformation(v37, v23);
  }
  if ( (v14 & 0x40) != 0 )
  {
    LOBYTE(v35) = v15;
    LoadedDriverInfo = IoGetLoadedDriverInfo(v35, &a8, v62);
    if ( LoadedDriverInfo >= 0 )
    {
      v38 = a8;
      v39 = (144 * a8 + 7) & 0xFFFFFFF8;
      if ( v39 )
      {
        if ( v39 + v22 >= (unsigned int)v21 )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 12) = v22;
          v24 |= 0x40u;
          v22 += v39;
          *((_DWORD *)a2 + 13) = v38;
        }
      }
    }
  }
  else
  {
    v62[0] = 0;
  }
  v40 = (v62[0] + 7 + 6 * a8) & 0xFFFFFFF8;
  if ( ((v62[0] + 7 + 6 * a8) & 0xFFFFFFF8) != 0 )
  {
    if ( (unsigned int)v40 + v22 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 14) = v22;
      v22 += v40;
      *((_DWORD *)a2 + 15) = v40;
    }
  }
  if ( *((_DWORD *)a2 + 12) )
  {
    if ( *((_DWORD *)a2 + 14) )
    {
      LOBYTE(v40) = v15;
      LoadedDriverInfo = IopWriteDriverList(a2 - 1024, v40);
      if ( LoadedDriverInfo < 0 )
        *((_DWORD *)a2 + 12) = 0;
    }
  }
  if ( !v15 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v41 = a10;
  if ( (v14 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v22 = (IopSizeTriageDumpDataBlocks((_DWORD)a2, v41, a11, v22, (_DWORD)v21) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v24 |= 0x800u;
  }
  v42 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v42 )
    MmWriteTriageInformation((char *)v33 + v42);
  v43 = *((unsigned int *)a2 + 7);
  v44 = 128LL;
  if ( (_DWORD)v43 && v43 + 32448 <= (unsigned __int64)(unsigned int)v21 )
  {
    v45 = (_OWORD *)((char *)v33 + (unsigned int)v43);
    CurrentPrcb = KeGetCurrentPrcb();
    v40 = 253LL;
    do
    {
      *v45 = *(_OWORD *)&CurrentPrcb->MxCsr;
      v45[1] = *(_OWORD *)&CurrentPrcb->NextThread;
      v45[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
      v45[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
      v45[4] = *(_OWORD *)&CurrentPrcb->CpuType;
      v45[5] = *(_OWORD *)&CurrentPrcb->HalReserved[1];
      v45[6] = *(_OWORD *)&CurrentPrcb->HalReserved[3];
      v45 += 8;
      v47 = *(_OWORD *)&CurrentPrcb->HalReserved[5];
      CurrentPrcb = (struct _KPRCB *)((char *)CurrentPrcb + 128);
      *(v45 - 1) = v47;
      --v40;
    }
    while ( v40 );
    *v45 = *(_OWORD *)&CurrentPrcb->MxCsr;
    v45[1] = *(_OWORD *)&CurrentPrcb->NextThread;
    v45[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
    v45[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
  }
  v48 = *((unsigned int *)a2 + 8);
  v49 = 16LL;
  if ( (_DWORD)v48 )
  {
    v50 = (unsigned int)v48;
    if ( v48 + 2112 <= (unsigned __int64)(unsigned int)v21 )
    {
      v51 = *(_OWORD **)(a7 + 184);
      v52 = (_OWORD *)((char *)v33 + v50);
      v40 = 16LL;
      do
      {
        *v52 = *v51;
        v52[1] = v51[1];
        v52[2] = v51[2];
        v52[3] = v51[3];
        v52[4] = v51[4];
        v52[5] = v51[5];
        v52[6] = v51[6];
        v52 += 8;
        v53 = v51[7];
        v51 += 8;
        *(v52 - 1) = v53;
        --v40;
      }
      while ( v40 );
      *v52 = *v51;
      v52[1] = v51[1];
      v52[2] = v51[2];
      v52[3] = v51[3];
    }
  }
  v54 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v54 && v54 + 2072 <= (unsigned __int64)(unsigned int)v21 )
  {
    v55 = (_OWORD *)((char *)v33 + (unsigned int)v54);
    do
    {
      *v55 = *v25;
      v55[1] = v25[1];
      v55[2] = v25[2];
      v55[3] = v25[3];
      v55[4] = v25[4];
      v55[5] = v25[5];
      v55[6] = v25[6];
      v55 += 8;
      v56 = v25[7];
      v25 += 8;
      *(v55 - 1) = v56;
      --v49;
    }
    while ( v49 );
    *v55 = *v25;
    *((_QWORD *)v55 + 2) = *((_QWORD *)v25 + 2);
  }
  v57 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v57 )
  {
    v49 = *((unsigned int *)a2 + 11);
    v40 = a2[9];
    if ( (int)v57 + (int)v49 <= (unsigned int)v21 )
      memmove((char *)v33 + v57, (const void *)v40, v49);
  }
  v58 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v58 && v58 + 872 <= (unsigned __int64)(unsigned int)v21 )
    KdCopyDataBlock((char *)v33 + (unsigned int)v58, v40, v49, v44);
  if ( v41 )
    IopFillTriageDumpDataBlocks(a2, v41, a11, a2 - 1024);
  if ( (_DWORD)v21 != 253948 || a13 )
  {
    v59 = v22 + 4;
    if ( a13 )
      *a13 = v59 - 0x2000;
  }
  else
  {
    v59 = 0x40000;
  }
  if ( a5 )
    *a5 = v24;
  v60 = (unsigned int)(v59 - 4);
  *((_DWORD *)a2 + 1) = v59;
  *((_DWORD *)a2 + 2) = v60;
  if ( v60 - 0x2000 > (unsigned __int64)(unsigned int)v21 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v59 - 4) - 0x2000) = 1145524820;
  return result;
}

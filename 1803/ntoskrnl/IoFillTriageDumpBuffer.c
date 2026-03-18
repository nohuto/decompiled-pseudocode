/*
 * XREFs of IoFillTriageDumpBuffer @ 0x140233034
 * Callers:
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1402359C0 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x1407132B0 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KiIsAddressRangeValid @ 0x140185978 (KiIsAddressRangeValid.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x14023380C (IoGetLoadedDriverInfo.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x140234884 (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140234D54 (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x140234EB0 (IopGetMaxValidMemorySize.c)
 *     IopSizeTriageDumpDataBlocks @ 0x140235460 (IopSizeTriageDumpDataBlocks.c)
 *     IopWriteDriverList @ 0x140235B9C (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x14023E2EC (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x140257A18 (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x140257B30 (MmWriteUnloadedDriverInformation.c)
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
  char v14; // r15
  int v16; // edi
  int v18; // esi
  __int64 result; // rax
  unsigned int v20; // eax
  char *v21; // r13
  unsigned __int64 v22; // rdx
  unsigned int v23; // esi
  int v24; // ebp
  __int16 v25; // cx
  _OWORD *v26; // r14
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r15
  char *DpcStack; // rax
  unsigned __int64 v31; // rax
  unsigned int v32; // r15d
  int MaxValidMemorySize; // eax
  __int64 *v34; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  char *v38; // rcx
  int v39; // edx
  unsigned int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // r12
  unsigned int v43; // r15d
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r9
  _OWORD *v47; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v49; // xmm1
  __int64 v50; // rax
  size_t v51; // r8
  __int64 v52; // rcx
  _OWORD *v53; // rax
  _OWORD *v54; // rcx
  __int128 v55; // xmm1
  __int64 v56; // rax
  _OWORD *v57; // rcx
  __int128 v58; // xmm1
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // esi
  __int64 v62; // rax
  int LoadedDriverInfo; // [rsp+30h] [rbp-48h]
  int v64[17]; // [rsp+34h] [rbp-44h] BYREF
  int v65; // [rsp+80h] [rbp+8h]

  a8 = 0;
  v14 = a3;
  LoadedDriverInfo = 0;
  v16 = a9;
  v18 = CmNtCSDVersion;
  if ( a13 )
    *a13 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a1 < 0x84 )
    return 3221225495LL;
  memset(a2, 0, 0x80uLL);
  v20 = a1 + 0x2000;
  *((_DWORD *)a2 + 1) = a1 + 0x2000;
  v21 = (char *)(a1 - 4);
  v65 = (int)v21;
  *((_DWORD *)a2 + 2) = v20 - 4;
  v22 = (unsigned int)v21;
  *(_DWORD *)((char *)a2 + (_QWORD)v21) = 0;
  *((_DWORD *)a2 + 16) = 0;
  *(_DWORD *)a2 = v18;
  *((_DWORD *)a2 + 3) = 840;
  v23 = 8320;
  *((_DWORD *)a2 + 4) = 3840;
  *((_DWORD *)a2 + 17) = v16;
  v24 = (a6 != 0) + 130;
  if ( (a4 & 0x100) != 0 )
  {
    if ( (unsigned int)v21 <= 0x20D0 )
    {
      v16 |= 0x100u;
      *((_DWORD *)a2 + 17) = v16;
    }
    else
    {
      *((_DWORD *)a2 + 5) = 8320;
      v24 |= 0x100u;
      v23 = 8400;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    if ( v23 + 32448 >= (unsigned int)v21 )
    {
      v16 |= 0x100u;
      *((_DWORD *)a2 + 17) = v16;
    }
    else
    {
      *((_DWORD *)a2 + 7) = v23;
      v24 |= 4u;
      v23 += 32448;
    }
  }
  if ( (a4 & 8) != 0 )
  {
    if ( v23 + 2120 >= (unsigned int)v21 )
    {
      v16 |= 0x100u;
      *((_DWORD *)a2 + 17) = v16;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v23;
      v24 |= 8u;
      v23 += 2120;
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    if ( v23 + 2072 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) = v16 | 0x100;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v23;
      v24 |= 0x10u;
      v23 += 2072;
    }
  }
  v25 = a4;
  v26 = (_OWORD *)a7;
  if ( (a4 & 0x20) != 0 && (*(_DWORD *)(a7 + 120) & 0x20000) != 0 )
  {
    v27 = *(_QWORD *)(a6 + 152);
    v28 = *(_QWORD *)(a7 + 48);
    v29 = *(_QWORD *)(a7 + 56);
    if ( v28 > v27 || v27 >= v29 )
    {
      v27 = *(_QWORD *)(a7 + 48);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && (_KTHREAD *)a7 != KeGetCurrentPrcb()->IdleThread )
      {
        DpcStack = (char *)KeGetPcr()->Prcb.DpcStack;
        v21 = DpcStack + 80;
        if ( KiIsAddressRangeValid((__int64)DpcStack, 80LL) )
        {
          v31 = *((_QWORD *)v21 - 2);
          LODWORD(v21) = v65;
          if ( v28 <= v31 && v31 < v29 )
            v27 = v31;
        }
        else
        {
          LODWORD(v21) = v65;
        }
      }
    }
    if ( v29 - v27 >= 0x7FFF )
      v32 = 0x7FFF;
    else
      v32 = v29 - v27;
    MaxValidMemorySize = IopGetMaxValidMemorySize(v27, v32);
    v14 = a3;
    v22 = (unsigned int)v21;
    if ( MaxValidMemorySize )
    {
      if ( MaxValidMemorySize + v23 >= (unsigned int)v21 )
      {
        *((_DWORD *)a2 + 17) |= 0x100u;
      }
      else
      {
        *((_DWORD *)a2 + 10) = v23;
        v23 = (MaxValidMemorySize + v23 + 7) & 0xFFFFFFF8;
        *((_DWORD *)a2 + 11) = MaxValidMemorySize;
        v24 |= 0x20u;
        a2[9] = v27;
      }
    }
    v25 = a4;
  }
  if ( (v25 & 0x400) != 0 )
  {
    if ( (unsigned __int64)v23 + 872 >= v22 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v23;
      v23 = (v23 + 879) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 872;
      v24 |= 0x400u;
    }
  }
  v34 = a2 - 1024;
  if ( !v14 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v36 = MmUnloadedDrivers != 0LL ? 0xAF0 : 0;
  v37 = v23 + v36 + 8;
  if ( v37 >= (unsigned int)v21 )
  {
    *((_DWORD *)a2 + 17) |= 0x100u;
  }
  else
  {
    v24 |= 0x40u;
    *((_DWORD *)a2 + 6) = v23;
    v38 = (char *)v34 + v23;
    v23 = v37;
    MmWriteUnloadedDriverInformation(v38, v22);
  }
  if ( (a4 & 0x40) != 0 )
  {
    LOBYTE(v36) = v14;
    LoadedDriverInfo = IoGetLoadedDriverInfo(v36, &a8, v64);
    if ( LoadedDriverInfo >= 0 )
    {
      v39 = a8;
      v40 = (144 * a8 + 7) & 0xFFFFFFF8;
      if ( v40 )
      {
        if ( v40 + v23 >= (unsigned int)v21 )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 12) = v23;
          v24 |= 0x40u;
          v23 += v40;
          *((_DWORD *)a2 + 13) = v39;
        }
      }
    }
  }
  else
  {
    v64[0] = 0;
  }
  v41 = (v64[0] + 7 + 6 * a8) & 0xFFFFFFF8;
  if ( ((v64[0] + 7 + 6 * a8) & 0xFFFFFFF8) != 0 )
  {
    if ( (unsigned int)v41 + v23 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 14) = v23;
      v23 += v41;
      *((_DWORD *)a2 + 15) = v41;
    }
  }
  if ( *((_DWORD *)a2 + 12) )
  {
    if ( *((_DWORD *)a2 + 14) )
    {
      LOBYTE(v41) = v14;
      LoadedDriverInfo = IopWriteDriverList(a2 - 1024, v41);
      if ( LoadedDriverInfo < 0 )
        *((_DWORD *)a2 + 12) = 0;
    }
  }
  if ( !v14 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v42 = a11;
  v43 = a10;
  if ( (a4 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v23 = (IopSizeTriageDumpDataBlocks((_DWORD)a2, v43, v42, v23, (_DWORD)v21) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v24 |= 0x800u;
  }
  v44 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v44 )
    MmWriteTriageInformation((char *)v34 + v44);
  v45 = *((unsigned int *)a2 + 7);
  v46 = (unsigned int)v21;
  if ( (_DWORD)v45 && v45 + 32448 <= (unsigned __int64)(unsigned int)v21 )
  {
    v47 = (_OWORD *)((char *)v34 + (unsigned int)v45);
    CurrentPrcb = KeGetCurrentPrcb();
    v41 = 253LL;
    do
    {
      *v47 = *(_OWORD *)&CurrentPrcb->MxCsr;
      v47[1] = *(_OWORD *)&CurrentPrcb->NextThread;
      v47[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
      v47[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
      v47[4] = *(_OWORD *)&CurrentPrcb->CpuType;
      v47[5] = *(_OWORD *)&CurrentPrcb->HalReserved[1];
      v47[6] = *(_OWORD *)&CurrentPrcb->HalReserved[3];
      v47 += 8;
      v49 = *(_OWORD *)&CurrentPrcb->HalReserved[5];
      CurrentPrcb = (struct _KPRCB *)((char *)CurrentPrcb + 128);
      *(v47 - 1) = v49;
      --v41;
    }
    while ( v41 );
    *v47 = *(_OWORD *)&CurrentPrcb->MxCsr;
    v47[1] = *(_OWORD *)&CurrentPrcb->NextThread;
    v47[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
    v47[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
  }
  v50 = *((unsigned int *)a2 + 8);
  v51 = 16LL;
  if ( (_DWORD)v50 )
  {
    v52 = (unsigned int)v50;
    if ( v50 + 2120 <= (unsigned __int64)(unsigned int)v21 )
    {
      v53 = *(_OWORD **)(a7 + 184);
      v54 = (_OWORD *)((char *)v34 + v52);
      v41 = 16LL;
      do
      {
        *v54 = *v53;
        v54[1] = v53[1];
        v54[2] = v53[2];
        v54[3] = v53[3];
        v54[4] = v53[4];
        v54[5] = v53[5];
        v54[6] = v53[6];
        v54 += 8;
        v55 = v53[7];
        v53 += 8;
        *(v54 - 1) = v55;
        --v41;
      }
      while ( v41 );
      *v54 = *v53;
      v54[1] = v53[1];
      v54[2] = v53[2];
      v54[3] = v53[3];
      *((_QWORD *)v54 + 8) = *((_QWORD *)v53 + 8);
    }
  }
  v56 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v56 && v56 + 2072 <= (unsigned __int64)(unsigned int)v21 )
  {
    v57 = (_OWORD *)((char *)v34 + (unsigned int)v56);
    do
    {
      *v57 = *v26;
      v57[1] = v26[1];
      v57[2] = v26[2];
      v57[3] = v26[3];
      v57[4] = v26[4];
      v57[5] = v26[5];
      v57[6] = v26[6];
      v57 += 8;
      v58 = v26[7];
      v26 += 8;
      *(v57 - 1) = v58;
      --v51;
    }
    while ( v51 );
    *v57 = *v26;
    *((_QWORD *)v57 + 2) = *((_QWORD *)v26 + 2);
  }
  v59 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v59 )
  {
    v51 = *((unsigned int *)a2 + 11);
    v41 = a2[9];
    if ( (int)v59 + (int)v51 <= (unsigned int)v21 )
      memmove((char *)v34 + v59, (const void *)v41, v51);
  }
  v60 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v60 && v60 + 872 <= (unsigned __int64)(unsigned int)v21 )
    KdCopyDataBlock((char *)v34 + (unsigned int)v60, v41, v51, v46);
  if ( v43 )
    IopFillTriageDumpDataBlocks(a2, v43, v42, a2 - 1024);
  if ( (_DWORD)v21 != 253948 || a13 )
  {
    v61 = v23 + 4;
    if ( a13 )
      *a13 = v61 - 0x2000;
  }
  else
  {
    v61 = 0x40000;
  }
  if ( a5 )
    *a5 = v24;
  v62 = (unsigned int)(v61 - 4);
  *((_DWORD *)a2 + 1) = v61;
  *((_DWORD *)a2 + 2) = v62;
  if ( v62 - 0x2000 > (unsigned __int64)(unsigned int)v21 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v61 - 4) - 0x2000) = 1145524820;
  return result;
}

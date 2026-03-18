/*
 * XREFs of IoFillTriageDumpBuffer @ 0x1401F0410
 * Callers:
 *     IoWriteCrashDump @ 0x1401F1224 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F2BDC (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x140683710 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     IopIsAddressRangeValid @ 0x140167028 (IopIsAddressRangeValid.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1401F0BC0 (IoGetLoadedDriverInfo.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401F1C10 (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1401F20BC (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401F221C (IopGetMaxValidMemorySize.c)
 *     IopSizeTriageDumpDataBlocks @ 0x1401F27B4 (IopSizeTriageDumpDataBlocks.c)
 *     IopWriteDriverList @ 0x1401F2DB0 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x1401FB50C (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x1402137CC (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x1402138E4 (MmWriteUnloadedDriverInformation.c)
 */

__int64 __fastcall IoFillTriageDumpBuffer(
        unsigned int a1,
        __int64 *a2,
        char a3,
        int a4,
        int *a5,
        __int64 a6,
        __int64 a7,
        int LoadedDriverInfo,
        int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13)
{
  int v13; // edi
  __int16 v14; // r12
  char v15; // r14
  __int64 result; // rax
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // r13
  unsigned __int64 v22; // rdx
  int v23; // ebp
  int v24; // eax
  __int64 v25; // r9
  unsigned int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r15
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r14
  char *DpcStack; // rax
  char *v32; // r12
  unsigned __int64 v33; // rax
  unsigned int v34; // r14d
  int MaxValidMemorySize; // eax
  __int64 v36; // r8
  __int64 *v37; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v39; // rdx
  char *v40; // rcx
  int v41; // edx
  unsigned int v42; // ecx
  __int64 v43; // rdx
  unsigned int v44; // r14d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  _OWORD *v48; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v50; // xmm1
  __int64 v51; // rax
  size_t v52; // r8
  __int64 v53; // rcx
  _OWORD *v54; // rax
  _OWORD *v55; // rcx
  __int128 v56; // xmm1
  __int64 v57; // rax
  _OWORD *v58; // rax
  __int128 v59; // xmm1
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // edi
  __int64 v63; // rax
  int v64; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v65; // [rsp+38h] [rbp-40h]
  int v66; // [rsp+80h] [rbp+8h] BYREF
  char v67; // [rsp+90h] [rbp+18h]
  int v68; // [rsp+98h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v13 = CmNtCSDVersion;
  v66 = 0;
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
  v19 = a6;
  v20 = a1 + 0x2000;
  *((_DWORD *)a2 + 1) = a1 + 0x2000;
  v21 = a1 - 4;
  v22 = (unsigned int)v21;
  *((_DWORD *)a2 + 2) = v20 - 4;
  v23 = 130;
  *(_DWORD *)((char *)a2 + v21) = 0;
  v24 = a9;
  *(_DWORD *)a2 = v13;
  v25 = 256LL;
  *((_DWORD *)a2 + 3) = 840;
  if ( v19 )
    v23 = 131;
  *((_DWORD *)a2 + 4) = 3840;
  *((_DWORD *)a2 + 16) = 0;
  v26 = 8320;
  *((_DWORD *)a2 + 17) = v24;
  if ( (v14 & 0x100) != 0 )
  {
    if ( (unsigned int)v21 <= 0x20D0 )
    {
      *((_DWORD *)a2 + 17) = v24 | 0x100;
    }
    else
    {
      *((_DWORD *)a2 + 5) = 8320;
      v23 |= 0x100u;
      v26 = 8400;
    }
  }
  if ( (v14 & 4) != 0 )
  {
    if ( v26 + 32448 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 7) = v26;
      v23 |= 4u;
      v26 += 32448;
    }
  }
  if ( (v14 & 8) != 0 )
  {
    if ( v26 + 2080 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v26;
      v23 |= 8u;
      v26 += 2080;
    }
  }
  v27 = 16LL;
  if ( (v14 & 0x10) != 0 )
  {
    if ( v26 + 2064 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v26;
      v23 |= 0x10u;
      v26 += 2064;
    }
  }
  v28 = a7;
  if ( (v14 & 0x20) != 0 && (*(_BYTE *)(a7 + 122) & 1) != 0 )
  {
    v29 = *(_QWORD *)(v19 + 152);
    v30 = *(_QWORD *)(a7 + 56);
    v65 = *(_QWORD *)(a7 + 48);
    if ( v65 > v29 || v29 >= v30 )
    {
      v29 = *(_QWORD *)(a7 + 48);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && (_KTHREAD *)a7 != KeGetCurrentPrcb()->IdleThread )
      {
        DpcStack = (char *)KeGetPcr()->Prcb.DpcStack;
        v32 = DpcStack + 80;
        if ( IopIsAddressRangeValid((__int64)DpcStack, 80LL) )
        {
          v33 = *((_QWORD *)v32 - 2);
          v14 = v68;
          if ( v65 <= v33 && v33 < v30 )
            v29 = v33;
        }
        else
        {
          v14 = v68;
        }
      }
    }
    if ( v30 - v29 >= 0x7FFF )
      v34 = 0x7FFF;
    else
      v34 = v30 - v29;
    MaxValidMemorySize = IopGetMaxValidMemorySize(v29, v34, v19, v25);
    v15 = v67;
    v25 = 256LL;
    v22 = (unsigned int)v21;
    if ( MaxValidMemorySize )
    {
      v27 = MaxValidMemorySize + v26;
      if ( (unsigned int)v27 >= (unsigned int)v21 )
      {
        *((_DWORD *)a2 + 17) |= 0x100u;
      }
      else
      {
        *((_DWORD *)a2 + 10) = v26;
        v26 = (v27 + 7) & 0xFFFFFFF8;
        *((_DWORD *)a2 + 11) = MaxValidMemorySize;
        v23 |= 0x20u;
        a2[9] = v29;
      }
    }
  }
  v36 = 1024LL;
  if ( (v14 & 0x400) != 0 )
  {
    v27 = 872LL;
    if ( (unsigned __int64)v26 + 872 >= v22 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v26;
      v26 = (v26 + 879) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 872;
      v23 |= 0x400u;
    }
  }
  v37 = a2 - 1024;
  if ( !v15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  }
  v39 = v26 + ((MmUnloadedDrivers != 0LL ? 2815 : 15) & 0xFFFFFFF8);
  if ( (unsigned int)v39 >= (unsigned int)v21 )
  {
    *((_DWORD *)a2 + 17) |= 0x100u;
  }
  else
  {
    v23 |= 0x40u;
    *((_DWORD *)a2 + 6) = v26;
    v40 = (char *)v37 + v26;
    v26 = v39;
    MmWriteUnloadedDriverInformation(v40, v39, v36, v25);
  }
  if ( (v14 & 0x40) != 0 )
  {
    LOBYTE(v27) = v15;
    LoadedDriverInfo = IoGetLoadedDriverInfo(v27, &v66, &v64);
    if ( LoadedDriverInfo >= 0 )
    {
      v41 = v66;
      v42 = (144 * v66 + 7) & 0xFFFFFFF8;
      if ( v42 )
      {
        if ( v42 + v26 >= (unsigned int)v21 )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 12) = v26;
          v23 |= 0x40u;
          v26 += v42;
          *((_DWORD *)a2 + 13) = v41;
        }
      }
    }
  }
  else
  {
    v64 = 0;
  }
  v43 = (v64 + 6 * v66 + 7) & 0xFFFFFFF8;
  if ( ((v64 + 6 * v66 + 7) & 0xFFFFFFF8) != 0 )
  {
    if ( (unsigned int)v43 + v26 >= (unsigned int)v21 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 14) = v26;
      v26 = (v43 + v26 + 7) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 15) = v43;
    }
  }
  if ( *((_DWORD *)a2 + 12) )
  {
    if ( *((_DWORD *)a2 + 14) )
    {
      LOBYTE(v43) = v15;
      LoadedDriverInfo = IopWriteDriverList(a2 - 1024, v43);
      if ( LoadedDriverInfo < 0 )
        *((_DWORD *)a2 + 12) = 0;
    }
  }
  if ( !v15 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v44 = a10;
  if ( (v14 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v26 = (IopSizeTriageDumpDataBlocks((_DWORD)a2, v44, a11, v26, v21) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v23 |= 0x800u;
  }
  v45 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v45 )
    MmWriteTriageInformation((char *)v37 + v45);
  v46 = *((unsigned int *)a2 + 7);
  v47 = 128LL;
  if ( (_DWORD)v46 && v46 + 32448 <= (unsigned __int64)(unsigned int)v21 )
  {
    v48 = (_OWORD *)((char *)v37 + (unsigned int)v46);
    CurrentPrcb = KeGetCurrentPrcb();
    v43 = 253LL;
    do
    {
      *v48 = *(_OWORD *)&CurrentPrcb->MxCsr;
      v48[1] = *(_OWORD *)&CurrentPrcb->NextThread;
      v48[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
      v48[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
      v48[4] = *(_OWORD *)&CurrentPrcb->CpuType;
      v48[5] = *(_OWORD *)&CurrentPrcb->HalReserved[1];
      v48[6] = *(_OWORD *)&CurrentPrcb->HalReserved[3];
      v48 += 8;
      v50 = *(_OWORD *)&CurrentPrcb->HalReserved[5];
      CurrentPrcb = (struct _KPRCB *)((char *)CurrentPrcb + 128);
      *(v48 - 1) = v50;
      --v43;
    }
    while ( v43 );
    *v48 = *(_OWORD *)&CurrentPrcb->MxCsr;
    v48[1] = *(_OWORD *)&CurrentPrcb->NextThread;
    v48[2] = *(_OWORD *)&CurrentPrcb->NestingLevel;
    v48[3] = *(_OWORD *)&CurrentPrcb->PrcbLock;
  }
  v51 = *((unsigned int *)a2 + 8);
  v52 = 16LL;
  if ( (_DWORD)v51 )
  {
    v53 = (unsigned int)v51;
    if ( v51 + 2080 <= (unsigned __int64)(unsigned int)v21 )
    {
      v54 = *(_OWORD **)(v28 + 184);
      v55 = (_OWORD *)((char *)v37 + v53);
      v43 = 16LL;
      do
      {
        *v55 = *v54;
        v55[1] = v54[1];
        v55[2] = v54[2];
        v55[3] = v54[3];
        v55[4] = v54[4];
        v55[5] = v54[5];
        v55[6] = v54[6];
        v55 += 8;
        v56 = v54[7];
        v54 += 8;
        *(v55 - 1) = v56;
        --v43;
      }
      while ( v43 );
      *v55 = *v54;
      v55[1] = v54[1];
    }
  }
  v57 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v57 && v57 + 2064 <= (unsigned __int64)(unsigned int)v21 )
  {
    v58 = (_OWORD *)((char *)v37 + (unsigned int)v57);
    do
    {
      *v58 = *(_OWORD *)v28;
      v58[1] = *(_OWORD *)(v28 + 16);
      v58[2] = *(_OWORD *)(v28 + 32);
      v58[3] = *(_OWORD *)(v28 + 48);
      v58[4] = *(_OWORD *)(v28 + 64);
      v58[5] = *(_OWORD *)(v28 + 80);
      v58[6] = *(_OWORD *)(v28 + 96);
      v58 += 8;
      v59 = *(_OWORD *)(v28 + 112);
      v28 += 128LL;
      *(v58 - 1) = v59;
      --v52;
    }
    while ( v52 );
    *v58 = *(_OWORD *)v28;
  }
  v60 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v60 )
  {
    v52 = *((unsigned int *)a2 + 11);
    v43 = a2[9];
    if ( (int)v60 + (int)v52 <= (unsigned int)v21 )
      memmove((char *)v37 + v60, (const void *)v43, v52);
  }
  v61 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v61 && v61 + 872 <= (unsigned __int64)(unsigned int)v21 )
    KdCopyDataBlock((char *)v37 + (unsigned int)v61, v43, v52, v47);
  if ( v44 )
    IopFillTriageDumpDataBlocks(a2, v44, a11, a2 - 1024);
  if ( (_DWORD)v21 != 253948 || a13 )
  {
    v62 = v26 + 4;
    if ( a13 )
      *a13 = v62 - 0x2000;
  }
  else
  {
    v62 = 0x40000;
  }
  if ( a5 )
    *a5 = v23;
  v63 = (unsigned int)(v62 - 4);
  *((_DWORD *)a2 + 1) = v62;
  *((_DWORD *)a2 + 2) = v63;
  if ( v63 - 0x2000 > (unsigned __int64)(unsigned int)v21 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v62 - 4) - 0x2000) = 1145524820;
  return result;
}

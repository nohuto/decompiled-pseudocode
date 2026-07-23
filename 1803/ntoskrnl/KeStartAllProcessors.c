/*
 * XREFs of KeStartAllProcessors @ 0x1408AB748
 * Callers:
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140130270 (MmDeleteKernelStack.c)
 *     KiQueryProcessorNode @ 0x140176410 (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x14017692C (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x140241E7C (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x14025258C (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x1402B8AEC (ExDeletePoolTagTable.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KiConfigureSchedulingInformation @ 0x14047B818 (KiConfigureSchedulingInformation.c)
 *     KiInitializePrcbContext @ 0x14047BAF8 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x14047BC08 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x14047BCA4 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x14047BD90 (MmInitializeProcessor.c)
 *     KiComputeProcessorDataSize @ 0x14047C340 (KiComputeProcessorDataSize.c)
 *     KiUnshadowProcessorAllocation @ 0x140484FA8 (KiUnshadowProcessorAllocation.c)
 *     MmAllocateIsrStack @ 0x14062AFE4 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14062B1B4 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14062B3A4 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14062B3F0 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14062BBD8 (ExCreatePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140717B9C (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x140741234 (KiResetBootProcessorApicMask.c)
 *     KiAllocateCpuSetData @ 0x1408A6094 (KiAllocateCpuSetData.c)
 */

__int64 KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  PVOID PoolWithTag; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v9; // r12d
  unsigned int MaximumProcessorCount; // eax
  int CoresPerPhysicalProcessor; // ecx
  unsigned int v12; // edx
  unsigned int v13; // r13d
  unsigned int v14; // ebx
  unsigned int v15; // esi
  int v16; // ecx
  unsigned int v17; // r15d
  unsigned __int64 v18; // rcx
  __int64 v19; // r14
  unsigned __int64 v20; // rsi
  __int64 v21; // rsi
  _OWORD *v22; // r14
  SIZE_T v23; // rdx
  __int64 v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int64 v27; // r9
  unsigned __int64 v28; // r8
  unsigned int i; // edi
  _OWORD *v30; // rbx
  PVOID v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int128 v34; // xmm1
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // esi
  unsigned __int64 v38; // rcx
  char IsHyperThreadingEnabled; // r15
  unsigned int v40; // r9d
  __int64 v41; // r11
  __int64 v42; // rdi
  __int64 v43; // r8
  int v44; // r14d
  unsigned int j; // r10d
  __int64 v46; // rbx
  __int64 v47; // r8
  unsigned __int64 v48; // r8
  unsigned int v49; // ebx
  __int64 result; // rax
  unsigned int v51; // ecx
  unsigned int v52; // edx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v54; // [rsp+78h] [rbp-90h] BYREF
  unsigned int Size; // [rsp+7Ch] [rbp-8Ch]
  unsigned int Size_4; // [rsp+80h] [rbp-88h] BYREF
  int v57; // [rsp+84h] [rbp-84h] BYREF
  int v58; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v59; // [rsp+8Ch] [rbp-7Ch]
  unsigned __int64 v60; // [rsp+90h] [rbp-78h]
  __int64 v61; // [rsp+98h] [rbp-70h] BYREF
  __int64 IndependentPages; // [rsp+A0h] [rbp-68h]
  __int64 v63; // [rsp+A8h] [rbp-60h]
  __int64 KernelStack; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v65[184]; // [rsp+B8h] [rbp-50h] BYREF

  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_96;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x500 )
    KeRegisteredProcessors = 1280;
  KiBarrierWait = 1;
  memset(v65, 0, sizeof(v65));
  if ( !(unsigned __int8)HalIsHyperThreadingEnabled(v4, v3, v5, v6) )
    KiResetBootProcessorApicMask();
  v7 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v7 )
    v7 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v7 )
    v7 = KeBootprocSpecified;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0) < 0 || !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0) )
    goto LABEL_96;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  CoresPerPhysicalProcessor = CurrentPrcb->CoresPerPhysicalProcessor;
  v12 = MaximumProcessorCount;
  v59 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x500 )
    v12 = 1280;
  v13 = MaximumProcessorCount;
  v14 = KeRegisteredProcessors * CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  if ( v12 <= v14 )
    v14 = v12;
  if ( KeNumprocSpecified && KeNumprocSpecified < v14 )
    v14 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v14 > v7 )
    v14 = v7;
  if ( !(unsigned int)KiAllocateCpuSetData(v14) )
    goto LABEL_96;
  v15 = KiComputeProcessorDataSize(v14, &v58, &v57);
  Size = v15;
  if ( (int)HvlStartBootLogicalProcessors(v16) < 0 )
    goto LABEL_96;
  v17 = 0;
  do
  {
    v18 = (unsigned int)KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 >= v7 )
      break;
    Size_4 = -1;
    ++v9;
    LOWORD(v54) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(v9, &Size_4, (unsigned __int16 *)&v54) )
    {
      ++v17;
      IndependentPages = MmAllocateIndependentPages(v15, (unsigned __int16)v54);
      if ( !IndependentPages )
        goto LABEL_96;
      if ( !ExCreatePoolTagTable(v17, v54) )
        goto LABEL_96;
      KernelStack = MmCreateKernelStack(0, v54, 0LL);
      v19 = KernelStack;
      if ( !KernelStack )
        goto LABEL_96;
      v20 = MmCreateKernelStack(0, v54, 0LL);
      v60 = v20;
      if ( !v20 )
        goto LABEL_96;
      v61 = 0LL;
      if ( !MmAllocateIsrStack(&v61, v54) )
        goto LABEL_96;
      v63 = KeNodeBlock[(unsigned __int16)v54];
      LODWORD(BugCheckParameter4) = Size;
      v21 = KxInitializeProcessorState(
              v65,
              (_QWORD *)KeLoaderBlock_0,
              IndependentPages,
              0,
              BugCheckParameter4,
              (unsigned __int16)v54,
              v17,
              v14,
              v58,
              v57,
              v19,
              v20,
              v61);
      if ( !v21 )
        goto LABEL_96;
      v22 = (_OWORD *)KeNodeBlock[(unsigned __int16)v54];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v21)
        || !(unsigned int)MmInitializeProcessor(v21)
        || (int)KiInitializePrcbContext(v21, (unsigned __int16)v54) < 0
        || (int)KeInitializeTimerTable(v21) < 0 )
      {
        goto LABEL_96;
      }
      if ( !(unsigned __int8)HalStartNextProcessor(v65, v17, Size_4) )
      {
        KiRemoveProcessorFromGroupDatabase(v21);
        v23 = v63;
        v24 = 3LL;
        v25 = (_OWORD *)v63;
        do
        {
          *v25 = *v22;
          v25[1] = v22[1];
          v25[2] = v22[2];
          v25[3] = v22[3];
          v25[4] = v22[4];
          v25[5] = v22[5];
          v25[6] = v22[6];
          v25 += 8;
          v26 = v22[7];
          v22 += 8;
          *(v25 - 1) = v26;
          --v24;
        }
        while ( v24 );
        KeNodeBlock[(unsigned __int16)v54] = v23;
        HvlDeleteProcessor((struct _KPRCB *)v21, v23, (MEMORY_CACHING_TYPE)0x140000000uLL);
        MmDeleteProcessor(v21);
        ExDeletePoolTagTable(v17);
        KiUnshadowProcessorAllocation(v21, (__int64)v65);
        MmFreeIndependentPages(IndependentPages, Size);
        MmDeleteKernelStack(KernelStack, 0);
        MmDeleteKernelStack(v60, 0);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock(v21);
      KiUpdateProcessorCount(v17, *(unsigned __int8 *)(v21 + 208));
      v15 = Size;
    }
  }
  while ( v9 < 0x4FF );
  v27 = 0xF0F0F0F0F0F0F0FLL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v35 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    v18 = (0x101010101010101LL
         * (((v35 & 0x3333333333333333LL)
           + ((v35 >> 2) & 0x3333333333333333LL)
           + (((v35 & 0x3333333333333333LL) + ((v35 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( (_DWORD)v18 == (_DWORD)KeNumberProcessors_0 )
    {
      v28 = 0x140000000uLL;
      goto LABEL_60;
    }
LABEL_96:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v28 = 0x140000000uLL;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v30 = (_OWORD *)((char *)&KiNodeInit + 384 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v30 )
    {
      v31 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C0uLL, 0x2020654Bu);
      v32 = (__int64)v31;
      if ( !v31 )
        goto LABEL_96;
      memset(v31, 0, 0x1C0uLL);
      v33 = 3LL;
      v18 = v32;
      do
      {
        *(_OWORD *)v18 = *v30;
        *(_OWORD *)(v18 + 16) = v30[1];
        *(_OWORD *)(v18 + 32) = v30[2];
        *(_OWORD *)(v18 + 48) = v30[3];
        *(_OWORD *)(v18 + 64) = v30[4];
        *(_OWORD *)(v18 + 80) = v30[5];
        *(_OWORD *)(v18 + 96) = v30[6];
        v18 += 128LL;
        v34 = v30[7];
        v30 += 8;
        *(_OWORD *)(v18 - 16) = v34;
        --v33;
      }
      while ( v33 );
      v28 = 0x140000000uLL;
      KeNodeBlock[i] = v32;
    }
  }
LABEL_60:
  v36 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 4609024),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  v37 = 0;
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v18, v36, v28, v27);
  Size = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v40 = KeNumberProcessors_0;
      v38 = v37;
      if ( (unsigned int)KeNumberProcessors_0 > 0x40 )
        v40 = 64;
      v41 = KeNodeBlock[v37];
      v60 = v41;
      v42 = *(_QWORD *)(v41 + 136);
      v43 = v42;
      if ( v42 )
      {
        v44 = *(unsigned __int16 *)(v41 + 144);
        for ( j = 0; j < 0x40; ++j )
        {
          v46 = v43;
          if ( !v43 )
            break;
          if ( _bittest64(&v43, j) )
          {
            v47 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v44 + j]];
            v48 = IsHyperThreadingEnabled
                ? *(_QWORD *)(v47 + 24920)
                : v42 & *(_QWORD *)(v47 + 8LL * *(unsigned __int8 *)(v47 + 208) + 24728);
            v38 = (0x101010101010101LL
                 * ((((v48 - ((v48 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v48 - ((v48 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + ((((v48 - ((v48 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v48 - ((v48 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            v43 = v46 & ~v48;
            if ( (unsigned int)v38 < v40 )
              v40 = v38;
          }
        }
        v49 = 0;
        v37 = Size;
        *(_BYTE *)(v60 + 150) = v40;
        do
        {
          if ( !v42 )
            break;
          if ( _bittest64(&v42, v49) )
          {
            v42 &= ~(1LL << v49);
            KiConfigureSchedulingInformation(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v44 + v49]], 0);
          }
          ++v49;
        }
        while ( v49 < 0x40 );
      }
      Size = ++v37;
    }
    while ( v37 < (unsigned __int16)KeNumberNodes );
    v13 = v59;
  }
  LOBYTE(v38) = 1;
  result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))off_140398790[0])(v38, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v13 <= (unsigned int)KeNumberProcessors_0 )
    {
      result = (unsigned int)KeNumberProcessors_0;
LABEL_92:
      KeMaximumProcessors = result;
      goto LABEL_93;
    }
    v51 = KeRegisteredProcessors
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 142)
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 143);
    KeMaximumProcessors = v51;
    v52 = v51;
    if ( v51 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v51 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v52 = v51;
    }
    if ( v51 > v13 )
    {
      KeMaximumProcessors = v13;
      v52 = v13;
    }
    result = 1280LL;
    if ( v52 > 0x500 )
      goto LABEL_92;
  }
LABEL_93:
  if ( !KeDynamicPartitioningSupported )
  {
    result = (unsigned __int16)KiActiveGroups;
    KiMaximumGroups = KiActiveGroups;
  }
  KiBootProcessorsStarted = 1;
  KiBarrierWait = 0;
  return result;
}

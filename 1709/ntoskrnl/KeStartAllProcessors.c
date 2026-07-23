/*
 * XREFs of KeStartAllProcessors @ 0x14082E140
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 *     KiQueryProcessorNode @ 0x14013936C (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14020469C (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x1402143B8 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x1402844D0 (ExDeletePoolTagTable.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KiUnshadowProcessorAllocation @ 0x140423A10 (KiUnshadowProcessorAllocation.c)
 *     KiConfigureSchedulingInformation @ 0x14042516C (KiConfigureSchedulingInformation.c)
 *     KiInitializePrcbContext @ 0x1404253FC (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x140425510 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x1404255A4 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x140425688 (MmInitializeProcessor.c)
 *     KiComputeProcessorDataSize @ 0x140425824 (KiComputeProcessorDataSize.c)
 *     ExCreatePoolTagTable @ 0x1405B74F4 (ExCreatePoolTagTable.c)
 *     MmAllocateIsrStack @ 0x1405B7620 (MmAllocateIsrStack.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     KeInitializeTimerTable @ 0x1405B79DC (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x1405B7BCC (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x1405B7C18 (KxInitializeProcessorState.c)
 *     MmFreeIndependentPages @ 0x1405D59B0 (MmFreeIndependentPages.c)
 *     HvlDeleteProcessor @ 0x1406B3034 (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x1406D7318 (KiResetBootProcessorApicMask.c)
 *     KiAllocateCpuSetData @ 0x14082FCF0 (KiAllocateCpuSetData.c)
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
  int LogicalProcessorsPerCore; // edx
  int CoresPerPhysicalProcessor; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // edx
  unsigned int v15; // esi
  int v16; // ecx
  unsigned int v17; // r15d
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // r8
  __int64 v24; // r14
  _OWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // r8
  unsigned int i; // edi
  _OWORD *v40; // rbx
  PVOID v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // esi
  unsigned __int64 v49; // rcx
  char IsHyperThreadingEnabled; // r15
  unsigned int v51; // r9d
  __int64 v52; // r11
  __int64 v53; // rdi
  __int64 v54; // r8
  int v55; // r14d
  unsigned int j; // r10d
  __int64 v57; // rbx
  __int64 v58; // r8
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rax
  unsigned int v62; // ebx
  __int64 result; // rax
  unsigned int v64; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v66; // [rsp+78h] [rbp-90h] BYREF
  unsigned int Size; // [rsp+7Ch] [rbp-8Ch]
  unsigned int Size_4; // [rsp+80h] [rbp-88h] BYREF
  int v69; // [rsp+84h] [rbp-84h] BYREF
  int v70; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v71; // [rsp+8Ch] [rbp-7Ch]
  __int64 KernelStack; // [rsp+90h] [rbp-78h]
  __int64 v73; // [rsp+98h] [rbp-70h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v75; // [rsp+A8h] [rbp-60h]
  __int64 IndependentPages; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v77[184]; // [rsp+B8h] [rbp-50h] BYREF

  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_95;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x500 )
    KeRegisteredProcessors = 1280;
  KiBarrierWait = 1;
  memset(v77, 0, sizeof(v77));
  if ( !(unsigned __int8)HalIsHyperThreadingEnabled(v4, v3, v5, v6) )
    KiResetBootProcessorApicMask();
  v7 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v7 )
    v7 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v7 )
    v7 = KeBootprocSpecified;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0 || !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0) )
    goto LABEL_95;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  LogicalProcessorsPerCore = CurrentPrcb->LogicalProcessorsPerCore;
  CoresPerPhysicalProcessor = CurrentPrcb->CoresPerPhysicalProcessor;
  v13 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x500 )
    v13 = 1280;
  v71 = MaximumProcessorCount;
  v14 = KeRegisteredProcessors * CoresPerPhysicalProcessor * LogicalProcessorsPerCore;
  if ( v13 > v14 )
    v13 = v14;
  if ( KeNumprocSpecified && KeNumprocSpecified < v13 )
    v13 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v13 > v7 )
    v13 = v7;
  if ( !(unsigned int)KiAllocateCpuSetData(v13) )
    goto LABEL_95;
  v15 = KiComputeProcessorDataSize(v13, &v70, &v69);
  Size = v15;
  if ( (int)HvlStartBootLogicalProcessors(v16) < 0 )
    goto LABEL_95;
  v17 = 0;
  do
  {
    v18 = (unsigned int)KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 >= v7 )
      break;
    Size_4 = -1;
    ++v9;
    LOWORD(v66) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(v9, &Size_4, (unsigned __int16 *)&v66) )
    {
      ++v17;
      v75 = v15;
      IndependentPages = MmAllocateIndependentPages(v15, (unsigned __int16)v66, v19);
      v20 = IndependentPages;
      if ( !IndependentPages )
        goto LABEL_95;
      if ( !ExCreatePoolTagTable(v17, v66) )
        goto LABEL_95;
      KernelStack = MmCreateKernelStack(0, v66, 0LL);
      v21 = KernelStack;
      if ( !KernelStack )
        goto LABEL_95;
      v22 = MmCreateKernelStack(0, v66, 0LL);
      if ( !v22 )
        goto LABEL_95;
      v73 = 0LL;
      if ( !MmAllocateIsrStack(&v73, v66) )
        goto LABEL_95;
      v74 = KeNodeBlock[(unsigned __int16)v66];
      LODWORD(BugCheckParameter4) = Size;
      v24 = KxInitializeProcessorState(
              v77,
              (_QWORD *)KeLoaderBlock_0,
              v20,
              0,
              BugCheckParameter4,
              (unsigned __int16)v66,
              v17,
              v13,
              v70,
              v69,
              v21,
              v22,
              v73);
      if ( !v24 )
        goto LABEL_95;
      v25 = (_OWORD *)KeNodeBlock[(unsigned __int16)v66];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v24, Size_4, v23)
        || !(unsigned int)MmInitializeProcessor(v24, v26, v27)
        || (int)KiInitializePrcbContext(v24, (unsigned __int16)v66) < 0
        || (int)KeInitializeTimerTable(v24) < 0 )
      {
        goto LABEL_95;
      }
      if ( !(unsigned __int8)HalStartNextProcessor(v77, v17, Size_4) )
      {
        KiRemoveProcessorFromGroupDatabase(v24);
        v28 = v74;
        v29 = 2LL;
        v30 = (_OWORD *)v74;
        do
        {
          *v30 = *v25;
          v30[1] = v25[1];
          v30[2] = v25[2];
          v30[3] = v25[3];
          v30[4] = v25[4];
          v30[5] = v25[5];
          v30[6] = v25[6];
          v30 += 8;
          v31 = v25[7];
          v25 += 8;
          *(v30 - 1) = v31;
          --v29;
        }
        while ( v29 );
        *v30 = *v25;
        v30[1] = v25[1];
        v30[2] = v25[2];
        v30[3] = v25[3];
        KeNodeBlock[(unsigned __int16)v66] = v28;
        HvlDeleteProcessor((struct _KPRCB *)v24, 0x140000000uLL, (MEMORY_CACHING_TYPE)v28);
        MmDeleteProcessor(v24, v32, v33, v34);
        ExDeletePoolTagTable(v17);
        KiUnshadowProcessorAllocation(v24, (__int64)v77);
        MmFreeIndependentPages(IndependentPages, v75);
        MmDeleteKernelStack(KernelStack, 0LL, v35);
        MmDeleteKernelStack(v22, 0LL, v36);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock(v24);
      KiUpdateProcessorCount(v17, *(unsigned __int8 *)(v24 + 208));
      v15 = Size;
    }
  }
  while ( v9 < 0x4FF );
  v37 = 0xF0F0F0F0F0F0F0FLL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v46 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    v18 = (0x101010101010101LL
         * (((v46 & 0x3333333333333333LL)
           + ((v46 >> 2) & 0x3333333333333333LL)
           + (((v46 & 0x3333333333333333LL) + ((v46 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( (_DWORD)v18 == (_DWORD)KeNumberProcessors_0 )
    {
      v38 = 0x140000000uLL;
      goto LABEL_60;
    }
LABEL_95:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v38 = 0x140000000uLL;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v40 = (_OWORD *)((char *)&KiNodeInit + 320 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v40 )
    {
      v41 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x180uLL, 0x2020654Bu);
      v42 = (__int64)v41;
      if ( !v41 )
        goto LABEL_95;
      memset(v41, 0, 0x180uLL);
      v43 = 2LL;
      v18 = v42;
      do
      {
        *(_OWORD *)v18 = *v40;
        *(_OWORD *)(v18 + 16) = v40[1];
        *(_OWORD *)(v18 + 32) = v40[2];
        *(_OWORD *)(v18 + 48) = v40[3];
        *(_OWORD *)(v18 + 64) = v40[4];
        *(_OWORD *)(v18 + 80) = v40[5];
        *(_OWORD *)(v18 + 96) = v40[6];
        v18 += 128LL;
        v44 = v40[7];
        v40 += 8;
        *(_OWORD *)(v18 - 16) = v44;
        --v43;
      }
      while ( v43 );
      v45 = *v40;
      v38 = 0x140000000uLL;
      KeNodeBlock[i] = v42;
      *(_OWORD *)v18 = v45;
      *(_OWORD *)(v18 + 16) = v40[1];
      *(_OWORD *)(v18 + 32) = v40[2];
      *(_OWORD *)(v18 + 48) = v40[3];
    }
  }
LABEL_60:
  v47 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 4301824),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  v48 = 0;
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v18, v47, v38, v37);
  for ( Size = 0; v48 < (unsigned __int16)KeNumberNodes; Size = ++v48 )
  {
    v51 = KeNumberProcessors_0;
    v49 = v48;
    if ( (unsigned int)KeNumberProcessors_0 > 0x40 )
      v51 = 64;
    v52 = KeNodeBlock[v48];
    KernelStack = v52;
    v53 = *(_QWORD *)(v52 + 136);
    v54 = v53;
    if ( v53 )
    {
      v55 = *(unsigned __int16 *)(v52 + 144);
      for ( j = 0; j < 0x40; ++j )
      {
        v57 = v54;
        if ( !v54 )
          break;
        if ( _bittest64(&v54, j) )
        {
          v58 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v55 + j]];
          if ( IsHyperThreadingEnabled )
          {
            v59 = *(_QWORD *)(v58 + 24920);
            v60 = (((v59 - ((v59 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v59 - ((v59 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v59 - ((v59 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v59 - ((v59 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
            v61 = 0x101010101010101LL;
          }
          else
          {
            v59 = v53 & *(_QWORD *)(v58 + 8LL * *(unsigned __int8 *)(v58 + 208) + 24728);
            v61 = (((v59 - ((v59 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v59 - ((v59 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v59 - ((v59 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v59 - ((v59 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
            v60 = 0x101010101010101LL;
          }
          v49 = (v61 * v60) >> 56;
          v54 = v57 & ~v59;
          if ( (unsigned int)v49 < v51 )
            v51 = v49;
        }
      }
      v62 = 0;
      v48 = Size;
      *(_BYTE *)(KernelStack + 150) = v51;
      do
      {
        if ( !v53 )
          break;
        if ( _bittest64(&v53, v62) )
        {
          v53 &= ~(1LL << v62);
          KiConfigureSchedulingInformation(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v55 + v62]], 0);
        }
        ++v62;
      }
      while ( v62 < 0x40 );
    }
  }
  LOBYTE(v49) = 1;
  result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))off_1403533F0[0])(v49, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v71 <= (unsigned int)KeNumberProcessors_0 )
    {
      result = (unsigned int)KeNumberProcessors_0;
LABEL_91:
      KeMaximumProcessors = result;
      goto LABEL_92;
    }
    v64 = KeRegisteredProcessors
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 142)
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 143);
    KeMaximumProcessors = v64;
    if ( v64 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      v64 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      KeMaximumProcessors = v64;
    }
    if ( v64 > v71 )
    {
      v64 = v71;
      KeMaximumProcessors = v71;
    }
    result = 1280LL;
    if ( v64 > 0x500 )
      goto LABEL_91;
  }
LABEL_92:
  if ( !KeDynamicPartitioningSupported )
  {
    result = (unsigned __int16)KiActiveGroups;
    KiMaximumGroups = KiActiveGroups;
  }
  KiBootProcessorsStarted = 1;
  KiBarrierWait = 0;
  return result;
}

/*
 * XREFs of KeStartAllProcessors @ 0x140808F4C
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140110020 (MmDeleteKernelStack.c)
 *     KiQueryProcessorNode @ 0x140155188 (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140155358 (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x1401FE3FC (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x14020D358 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14025AD88 (ExDeletePoolTagTable.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     KiUnshadowProcessorAllocation @ 0x140403A28 (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x14040EC68 (KiComputeProcessorDataSize.c)
 *     KiConfigureSchedulingInformation @ 0x14041093C (KiConfigureSchedulingInformation.c)
 *     KiInitializePrcbContext @ 0x140410CF4 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x140410E0C (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x140410EA0 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x140410F84 (MmInitializeProcessor.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x1405A77F8 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x1405A79D0 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x1405A7BC0 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x1405A7C04 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x1405A7F84 (ExCreatePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140687628 (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x1406AC078 (KiResetBootProcessorApicMask.c)
 *     KiAllocateCpuSetData @ 0x140809F24 (KiAllocateCpuSetData.c)
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
  unsigned __int64 v10; // r8
  unsigned int MaximumProcessorCount; // eax
  int LogicalProcessorsPerCore; // edx
  int CoresPerPhysicalProcessor; // ecx
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // esi
  int v17; // ecx
  unsigned int v18; // r15d
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rsi
  unsigned __int64 v23; // r8
  __int64 v24; // r13
  unsigned __int64 v25; // r8
  __int64 v26; // r14
  _OWORD *v27; // rsi
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  SIZE_T v30; // rdx
  __int64 v31; // rcx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned __int64 v36; // r8
  unsigned int v37; // edi
  _OWORD *v38; // rbx
  PVOID v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  _OWORD *v42; // rcx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  unsigned int v47; // esi
  unsigned __int64 v48; // rcx
  char IsHyperThreadingEnabled; // r15
  unsigned int v50; // r8d
  __int64 v51; // r11
  __int64 v52; // rdi
  __int64 v53; // r10
  int v54; // r14d
  unsigned int i; // r9d
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx
  unsigned int v61; // ebx
  __int64 result; // rax
  unsigned int v63; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v65; // [rsp+78h] [rbp-90h] BYREF
  int v66; // [rsp+7Ch] [rbp-8Ch]
  unsigned int Size; // [rsp+80h] [rbp-88h]
  unsigned int Size_4; // [rsp+84h] [rbp-84h] BYREF
  int v69; // [rsp+88h] [rbp-80h] BYREF
  int v70; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v71; // [rsp+90h] [rbp-78h]
  __int64 KernelStack; // [rsp+98h] [rbp-70h]
  __int64 v73; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-60h]
  __int64 IndependentPages; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v76[184]; // [rsp+B8h] [rbp-50h] BYREF

  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_96;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x280 )
    KeRegisteredProcessors = 640;
  KiBarrierWait = 1;
  memset(v76, 0, sizeof(v76));
  if ( !(unsigned __int8)HalIsHyperThreadingEnabled(v4, v3, v5, v6) )
    KiResetBootProcessorApicMask();
  v7 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v7 )
    v7 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v7 )
    v7 = KeBootprocSpecified;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0
    || !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0, v10) )
  {
    goto LABEL_96;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  LogicalProcessorsPerCore = CurrentPrcb->LogicalProcessorsPerCore;
  CoresPerPhysicalProcessor = CurrentPrcb->CoresPerPhysicalProcessor;
  v14 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x280 )
    v14 = 640;
  v71 = MaximumProcessorCount;
  v15 = KeRegisteredProcessors * CoresPerPhysicalProcessor * LogicalProcessorsPerCore;
  if ( v14 > v15 )
    v14 = v15;
  if ( KeNumprocSpecified && KeNumprocSpecified < v14 )
    v14 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v14 > v7 )
    v14 = v7;
  if ( !(unsigned int)KiAllocateCpuSetData(v14) )
    goto LABEL_96;
  v16 = KiComputeProcessorDataSize(v14, &v70, &v69);
  Size = v16;
  if ( (int)HvlStartBootLogicalProcessors(v17) < 0 )
    goto LABEL_96;
  v18 = 0;
  while ( (unsigned int)KeNumberProcessors_0 < v7 )
  {
    Size_4 = -1;
    ++v9;
    LOWORD(v65) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(v9, &Size_4, (unsigned __int16 *)&v65) )
    {
      ++v18;
      IndependentPages = MmAllocateIndependentPages(v16, (unsigned __int16)v65, v19);
      v21 = IndependentPages;
      if ( !IndependentPages )
        goto LABEL_96;
      if ( !ExCreatePoolTagTable(v18, v65, v20) )
        goto LABEL_96;
      KernelStack = MmCreateKernelStack(0, v65, 0LL);
      v22 = KernelStack;
      if ( !KernelStack )
        goto LABEL_96;
      v24 = MmCreateKernelStack(0, v65, 0LL);
      if ( !v24 )
        goto LABEL_96;
      v73 = 0LL;
      if ( !MmAllocateIsrStack(&v73, v65, v23) )
        goto LABEL_96;
      v74 = KeNodeBlock[(unsigned __int16)v65];
      LODWORD(BugCheckParameter4) = Size;
      v26 = KxInitializeProcessorState(
              v76,
              (_QWORD *)KeLoaderBlock_0,
              v21,
              0,
              BugCheckParameter4,
              (unsigned __int16)v65,
              v18,
              v14,
              v70,
              v69,
              v22,
              v24,
              v73);
      if ( !v26 )
        goto LABEL_96;
      v27 = (_OWORD *)KeNodeBlock[(unsigned __int16)v65];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v26, Size_4, v25)
        || !(unsigned int)MmInitializeProcessor(v26, v28, v29)
        || (int)KiInitializePrcbContext(v26, (unsigned __int16)v65) < 0
        || (int)KeInitializeTimerTable(v26) < 0 )
      {
        goto LABEL_96;
      }
      if ( !(unsigned __int8)HalStartNextProcessor(v76, v18, Size_4) )
      {
        KiRemoveProcessorFromGroupDatabase(v26);
        v30 = v74;
        v31 = 2LL;
        v32 = (_OWORD *)v74;
        do
        {
          *v32 = *v27;
          v32[1] = v27[1];
          v32[2] = v27[2];
          v32[3] = v27[3];
          v32[4] = v27[4];
          v32[5] = v27[5];
          v32[6] = v27[6];
          v32 += 8;
          v33 = v27[7];
          v27 += 8;
          *(v32 - 1) = v33;
          --v31;
        }
        while ( v31 );
        *v32 = *v27;
        v32[1] = v27[1];
        v32[2] = v27[2];
        v32[3] = v27[3];
        KeNodeBlock[(unsigned __int16)v65] = v30;
        HvlDeleteProcessor((struct _KPRCB *)v26, v30, (MEMORY_CACHING_TYPE)0x140000000uLL);
        MmDeleteProcessor(v26);
        ExDeletePoolTagTable(v18);
        KiUnshadowProcessorAllocation(v26, (__int64)v76);
        MmFreeIndependentPages(IndependentPages, Size);
        MmDeleteKernelStack(KernelStack, 0);
        MmDeleteKernelStack(v24, 0);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock(v26);
      KiUpdateProcessorCount(v18, *(unsigned __int8 *)(v26 + 208));
      v16 = Size;
    }
    if ( v9 >= 0x27F )
      break;
  }
  v34 = (unsigned __int16)KeNumberNodes;
  v35 = 0xF0F0F0F0F0F0F0FLL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v45 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v45 & 0x3333333333333333LL)
                         + ((v45 >> 2) & 0x3333333333333333LL)
                         + (((v45 & 0x3333333333333333LL) + ((v45 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 == (_DWORD)KeNumberProcessors_0 )
    {
      v34 = (unsigned __int16)KeNumberNodes;
      v36 = 0x140000000uLL;
      goto LABEL_60;
    }
LABEL_96:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v36 = 0x140000000uLL;
  v37 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v38 = (_OWORD *)((char *)&KiNodeInit + 320 * v37);
      if ( (_OWORD *)KeNodeBlock[v37] == v38 )
      {
        v39 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x840uLL, 0x2020654Bu);
        v40 = (__int64)v39;
        if ( !v39 )
          goto LABEL_96;
        memset(v39, 0, 0x840uLL);
        v41 = 2LL;
        v42 = (_OWORD *)v40;
        do
        {
          *v42 = *v38;
          v42[1] = v38[1];
          v42[2] = v38[2];
          v42[3] = v38[3];
          v42[4] = v38[4];
          v42[5] = v38[5];
          v42[6] = v38[6];
          v42 += 8;
          v43 = v38[7];
          v38 += 8;
          *(v42 - 1) = v43;
          --v41;
        }
        while ( v41 );
        v44 = *v38;
        v36 = 0x140000000uLL;
        KeNodeBlock[v37] = v40;
        *v42 = v44;
        v42[1] = v38[1];
        v42[2] = v38[2];
        v42[3] = v38[3];
        v34 = (unsigned __int16)KeNumberNodes;
      }
      ++v37;
    }
    while ( v37 < (unsigned __int16)v34 );
  }
LABEL_60:
  v46 = (unsigned __int16)v34;
  if ( (unsigned __int16)v34 < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)v34 + 4166656),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)v34));
  v47 = 0;
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v34, v46, v36, v35);
  LOBYTE(v66) = IsHyperThreadingEnabled;
  for ( Size = 0; v47 < (unsigned __int16)KeNumberNodes; Size = ++v47 )
  {
    v50 = KeNumberProcessors_0;
    v48 = v47;
    if ( (unsigned int)KeNumberProcessors_0 > 0x40 )
      v50 = 64;
    v51 = KeNodeBlock[v47];
    KernelStack = v51;
    v52 = *(_QWORD *)(v51 + 136);
    v53 = v52;
    if ( v52 )
    {
      v54 = *(unsigned __int16 *)(v51 + 144);
      for ( i = 0; i < 0x40; ++i )
      {
        if ( !v53 )
          break;
        if ( _bittest64(&v53, i) )
        {
          v56 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v54 + i]];
          if ( IsHyperThreadingEnabled )
          {
            v57 = *(_QWORD *)(v56 + 25176);
            v53 &= ~v57;
            v58 = (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
            v59 = 0x101010101010101LL;
          }
          else
          {
            v60 = v52 & *(_QWORD *)(v56 + 8LL * *(unsigned __int8 *)(v56 + 208) + 24864);
            v53 &= ~v60;
            v59 = (((v60 - ((v60 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v60 - ((v60 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v60 - ((v60 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v60 - ((v60 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
            v58 = 0x101010101010101LL;
          }
          v48 = (v59 * v58) >> 56;
          if ( (unsigned int)v48 < v50 )
            v50 = v48;
        }
      }
      v47 = Size;
      v61 = 0;
      *(_BYTE *)(KernelStack + 150) = v50;
      do
      {
        if ( !v52 )
          break;
        if ( _bittest64(&v52, v61) )
        {
          v52 &= ~(1LL << v61);
          KiConfigureSchedulingInformation(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v54 + v61]], 0);
        }
        ++v61;
      }
      while ( v61 < 0x40 );
      IsHyperThreadingEnabled = v66;
    }
  }
  LOBYTE(v48) = 1;
  result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))off_14033B3C0[0])(v48, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v71 <= (unsigned int)KeNumberProcessors_0 )
    {
      result = (unsigned int)KeNumberProcessors_0;
LABEL_92:
      KeMaximumProcessors = result;
      goto LABEL_93;
    }
    v63 = KeRegisteredProcessors
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 142)
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 143);
    KeMaximumProcessors = v63;
    if ( v63 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      v63 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      KeMaximumProcessors = v63;
    }
    if ( v63 > v71 )
    {
      v63 = v71;
      KeMaximumProcessors = v71;
    }
    result = 640LL;
    if ( v63 > 0x280 )
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

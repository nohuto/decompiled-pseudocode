/*
 * XREFs of KiStartDynamicProcessor @ 0x1406D7344
 * Callers:
 *     KeStartDynamicProcessor @ 0x1406D8330 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 *     MmUnlockPagableImageSection @ 0x1400BC610 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     KiQueryProcessorNode @ 0x14013936C (KiQueryProcessorNode.c)
 *     ExInitializeProcessor @ 0x1401462B8 (ExInitializeProcessor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiDynamicProcessorInitialization @ 0x14020260C (KiDynamicProcessorInitialization.c)
 *     KiAdjustGroupConfiguration @ 0x140204148 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14020469C (KiRemoveProcessorFromGroupDatabase.c)
 *     KiDynamicProcessorAddNotification @ 0x140206D5C (KiDynamicProcessorAddNotification.c)
 *     MmDeleteProcessor @ 0x1402143B8 (MmDeleteProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140280A00 (EtwpCCSwapDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x1402844D0 (ExDeletePoolTagTable.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     KiUnshadowProcessorAllocation @ 0x140423A10 (KiUnshadowProcessorAllocation.c)
 *     KiInitializePrcbContext @ 0x1404253FC (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x140425688 (MmInitializeProcessor.c)
 *     KiComputeProcessorDataSize @ 0x140425824 (KiComputeProcessorDataSize.c)
 *     KiInitializeDynamicProcessor @ 0x14042E5D4 (KiInitializeDynamicProcessor.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x14042EBCC (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x14043B3EC (WheaInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1405B74F4 (ExCreatePoolTagTable.c)
 *     MmAllocateIsrStack @ 0x1405B7620 (MmAllocateIsrStack.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     KeInitializeTimerTable @ 0x1405B79DC (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x1405B7BCC (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x1405B7C18 (KxInitializeProcessorState.c)
 *     EtwInitializeProcessor @ 0x1405C6848 (EtwInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x1405C6974 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1405C6A20 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1405C6B3C (IoInitializeProcessor.c)
 *     MmFreeIndependentPages @ 0x1405D59B0 (MmFreeIndependentPages.c)
 *     CmInitializeProcessor @ 0x1406947A8 (CmInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1406B3034 (HvlDeleteProcessor.c)
 *     MmFreeIsrStack @ 0x1406E5004 (MmFreeIsrStack.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // r14
  _OWORD *v5; // rsi
  struct _KPRCB *v6; // rdi
  unsigned __int64 v7; // r15
  __int64 KernelStack; // r13
  __int64 v9; // r12
  int v10; // ebx
  int v11; // r14d
  unsigned int v12; // ebx
  __int64 v13; // r8
  PVOID v14; // rcx
  __int64 v15; // r15
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 EtwSupport; // rcx
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v27; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v28; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+80h] [rbp-80h]
  unsigned int v30; // [rsp+84h] [rbp-7Ch]
  int v31; // [rsp+88h] [rbp-78h] BYREF
  int v32; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h]
  void *PoolTagTable; // [rsp+A0h] [rbp-60h]
  __int64 IndependentPages; // [rsp+A8h] [rbp-58h]
  _OWORD v37[21]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v38[184]; // [rsp+200h] [rbp+100h] BYREF

  v29 = a4;
  v4 = a3;
  v28 = (unsigned int)a2;
  v5 = 0LL;
  PoolTagTable = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  KernelStack = 0LL;
  v30 = 0;
  v9 = 0LL;
  v27 = 0;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x500
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    v10 = -1073741223;
    goto LABEL_40;
  }
  v10 = HalRegisterDynamicProcessor((unsigned int)KeRegisteredProcessors, v28);
  if ( v10 < 0 )
    goto LABEL_43;
  v27 = v4;
  v11 = v29;
  v10 = KiQueryProcessorNode(v29, &v28, &v27);
  if ( v10 )
    goto LABEL_40;
  KiAdjustGroupConfiguration(KeNodeBlock[v27]);
  v12 = KiComputeProcessorDataSize(KeMaximumProcessors, &v32, &v31);
  v30 = v12;
  IndependentPages = MmAllocateIndependentPages(v12, v27, v13);
  v7 = IndependentPages;
  if ( !IndependentPages )
  {
    v10 = -1073741670;
    KiBarrierWait = 0;
    return (unsigned int)v10;
  }
  PoolTagTable = ExCreatePoolTagTable(v11, v27);
  if ( PoolTagTable )
  {
    KernelStack = MmCreateKernelStack(0, v27, 0LL);
    if ( !KernelStack || (v9 = MmCreateKernelStack(0, v27, 0LL)) == 0 || !MmAllocateIsrStack(&v33, v27) )
    {
      v10 = -1073741670;
      KiBarrierWait = 0;
LABEL_51:
      if ( PoolTagTable )
        ExDeletePoolTagTable(v11);
      goto LABEL_53;
    }
    v34 = KeNodeBlock[v27];
    memset(v37, 0, 0x148uLL);
    v37[1] = *(_OWORD *)&PsLoadedModuleList;
    LODWORD(Size) = v12;
    v6 = (struct _KPRCB *)KxInitializeProcessorState(
                            v38,
                            v37,
                            v7,
                            1,
                            Size,
                            v27,
                            v11,
                            KeMaximumProcessors,
                            v32,
                            v31,
                            KernelStack,
                            v9,
                            v33);
    if ( !v6 )
    {
      v10 = -1073741670;
LABEL_43:
      v17 = v34;
      KiBarrierWait = 0;
      if ( v34 )
      {
        v18 = 2LL;
        v19 = (_OWORD *)v34;
        a3 = 128LL;
        do
        {
          *v19 = *v5;
          v19[1] = v5[1];
          v19[2] = v5[2];
          v19[3] = v5[3];
          v19[4] = v5[4];
          v19[5] = v5[5];
          v19[6] = v5[6];
          v19 += 8;
          v20 = v5[7];
          v5 += 8;
          *(v19 - 1) = v20;
          --v18;
        }
        while ( v18 );
        a2 = KeNodeBlock;
        *v19 = *v5;
        v19[1] = v5[1];
        v19[2] = v5[2];
        v19[3] = v5[3];
        KeNodeBlock[v27] = v17;
      }
      if ( v6 )
      {
        HvlDeleteProcessor(v6, (SIZE_T)a2, (MEMORY_CACHING_TYPE)a3);
        MmDeleteProcessor((__int64)v6, v21, v22, v23);
        EtwSupport = (__int64)v6->EtwSupport;
        if ( EtwSupport )
        {
          EtwpCCSwapDeleteProcessor(EtwSupport);
          ExFreePoolWithTag(v6->EtwSupport, 0);
          v6->EtwSupport = 0LL;
        }
      }
      v11 = v29;
      goto LABEL_51;
    }
    v5 = (_OWORD *)KeNodeBlock[v27];
    if ( !(unsigned int)MmInitializeProcessor((__int64)v6, (__int64)a2, a3) )
    {
      v10 = -1073741823;
      goto LABEL_41;
    }
    v10 = KiInitializePrcbContext((__int64)v6, v27);
    if ( v10 < 0 )
      goto LABEL_41;
    v10 = KeInitializeTimerTable((__int64)v6);
    if ( v10 < 0
      || (v10 = ExInitializeProcessor((__int64)v6, 1), v10 < 0)
      || (v10 = ObInitializeProcessor(v6), v10 < 0)
      || (v10 = IoInitializeProcessor((__int64)v6, 0LL), v10 < 0)
      || (v10 = CcInitializeProcessor((__int64)v6), v10 < 0)
      || (v10 = EtwInitializeProcessor((__int64)v6), v10 < 0)
      || (v10 = WheaInitializeProcessor((__int64)v6, 0), v10 < 0)
      || (v10 = HvlInitializeProcessor((_SLIST_HEADER *)v6, v28, a3), v10 < 0) )
    {
LABEL_41:
      if ( v6 )
        KiRemoveProcessorFromGroupDatabase((__int64)v6);
      goto LABEL_43;
    }
    v14 = ExPageLockHandle;
    v6->ProcessorProfileControlArea = 0LL;
    v6->ProfileEventIndexAddress = &v6->ProfileEventIndexAddress;
    MiLockPagableImageSection((ULONG_PTR)v14, 1u);
    KiAddProcessorToGroupSchedulingDatabase((__int64)v6);
    v15 = KeLoaderBlock_0;
    KiBarrierWait = 1;
    if ( !KeLoaderBlock_0 )
    {
      KeLoaderBlock_0 = (__int64)v37;
      v37[1] = *(_OWORD *)&PsLoadedModuleList;
    }
    v10 = KiDynamicProcessorAddNotification(0, v6->Number, v6->Group, v6->GroupIndex, v28, 0);
    v16 = 2;
    if ( v10 >= 0 )
    {
      if ( (unsigned __int8)HalStartDynamicProcessor(v38, (unsigned int)v29, v28, v27) )
      {
        while ( *((_QWORD *)&v37[8] + 1) )
          _mm_pause();
        KiInitializeDynamicProcessor((__int64)v6);
        v16 = 1;
      }
      else
      {
        v10 = -1073741823;
      }
    }
    KiDynamicProcessorAddNotification(v16, v6->Number, v6->Group, v6->GroupIndex, v28, v10);
    if ( v10 >= 0 )
    {
      WheaInitializeProcessor((__int64)v6, 1u);
      CmInitializeProcessor((__int64)v6);
      KiDynamicProcessorInitialization((__int64)v6);
    }
    KeLoaderBlock_0 = v15;
    MmUnlockPagableImageSection(ExPageLockHandle);
    v7 = IndependentPages;
LABEL_40:
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_41;
  }
  v10 = -1073741670;
  KiBarrierWait = 0;
LABEL_53:
  if ( v7 )
  {
    if ( v6 )
      KiUnshadowProcessorAllocation((__int64)v6, (__int64)v38);
    MmFreeIndependentPages(v7, v30);
  }
  if ( KernelStack )
    MmDeleteKernelStack(KernelStack, 0LL, a3);
  if ( v9 )
    MmDeleteKernelStack(v9, 0LL, a3);
  if ( v33 )
    MmFreeIsrStack();
  return (unsigned int)v10;
}

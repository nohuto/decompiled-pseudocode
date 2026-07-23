/*
 * XREFs of KiStartDynamicProcessor @ 0x1406AC0A4
 * Callers:
 *     KeStartDynamicProcessor @ 0x1406AD030 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14006CCE0 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140110020 (MmDeleteKernelStack.c)
 *     ExInitializeProcessor @ 0x14015412C (ExInitializeProcessor.c)
 *     KiQueryProcessorNode @ 0x140155188 (KiQueryProcessorNode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiDynamicProcessorInitialization @ 0x1401FC84C (KiDynamicProcessorInitialization.c)
 *     KiAdjustGroupConfiguration @ 0x1401FDF70 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x1401FE3FC (KiRemoveProcessorFromGroupDatabase.c)
 *     KiDynamicProcessorAddNotification @ 0x1402008CC (KiDynamicProcessorAddNotification.c)
 *     MmDeleteProcessor @ 0x14020D358 (MmDeleteProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x1402573DC (EtwpCCSwapDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14025AD88 (ExDeletePoolTagTable.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KiUnshadowProcessorAllocation @ 0x140403A28 (KiUnshadowProcessorAllocation.c)
 *     KiComputeProcessorDataSize @ 0x14040EC68 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x140410CF4 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x140410F84 (MmInitializeProcessor.c)
 *     KiInitializeDynamicProcessor @ 0x140418D40 (KiInitializeDynamicProcessor.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140419348 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x14041B8E4 (WheaInitializeProcessor.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     EtwInitializeProcessor @ 0x14059E570 (EtwInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x14059E748 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14059E7F4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x14059E91C (IoInitializeProcessor.c)
 *     MmAllocateIsrStack @ 0x1405A77F8 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x1405A79D0 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x1405A7BC0 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x1405A7C04 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x1405A7F84 (ExCreatePoolTagTable.c)
 *     CmInitializeProcessor @ 0x14066A040 (CmInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140687628 (HvlDeleteProcessor.c)
 *     MmFreeIsrStack @ 0x1406B8384 (MmFreeIsrStack.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
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
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  PVOID v16; // rcx
  __int64 v17; // r15
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rdx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 EtwSupport; // rcx
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v26; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v27; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+80h] [rbp-80h]
  unsigned int v29; // [rsp+84h] [rbp-7Ch]
  int v30; // [rsp+88h] [rbp-78h] BYREF
  int v31; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+98h] [rbp-68h]
  void *PoolTagTable; // [rsp+A0h] [rbp-60h]
  __int64 IndependentPages; // [rsp+A8h] [rbp-58h]
  _OWORD v36[21]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v37[184]; // [rsp+200h] [rbp+100h] BYREF

  v28 = a4;
  v4 = a3;
  v27 = (unsigned int)a2;
  v5 = 0LL;
  PoolTagTable = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  KernelStack = 0LL;
  v29 = 0;
  v9 = 0LL;
  v26 = 0;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x280
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    v10 = -1073741223;
    goto LABEL_40;
  }
  v10 = HalRegisterDynamicProcessor((unsigned int)KeRegisteredProcessors, v27);
  if ( v10 < 0 )
    goto LABEL_43;
  v26 = v4;
  v11 = v28;
  v10 = KiQueryProcessorNode(v28, &v27, &v26);
  if ( v10 )
    goto LABEL_40;
  KiAdjustGroupConfiguration(KeNodeBlock[v26]);
  v12 = KiComputeProcessorDataSize(KeMaximumProcessors, &v31, &v30);
  v29 = v12;
  IndependentPages = MmAllocateIndependentPages(v12, v26, v13);
  v7 = IndependentPages;
  if ( !IndependentPages )
  {
    v10 = -1073741670;
    KiBarrierWait = 0;
    return (unsigned int)v10;
  }
  PoolTagTable = ExCreatePoolTagTable(v11, v26, v14);
  if ( PoolTagTable )
  {
    KernelStack = MmCreateKernelStack(0, v26, 0LL);
    if ( !KernelStack || (v9 = MmCreateKernelStack(0, v26, 0LL)) == 0 || !MmAllocateIsrStack(&v32, v26, v15) )
    {
      v10 = -1073741670;
      KiBarrierWait = 0;
LABEL_51:
      if ( PoolTagTable )
        ExDeletePoolTagTable(v11);
      goto LABEL_53;
    }
    v33 = KeNodeBlock[v26];
    memset(v36, 0, 0x148uLL);
    v36[1] = *(_OWORD *)&PsLoadedModuleList;
    LODWORD(Size) = v12;
    v6 = (struct _KPRCB *)KxInitializeProcessorState(
                            v37,
                            v36,
                            v7,
                            1,
                            Size,
                            v26,
                            v11,
                            KeMaximumProcessors,
                            v31,
                            v30,
                            KernelStack,
                            v9,
                            v32);
    if ( !v6 )
    {
      v10 = -1073741670;
LABEL_43:
      v19 = v33;
      KiBarrierWait = 0;
      if ( v33 )
      {
        v20 = 2LL;
        v21 = (_OWORD *)v33;
        LODWORD(a3) = 128;
        do
        {
          *v21 = *v5;
          v21[1] = v5[1];
          v21[2] = v5[2];
          v21[3] = v5[3];
          v21[4] = v5[4];
          v21[5] = v5[5];
          v21[6] = v5[6];
          v21 += 8;
          v22 = v5[7];
          v5 += 8;
          *(v21 - 1) = v22;
          --v20;
        }
        while ( v20 );
        a2 = KeNodeBlock;
        *v21 = *v5;
        v21[1] = v5[1];
        v21[2] = v5[2];
        v21[3] = v5[3];
        KeNodeBlock[v26] = v19;
      }
      if ( v6 )
      {
        HvlDeleteProcessor(v6, (SIZE_T)a2, (MEMORY_CACHING_TYPE)a3);
        MmDeleteProcessor((__int64)v6);
        EtwSupport = (__int64)v6->EtwSupport;
        if ( EtwSupport )
        {
          EtwpCCSwapDeleteProcessor(EtwSupport);
          ExFreePoolWithTag(v6->EtwSupport, 0);
          v6->EtwSupport = 0LL;
        }
      }
      v11 = v28;
      goto LABEL_51;
    }
    v5 = (_OWORD *)KeNodeBlock[v26];
    if ( !(unsigned int)MmInitializeProcessor((__int64)v6, (__int64)a2, a3) )
    {
      v10 = -1073741823;
      goto LABEL_41;
    }
    v10 = KiInitializePrcbContext((__int64)v6, v26);
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
      || (v10 = HvlInitializeProcessor((_SLIST_HEADER *)v6, v27, a3), v10 < 0) )
    {
LABEL_41:
      if ( v6 )
        KiRemoveProcessorFromGroupDatabase((__int64)v6);
      goto LABEL_43;
    }
    v16 = ExPageLockHandle;
    v6->ProcessorProfileControlArea = 0LL;
    v6->ProfileEventIndexAddress = &v6->ProfileEventIndexAddress;
    MiLockPagableImageSection((ULONG_PTR)v16, 1uLL);
    KiAddProcessorToGroupSchedulingDatabase((__int64)v6);
    v17 = KeLoaderBlock_0;
    KiBarrierWait = 1;
    if ( !KeLoaderBlock_0 )
    {
      KeLoaderBlock_0 = (__int64)v36;
      v36[1] = *(_OWORD *)&PsLoadedModuleList;
    }
    v10 = KiDynamicProcessorAddNotification(0, v6->Number, v6->Group, v6->GroupIndex, v27, 0);
    v18 = 2;
    if ( v10 >= 0 )
    {
      if ( (unsigned __int8)HalStartDynamicProcessor(v37, (unsigned int)v28, v27, v26) )
      {
        while ( *((_QWORD *)&v36[8] + 1) )
          _mm_pause();
        KiInitializeDynamicProcessor((__int64)v6);
        v18 = 1;
      }
      else
      {
        v10 = -1073741823;
      }
    }
    KiDynamicProcessorAddNotification(v18, v6->Number, v6->Group, v6->GroupIndex, v27, v10);
    if ( v10 >= 0 )
    {
      WheaInitializeProcessor((__int64)v6, 1u);
      CmInitializeProcessor((__int64)v6);
      KiDynamicProcessorInitialization((__int64)v6);
    }
    KeLoaderBlock_0 = v17;
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
      KiUnshadowProcessorAllocation((__int64)v6, (__int64)v37);
    MmFreeIndependentPages(v7, v29);
  }
  if ( KernelStack )
    MmDeleteKernelStack(KernelStack, 0);
  if ( v9 )
    MmDeleteKernelStack(v9, 0);
  if ( v32 )
    MmFreeIsrStack();
  return (unsigned int)v10;
}

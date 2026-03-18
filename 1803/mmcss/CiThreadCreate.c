/*
 * XREFs of CiThreadCreate @ 0x1C000AA4C
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x1C0009760 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     memset @ 0x1C0001680 (memset.c)
 *     CiLogThreadJoin @ 0x1C0001C2C (CiLogThreadJoin.c)
 *     WPP_SF_ @ 0x1C0001EC4 (WPP_SF_.c)
 *     CiTaskIndexDereference @ 0x1C0002320 (CiTaskIndexDereference.c)
 *     CiDecrementTotalThreadCount @ 0x1C00023DC (CiDecrementTotalThreadCount.c)
 *     CiThreadInsertInTree @ 0x1C00023E8 (CiThreadInsertInTree.c)
 *     CiTryIncrementTotalThreadCount @ 0x1C0002544 (CiTryIncrementTotalThreadCount.c)
 *     WPP_SF_dI @ 0x1C0002568 (WPP_SF_dI.c)
 *     CiSchedulerAddThread @ 0x1C00028E0 (CiSchedulerAddThread.c)
 *     CiSchedulerPoke @ 0x1C0002B84 (CiSchedulerPoke.c)
 *     CiProcessLocate @ 0x1C0009280 (CiProcessLocate.c)
 *     CiThreadCleanup @ 0x1C000A8DC (CiThreadCleanup.c)
 *     CiThreadDereference @ 0x1C000ADB0 (CiThreadDereference.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000ADE8 (CiThreadIncrementScheduledCount.c)
 *     CiThreadUpdatePriorities @ 0x1C000AF10 (CiThreadUpdatePriorities.c)
 *     CiProcessAddThread @ 0x1C000AFEC (CiProcessAddThread.c)
 *     CiProcessCreate @ 0x1C000B038 (CiProcessCreate.c)
 *     CiProcessDereference @ 0x1C000B1BC (CiProcessDereference.c)
 */

__int64 __fastcall CiThreadCreate(struct _KTHREAD *Object, __int64 a2, __int64 *a3)
{
  __int64 v3; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 v8; // rsi
  int v9; // ebx
  volatile signed __int32 *v10; // rcx
  PVOID PoolWithQuotaTag; // rax
  __int64 v13; // rbx
  NTSTATUS InformationThread; // edi
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  _BYTE ThreadInformation[32]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+50h] [rbp-48h]
  int v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+5Ch] [rbp-3Ch]
  __int64 v22; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 136);
  ThreadProcess = PsGetThreadProcess(Object);
  v23 = CiProcessLocate((unsigned __int64)ThreadProcess);
  v8 = v23;
  if ( !v23 )
  {
    v9 = CiProcessCreate(&v23);
    if ( v9 < 0 )
    {
LABEL_9:
      CiTaskIndexDereference((volatile signed __int64 *)a2);
      return (unsigned int)v9;
    }
    v8 = v23;
  }
  v9 = CiTryIncrementTotalThreadCount(&CiTotalThreads, 256);
  if ( v9 < 0 )
  {
LABEL_8:
    CiProcessDereference((PVOID)v8);
    goto LABEL_9;
  }
  v9 = CiTryIncrementTotalThreadCount((volatile signed __int32 *)(v8 + 92), CiMaxThreadsPerProcess);
  if ( v9 < 0 )
  {
    v10 = &CiTotalThreads;
LABEL_7:
    CiDecrementTotalThreadCount(v10);
    goto LABEL_8;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x98uLL, 0x4873634Du);
  v13 = (__int64)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v9 = -1073741801;
    CiDecrementTotalThreadCount(&CiTotalThreads);
    v10 = (volatile signed __int32 *)(v8 + 92);
    goto LABEL_7;
  }
  memset(PoolWithQuotaTag, 0, 0x98uLL);
  *(_QWORD *)(v13 + 72) = a2;
  *(_DWORD *)v13 = 0;
  *(_QWORD *)(v13 + 32) = 1LL;
  *(_QWORD *)(v13 + 64) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(v13 + 128) = v8;
  InformationThread = ZwQueryInformationThread(
                        (HANDLE)0xFFFFFFFFFFFFFFFELL,
                        ThreadBasicInformation,
                        ThreadInformation,
                        0x30u,
                        0LL);
  if ( InformationThread < 0 )
    goto LABEL_27;
  *(_DWORD *)(v13 + 108) = v20;
  *(_DWORD *)(v13 + 144) = v21;
  *(_QWORD *)(v13 + 136) = v19;
  v15 = *(_BYTE *)(v3 + 1);
  *(_BYTE *)(v13 + 105) = 8;
  if ( !v15 )
    v15 = 1;
  *(_BYTE *)(v13 + 106) = v15;
  *(_BYTE *)(v13 + 104) = *(_BYTE *)v3;
  v22 = *(_QWORD *)(v3 + 32);
  if ( v22 != v19 )
  {
    v22 = *(_QWORD *)(v3 + 32);
    InformationThread = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &v22, 8u);
    if ( InformationThread < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_dI((__int64)WPP_GLOBAL_Control->AttachedDevice, v16, v17, InformationThread, v22);
      if ( InformationThread != -1073741811 || (~qword_1C0006210 & v22) != 0 )
        goto LABEL_27;
    }
  }
  *(_QWORD *)(v13 + 96) = Object;
  if ( !(unsigned __int8)CiThreadInsertInTree(v13) )
  {
    *(_QWORD *)(v13 + 96) = 0LL;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_f6806cb8b818300a6165f8fb8ae15b34_Traceguids);
    InformationThread = -1073740542;
LABEL_27:
    CiThreadCleanup(v13);
    CiThreadDereference(v13);
    return (unsigned int)InformationThread;
  }
  CiThreadUpdatePriorities(v13, v3, 0LL);
  if ( byte_1C00062B0 )
    CiLogThreadJoin(v13);
  ObfReferenceObject(Object);
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  CiProcessAddThread(v13);
  if ( (*(_BYTE *)(v3 + 3) & 1) != 0 )
    CiSchedulerAddThread(a2, v13);
  if ( (*(_BYTE *)(v13 + 148) & 1) == 0 )
    CiThreadIncrementScheduledCount(v13);
  *(_QWORD *)(v8 + 24) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 16, 0LL);
  *a3 = v13;
  CiSchedulerPoke(1u);
  return 0LL;
}

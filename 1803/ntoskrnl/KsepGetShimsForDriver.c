/*
 * XREFs of KsepGetShimsForDriver @ 0x1405FC594
 * Callers:
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolAllocatePaged @ 0x140161A68 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x140161AC4 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepDbGetDriverShims @ 0x1405FC67C (KsepDbGetDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x1405FC854 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1405FE30C (KsepEngineGetShimsFromRegistry.c)
 *     KsepIsModuleShimmed @ 0x1405FE494 (KsepIsModuleShimmed.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140745B44 (KsepResolveApplicableShimsForDriver.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  int ShimsFromRegistry; // edi
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebx
  _QWORD *Paged; // rax
  _QWORD *v16; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
  v24 = 0LL;
  v23 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v25 = 0LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v25) )
  {
    v12 = v25;
    *a5 = *(_QWORD *)(v25 + 32);
    *a6 = *(_DWORD *)(v12 + 24);
    return 0LL;
  }
  ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v24, &v23);
  if ( ShimsFromRegistry == -1073741275 )
    ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v24, (__int64)&v23);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v13 = v24;
  v14 = v23;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v24, v23);
  if ( ShimsFromRegistry < 0 )
  {
LABEL_12:
    if ( v13 && v14 )
      KsepDbFreeDriverShims(v13, v14);
    goto LABEL_6;
  }
  Paged = KsepPoolAllocatePaged(0x28uLL);
  v16 = Paged;
  if ( !Paged )
  {
    ShimsFromRegistry = -1073741670;
    goto LABEL_12;
  }
  Paged[4] = v13;
  *((_DWORD *)Paged + 6) = v14;
  Paged[2] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDF10, 0LL);
  v21 = (_QWORD *)qword_1403CDF08;
  if ( *(_UNKNOWN **)qword_1403CDF08 != &unk_1403CDF00 )
    __fastfail(3u);
  *v16 = &unk_1403CDF00;
  v16[1] = v21;
  *v21 = v16;
  qword_1403CDF08 = (__int64)v16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v18, v19, v20);
  KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_5:
  *a5 = v24;
  *a6 = v23;
LABEL_6:
  if ( ShimsFromRegistry >= 0 )
  {
    v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v22]) = 0;
    LODWORD(KsepHistoryMessages[v22]) = 459108;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
  }
  return (unsigned int)ShimsFromRegistry;
}

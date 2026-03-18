/*
 * XREFs of KsepGetShimsForDriver @ 0x140545FD0
 * Callers:
 *     KseDriverLoadImage @ 0x140546568 (KseDriverLoadImage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x1400FA05C (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 *     KsepIsModuleShimmed @ 0x140546954 (KsepIsModuleShimmed.c)
 *     KsepDbGetDriverShims @ 0x140546B28 (KsepDbGetDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x140546CFC (KsepDbFreeDriverShims.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1405C5620 (KsepResolveApplicableShimsForDriver.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, unsigned int *a6)
{
  int v6; // ebx
  int ShimsFromRegistry; // edi
  __int64 v12; // r14
  unsigned int v13; // ebx
  _QWORD *Paged; // rax
  _QWORD *v15; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // rax
  char v18; // bl
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
  v22 = 0LL;
  v21 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v23 = 0LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v23) )
  {
    v20 = v23;
    *a5 = *(_QWORD *)(v23 + 32);
    *a6 = *(_DWORD *)(v20 + 24);
    return 0LL;
  }
  ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v22, &v21);
  if ( ShimsFromRegistry == -1073741275 )
    ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v22, (__int64)&v21);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v12 = v22;
  v13 = v21;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v22, v21);
  if ( ShimsFromRegistry < 0 )
  {
LABEL_18:
    if ( v12 && v13 )
      KsepDbFreeDriverShims(v12, v13);
    goto LABEL_6;
  }
  Paged = KsepPoolAllocatePaged(0x28uLL);
  v15 = Paged;
  if ( !Paged )
  {
    ShimsFromRegistry = -1073741670;
    goto LABEL_18;
  }
  Paged[4] = v12;
  *((_DWORD *)Paged + 6) = v13;
  Paged[2] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140387FB0, 0LL);
  v17 = (_QWORD *)qword_140387FA8;
  if ( *(_UNKNOWN **)qword_140387FA8 != &unk_140387FA0 )
    __fastfail(3u);
  *v15 = &unk_140387FA0;
  v15[1] = v17;
  *v17 = v15;
  qword_140387FA8 = (__int64)v15;
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
  KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_5:
  *a5 = v22;
  *a6 = v21;
LABEL_6:
  if ( ShimsFromRegistry >= 0 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v19]) = 0;
    LODWORD(KsepHistoryMessages[v19]) = 459108;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
  }
  return (unsigned int)ShimsFromRegistry;
}

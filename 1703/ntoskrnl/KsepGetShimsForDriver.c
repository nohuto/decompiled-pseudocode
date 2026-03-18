/*
 * XREFs of KsepGetShimsForDriver @ 0x1404B45D8
 * Callers:
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14006D900 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x14006D95C (KsepLogInfo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepDebugPrint @ 0x140208448 (KsepDebugPrint.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1404B4D0C (KsepEngineGetShimsFromRegistry.c)
 *     KsepIsModuleShimmed @ 0x1404B4F4C (KsepIsModuleShimmed.c)
 *     KsepDbGetDriverShims @ 0x1404B502C (KsepDbGetDriverShims.c)
 *     KsepDbFreeDriverShims @ 0x1404B5204 (KsepDbFreeDriverShims.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14059873C (KsepResolveApplicableShimsForDriver.c)
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
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
  v21 = 0LL;
  v20 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v22 = 0LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v22) )
  {
    v19 = v22;
    *a5 = *(_QWORD *)(v22 + 32);
    *a6 = *(_DWORD *)(v19 + 24);
    return 0LL;
  }
  ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v21, &v20);
  if ( ShimsFromRegistry == -1073741275 )
    ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v21, (__int64)&v20);
  if ( ShimsFromRegistry < 0 )
    goto LABEL_5;
  v12 = v21;
  v13 = v20;
  ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v21, v20);
  if ( ShimsFromRegistry < 0 )
  {
LABEL_19:
    if ( v12 && v13 )
      KsepDbFreeDriverShims(v12, v13);
    goto LABEL_6;
  }
  Paged = KsepPoolAllocatePaged(0x28uLL);
  v15 = Paged;
  if ( !Paged )
  {
    ShimsFromRegistry = -1073741670;
    goto LABEL_19;
  }
  Paged[4] = v12;
  *((_DWORD *)Paged + 6) = v13;
  Paged[2] = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036BCB0, 0LL);
  v17 = (_QWORD *)qword_14036BCA8;
  if ( *(_UNKNOWN **)qword_14036BCA8 != &unk_14036BCA0 )
    __fastfail(3u);
  *v15 = &unk_14036BCA0;
  v15[1] = v17;
  *v17 = v15;
  qword_14036BCA8 = (__int64)v15;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BCB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BCB0);
  KeAbPostRelease((ULONG_PTR)&qword_14036BCB0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_5:
  *a5 = v21;
  *a6 = v20;
LABEL_6:
  if ( ShimsFromRegistry >= 0 )
  {
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v18]) = 0;
    LODWORD(KsepHistoryMessages[v18]) = 459108;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(7LL, "KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
  }
  return (unsigned int)ShimsFromRegistry;
}

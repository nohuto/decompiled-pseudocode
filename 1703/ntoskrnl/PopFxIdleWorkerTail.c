/*
 * XREFs of PopFxIdleWorkerTail @ 0x140069A78
 * Callers:
 *     PoFxCompleteIdleCondition @ 0x140033820 (PoFxCompleteIdleCondition.c)
 *     PopFxIdleWorker @ 0x140069984 (PopFxIdleWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x140068FE0 (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x140069078 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140069C1C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x140069C9C (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x140069D40 (PoFxIdleComponent.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140069EE0 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopPluginComponentActive @ 0x14006A38C (PopPluginComponentActive.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  KIRQL v8; // r12
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // r8
  unsigned int i; // edi
  signed __int32 v15; // eax
  KIRQL v16; // r15
  __int64 v17; // r8
  void (__fastcall *v18)(_QWORD, _QWORD); // rax

  v6 = *(_QWORD *)(BugCheckParameter2[79] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(int *)(v6 + 216) >= 1 )
  {
    v9 = *(_QWORD *)(v6 + 224);
    if ( v7 > v9 && *(_BYTE *)(v6 + 208) )
      *(_QWORD *)(v6 + 240) += v7 - v9;
    *(_BYTE *)(v6 + 208) = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
  __writecr8(v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  PpmInterlockedUpdateTimeNoFence(BugCheckParameter2 + 60, v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  v11 = *(_DWORD *)(v6 + 88);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), v11, v11);
  }
  while ( v12 != v11 );
  if ( v11 == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, v10, a3) == 1 )
      PopFxProcessWork(0LL, a3, v13);
    for ( i = 0; i < *(_DWORD *)(v6 + 172); ++i )
      PoFxIdleComponent(BugCheckParameter2, *(unsigned int *)(*(_QWORD *)(v6 + 176) + 8LL * i), 2LL);
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000);
    if ( v15 != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      LOBYTE(v15) = PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    PopFxAddRefDevice((ULONG_PTR)BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(int *)(v6 + 216) >= 1 )
    {
      *(_QWORD *)(v6 + 224) = v7;
      *(_BYTE *)(v6 + 208) = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
    __writecr8(v16);
    LOBYTE(v17) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, v17);
    v18 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[14];
    if ( v18 )
      v18(BugCheckParameter2[22], a2);
    LOBYTE(v15) = PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
  return v15;
}

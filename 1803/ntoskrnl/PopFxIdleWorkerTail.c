/*
 * XREFs of PopFxIdleWorkerTail @ 0x140078414
 * Callers:
 *     PopFxIdleWorker @ 0x140078330 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x1400C8140 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PopFxActivateComponentWorker @ 0x1400781D4 (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x14007826C (PopFxAddRefDevice.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400785AC (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x140078628 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400786D0 (PoFxIdleComponent.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140078860 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140078894 (PopFxUpdateAccountingActiveTime.c)
 *     PopPluginComponentActive @ 0x140078D5C (PopPluginComponentActive.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  KIRQL v8; // r12
  __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // r8
  unsigned int i; // esi
  signed __int32 v14; // eax
  KIRQL v15; // r15
  __int64 v16; // r8
  void (__fastcall *v17)(_QWORD, _QWORD); // rax

  v6 = *(_QWORD *)(BugCheckParameter2[89] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(int *)(v6 + 216) >= 1 )
  {
    PopFxUpdateAccountingActiveTime(v6 + 200, v7, 0LL);
    *(_BYTE *)(v6 + 208) = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
  __writecr8(v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  PpmInterlockedUpdateTimeNoFence(BugCheckParameter2 + 60, v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  v10 = *(_DWORD *)(v6 + 88);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), v10, v10);
  }
  while ( v11 != v10 );
  if ( v10 == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, v9, a3) == 1 )
      PopFxProcessWork(0LL, a3, v12);
    for ( i = 0; i < *(_DWORD *)(v6 + 172); ++i )
      PoFxIdleComponent(BugCheckParameter2, *(unsigned int *)(*(_QWORD *)(v6 + 176) + 8LL * i), 2LL);
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000);
    if ( v14 != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      LOBYTE(v14) = PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    PopFxAddRefDevice((ULONG_PTR)BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(int *)(v6 + 216) >= 1 )
    {
      *(_QWORD *)(v6 + 224) = v7;
      *(_BYTE *)(v6 + 208) = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
    __writecr8(v15);
    LOBYTE(v16) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, v16);
    v17 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[14];
    if ( v17 )
      v17(BugCheckParameter2[22], a2);
    LOBYTE(v14) = PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
  return v14;
}

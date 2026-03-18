/*
 * XREFs of PopFxIdleWorkerTail @ 0x1400FE1D8
 * Callers:
 *     PopFxIdleWorker @ 0x1400FE0E4 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x14012A750 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     PopPluginComponentActive @ 0x14001AF0C (PopPluginComponentActive.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxIdleComponent @ 0x1400E4020 (PoFxIdleComponent.c)
 *     PopFxActivateComponentWorker @ 0x1400FD7C0 (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x1400FD858 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400FE048 (PopFxCompleteComponentActivation.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400FE378 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400FE3F4 (PpmInterlockedUpdateTimeNoFence.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  KIRQL v8; // r12
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // r8
  unsigned int i; // edi
  KIRQL v16; // r15
  __int64 v17; // r8
  void (__fastcall *v18)(_QWORD, _QWORD); // rax

  v6 = *(_QWORD *)(BugCheckParameter2[79] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(int *)(v6 + 216) >= 1 )
  {
    if ( *(_BYTE *)(v6 + 208) )
    {
      v9 = *(_QWORD *)(v6 + 224);
      if ( v7 > v9 )
        *(_QWORD *)(v6 + 240) += v7 - v9;
    }
    *(_BYTE *)(v6 + 208) = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
  __writecr8(v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  PpmInterlockedUpdateTimeNoFence(BugCheckParameter2 + 60, v7, 0LL, v10);
  _m_prefetchw((const void *)(v6 + 88));
  v12 = *(_DWORD *)(v6 + 88);
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), v12, v12);
  }
  while ( v13 != v12 );
  if ( v12 == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive((__int64)BugCheckParameter2, a2, v11, a3) == 1 )
      PopFxProcessWork(0LL, a3, v14);
    for ( i = 0; i < *(_DWORD *)(v6 + 172); ++i )
      PoFxIdleComponent((ULONG_PTR)BugCheckParameter2, *(unsigned int *)(*(_QWORD *)(v6 + 176) + 8LL * i));
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000) != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
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
    PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2, v6, 1);
  }
}

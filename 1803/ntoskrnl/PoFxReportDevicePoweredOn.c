/*
 * XREFs of PoFxReportDevicePoweredOn @ 0x140165D00
 * Callers:
 *     <none>
 * Callees:
 *     PopFxCompleteDevicePowerRequired @ 0x140077A30 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxIdleComponent @ 0x1400786EC (PopFxIdleComponent.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401666C8 (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x140166F3C (PopPepDeviceDState.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     PopSystemIrpCompletion @ 0x1404756C0 (PopSystemIrpCompletion.c)
 */

char __fastcall PoFxReportDevicePoweredOn(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rsi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  volatile LONG *v8; // r14
  KIRQL v9; // al
  __int64 v10; // rbp
  int v11; // edi
  KIRQL v12; // r15
  int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rbp
  unsigned int i; // esi
  signed __int32 v18; // eax
  signed __int32 v19; // ett

  v5 = *(_QWORD *)(BugCheckParameter2 + 48);
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFD) & 2) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v6 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v6, v6);
    }
    while ( v7 != v6 );
    LOBYTE(a4) = v6 & 1;
    LOBYTE(a3) = 1;
    PopPepDeviceDState(*(_QWORD *)(BugCheckParameter2 + 56), 1LL, a3, a4);
    PopDiagTraceFxDevicePowerState(v5, 1LL);
  }
  v8 = (volatile LONG *)(v5 + 88);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v10 = 0LL;
  v11 = _InterlockedExchange((volatile __int32 *)(v5 + 124), 0);
  v12 = v9;
  if ( v11 > 0 )
  {
    v13 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
    if ( v11 > v13 )
      PopFxBugCheck(0x602uLL, v5, v11, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFF7FE);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v13 - v11;
    v14 = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( (*(_DWORD *)(v14 + 296) & 4) != 0 )
    {
      v15 = *(_DWORD *)(BugCheckParameter2 + 708);
      v16 = (unsigned int)v11;
      do
      {
        for ( i = 0; i < v15; ++i )
        {
          PopFxIdleComponent(BugCheckParameter2, i, 2);
          v15 = *(_DWORD *)(BugCheckParameter2 + 708);
        }
        --v16;
      }
      while ( v16 );
      v14 = *(_QWORD *)(BugCheckParameter2 + 48);
    }
    v10 = *(_QWORD *)(v14 + 264);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  LOBYTE(v18) = v12;
  __writecr8(v12);
  if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v18 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v18, v18);
    }
    while ( v19 != v18 );
    if ( (v18 & 0x400) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFBFF);
      LOBYTE(v18) = PopSystemIrpCompletion(0LL, v10, *(_QWORD *)(v10 + 72LL * (*(char *)(v10 + 66) - 1) + 272));
    }
  }
  if ( !v11 )
    LOBYTE(v18) = PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
  return v18;
}

/*
 * XREFs of PoFxReportDevicePoweredOn @ 0x140144960
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140068D70 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxIdleComponent @ 0x140069D5C (PopFxIdleComponent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401450B0 (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x140145904 (PopPepDeviceDState.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

char __fastcall PoFxReportDevicePoweredOn(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rsi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  volatile LONG *v8; // r14
  KIRQL v9; // r15
  int v10; // edi
  char result; // al
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rbp
  unsigned int i; // esi

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
  v10 = _InterlockedExchange((volatile __int32 *)(v5 + 124), 0);
  if ( v10 > 0 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
    if ( v10 > v12 )
      PopFxBugCheck(0x602uLL, v5, v10, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFE);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v12 - v10;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 296LL) & 4) != 0 )
    {
      v13 = *(_DWORD *)(BugCheckParameter2 + 628);
      v14 = (unsigned int)v10;
      do
      {
        for ( i = 0; i < v13; ++i )
        {
          PopFxIdleComponent(BugCheckParameter2, i, 2);
          v13 = *(_DWORD *)(BugCheckParameter2 + 628);
        }
        --v14;
      }
      while ( v14 );
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  result = v9;
  __writecr8(v9);
  if ( !v10 )
    return PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
  return result;
}

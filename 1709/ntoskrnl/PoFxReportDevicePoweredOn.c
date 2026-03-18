/*
 * XREFs of PoFxReportDevicePoweredOn @ 0x140122E10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400FD900 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140123484 (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x140123504 (PopPepDeviceDState.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 *     PopSystemIrpCompletion @ 0x140437950 (PopSystemIrpCompletion.c)
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
  signed __int32 v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rbp
  unsigned int i; // esi
  signed __int32 v18; // ett
  _BYTE v20[64]; // [rsp+20h] [rbp-58h] BYREF

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
    v14 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
    if ( v11 > v14 )
      PopFxBugCheck(0x602uLL, v5, v11, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFF7FE);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v14 - v11;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 296LL) & 4) != 0 )
    {
      v15 = *(_DWORD *)(BugCheckParameter2 + 628);
      v16 = (unsigned int)v11;
      do
      {
        for ( i = 0; i < v15; ++i )
        {
          PopFxIdleComponent(BugCheckParameter2, i, 2, (__int64)v20);
          v15 = *(_DWORD *)(BugCheckParameter2 + 628);
        }
        --v16;
      }
      while ( v16 );
    }
    v10 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 264LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  LOBYTE(v13) = v12;
  __writecr8(v12);
  if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v13 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v18 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v13, v13);
    }
    while ( v18 != v13 );
    if ( (v13 & 0x400) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFBFF);
      LOBYTE(v13) = PopSystemIrpCompletion(0LL, v10, *(_QWORD *)(v10 + 72LL * (*(char *)(v10 + 66) - 1) + 272));
    }
  }
  if ( !v11 )
    LOBYTE(v13) = PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
  return v13;
}

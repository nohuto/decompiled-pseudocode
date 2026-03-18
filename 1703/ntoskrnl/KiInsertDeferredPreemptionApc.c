/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x14003FE18
 * Callers:
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1401136E0 (KiDeferGroupSchedulingPreemption.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14003FFA4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140040128 (KiInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xAu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x200) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 9u);
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v8);
      result = *(_QWORD *)(a2 + 64);
    }
    while ( result );
  }
  if ( !*(_BYTE *)(a2 + 730) && (*(_DWORD *)(a2 + 116) & 0x4000) != 0 )
  {
    *(_BYTE *)(a2 + 730) = 1;
    KiInsertQueueApc(a2 + 648);
    LOBYTE(v5) = 2;
    result = KiSignalThreadForApc(a1, v6, v5);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}

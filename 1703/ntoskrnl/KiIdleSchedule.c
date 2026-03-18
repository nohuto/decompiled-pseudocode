/*
 * XREFs of KiIdleSchedule @ 0x140042E90
 * Callers:
 *     KiIdleLoop @ 0x140184ED0 (KiIdleLoop.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiSearchForNewThread @ 0x1400EB7B0 (KiSearchForNewThread.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402043D4 (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 11883) = 0;
  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v2 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v2, 0LL);
  _enable();
  LOBYTE(v3) = 1;
  result = KiSearchForNewThread(a1, v3);
  if ( result )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    if ( (unsigned __int8)KeHeteroSystem >= 2u )
      KiSendHeteroRescheduleIntRequest(a1);
    v6 = *(_QWORD *)(a1 + 24);
    _disable();
    LOBYTE(v5) = 1;
    KiStartThreadCycleAccumulation(a1, v6, v5);
    _enable();
    return 0LL;
  }
  return result;
}

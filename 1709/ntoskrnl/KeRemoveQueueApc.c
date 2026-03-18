/*
 * XREFs of KeRemoveQueueApc @ 0x140126E68
 * Callers:
 *     ExpCancelTimer @ 0x1400E1D98 (ExpCancelTimer.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140129264 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14027F20C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x14027FA30 (EtwpQueueStackWalkApc.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiRemoveQueueApc @ 0x140126ECC (KiRemoveQueueApc.c)
 */

__int64 __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(_QWORD *)(v2 + 64) );
  }
  result = KiRemoveQueueApc(a1);
  *(_QWORD *)(v2 + 64) = 0LL;
  __writecr8(CurrentIrql);
  return result;
}

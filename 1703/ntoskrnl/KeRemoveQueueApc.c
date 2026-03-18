/*
 * XREFs of KeRemoveQueueApc @ 0x14003179C
 * Callers:
 *     ExpCancelTimer @ 0x140049910 (ExpCancelTimer.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140256638 (EtwpTraceThreadRundownWithStack.c)
 *     CmNotifyRunDown @ 0x14053F248 (CmNotifyRunDown.c)
 * Callees:
 *     KiRemoveQueueApc @ 0x140031810 (KiRemoveQueueApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
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

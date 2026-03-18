/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x140788EBC
 * Callers:
 *     DestroyAggregateSession @ 0x140788F40 (DestroyAggregateSession.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExDeleteTimer @ 0x14012F420 (ExDeleteTimer.c)
 */

char __fastcall CancelTimerCallbacksAndDeleteTimer(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // dx
  __int64 v4; // rcx
  char result; // al
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 360) )
  {
    v2 = *(_QWORD *)(a1 + 264);
    v3 = *(_WORD *)(v2 + 56);
    *(_WORD *)(v2 + 56) = 2;
    if ( v3 == 1 )
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 264) + 32LL), Executive, 0, 0, 0LL);
    v4 = *(_QWORD *)(a1 + 360);
    memset(v6, 0, 24);
    result = ExDeleteTimer(v4, 1, 1, (unsigned int *)v6);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  return result;
}

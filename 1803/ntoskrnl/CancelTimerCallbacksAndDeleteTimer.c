/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x1407F5684
 * Callers:
 *     DestroyAggregateSession @ 0x1407F5708 (DestroyAggregateSession.c)
 * Callees:
 *     ExDeleteTimer @ 0x1400846E0 (ExDeleteTimer.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall CancelTimerCallbacksAndDeleteTimer(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // dx
  ULONG_PTR v4; // rcx
  __int64 result; // rax
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

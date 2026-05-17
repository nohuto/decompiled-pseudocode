/*
 * XREFs of TppItePush @ 0x180071E24
 * Callers:
 *     TppCancelTimer @ 0x18000FA40 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall TppItePush(signed __int64 *a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // r8

  a2[1] = (signed __int64)NtCurrentTeb()->ClientId.UniqueThread;
  _m_prefetchw(a1);
  result = *a1;
  do
  {
    v3 = result;
    *a2 = result;
    result = _InterlockedCompareExchange64(a1, (signed __int64)a2, result);
  }
  while ( result != v3 );
  return result;
}

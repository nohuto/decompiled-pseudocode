/*
 * XREFs of TpSetTimer @ 0x180017500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TpSetTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return TpSetTimerEx(a1, a2, a3, a4, a5);
}

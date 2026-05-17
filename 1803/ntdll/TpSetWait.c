/*
 * XREFs of TpSetWait @ 0x1800247C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpSetWait(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return TpSetWaitEx(a1, a2, a3, 0LL, a5, a6);
}

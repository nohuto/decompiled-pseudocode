/*
 * XREFs of sub_1800D66F0 @ 0x1800D66F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D66F0(unsigned __int64 a1, __int64 a2)
{
  if ( !qword_18016F268 )
    return 3221225485LL;
  LOBYTE(a2) = a1 & 1;
  return qword_18016F268(a1 & 0xFFFFFFFFFFFFFFFEuLL, a2);
}

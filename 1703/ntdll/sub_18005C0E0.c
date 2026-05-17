/*
 * XREFs of sub_18005C0E0 @ 0x18005C0E0
 * Callers:
 *     sub_18005AD34 @ 0x18005AD34 (sub_18005AD34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005C0E0(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  if ( a1 < a2 )
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  else
  {
    *a3 = a1 - a2;
    return 0LL;
  }
}

/*
 * XREFs of sub_18005BD74 @ 0x18005BD74
 * Callers:
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005BD74(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax

  v3 = -1LL;
  if ( a1 + a2 >= a1 )
    v3 = a1 + a2;
  *a3 = v3;
  return a1 + a2 < a1 ? 0xC0000095 : 0;
}

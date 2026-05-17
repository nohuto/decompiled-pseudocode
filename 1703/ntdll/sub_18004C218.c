/*
 * XREFs of sub_18004C218 @ 0x18004C218
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004C218(unsigned int a1, int a2, int *a3)
{
  int v3; // eax

  v3 = -1;
  if ( a1 + a2 >= a1 )
    v3 = a1 + a2;
  *a3 = v3;
  return a1 + a2 < a1 ? 0xC0000095 : 0;
}

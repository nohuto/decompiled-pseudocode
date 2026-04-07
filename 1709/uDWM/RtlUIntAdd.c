/*
 * XREFs of RtlUIntAdd @ 0x180040378
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180040394 (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUIntAdd(unsigned int a1, int a2, int *a3)
{
  int v3; // eax

  v3 = -1;
  if ( a1 + a2 >= a1 )
    v3 = a1 + a2;
  *a3 = v3;
  return a1 + a2 < a1 ? 0xC0000095 : 0;
}

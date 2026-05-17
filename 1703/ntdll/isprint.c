/*
 * XREFs of isprint @ 0x180096690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180155150[v1] & 0x157;
}

/*
 * XREFs of isspace @ 0x1800914F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180159150[v1] & 8;
}

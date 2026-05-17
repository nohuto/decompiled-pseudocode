/*
 * XREFs of iscntrl @ 0x1800965D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iscntrl(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180155150[v1] & 0x20;
}

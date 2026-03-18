/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x140789170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetThreadPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  _BYTE *Teb; // rcx
  char result; // al

  if ( a1 > 3u )
    return -1;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( !Teb )
    return -2;
  result = Teb[640];
  Teb[640] = a1;
  return result;
}

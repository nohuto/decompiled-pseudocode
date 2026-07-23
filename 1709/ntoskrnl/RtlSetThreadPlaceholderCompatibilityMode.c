/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x140725800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetThreadPlaceholderCompatibilityMode(CHAR Mode)
{
  _BYTE *Teb; // rcx
  CHAR result; // al

  if ( (unsigned __int8)Mode > 2u )
    return -1;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( !Teb )
    return -2;
  result = Teb[640];
  Teb[640] = Mode;
  return result;
}

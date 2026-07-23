/*
 * XREFs of RtlQueryThreadPlaceholderCompatibilityMode @ 0x1407257B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryThreadPlaceholderCompatibilityMode(void)
{
  _BYTE *Teb; // rcx
  CHAR result; // al

  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  result = -2;
  if ( Teb )
    return Teb[640];
  return result;
}

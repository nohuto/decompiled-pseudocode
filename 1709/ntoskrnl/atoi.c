/*
 * XREFs of atoi @ 0x14015E1A0
 * Callers:
 *     KiInitializeBootStructures @ 0x1404270C0 (KiInitializeBootStructures.c)
 * Callees:
 *     atol @ 0x14015E1C0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}

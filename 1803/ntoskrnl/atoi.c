/*
 * XREFs of atoi @ 0x140187EA0
 * Callers:
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 * Callees:
 *     atol @ 0x140187EC0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}

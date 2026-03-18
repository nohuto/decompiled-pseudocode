/*
 * XREFs of SmCrGenRandom @ 0x14024FD50
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1407026A8 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x140703C98 (SmCrEncStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmCrGenRandom(void *a1, ULONG a2, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(a1, (PUCHAR)a1, a2, a4);
}

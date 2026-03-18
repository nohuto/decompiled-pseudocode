/*
 * XREFs of SmCrGenRandom @ 0x1402A9444
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14079D9B0 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14079EFA0 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x14029F4EC (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}

/*
 * XREFs of SmCrGenRandom @ 0x1402763B8
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14073A9AC (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14073BF9C (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x14025DC14 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}

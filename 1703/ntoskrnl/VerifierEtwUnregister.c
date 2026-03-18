/*
 * XREFs of VerifierEtwUnregister @ 0x1407834C0
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetEtwUnregister @ 0x140774F8C (VfTargetEtwUnregister.c)
 */

__int64 __fastcall VerifierEtwUnregister(__int64 a1)
{
  VfTargetEtwUnregister(a1);
  return ((__int64 (__fastcall *)(__int64))pXdvEtwUnregister)(a1);
}

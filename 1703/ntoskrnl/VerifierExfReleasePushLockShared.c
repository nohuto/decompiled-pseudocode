/*
 * XREFs of VerifierExfReleasePushLockShared @ 0x14077FF70
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14078020C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfReleasePushLockShared(__int64 a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235LL, a1);
  return ((__int64 (__fastcall *)(__int64))pXdvExfReleasePushLockShared)(a1);
}

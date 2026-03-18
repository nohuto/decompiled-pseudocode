/*
 * XREFs of VerifierExfAcquirePushLockShared @ 0x14077FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14078020C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfAcquirePushLockShared(__int64 a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(234LL, a1);
  return ((__int64 (__fastcall *)(__int64))pXdvExfAcquirePushLockShared)(a1);
}

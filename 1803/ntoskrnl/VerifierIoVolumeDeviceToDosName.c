/*
 * XREFs of VerifierIoVolumeDeviceToDosName @ 0x140821210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoVolumeDeviceToDosName(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (MmVerifierData & 0x10) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
      VerifierBugCheckIfAppropriate(0xC4u, 0xE5uLL, CurrentIrql, 0LL, 0LL);
  }
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvIoVolumeDeviceToDosName)(a1, a2);
}

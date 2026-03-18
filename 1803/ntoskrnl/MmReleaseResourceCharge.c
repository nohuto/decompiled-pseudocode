/*
 * XREFs of MmReleaseResourceCharge @ 0x140097824
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140097750 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140097798 (MmChargeResources.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

unsigned __int64 __fastcall MmReleaseResourceCharge(unsigned __int64 a1, __int64 a2, int a3)
{
  char v3; // di
  unsigned __int64 result; // rax

  v3 = a2;
  if ( (a2 & 2) != 0 && (!a3 || a3 == 1) )
    result = MiReturnResidentAvailable(a1, a2);
  if ( (v3 & 1) != 0 )
    return MiReturnCommit((__int64)&MiSystemPartition, a1);
  return result;
}

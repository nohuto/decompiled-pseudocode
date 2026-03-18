/*
 * XREFs of MmChargeResources @ 0x14005DC3C
 * Callers:
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 *     HvpViewMapAcquireChargesForPinnedPages @ 0x14067600C (HvpViewMapAcquireChargesForPinnedPages.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x14005DBF8 (MmReleaseResourceCharge.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 __fastcall MmChargeResources(__int64 a1, char a2, unsigned int a3, char a4)
{
  unsigned int v4; // edi
  unsigned int v9; // ebx

  v4 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
      return 0;
    v4 = 2;
  }
  v9 = 1;
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit(&MiSystemPartition, a1, a4 & 1) )
    v9 = 0;
  else
    v4 = 0;
  if ( v4 )
    MmReleaseResourceCharge(a1, v4, a3);
  return v9;
}

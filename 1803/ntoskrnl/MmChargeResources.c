/*
 * XREFs of MmChargeResources @ 0x140097798
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140097750 (SmAcquireReleaseCharges.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x140097824 (MmReleaseResourceCharge.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

__int64 __fastcall MmChargeResources(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v7; // ebx

  v4 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
      return 0;
    v4 = 2;
  }
  v7 = 1;
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit(&MiSystemPartition, a1, 1LL, a4) )
    v7 = 0;
  else
    v4 = 0;
  if ( v4 )
    MmReleaseResourceCharge(a1, v4, 0LL);
  return v7;
}

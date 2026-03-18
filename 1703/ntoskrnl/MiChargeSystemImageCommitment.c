/*
 * XREFs of MiChargeSystemImageCommitment @ 0x1404B0FE4
 * Callers:
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MiMapSystemImage @ 0x1404B12D8 (MiMapSystemImage.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rbx
  int v3; // r8d

  v1 = MiSectionControlArea(a1);
  v2 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( v3 != 1 )
  {
    MiReturnCommit((__int64)&MiSystemPartition, *(unsigned int *)(*(_QWORD *)v1 + 8LL));
    if ( v2 )
      MiReturnResidentAvailable(v2);
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( (unsigned int)MiChargeCommit((unsigned __int64)&MiSystemPartition, (unsigned int)v2, 0LL) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v2, 0LL) )
      return 0LL;
    MiReturnCommit((__int64)&MiSystemPartition, v2);
  }
  return 3221225626LL;
}

/*
 * XREFs of MiChargeSystemImageCommitment @ 0x1404F5E38
 * Callers:
 *     MiMapSystemImage @ 0x1404F5F10 (MiMapSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r9
  unsigned __int64 v3; // rbx
  int v4; // r8d

  v1 = MiSectionControlArea(a1);
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( v4 != 1 )
  {
    MiReturnCommit((__int64)&MiSystemPartition, *(unsigned int *)(*(_QWORD *)v1 + 8LL));
    if ( v3 )
      MiReturnResidentAvailable(v3);
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, (unsigned int)v3, 0LL, v2) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v3) )
      return 0LL;
    MiReturnCommit((__int64)&MiSystemPartition, v3);
  }
  return 3221225626LL;
}

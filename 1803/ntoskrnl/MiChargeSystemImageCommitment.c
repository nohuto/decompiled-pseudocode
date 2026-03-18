/*
 * XREFs of MiChargeSystemImageCommitment @ 0x1405F8AB4
 * Callers:
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiMapSystemImage @ 0x1405FB30C (MiMapSystemImage.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rbx
  int v3; // r8d
  __int64 v4; // r9

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
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, (unsigned int)v2, 0) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v2, 0LL, v4) )
      return 0LL;
    MiReturnCommit((__int64)&MiSystemPartition, v2);
  }
  return 3221225626LL;
}

/*
 * XREFs of MiIsVadLarge @ 0x14000BFC0
 * Callers:
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     MiProcessVaRangesInfoClass @ 0x140575908 (MiProcessVaRangesInfoClass.c)
 *     MiRemoveVadCharges @ 0x14059D690 (MiRemoveVadCharges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x4000) != 0 )
  {
    if ( (v1 & 7) != 5 )
      return 0LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}

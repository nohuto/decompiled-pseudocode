/*
 * XREFs of MiIsVadLarge @ 0x14003D7C0
 * Callers:
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiRemoveVadCharges @ 0x140495BC0 (MiRemoveVadCharges.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     MiProcessVaRangesInfoClass @ 0x140584814 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x8000) != 0 )
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

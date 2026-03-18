/*
 * XREFs of MiIsVadLarge @ 0x1400D2CF0
 * Callers:
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
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

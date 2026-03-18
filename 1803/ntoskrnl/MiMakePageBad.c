/*
 * XREFs of MiMakePageBad @ 0x1402701E8
 * Callers:
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1402707F0 (MiScrubNode.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR a1, int a2)
{
  __int64 v4; // r8
  ULONG_PTR *v5; // rsi
  __int64 v6; // r9

  v4 = (*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL;
  v5 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v4);
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
  {
    MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v4), 1uLL, 4u);
    MiChargeResident(v5, 1uLL, 0xFFFFFFFFLL, v6);
    *(_BYTE *)(a1 + 35) |= 0x40u;
  }
  if ( a2 == 1 )
    MiInsertPageInList(a1, 0x20u);
  _InterlockedIncrement(&dword_1403CBEBC);
}

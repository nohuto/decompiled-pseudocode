/*
 * XREFs of MiMakePageBad @ 0x1402385C8
 * Callers:
 *     MiScrubLargeMappedPage @ 0x1402387C4 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140238CDC (MiScrubNode.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 */

void __fastcall MiMakePageBad(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  ULONG_PTR *v7; // rsi

  v6 = (*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL;
  v7 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v6);
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
  {
    MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * v6), 1uLL, 4LL, a4);
    MiChargeResident(v7, 1uLL);
    *(_BYTE *)(a1 + 35) |= 0x40u;
  }
  if ( a2 == 1 )
    MiInsertPageInList(a1, 32);
  _InterlockedIncrement(&dword_140388C20);
}

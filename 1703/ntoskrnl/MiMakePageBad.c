/*
 * XREFs of MiMakePageBad @ 0x140225FD8
 * Callers:
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140226610 (MiScrubNode.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

void __fastcall MiMakePageBad(__int64 a1, int a2)
{
  __int64 v4; // r8
  ULONG_PTR *v5; // rsi

  v4 = (*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL;
  v5 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v4);
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
  {
    MiChargeCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v4), 1uLL, 4uLL);
    MiChargeResident(v5, 1uLL, 0xFFFFFFFFLL);
    *(_BYTE *)(a1 + 35) |= 0x40u;
  }
  if ( a2 == 1 )
    MiInsertPageInList(a1, 0x20u);
  _InterlockedIncrement(&dword_14036CA28);
}

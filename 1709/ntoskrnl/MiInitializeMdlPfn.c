/*
 * XREFs of MiInitializeMdlPfn @ 0x1400CAAD8
 * Callers:
 *     MiInitializeMdlPages @ 0x1400CA600 (MiInitializeMdlPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x140217718 (MmAllocateNonChargedSecurePages.c)
 *     MiCreateEnclaveRegions @ 0x140850F58 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  if ( (a2 & 0x100) != 0 )
  {
    LOBYTE(v7) = 0;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    *(_QWORD *)(a1 + 24) = v4;
    v5 = 0xFFFFF68000000000uLL;
    if ( (a2 & 0x80000200) != 0 )
      v5 = 0LL;
    *(_QWORD *)(a1 + 8) = v5;
    if ( a2 < 0 )
      v6 = v4 & 0xBFFFFFFFFFFFFFFFuLL;
    else
      v6 = v4 | 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) = v6;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
      if ( (a2 & 0x20000) == 0 )
        _InterlockedIncrement64(&qword_1403885F0);
    }
    LOBYTE(v7) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = v7;
    if ( a2 < 0 )
    {
      v7 = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
      *(_QWORD *)(a1 + 40) = v7;
    }
  }
  return v7;
}

/*
 * XREFs of MiInitializeMdlPfn @ 0x1400B3814
 * Callers:
 *     MiInitializeMdlPages @ 0x1400B36CC (MiInitializeMdlPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x140255080 (MmAllocateNonChargedSecurePages.c)
 *     MiCreateEnclaveRegions @ 0x14089D418 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( (a2 & 0x100) != 0 )
  {
    v9 = v2 & 0xC000000000000000uLL;
    *(_QWORD *)(a1 + 24) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v2 & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    v5 = 0LL;
    if ( (a2 & 0x80000200) == 0 )
      v5 = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 8) = v5;
    v6 = *(_QWORD *)(a1 + 24);
    v7 = a2 & 0x80000000;
    if ( a2 < 0 )
      v8 = v6 & 0xBFFFFFFFFFFFFFFFuLL;
    else
      v8 = v6 | 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) = v8;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
      if ( (a2 & 0x20000) == 0 )
        _InterlockedIncrement64(qword_1403CB7B0);
    }
    LOBYTE(v9) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = v9;
    if ( v7 )
    {
      v9 = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
      *(_QWORD *)(a1 + 40) = v9;
    }
  }
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  *(_DWORD *)(a1 + 36) = 0;
  return v9;
}

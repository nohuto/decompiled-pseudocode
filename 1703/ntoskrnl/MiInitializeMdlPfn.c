/*
 * XREFs of MiInitializeMdlPfn @ 0x14007AD08
 * Callers:
 *     MiInitializeMdlPages @ 0x14007A868 (MiInitializeMdlPages.c)
 *     MiCreateEnclaveRegions @ 0x14080480C (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v3 = a2;
  if ( (a2 & 0x100) != 0 )
  {
    LOBYTE(v8) = 0;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    *(_QWORD *)(a1 + 24) = v5;
    v6 = 0xFFFFF68000000000uLL;
    if ( (a2 & 0x80000200) != 0 )
      v6 = 0LL;
    *(_QWORD *)(a1 + 8) = v6;
    if ( (int)a2 < 0 )
      v7 = v5 & 0xBFFFFFFFFFFFFFFFuLL;
    else
      v7 = v5 | 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) = v7;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1, a2, a3);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
      _InterlockedIncrement64(&qword_14036C2A0);
    }
    LOBYTE(v8) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = v8;
    if ( v3 < 0 )
    {
      v8 = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
      *(_QWORD *)(a1 + 40) = v8;
    }
  }
  return v8;
}

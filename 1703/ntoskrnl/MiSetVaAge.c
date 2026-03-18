/*
 * XREFs of MiSetVaAge @ 0x1400FDA60
 * Callers:
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiUpdateWsleAge @ 0x14007C37C (MiUpdateWsleAge.c)
 *     MiTrimThisWsle @ 0x1400FF1A0 (MiTrimThisWsle.c)
 *     MiResetAccessBitPte @ 0x14013F480 (MiResetAccessBitPte.c)
 * Callees:
 *     MiVolunteerForTrimFirst @ 0x1400331E0 (MiVolunteerForTrimFirst.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x1400FDBE0 (MiWriteValidPteVolatile.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiSetVaAge(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // r15
  int v6; // r12d
  _DWORD *v7; // rsi
  unsigned __int8 v8; // cl
  BOOL v9; // edx

  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v6 = 1;
    v7 = 0LL;
    v8 = MiGetWsleContents(0xFFFFF68000000000uLL, a2) & 0xF;
    v9 = v8 == 8;
  }
  else
  {
    v6 = 0;
    v7 = (_DWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(v5) - 0x58000000000LL);
    v8 = (*v7 >> 2) & 7;
    v9 = (*(_BYTE *)(a1 + 192) & 7) != 0;
  }
  if ( !v9 )
  {
    --*(_QWORD *)(a1 + 8LL * v8 + 40);
    if ( v8 == 7 )
      MiVolunteerForTrimFirst(a1, -1LL);
  }
  if ( (unsigned __int8)(a3 - 1) <= 5u && (MI_READ_PTE_LOCK_FREE(v5) & 0x20) != 0 )
    a3 = 0;
  if ( v7 )
    *v7 ^= (*v7 ^ (4 * a3)) & 0x1C;
  else
    MiWriteValidPteVolatile(v5, 0x80000000LL);
  if ( a3 < 8u && (v6 || (*(_BYTE *)(a1 + 192) & 7) == 0) )
  {
    ++*(_QWORD *)(a1 + 8LL * a3 + 40);
    if ( a3 == 7 )
      MiVolunteerForTrimFirst(a1, 1LL);
  }
}

/*
 * XREFs of MiClearPteAccessed @ 0x140121C30
 * Callers:
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400EA158 (MiCrcStillIntact.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiResetAccessBitPteWorker @ 0x14021E03C (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, int *a4, int a5, int a6)
{
  int v6; // r14d
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 PteShadow; // rax
  int VaAge; // ebx
  __int64 v15; // r8
  __int64 v16; // r9

  v6 = 0;
  v10 = a1;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    v11 = (__int64)(a3 << 25) >> 16;
    if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
    v6 = 1;
    MiLockPageAtDpcInline(a2);
    a1 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0
      || (*(_BYTE *)(v10 + 192) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
  }
  if ( a4 )
  {
    PteShadow = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
    MiWriteValidPteNewPage((unsigned __int64 *)a3, PteShadow & 0xFFFFFFFFFFFFFFDFuLL);
    if ( v6 == 1 )
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertTbFlushEntry(a4, (__int64)(a3 << 25) >> 16, 1LL, 0);
  }
  else
  {
    if ( v6 == 1 )
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !a6 )
      return 1LL;
  }
  VaAge = (unsigned __int8)MiGetVaAge(a1, (__int64)(a3 << 25) >> 16);
  if ( a5 && VaAge != 7 )
    MiLogPageAccess(v10, a3, v15, v16);
  if ( !VaAge )
    MiSetVaAge(v10, (__int64)(a3 << 25) >> 16, 1u);
  return 1LL;
}

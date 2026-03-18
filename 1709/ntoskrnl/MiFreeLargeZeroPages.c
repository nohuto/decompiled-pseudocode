/*
 * XREFs of MiFreeLargeZeroPages @ 0x1400C5300
 * Callers:
 *     MiCleanupPageTablePages @ 0x1400C3F04 (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

void __fastcall MiFreeLargeZeroPages(__int64 a1, _QWORD **a2)
{
  unsigned int i; // r15d
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx

  for ( i = 0; i < 3; ++i )
  {
    while ( *a2 )
    {
      v5 = *a2;
      *a2 = (_QWORD *)**a2;
      v6 = MiFreeZeroPageSizeIndex(v5);
      if ( i == 2 )
      {
        MiReleaseFreshPage(v8, v7);
      }
      else
      {
        v9 = MiLargePageSizes[v6];
        v10 = (v8 + 0x58000000000LL) / 48;
        MiUpdateLargePageBitMap(a1, v10, v9, 0, 1);
        v11 = (unsigned __int8)MiLockPageInline(48 * v10 - 0x58000000000LL);
        MiInsertLargePageInNodeListHelper(v10, v9, 0LL, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(48 * v10 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v11);
      }
    }
    ++a2;
  }
}

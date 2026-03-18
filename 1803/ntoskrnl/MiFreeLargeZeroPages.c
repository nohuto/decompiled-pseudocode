/*
 * XREFs of MiFreeLargeZeroPages @ 0x140049444
 * Callers:
 *     MiCleanupPageTablePages @ 0x1400493E0 (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiInsertLargePageInNodeList @ 0x140136628 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 */

void __fastcall MiFreeLargeZeroPages(int a1, _QWORD **a2)
{
  unsigned int i; // r15d
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx

  for ( i = 0; i < 3; ++i )
  {
    while ( *a2 )
    {
      v5 = *a2;
      *a2 = (_QWORD *)**a2;
      v6 = MiFreeZeroPageSizeIndex(v5);
      if ( i == 2 )
      {
        MiReleaseFreshPage(v7);
      }
      else
      {
        v8 = MiLargePageSizes[v6];
        v9 = (v7 + 0x58000000000LL) / 48;
        MiUpdateLargePageBitMap(a1, (int)v7 / 48, v8, 0, 1);
        v10 = (unsigned __int8)MiLockPageInline(48 * v9 - 0x58000000000LL);
        MiInsertLargePageInNodeList(v9, v8, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(48 * v9 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v10);
      }
    }
    ++a2;
  }
}

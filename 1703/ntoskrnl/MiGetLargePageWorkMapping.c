/*
 * XREFs of MiGetLargePageWorkMapping @ 0x140158B08
 * Callers:
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x140128308 (MiObtainDynamicVa.c)
 */

unsigned __int64 __fastcall MiGetLargePageWorkMapping(int a1)
{
  int v1; // esi
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi

  v1 = 2;
  v2 = MiLargePageSizes[a1];
  v3 = v2 >> 9;
  if ( v2 > 0x200 )
  {
    v4 = MiObtainDynamicVa(&qword_14036C2D0, v3, 15, v3);
    v1 = 6;
  }
  else
  {
    v4 = MiObtainSystemVa(v3, 0xFu);
  }
  v5 = v4;
  if ( v4 )
  {
    if ( (unsigned int)MiMakeZeroedPageTables(
                         ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * (v2 - 1),
                         v1,
                         9) )
      return v5;
    MiReturnSystemVa(v5, v5 + (v2 << 12), 15, 0LL);
  }
  return 0LL;
}

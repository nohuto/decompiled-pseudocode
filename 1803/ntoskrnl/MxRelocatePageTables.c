/*
 * XREFs of MxRelocatePageTables @ 0x1408998F4
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiIncrementPfn @ 0x14016E2F4 (MiIncrementPfn.c)
 *     MxMovePageTables @ 0x14089B144 (MxMovePageTables.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 */

__int64 __fastcall MxRelocatePageTables(int a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  MiInitializePageColorBase(0LL, 0, (__int64)v10);
  v2 = 0xFFFFF6C000000000uLL;
  v3 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3LL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  if ( v2 < v3 )
    MxMovePageTables(v2, v3 - 8, 3, a1, (__int64)v10);
  v5 = (((unsigned __int64)(MmPfnDatabase + (MxPfnAllocation << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FFFFFFFFF8uLL;
  v7 = 3LL;
  do
  {
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  if ( v5 < v6 )
    MxMovePageTables(v5 + 8, v6, 3, a1, (__int64)v10);
  MxSwapPages(v10, 0xFFFFF6FBC0000000uLL);
  v11 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
  return MiIncrementPfn(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
}

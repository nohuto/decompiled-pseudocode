/*
 * XREFs of MxRelocatePageTables @ 0x14082A08C
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiIncrementPfn @ 0x140137978 (MiIncrementPfn.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MxMovePageTables @ 0x14082BBDC (MxMovePageTables.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 */

__int64 __fastcall MxRelocatePageTables(int a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+10h] BYREF

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
  v11 = MEMORY[0xFFFFF6FBC0000000];
  v8 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
  return MiIncrementPfn(48 * v8 - 0x58000000000LL);
}

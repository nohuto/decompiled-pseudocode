/*
 * XREFs of MiAllocateDriverPage @ 0x140509740
 * Callers:
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiPreInitializeSystemImagePage @ 0x1400CA45C (MiPreInitializeSystemImagePage.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1)
{
  __int16 v2; // ax
  __int64 Page; // rbx
  _WORD *v5; // r8
  __int16 v6; // ax
  unsigned int v7; // ebp
  _WORD *v8; // [rsp+60h] [rbp-18h] BYREF
  __int16 v9; // [rsp+68h] [rbp-10h]
  unsigned __int16 v10; // [rsp+6Ah] [rbp-Eh]
  __int64 v11; // [rsp+88h] [rbp+10h] BYREF

  if ( (int)MiFindContiguousPages(
              (__int64)a1,
              0LL,
              qword_1403883D0,
              0LL,
              1uLL,
              1u,
              0x80000000,
              0x80000000,
              0x20000000,
              0LL,
              &v11) < 0 )
  {
    qword_1403883D0 = -1LL;
    MiInitializePageColorBase(0LL, 0, (__int64)&v8);
    v5 = v8;
    v6 = v9;
    ++*v8;
    v7 = v10 | (unsigned __int16)(v6 & *v5);
    while ( 1 )
    {
      Page = MiGetPage((__int64)a1, v7, 0);
      if ( Page != -1 )
        break;
      if ( KeGetCurrentIrql() == 2 )
        return -1LL;
      MiWaitForFreePage(a1);
    }
  }
  else
  {
    v2 = qword_140388418 + 1;
    Page = v11;
    ++qword_140388418;
    if ( a1 == &MiSystemPartition )
    {
      if ( (v2 & 0x1FF) != 0 )
        qword_1403883D0 = v11 - 1;
      else
        qword_1403883D0 = -1LL;
    }
    MiPreInitializeSystemImagePage(48 * v11 - 0x58000000000LL);
  }
  return Page;
}

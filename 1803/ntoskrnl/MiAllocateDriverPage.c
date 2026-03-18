/*
 * XREFs of MiAllocateDriverPage @ 0x1405BB3F0
 * Callers:
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetNextPageColor @ 0x1400093C8 (MiGetNextPageColor.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiPreInitializeSystemImagePage @ 0x14013B66C (MiPreInitializeSystemImagePage.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1)
{
  __int64 Page; // rbx
  __int16 v3; // ax
  unsigned int NextPageColor; // ebp
  unsigned int i; // edx
  _BYTE v7[16]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  if ( (int)MiFindContiguousPages(
              (__int64)a1,
              0LL,
              qword_1403CB550,
              0LL,
              1uLL,
              1u,
              0x80000000,
              0x80000000,
              0x20000000,
              0LL,
              &v8) < 0 )
  {
    qword_1403CB550 = -1LL;
    MiInitializePageColorBase(0LL, 0, (__int64)v7);
    NextPageColor = MiGetNextPageColor((__int64)v7);
    for ( i = NextPageColor; ; i = NextPageColor )
    {
      Page = MiGetPage((__int64)a1, i, 0);
      if ( Page != -1 )
        break;
      if ( KeGetCurrentIrql() == 2 )
        return -1LL;
      MiWaitForFreePage(a1);
    }
  }
  else
  {
    Page = v8;
    v3 = ++qword_1403CB598;
    if ( a1 == &MiSystemPartition )
    {
      if ( (v3 & 0x1FF) != 0 )
        qword_1403CB550 = v8 - 1;
      else
        qword_1403CB550 = -1LL;
    }
    MiPreInitializeSystemImagePage(48 * v8 - 0x58000000000LL);
  }
  return Page;
}

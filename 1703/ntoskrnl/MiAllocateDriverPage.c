/*
 * XREFs of MiAllocateDriverPage @ 0x14053D888
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiPreInitializeSystemImagePage @ 0x14010B42C (MiPreInitializeSystemImagePage.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1)
{
  __int16 v2; // ax
  __int64 Page; // rbx
  _WORD *v5; // r8
  __int16 v6; // ax
  unsigned int v7; // ebp
  _WORD *v8; // [rsp+50h] [rbp-18h] BYREF
  __int16 v9; // [rsp+58h] [rbp-10h]
  unsigned __int16 v10; // [rsp+5Ah] [rbp-Eh]
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  if ( (int)MiFindContiguousPages(
              (__int64)a1,
              0LL,
              qword_14036C090,
              0LL,
              1LL,
              1u,
              0x80000000,
              0x80000000,
              0x20000000,
              &v11) < 0 )
  {
    qword_14036C090 = -1LL;
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
    v2 = qword_14036C0D8 + 1;
    Page = v11;
    ++qword_14036C0D8;
    if ( a1 == &MiSystemPartition )
    {
      if ( (v2 & 0x1FF) != 0 )
        qword_14036C090 = v11 - 1;
      else
        qword_14036C090 = -1LL;
    }
    MiPreInitializeSystemImagePage(48 * v11 - 0x58000000000LL);
  }
  return Page;
}

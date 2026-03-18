/*
 * XREFs of MiCreateUltraThreadContextHelper @ 0x14013A78C
 * Callers:
 *     MiCreateUltraThreadContext @ 0x14013A724 (MiCreateUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x14026D360 (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiAcquireNonPagedResources @ 0x14013A8EC (MiAcquireNonPagedResources.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiCreateUltraThreadContextHelper(__int64 a1, unsigned int a2, unsigned int a3)
{
  signed __int32 v3; // r10d
  bool v6; // zf
  signed __int32 v7; // eax
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 Page; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // rsi

  v3 = dword_1403CC324;
  if ( dword_1403CC324 == dword_1403CC320 )
    return 0LL;
  while ( 1 )
  {
    v7 = _InterlockedCompareExchange(&dword_1403CC324, v3 + 1, v3);
    v6 = v3 == v7;
    v3 = v7;
    if ( v6 )
      break;
    if ( v7 == dword_1403CC320 )
      return 0LL;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = -1LL;
  *(_QWORD *)(a1 + 16) = -1LL;
  v9 = a2;
  if ( a2 )
  {
    if ( a2 > 2uLL )
      v9 = 2LL;
    if ( !(unsigned int)MiAcquireNonPagedResources(&MiSystemPartition, (unsigned int)v9) )
    {
      _InterlockedAdd(&dword_1403CC324, 0xFFFFFFFF);
      return 0LL;
    }
    v10 = 0LL;
    if ( v9 )
    {
      while ( 1 )
      {
        Page = MiGetPage((__int64)&MiSystemPartition, a3, 0x30Au);
        if ( Page == -1 )
          break;
        v12 = 48 * Page - 0x58000000000LL;
        *(_QWORD *)(v12 + 16) = ZeroPte;
        MiSetFreshPfnFromFreeList(v12);
        *(_QWORD *)(a1 + 8 * v10 + 8) = v13;
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v9 )
          goto LABEL_13;
      }
      _InterlockedAdd(&dword_1403CC324, 0xFFFFFFFF);
      if ( (_DWORD)v10 )
      {
        v14 = (_QWORD *)(a1 + 8 * v10 + 8);
        do
        {
          MiReleaseFreshPage(48LL * *--v14 - 0x58000000000LL);
          *v14 = -1LL;
          LODWORD(v10) = v10 - 1;
        }
        while ( (_DWORD)v10 );
      }
      MiReleaseNonPagedResources((__int64)&MiSystemPartition, v9);
      return 0LL;
    }
  }
LABEL_13:
  *(_BYTE *)(a1 + 24) = 1;
  return 1LL;
}

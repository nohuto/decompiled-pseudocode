/*
 * XREFs of MiCreateUltraThreadContextHelper @ 0x1400CF880
 * Callers:
 *     MiCreateUltraThreadContext @ 0x1400CF818 (MiCreateUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x140234AAC (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1400CF9DC (MiAcquireNonPagedResources.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
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

  v3 = dword_140389074;
  if ( dword_140389074 == dword_140389070 )
    return 0LL;
  while ( 1 )
  {
    v7 = _InterlockedCompareExchange(&dword_140389074, v3 + 1, v3);
    v6 = v3 == v7;
    v3 = v7;
    if ( v6 )
      break;
    if ( v7 == dword_140389070 )
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
      _InterlockedAdd(&dword_140389074, 0xFFFFFFFF);
      return 0LL;
    }
    v10 = 0LL;
    if ( v9 )
    {
      while ( 1 )
      {
        Page = MiGetPage((__int64)&MiSystemPartition, a3, 0xCAu);
        if ( Page == -1 )
          break;
        v12 = 48 * Page - 0x58000000000LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        MiSetFreshPfnFromFreeList(v12);
        *(_QWORD *)(a1 + 8 * v10 + 8) = v13;
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v9 )
          goto LABEL_13;
      }
      _InterlockedAdd(&dword_140389074, 0xFFFFFFFF);
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

/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_e55ccab858df802f1f19496ef6f8fbee___ @ 0x18001C03C
 * Callers:
 *     ?UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001AC00 (-UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_e55ccab858df802f1f19496ef6f8fbee___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        int a6)
{
  _QWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    *v9 = &off_180047E08;
    v11 = *a4;
    v9[1] = *a4;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = a4[1];
    v9[2] = v12;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 32);
      while ( v13 >= 0 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 32), v13 + 1, v13);
        if ( v14 == v13 )
          return Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *,Windows::Internal::ComTaskPoolHandler>(
                   a1,
                   a2,
                   v10,
                   v9,
                   a5,
                   a6);
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
    }
  }
  else
  {
    v9 = 0LL;
  }
  return Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *,Windows::Internal::ComTaskPoolHandler>(
           a1,
           a2,
           v10,
           v9,
           a5,
           a6);
}

/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_f57c409ef9907fe20f12ddbbf436a36a___ @ 0x18001BDB0
 * Callers:
 *     ?MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001A750 (-MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??0?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180021388 (--0-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_f57c409ef9907fe20f12ddbbf436a36a___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed int v10; // edi
  __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // rdx

  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = &off_180047E18;
    v8 = *a4;
    v7[1] = *a4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = a4[1];
    v7[2] = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = 0LL;
  v10 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v11 = 0LL;
    v12 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
      v11 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
              v12,
              a1,
              L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>",
              0LL,
              -2LL);
    v10 = v11 == 0 ? 0x8007000E : 0;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 272) = v7;
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 104LL))(v11 + 8);
      v7 = 0LL;
    }
    if ( v10 >= 0 )
    {
      v13 = v11;
      v11 = 0LL;
      *a2 = (v13 + 184) & -(__int64)(v13 != 0);
    }
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 16LL))(v11 + 8);
  }
  return (unsigned int)v10;
}

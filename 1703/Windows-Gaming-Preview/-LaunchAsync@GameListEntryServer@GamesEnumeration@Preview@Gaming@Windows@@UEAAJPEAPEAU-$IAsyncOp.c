/*
 * XREFs of ?LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x180013B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A150 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_18000A150.c)
 *     ??$Make@V?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18001B264 (--$Make@V-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedH.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::LaunchAsync(
        volatile signed __int64 *a1,
        __int64 *a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _QWORD *v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  const wchar_t *v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h] BYREF
  _DWORD v18[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  int v20; // [rsp+80h] [rbp+38h] BYREF
  signed __int64 v21; // [rsp+88h] [rbp+40h]
  signed __int64 v22; // [rsp+90h] [rbp+48h]
  signed __int64 v23; // [rsp+98h] [rbp+50h]

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 12);
    v21 = v4;
    while ( v4 >= 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(a1 + 12, v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
LABEL_6:
    v6 = *((_QWORD *)a1 + 12);
    v22 = v6;
    while ( v6 >= 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(a1 + 12, v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_10;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
  }
LABEL_10:
  v18[2] = 0;
  v18[0] = 3;
  v18[1] = 128;
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *v8 = &off_18002F228;
    v8[1] = a1;
    v8[2] = a1;
    if ( a1 )
    {
      v9 = *((_QWORD *)a1 + 12);
      v23 = v9;
      while ( v9 >= 0 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64(a1 + 12, v9 + 1, v9);
        if ( v10 == v9 )
          goto LABEL_17;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
    }
  }
  else
  {
    v8 = 0LL;
  }
LABEL_17:
  v20 = 0;
  *a2 = 0LL;
  v16 = L"Windows.Foundation.IAsyncOperation`1<Boolean>";
  v11 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    ((void (__fastcall *)(__int64 *, _DWORD *, const wchar_t **, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v17,
      v18,
      &v16,
      &v20);
    v12 = v17;
    v11 = v17 == 0 ? 0x8007000E : 0;
    if ( v17 )
    {
      v13 = v17 + 8;
      *(_QWORD *)(v17 + 216) = v8;
      v8 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 104LL))(v13);
      if ( v11 < 0 )
      {
LABEL_23:
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 16LL))(v12 + 8);
        goto LABEL_25;
      }
      v14 = v12;
      v12 = 0LL;
      *a2 = (v14 + 136) & -(__int64)(v14 != 0);
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    goto LABEL_23;
  }
LABEL_25:
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(a1);
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x111,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v11);
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(a1);
  return (unsigned int)v11;
}

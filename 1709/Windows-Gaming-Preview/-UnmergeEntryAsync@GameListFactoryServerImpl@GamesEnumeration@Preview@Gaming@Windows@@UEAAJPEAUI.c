/*
 * XREFs of ?UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001AC00
 * Callers:
 *     ?UnmergeEntryAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180018C00 (-UnmergeEntryAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_e55ccab858df802f1f19496ef6f8fbee___ @ 0x18001C03C (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025600.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::UnmergeEntryAsync(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 (__fastcall **v7)(_QWORD, GUID *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rdi
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rcx
  signed __int64 v18; // [rsp+20h] [rbp-30h]
  _DWORD v19[4]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF
  signed __int64 v23; // [rsp+88h] [rbp+38h]

  if ( !a2 )
  {
    v5 = 545LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v5 = 546LL;
    goto LABEL_3;
  }
  v7 = *a2;
  v22 = 0LL;
  v8 = (*v7)(a2, &GUID_550da6bb_642b_4fc2_b208_a647bd85a0e3, &v22);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 112);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      v23 = v12;
      while ( v12 >= 0 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 32), v12 + 1, v12);
        if ( v13 == v12 )
          goto LABEL_13;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
    }
LABEL_13:
    v14 = v22;
    v20[0] = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v20[1] = v11;
    if ( v11 )
    {
      v15 = *(_QWORD *)(v11 + 32);
      v18 = v15;
      while ( v15 >= 0 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 32), v15 + 1, v15);
        if ( v16 == v15 )
          goto LABEL_20;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v15 + 16));
LABEL_20:
      v14 = v20[0];
    }
    v19[2] = 0;
    v19[0] = 3;
    v19[1] = 128;
    v10 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _QWORD *, signed __int64))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_e55ccab858df802f1f19496ef6f8fbee___)(
            v19,
            a3,
            v9,
            v20,
            v18);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(v11);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v10);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x227,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
  }
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v10;
}

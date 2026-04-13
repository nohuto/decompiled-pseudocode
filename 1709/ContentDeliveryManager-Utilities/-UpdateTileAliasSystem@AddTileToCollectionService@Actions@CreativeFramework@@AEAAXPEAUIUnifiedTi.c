/*
 * XREFs of ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180076F18
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180076810 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180076910 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180078058 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *a2,
        char a3)
{
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  const WCHAR *v14; // rcx
  HRESULT v15; // eax
  __int64 v16; // rax
  const WCHAR *v17; // rcx
  HRESULT v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _BYTE v23[8]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v24; // [rsp+40h] [rbp-31h] BYREF
  __int64 v25; // [rsp+48h] [rbp-29h] BYREF
  HSTRING v26; // [rsp+50h] [rbp-21h] BYREF
  __int64 v27; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  HSTRING_HEADER v31; // [rsp+90h] [rbp+1Fh] BYREF
  HSTRING v32; // [rsp+A8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v28[1] = -2LL;
  v28[0] = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
         v28);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x249,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v28[0];
  WindowsDeleteString(0LL);
  v24 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v6 + 48LL))(v6, &v24);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v26 = 0LL;
  v8 = v28[0];
  WindowsDeleteString(0LL);
  v26 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 56LL))(v8, &v26);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v27);
  if ( a3 )
  {
    v25 = 0LL;
    LOBYTE(v10) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64 *))(*(_QWORD *)v27 + 64LL))(v27, v24, v10, &v25);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x254,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = v25;
    v13 = *((_QWORD *)this + 20);
    v14 = (const WCHAR *)((char *)this + 144);
    if ( *((_QWORD *)this + 21) >= 8uLL )
      v14 = *(const WCHAR **)v14;
    string = 0LL;
    if ( (int)v13 + 1 >= (unsigned int)v13 )
    {
      v15 = WindowsCreateStringReference(v14, v13, &hstringHeader, &string);
      if ( v15 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
      v16 = *((_QWORD *)this + 16);
      v17 = (const WCHAR *)((char *)this + 112);
      if ( *((_QWORD *)this + 17) >= 8uLL )
        v17 = *(const WCHAR **)v17;
      v32 = 0LL;
      if ( (int)v16 + 1 >= (unsigned int)v16 )
      {
        v18 = WindowsCreateStringReference(v17, v16, &v31, &v32);
        if ( v18 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
        v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v12 + 48LL))(
                v12,
                v26,
                v32,
                string);
        if ( v19 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x258,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
            (const char *)(unsigned int)v19);
LABEL_32:
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        goto LABEL_34;
      }
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
  }
  v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, _BYTE *))(*(_QWORD *)v27 + 56LL))(v27, v24, v23);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x25D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  if ( v23[0] )
  {
    v25 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64 *))(*(_QWORD *)v27 + 64LL))(v27, v24, 0LL, &v25);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x261,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v22 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v25 + 80LL))(v25, v26);
    if ( v22 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x262,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v22);
    goto LABEL_32;
  }
LABEL_34:
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  WindowsDeleteString(v26);
  v26 = 0LL;
  WindowsDeleteString(v24);
  v24 = 0LL;
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
}

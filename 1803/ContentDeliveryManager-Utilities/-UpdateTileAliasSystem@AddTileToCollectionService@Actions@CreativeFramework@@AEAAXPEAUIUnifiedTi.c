/*
 * XREFs of ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180081BDC
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800814D0 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800815C0 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082D00 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  const WCHAR *v17; // rcx
  UINT32 v18; // edx
  HRESULT v19; // eax
  __int64 v20; // rax
  const WCHAR *v21; // rcx
  UINT32 v22; // edx
  HRESULT v23; // eax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  int v30; // eax
  _BYTE v31[8]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v32; // [rsp+40h] [rbp-31h] BYREF
  __int64 v33; // [rsp+48h] [rbp-29h] BYREF
  HSTRING v34; // [rsp+50h] [rbp-21h] BYREF
  __int64 v35; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  HSTRING_HEADER v39; // [rsp+90h] [rbp+1Fh] BYREF
  HSTRING v40; // [rsp+A8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v36[1] = -2LL;
  v36[0] = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
         v36);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x249,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_32;
  }
  v6 = v36[0];
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v6 + 48LL))(v6, &v32);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x24C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_33;
  }
  v34 = 0LL;
  v9 = v36[0];
  WindowsDeleteString(0LL);
  v34 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 56LL))(v9, &v34);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x24E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_34;
  }
  wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v35);
  if ( !a3 )
  {
    v26 = (*(__int64 (__fastcall **)(__int64, HSTRING, _BYTE *))(*(_QWORD *)v35 + 56LL))(v35, v32, v31);
    v27 = retaddr;
    if ( v26 >= 0 )
    {
      if ( !v31[0] )
        goto LABEL_26;
      v33 = 0LL;
      v28 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64 *))(*(_QWORD *)v35 + 64LL))(
              v35,
              v32,
              0LL,
              &v33);
      v29 = retaddr;
      if ( v28 >= 0 )
      {
        v30 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v33 + 80LL))(v33, v34);
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x262,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
            (const char *)(unsigned int)v30);
          __debugbreak();
        }
        goto LABEL_24;
      }
LABEL_41:
      wil::details::in1diag3::Throw_Hr(
        v29,
        (void *)0x261,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v28);
      __debugbreak();
    }
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v27,
      (void *)0x25D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v26);
    goto LABEL_41;
  }
  v33 = 0LL;
  LOBYTE(v12) = 1;
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64 *))(*(_QWORD *)v35 + 64LL))(v35, v32, v12, &v33);
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x254,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v15 = v33;
  v16 = *((_QWORD *)this + 20);
  v17 = (const WCHAR *)((char *)this + 144);
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v17 = *(const WCHAR **)v17;
  string = 0LL;
  if ( (int)v16 + 1 < (unsigned int)v16 )
    goto LABEL_39;
  v18 = v16;
  if ( (unsigned int)v16 < (int)v16 + 1 )
    v18 = v16;
  v19 = WindowsCreateStringReference(v17, v18, &hstringHeader, &string);
  if ( v19 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
LABEL_36:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
    goto LABEL_37;
  }
  v20 = *((_QWORD *)this + 16);
  v21 = (const WCHAR *)((char *)this + 112);
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v21 = *(const WCHAR **)v21;
  v40 = 0LL;
  if ( (int)v20 + 1 < (unsigned int)v20 )
    goto LABEL_38;
  v22 = v20;
  if ( (unsigned int)v20 < (int)v20 + 1 )
    v22 = v20;
  v23 = WindowsCreateStringReference(v21, v22, &v39, &v40);
  if ( v23 < 0 )
    goto LABEL_36;
  v24 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v15 + 48LL))(v15, v34, v40, string);
  v25 = retaddr;
  if ( v24 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x258,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v24);
LABEL_38:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
LABEL_39:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_40;
  }
LABEL_24:
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
LABEL_26:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  WindowsDeleteString(v34);
  v34 = 0LL;
  WindowsDeleteString(v32);
  v32 = 0LL;
  if ( v36[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v36[0] + 16LL))(v36[0]);
}

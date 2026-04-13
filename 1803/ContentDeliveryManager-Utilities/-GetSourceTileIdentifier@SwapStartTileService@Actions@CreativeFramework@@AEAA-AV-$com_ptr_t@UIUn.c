/*
 * XREFs of ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180080054
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18007FA08 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x18007F01C (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x18007F290 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x18007FC44 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082D00 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A45D0 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(_QWORD *a1, __int64 *a2)
{
  char *v4; // rdx
  const WCHAR *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  const WCHAR *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  const WCHAR *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  char *v15; // rax
  _BYTE *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  const WCHAR *v19; // rax
  char v21[8]; // [rsp+38h] [rbp-59h] BYREF
  const WCHAR *v22; // [rsp+40h] [rbp-51h] BYREF
  const WCHAR *v23; // [rsp+48h] [rbp-49h] BYREF
  __int64 v24; // [rsp+50h] [rbp-41h] BYREF
  __int64 v25; // [rsp+58h] [rbp-39h] BYREF
  __int128 v26; // [rsp+60h] [rbp-31h]
  __int64 v27; // [rsp+70h] [rbp-21h]
  void *v28[3]; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp-1h]
  _BYTE v30[24]; // [rsp+98h] [rbp+7h] BYREF
  _BYTE *v31; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v27 = -2LL;
  if ( !a1[3] )
  {
    v24 = 0LL;
    wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v25);
    v4 = (char *)(a1 + 21);
    if ( a1[24] >= 8uLL )
      v4 = *(char **)v4;
    CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v28, v4);
    v5 = (const WCHAR *)v28;
    if ( v29 >= 8 )
      v5 = (const WCHAR *)v28[0];
    v22 = v5;
    v6 = v25;
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, &v22);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v6 + 56LL))(v6, *(_QWORD *)(v7 + 24), v21);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v8);
    }
    else
    {
      if ( !v21[0] )
      {
LABEL_18:
        v17 = v24;
        if ( !v24 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x153,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
            (const char *)0x80070490LL);
          __debugbreak();
        }
        v18 = 0LL;
        v24 = 0LL;
        *a2 = v17;
        if ( v29 >= 8 )
        {
          operator delete(v28[0]);
          v18 = v24;
        }
        v29 = 7LL;
        v28[2] = 0LL;
        LOWORD(v28[0]) = 0;
        if ( v25 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          v18 = v24;
        }
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        return a2;
      }
      v22 = 0LL;
      v9 = (const WCHAR *)v28;
      if ( v29 >= 8 )
        v9 = (const WCHAR *)v28[0];
      v23 = v9;
      v10 = v25;
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, &v23);
      v12 = v22;
      v22 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const WCHAR **))(*(_QWORD *)v10 + 64LL))(
              v10,
              *(_QWORD *)(v11 + 24),
              0LL,
              &v22);
      v14 = retaddr;
      if ( v13 >= 0 )
      {
        *(_QWORD *)&v26 = a1;
        *((_QWORD *)&v26 + 1) = &v24;
        v31 = 0LL;
        v15 = (char *)operator new(0x20uLL);
        if ( v15 )
        {
          *(_QWORD *)v15 = off_1800DAA68;
          *(_OWORD *)(v15 + 8) = v26;
          v31 = v15;
          CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
            (__int64)off_1800DAA68,
            (__int64)v22,
            (__int64)v30);
          if ( v31 )
          {
            v16 = v30;
            LOBYTE(v16) = v31 != v30;
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v31 + 32LL))(v31, v16);
          }
          if ( v22 )
            (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v22 + 16LL))(v22);
          goto LABEL_18;
        }
LABEL_31:
        std::_Xbad_alloc();
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x142,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_31;
  }
  v19 = (const WCHAR *)(a1 + 1);
  if ( a1[4] >= 8uLL )
    v19 = *(const WCHAR **)v19;
  v23 = v19;
  CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(a2, &v23);
  return a2;
}

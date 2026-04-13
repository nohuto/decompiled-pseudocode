/*
 * XREFs of ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18007FA08
 * Callers:
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007FA00 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180029864 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_UTMIntegrationWithTargetedContentApi@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180039418 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_UTMIntegrationWithTargetedCo.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004F8D4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x18007F290 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W@Z @ 0x18007F378 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x18007F464 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_18007F464.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18007F624 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180080054 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles(
        CreativeFramework::Actions::SwapStartTileService *this)
{
  const WCHAR **SourceTileIdentifier; // rax
  const WCHAR *v3; // rdi
  char *v4; // rbx
  const WCHAR *v5; // rdx
  const WCHAR *v6; // r8
  const WCHAR *v7; // rdx
  const WCHAR *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  DWORD v12; // edx
  int v13; // r8d
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  const WCHAR *v18[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  const WCHAR *v20; // [rsp+78h] [rbp+28h] BYREF
  void (__fastcall ***v21)(__int64, GUID *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF

  v18[1] = (const WCHAR *)-2LL;
  LODWORD(v20) = 0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_UTMIntegrationWithTargetedContentApi>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_UTMIntegrationWithTargetedContentApi>::GetCachedFeatureEnabledState();
  SourceTileIdentifier = (const WCHAR **)CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(
                                           this,
                                           &v17);
  v3 = *SourceTileIdentifier;
  *SourceTileIdentifier = 0LL;
  v18[2] = v3;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_UTMIntegrationWithTargetedContentApi>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_UTMIntegrationWithTargetedContentApi>::GetCachedFeatureEnabledState();
  if ( *((_QWORD *)this + 7) )
  {
    v4 = (char *)this + 40;
    if ( *((_QWORD *)v4 + 3) >= 8uLL )
      v4 = *(char **)v4;
    v18[0] = (const WCHAR *)v4;
    CreativeFramework::Actions::DeserializeUnifiedTileIdentifier((__int64 *)&v20, v18);
  }
  else if ( *((_QWORD *)this + 11) )
  {
    v5 = (const WCHAR *)((char *)this + 72);
    if ( *((_QWORD *)this + 12) >= 8uLL )
      v5 = *(const WCHAR **)v5;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier((const WCHAR *)&v20, v5);
  }
  else
  {
    v6 = (const WCHAR *)((char *)this + 136);
    if ( *((_QWORD *)this + 20) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    v7 = (const WCHAR *)((char *)this + 104);
    if ( *((_QWORD *)this + 16) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier((__int64 *)&v20, v7, v6);
  }
  v8 = v20;
  v20 = 0LL;
  v18[0] = v8;
  CreativeFramework::Actions::GetStartGridCollection(&v22);
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
         v22,
         &GUID_adbf8965_6056_4126_ab26_6660af4661ce,
         &v16);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    goto LABEL_37;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, const WCHAR *))(*(_QWORD *)v16 + 72LL))(v16, v3, v8);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x102,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v22 + 224LL))(
          v22,
          &v21);
  v14 = retaddr;
  if ( v11 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x105,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v15 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v21, v12, v13);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x638,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  if ( v21 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v21)[2])(v21);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v8 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v3 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v3 + 16LL))(v3);
}

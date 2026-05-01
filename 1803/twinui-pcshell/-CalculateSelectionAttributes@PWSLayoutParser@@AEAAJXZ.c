/*
 * XREFs of ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x18019BCB0
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18019BEF0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UILayoutSelectionHelpers@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILayoutSelectionHelpers@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180149CF8 (--$GetActivationFactory@V-$ComPtr@UILayoutSelectionHelpers@SharedStartModel@@@WRL@Microsoft@@@Fo.c)
 *     ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18014A27C (--$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@V-$allo.c)
 *     ?AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z @ 0x18014AA48 (-AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z.c)
 *     ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x1802FC798 (-GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Inte.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutParser::CalculateSelectionAttributes(PWSLayoutParser *this)
{
  const unsigned __int16 *v2; // rdx
  int CurrentRegionCode; // eax
  StartLayout::SelectionData *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h] BYREF
  int v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12 = -2LL;
  v2 = (const unsigned __int16 *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    v4 = (PWSLayoutParser *)((char *)this + 40);
    StartLayout::SelectionData::AddRegionCode((PWSLayoutParser *)((char *)this + 40), v2);
  }
  else
  {
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    CurrentRegionCode = StartLayout::RegionHelpers::GetCurrentRegionCode(&hstringHeader);
    if ( CurrentRegionCode < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        148LL,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)CurrentRegionCode);
    v4 = (PWSLayoutParser *)((char *)this + 40);
    StartLayout::SelectionData::AddRegionCode(v4, (const unsigned __int16 *)hstringHeader.Reserved.Reserved1);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
  }
  if ( !IsPPIEdition() )
  {
    v10 = 0LL;
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"SharedStartModel.LayoutSelectionHelpers",
      0x28u,
      0x27u);
    v5 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::ILayoutSelectionHelpers>>(
           v14,
           &v10);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 56LL))(v10, &v9);
      v6 = v5;
      if ( v5 >= 0 )
      {
        if ( v9 )
        {
          v11 = v9;
          std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
            (__int64)v4 + 32,
            &v11);
          *((_BYTE *)v4 + 3) = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        return 0LL;
      }
      v7 = 167LL;
    }
    else
    {
      v7 = 165LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    return v6;
  }
  v9 = 9;
  std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
    (__int64)v4 + 32,
    &v9);
  *((_BYTE *)v4 + 3) = 1;
  return 0LL;
}

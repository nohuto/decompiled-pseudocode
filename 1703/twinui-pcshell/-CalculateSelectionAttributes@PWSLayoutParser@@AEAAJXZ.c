/*
 * XREFs of ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1800CE198
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800CD600 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18008CB9C (--$emplace_back@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@V-$allo.c)
 *     ??$emplace_back@AEBQEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAAXAEBQEAX@Z @ 0x18008CCE8 (--$emplace_back@AEBQEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAAXAEBQEAX@Z.c)
 *     ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x18017489C (-GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Inte.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutParser::CalculateSelectionAttributes(PWSLayoutParser *this)
{
  int CurrentRegionCode; // eax
  PVOID Reserved1; // rdi
  DWORD v4; // eax
  HRESULT v5; // eax
  HSTRING v6; // rdi
  LPWSTR v7; // rcx
  int ActivationFactory; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  LPWSTR v11; // rcx
  LPWSTR v13; // rcx
  LPWSTR ppwsz; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+38h] [rbp-48h] BYREF
  int v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER psz; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v17 = -2LL;
  if ( *((_QWORD *)this + 14) )
  {
    ppwsz = 0LL;
    if ( SHStrDupW(*((LPCWSTR *)this + 14), &ppwsz) >= 0 )
    {
      std::vector<void *>::emplace_back<void * const &>((__int64)this + 48, &ppwsz);
      *((_BYTE *)this + 40) = 1;
    }
  }
  else
  {
    memset(&psz, 0, sizeof(psz));
    CurrentRegionCode = StartLayout::RegionHelpers::GetCurrentRegionCode(&psz);
    if ( CurrentRegionCode < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)CurrentRegionCode);
    ppwsz = 0LL;
    Reserved1 = psz.Reserved.Reserved1;
    if ( SHStrDupW((LPCWSTR)psz.Reserved.Reserved1, &ppwsz) >= 0 )
    {
      std::vector<void *>::emplace_back<void * const &>((__int64)this + 48, &ppwsz);
      *((_BYTE *)this + 40) = 1;
    }
    if ( Reserved1 )
      CoTaskMemFree(Reserved1);
  }
  v4 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v4 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v4 == 119 )
  {
    v15 = 9;
    std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
      (__int64)this + 72,
      &v15);
    *((_BYTE *)this + 43) = 1;
    return 0LL;
  }
  ppwsz = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"SharedStartModel.LayoutSelectionHelpers", 0x27u, &psz, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = string;
  v7 = ppwsz;
  if ( ppwsz )
  {
    ppwsz = 0LL;
    (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ActivationFactory = RoGetActivationFactory(v6, &GUID_539fe289_c0e0_4959_9a2f_bd846bc9b2c8, &ppwsz);
  v9 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    ActivationFactory = (*(__int64 (__fastcall **)(LPWSTR, int *))(*(_QWORD *)ppwsz + 56LL))(ppwsz, &v15);
    v9 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      if ( v15 )
      {
        v16 = v15;
        std::vector<enum SharedStartModel::LayoutSKU>::emplace_back<enum SharedStartModel::LayoutSKU const &>(
          (__int64)this + 72,
          &v16);
        *((_BYTE *)this + 43) = 1;
      }
      v13 = ppwsz;
      if ( ppwsz )
      {
        ppwsz = 0LL;
        (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v13 + 16LL))(v13);
      }
      return 0LL;
    }
    v10 = 167LL;
  }
  else
  {
    v10 = 165LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
    (const char *)(unsigned int)ActivationFactory);
  v11 = ppwsz;
  if ( ppwsz )
  {
    ppwsz = 0LL;
    (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v9;
}

/*
 * XREFs of ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800EF2A8
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1800EED50 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 *     ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1800EF5C0 (-PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1800EF924 (-LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsof.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::GetOEMLayoutXML(const WCHAR **this, struct IXMLDOMDocument2 **a2)
{
  unsigned int LayoutXMLFromFilePath; // ebx
  int v5; // eax
  HRESULT v6; // eax
  int ActivationFactory; // eax
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v13[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-98h]
  WCHAR Dst[264]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  v10[1] = -2LL;
  *a2 = 0LL;
  if ( !ExpandEnvironmentStringsW(
          L"%SystemDrive%\\Users\\Default\\AppData\\Local\\Microsoft\\Windows\\Shell\\InkWorkspaceModification.xml",
          Dst,
          0x104u) )
  {
    LayoutXMLFromFilePath = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)0x80004005LL);
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xAE,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)LayoutXMLFromFilePath);
    return LayoutXMLFromFilePath;
  }
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)(this + 7),
         (__int64)Dst,
         0xFFFFFFFFFFFFFFFFuLL);
  LayoutXMLFromFilePath = v5;
  if ( v5 >= 0 )
    LayoutXMLFromFilePath = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF7,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v5);
  if ( (LayoutXMLFromFilePath & 0x80000000) != 0 )
    goto LABEL_7;
  v10[0] = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, v10);
  LayoutXMLFromFilePath = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v13, this + 7);
    LayoutXMLFromFilePath = PWSLayoutPolicyManager::LoadLayoutXMLFromFilePath(
                              (struct Microsoft::WRL::Wrappers::HStringReference *)v13,
                              a2);
    v14 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB0,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  v8 = v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return LayoutXMLFromFilePath;
}

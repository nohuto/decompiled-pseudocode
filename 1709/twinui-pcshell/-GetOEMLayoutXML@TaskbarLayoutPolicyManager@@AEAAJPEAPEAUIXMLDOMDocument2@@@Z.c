/*
 * XREFs of ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800897F4
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180088B30 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A3CC (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18008A94C (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetOEMLayoutXML(const WCHAR **this, struct IXMLDOMDocument2 **a2)
{
  LSTATUS ValueW; // eax
  signed int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  HRESULT v9; // eax
  int ActivationFactory; // eax
  unsigned int v11; // ebx
  TaskbarLayoutPolicyManager *v12; // rcx
  int LayoutXMLFromFilePath; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v21[24]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h]
  _WORD pvData[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v18 = -2LL;
  *a2 = 0LL;
  pcbData[0] = 520;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
             L"LayoutXMLPath",
             2u,
             0LL,
             pvData,
             pcbData);
  if ( ValueW )
    pvData[0] = 0;
  v5 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v5 = ValueW;
  if ( v5 == -2147024894 )
    return 0LL;
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 545LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v6);
    goto LABEL_12;
  }
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)(this + 7),
         (__int64)pvData,
         0xFFFFFFFFFFFFFFFFuLL);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 547LL;
    goto LABEL_8;
  }
  v5 = 0;
LABEL_12:
  if ( v5 < 0 )
    return 0LL;
  v16 = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v16);
  v11 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, this + 7);
    LayoutXMLFromFilePath = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
                              v12,
                              (struct Microsoft::WRL::Wrappers::HStringReference *)v21,
                              a2);
    v11 = LayoutXMLFromFilePath;
    if ( LayoutXMLFromFilePath >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x154,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)LayoutXMLFromFilePath);
    v22 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x151,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v11;
}

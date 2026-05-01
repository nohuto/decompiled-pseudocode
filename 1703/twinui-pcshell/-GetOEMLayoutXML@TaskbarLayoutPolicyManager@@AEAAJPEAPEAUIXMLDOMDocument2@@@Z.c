/*
 * XREFs of ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180087328
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180086780 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087EB4 (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x180088410 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetOEMLayoutXML(const WCHAR **this, struct IXMLDOMDocument2 **a2)
{
  LSTATUS ValueW; // eax
  signed int LayoutXMLFromFilePath; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  HRESULT v9; // eax
  int ActivationFactory; // eax
  TaskbarLayoutPolicyManager *v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+78h] [rbp-90h] BYREF
  HSTRING_HEADER v19; // [rsp+80h] [rbp-88h] BYREF
  __int64 v20; // [rsp+98h] [rbp-70h]
  unsigned __int16 pvData[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v16 = -2LL;
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
  LayoutXMLFromFilePath = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    LayoutXMLFromFilePath = ValueW;
  if ( LayoutXMLFromFilePath < 0 )
  {
    v6 = (unsigned int)LayoutXMLFromFilePath;
    v7 = 525LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v6);
    goto LABEL_11;
  }
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)(this + 5),
         pvData,
         0xFFFFFFFFFFFFFFFFuLL);
  LayoutXMLFromFilePath = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 526LL;
    goto LABEL_7;
  }
  LayoutXMLFromFilePath = 0;
LABEL_11:
  if ( LayoutXMLFromFilePath >= 0 )
  {
    v14 = 0LL;
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
    ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v14);
    LayoutXMLFromFilePath = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, this + 5);
      LayoutXMLFromFilePath = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
                                v11,
                                (struct Microsoft::WRL::Wrappers::HStringReference *)&v19,
                                a2);
      v20 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x14C,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14A,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)LayoutXMLFromFilePath);
  }
  return (unsigned int)LayoutXMLFromFilePath;
}

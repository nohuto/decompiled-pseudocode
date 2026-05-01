/*
 * XREFs of ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089B5C
 * Callers:
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A0C0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18008A7FC (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18008A94C (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::GetPolicyLayoutXML(const WCHAR **this, struct IXMLDOMDocument2 **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v7; // eax
  int ActivationFactory; // eax
  TaskbarLayoutPolicyManager *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct IXMLDOMDocument2 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  struct IXMLDOMDocument2 *v16; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v19[24]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v20; // [rsp+78h] [rbp+17h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+98h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v18[1] = -2LL;
  *a2 = 0LL;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
    return 2147500037LL;
  v4 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath((TaskbarLayoutPolicyManager *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x175,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v15 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v15);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x177,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_16:
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v5;
  }
  Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v19, this + 4);
  v16 = 0LL;
  v10 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
          v9,
          (struct Microsoft::WRL::Wrappers::HStringReference *)v19,
          &v16);
  v5 = v10;
  if ( v10 < 0 )
  {
    v11 = 379LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v10);
    if ( v16 )
      ((void (__fastcall *)(struct IXMLDOMDocument2 *))v16->lpVtbl->Release)(v16);
    v20 = 0LL;
    goto LABEL_16;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 64LL))(v15, v20, &v17);
  v5 = v10;
  if ( v10 < 0 )
  {
    v11 = 382LL;
    goto LABEL_13;
  }
  v18[0] = v17;
  _RegSetKeyValue(
    HKEY_CURRENT_USER,
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
    L"LayoutXMLLastModified",
    3u,
    v18,
    8u);
  v13 = v16;
  if ( v16 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v16->lpVtbl->AddRef)(v16);
  *a2 = v13;
  if ( v13 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v13->lpVtbl->Release)(v13);
  v20 = 0LL;
  v14 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}

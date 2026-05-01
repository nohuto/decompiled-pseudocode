/*
 * XREFs of ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089A00
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180088B30 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A0C0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18008AAA8 (-XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windo.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetLayoutModificationXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  int v6; // eax
  TaskbarLayoutPolicyManager *v7; // rcx
  struct Windows::Storage::Streams::IRandomAccessStream *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Storage::Streams::IRandomAccessStream *v12[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v12[1] = (struct Windows::Storage::Streams::IRandomAccessStream *)-2LL;
  *a2 = 0LL;
  v11 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v11);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x15E,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_12;
  }
  v12[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IRandomAccessStream **))(*(_QWORD *)v11 + 56LL))(
         v11,
         v12);
  v5 = v6;
  if ( v6 != -2147024894 )
  {
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x165,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_10;
    }
    TaskbarLayoutPolicyManager::XMLDocFromStream(v7, v12[0], a2);
  }
  v5 = 0;
LABEL_10:
  v8 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStream *))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_12:
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v5;
}

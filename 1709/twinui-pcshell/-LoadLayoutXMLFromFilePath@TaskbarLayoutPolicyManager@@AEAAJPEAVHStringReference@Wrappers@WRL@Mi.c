/*
 * XREFs of ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18008A94C
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180089198 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800897F4 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089B5C (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18008AAA8 (-XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windo.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
        TaskbarLayoutPolicyManager *this,
        struct Microsoft::WRL::Wrappers::HStringReference *a2,
        struct IXMLDOMDocument2 **a3)
{
  HRESULT v5; // eax
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  int v8; // eax
  TaskbarLayoutPolicyManager *v9; // rcx
  struct Windows::Storage::Streams::IRandomAccessStream *v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Storage::Streams::IRandomAccessStream *v14[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v14[1] = (struct Windows::Storage::Streams::IRandomAccessStream *)-2LL;
  *a3 = 0LL;
  v13 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v13);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x22C,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_12;
  }
  v14[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Storage::Streams::IRandomAccessStream **))(*(_QWORD *)v13 + 72LL))(
         v13,
         *((_QWORD *)a2 + 3),
         v14);
  v7 = v8;
  if ( v8 != -2147024894 )
  {
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x233,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_10;
    }
    TaskbarLayoutPolicyManager::XMLDocFromStream(v9, v14[0], a3);
  }
  v7 = 0;
LABEL_10:
  v10 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStream *))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_12:
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v7;
}

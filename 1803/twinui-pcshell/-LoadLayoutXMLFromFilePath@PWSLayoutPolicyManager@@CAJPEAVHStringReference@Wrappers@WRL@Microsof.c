/*
 * XREFs of ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18019ACAC
 * Callers:
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019AA3C (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801453B8 (--$GetActivationFactory@V-$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Micr.c)
 *     ?XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18019B7F8 (-XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::LoadLayoutXMLFromFilePath(
        struct Microsoft::WRL::Wrappers::HStringReference *a1,
        struct IXMLDOMDocument2 **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  struct Windows::Storage::Streams::IRandomAccessStream *v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v11[1] = -2LL;
  *a2 = 0LL;
  v11[0] = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SharedStartModel.StartLayoutInitializationStatics",
    0x32u,
    0x31u);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::IStartLayoutInitializationStatics>>(
         v13,
         v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    v6 = v11[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Storage::Streams::IRandomAccessStream **))(*(_QWORD *)v6 + 72LL))(
           v6,
           *((_QWORD *)a1 + 3),
           &v10);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = PWSLayoutPolicyManager::XMLDocFromStream(v10, a2);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v8 = 261LL;
    }
    else
    {
      v8 = 260LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x101,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  return v5;
}

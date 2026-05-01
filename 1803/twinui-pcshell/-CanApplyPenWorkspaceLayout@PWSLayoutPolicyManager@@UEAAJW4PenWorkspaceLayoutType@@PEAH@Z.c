/*
 * XREFs of ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x18019A580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801453B8 (--$GetActivationFactory@V-$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Micr.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019A90C (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019AA3C (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18019B510 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18019B678 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PWSLayoutPolicyManager::CanApplyPenWorkspaceLayout(__int64 a1, int a2, _DWORD *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int OEMLayoutXML; // eax
  PWSLayoutPolicyManager *v11; // rcx
  PWSLayoutPolicyManager *v12; // rcx
  struct IXMLDOMDocument2 *v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  struct IXMLDOMDocument2 *v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v19[1] = -2LL;
  *a3 = 0;
  v19[0] = 0LL;
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SharedStartModel.StartLayoutInitializationStatics",
    0x32u,
    0x31u);
  v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::IStartLayoutInitializationStatics>>(
         v21,
         v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v17 = 0LL;
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v7 = -2147467259;
        v8 = 2147500037LL;
        v9 = 111LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
          (const char *)v8);
LABEL_27:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        goto LABEL_28;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML((PWSLayoutPolicyManager *)a1, &v17);
      v7 = OEMLayoutXML;
      if ( OEMLayoutXML < 0 )
      {
        v9 = 107LL;
LABEL_17:
        v8 = (unsigned int)OEMLayoutXML;
        goto LABEL_18;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      OEMLayoutXML = PWSLayoutPolicyManager::GetDefaultLayoutXML(v12, &v17);
      v7 = OEMLayoutXML;
      if ( OEMLayoutXML < 0 )
      {
        v9 = 104LL;
        goto LABEL_17;
      }
    }
    v13 = v17;
    if ( v17 )
    {
      v14 = a2
          ? PWSLayoutPolicyManager::ValidateLayoutModificationXML(v11, v17)
          : PWSLayoutPolicyManager::ValidateDefaultLayoutXML(v11, v17);
      if ( v14 >= 0 )
      {
        hstringHeader = *(HSTRING_HEADER *)(a1 + 80);
        OEMLayoutXML = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v13->lpVtbl->setProperty)(
                         v13,
                         *(_QWORD *)(a1 + 104),
                         &hstringHeader);
        v7 = OEMLayoutXML;
        if ( OEMLayoutXML < 0 )
        {
          v9 = 118LL;
          goto LABEL_17;
        }
        if ( a2 )
          v15 = *(_QWORD *)(a1 + 120);
        else
          v15 = *(_QWORD *)(a1 + 112);
        v18 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, __int64 *))v13->lpVtbl->selectSingleNode)(
               v13,
               v15,
               &v18) >= 0
          && v18 )
        {
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      }
    }
    v7 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  return v7;
}

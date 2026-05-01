/*
 * XREFs of ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1800CBEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800CC2E8 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800CC448 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800CCDD8 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800CCEFC (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PWSLayoutPolicyManager::CanApplyPenWorkspaceLayout(__int64 a1, int a2, _DWORD *a3)
{
  HRESULT v6; // eax
  int ActivationFactory; // eax
  PWSLayoutPolicyManager *v8; // rcx
  unsigned int v9; // edi
  struct IXMLDOMDocument2 *v10; // rbx
  int OEMLayoutXML; // eax
  PWSLayoutPolicyManager *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-50h] BYREF
  struct IXMLDOMDocument2 *v22; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v23[1] = -2LL;
  *a3 = 0;
  v21 = 0LL;
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
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v21);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_31;
  }
  v10 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v9 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
        (const char *)0x80004005LL);
      goto LABEL_29;
    }
    OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML((PWSLayoutPolicyManager *)a1, &v22);
    v9 = OEMLayoutXML;
    if ( OEMLayoutXML < 0 )
    {
      v13 = 106LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
        (const char *)(unsigned int)OEMLayoutXML);
      v10 = v22;
      goto LABEL_29;
    }
  }
  else
  {
    OEMLayoutXML = PWSLayoutPolicyManager::GetDefaultLayoutXML(v8, &v22);
    v9 = OEMLayoutXML;
    if ( OEMLayoutXML < 0 )
    {
      v13 = 103LL;
      goto LABEL_12;
    }
  }
  v10 = v22;
  if ( v22 )
  {
    v14 = a2
        ? PWSLayoutPolicyManager::ValidateLayoutModificationXML(v12, v22)
        : PWSLayoutPolicyManager::ValidateDefaultLayoutXML(v12, v22);
    if ( v14 >= 0 )
    {
      hstringHeader = *(HSTRING_HEADER *)(a1 + 64);
      v15 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v10->lpVtbl->setProperty)(
              v10,
              *(_QWORD *)(a1 + 88),
              &hstringHeader);
      v9 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x75,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
          (const char *)(unsigned int)v15);
        goto LABEL_29;
      }
      if ( a2 )
        v16 = *(_QWORD *)(a1 + 104);
      else
        v16 = *(_QWORD *)(a1 + 96);
      v23[0] = 0LL;
      v17 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, __int64, _QWORD *))v10->lpVtbl->selectSingleNode)(
              v10,
              v16,
              v23);
      v18 = v23[0];
      if ( v17 >= 0 && v23[0] )
        *a3 = 1;
      if ( v18 )
      {
        v23[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  v9 = 0;
LABEL_29:
  if ( v10 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v10->lpVtbl->Release)(v10);
LABEL_31:
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v9;
}

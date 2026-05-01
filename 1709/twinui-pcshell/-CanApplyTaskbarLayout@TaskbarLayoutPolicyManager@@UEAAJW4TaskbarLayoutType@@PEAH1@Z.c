/*
 * XREFs of ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180088B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180087DC4 (--1-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@.c)
 *     ?StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x1800882CC (-StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180089198 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180089590 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089694 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800897F4 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089A00 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089DB4 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18008ADF4 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18008AECC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18008B130 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18008B3A0 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18008BAC0 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QE.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyTaskbarLayout(__int64 a1, int a2, int *a3, int *a4)
{
  HRESULT v8; // eax
  int ActivationFactory; // eax
  TaskbarLayoutPolicyManager *v10; // rcx
  unsigned int v11; // edi
  struct IXMLDOMDocument2 *v12; // rbx
  int CanApplyGroupPolicyLayout; // eax
  __int64 v14; // rdx
  TaskbarLayoutPolicyManager *v15; // rcx
  int OEMLayoutXML; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  struct IXMLDOMNode *v22; // rcx
  __int64 v23; // rcx
  struct IXMLDOMDocument2 *v25; // [rsp+28h] [rbp-E0h] BYREF
  struct IXMLDOMNode *v26; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h]
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v31[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v32; // [rsp+88h] [rbp-80h]
  int *v33; // [rsp+90h] [rbp-78h]
  int *v34; // [rsp+98h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-68h] BYREF
  char v36; // [rsp+A4h] [rbp-64h]
  int v37; // [rsp+C8h] [rbp-40h] BYREF
  const char *v38; // [rsp+D0h] [rbp-38h]
  __int64 v39; // [rsp+D8h] [rbp-30h]
  char v40; // [rsp+E0h] [rbp-28h]
  __int64 v41; // [rsp+E8h] [rbp-20h]
  _BYTE v42[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v43; // [rsp+180h] [rbp+78h]
  __int64 v44; // [rsp+188h] [rbp+80h]
  __int64 v45; // [rsp+190h] [rbp+88h]
  __int64 v46; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  hstringHeader.Reserved.Reserved1 = (PVOID)-2LL;
  v31[1] = 0LL;
  v31[2] = v31;
  v31[3] = 0LL;
  v32 = 0;
  v33 = &v37;
  v34 = &v35;
  v35 = 0;
  v36 = 0;
  v40 = 0;
  v37 = 0;
  v38 = "CanApplyTaskbarLayout";
  v39 = 0LL;
  v41 = 1LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v42, 0, sizeof(v42));
  v45 = 0LL;
  v46 = 0LL;
  v31[0] = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::StartActivity((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v31);
  *a3 = 0;
  *a4 = 0;
  v27 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
         &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v27);
  v11 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7B,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_42;
  }
  v12 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      OEMLayoutXML = TaskbarLayoutPolicyManager::GetOEMLayoutXML((TaskbarLayoutPolicyManager *)a1, &v25);
      v17 = retaddr;
      if ( OEMLayoutXML < 0 )
      {
        v18 = 133LL;
        goto LABEL_20;
      }
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_39;
      if ( (unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
      {
        CanApplyGroupPolicyLayout = TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
                                      (TaskbarLayoutPolicyManager *)a1,
                                      a3,
                                      a4);
        v11 = CanApplyGroupPolicyLayout;
        if ( CanApplyGroupPolicyLayout < 0 )
        {
          v14 = 138LL;
LABEL_28:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v14,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)CanApplyGroupPolicyLayout);
          goto LABEL_40;
        }
        goto LABEL_39;
      }
      if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout((TaskbarLayoutPolicyManager *)a1) )
      {
        OEMLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v15, &v25);
        v17 = retaddr;
        if ( OEMLayoutXML < 0 )
        {
          v18 = 145LL;
LABEL_20:
          wil::details::in1diag3::_Log_Hr(
            v17,
            (void *)v18,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)OEMLayoutXML);
        }
      }
      else
      {
        OEMLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v15, &v25);
        v17 = retaddr;
        if ( OEMLayoutXML < 0 )
        {
          v18 = 150LL;
          goto LABEL_20;
        }
      }
    }
  }
  else
  {
    OEMLayoutXML = TaskbarLayoutPolicyManager::GetDefaultLayoutXML(v10, &v25);
    v17 = retaddr;
    if ( OEMLayoutXML < 0 )
    {
      v18 = 130LL;
      goto LABEL_20;
    }
  }
  v12 = v25;
  if ( v25 )
  {
    v19 = a2
        ? TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v17, v25)
        : TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(v17, v25);
    if ( v19 >= 0 )
    {
      *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)(a1 + 80);
      v29 = *(_QWORD *)(a1 + 96);
      CanApplyGroupPolicyLayout = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, char *))v12->lpVtbl->setProperty)(
                                    v12,
                                    *(_QWORD *)(a1 + 104),
                                    &hstringHeader.Reserved.Reserved2[8]);
      v11 = CanApplyGroupPolicyLayout;
      if ( CanApplyGroupPolicyLayout < 0 )
      {
        v14 = 163LL;
        goto LABEL_28;
      }
      if ( a2 )
        v20 = *(_QWORD *)(a1 + 120);
      else
        v20 = *(_QWORD *)(a1 + 112);
      v26 = 0LL;
      v21 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, __int64, struct IXMLDOMNode **))v12->lpVtbl->selectSingleNode)(
              v12,
              v20,
              &v26);
      v22 = v26;
      if ( v21 >= 0 && v26 )
      {
        if ( a2 == 2 )
        {
          *a4 = TaskbarLayoutPolicyManager::IsOverrideLayout((TaskbarLayoutPolicyManager *)a1, v26);
          v22 = v26;
        }
        *a3 = 1;
      }
      if ( v22 )
      {
        v26 = 0LL;
        ((void (__fastcall *)(struct IXMLDOMNode *))v22->lpVtbl->Release)(v22);
      }
    }
  }
LABEL_39:
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v31);
  v11 = 0;
LABEL_40:
  if ( v12 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v12->lpVtbl->Release)(v12);
LABEL_42:
  v23 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v31[0] = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v31);
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
  return v11;
}

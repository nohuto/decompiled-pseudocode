/*
 * XREFs of ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180086780
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180085AB4 (--1-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180086CC0 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1800870B8 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800871C8 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180087328 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18008751C (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800878DC (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800888EC (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180088A38 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180088D14 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180088F80 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800896A0 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QE.c)
 *     ??$Start@$$V@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@SA?AV01@XZ @ 0x180089E40 (--$Start@$$V@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  struct IXMLDOMDocument2 *v25; // [rsp+20h] [rbp-E0h] BYREF
  struct IXMLDOMNode *v26; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v30[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v27[1] = -2LL;
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::Start<>((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v30);
  *a3 = 0;
  *a4 = 0;
  v27[0] = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, v27);
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
      hstringHeader = *(HSTRING_HEADER *)(a1 + 64);
      CanApplyGroupPolicyLayout = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v12->lpVtbl->setProperty)(
                                    v12,
                                    *(_QWORD *)(a1 + 88),
                                    &hstringHeader);
      v11 = CanApplyGroupPolicyLayout;
      if ( CanApplyGroupPolicyLayout < 0 )
      {
        v14 = 163LL;
        goto LABEL_28;
      }
      if ( a2 )
        v20 = *(_QWORD *)(a1 + 104);
      else
        v20 = *(_QWORD *)(a1 + 96);
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
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
  v11 = 0;
LABEL_40:
  if ( v12 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v12->lpVtbl->Release)(v12);
LABEL_42:
  v23 = v27[0];
  if ( v27[0] )
  {
    v27[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v30[0] = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v30);
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v30);
  return v11;
}

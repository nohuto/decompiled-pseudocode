/*
 * XREFs of ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087BE8
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180086AC0 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180086CC0 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1800870B8 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18008751C (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180087684 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800878DC (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18008800C (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008A788 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18008A890 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(
        TaskbarLayoutPolicyManager *this,
        __int64 a2)
{
  int LayoutModificationXML; // eax
  signed int v5; // edi
  __int64 v6; // rdx
  TaskbarLayoutPolicyManager *v7; // rcx
  wil *v8; // rcx
  struct wil::WNF_CHANGE_STAMP_STRUCT *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r9
  struct IXMLDOMDocument2 *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // rcx
  void *v24; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-40h] BYREF
  struct IXMLDOMDocument2 *v26; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  _WNF_STATE_NAME v31; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v32; // [rsp+A8h] [rbp+38h] BYREF

  v27[1] = -2LL;
  v26 = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(this, (int *)&v31, (int *)&v32) < 0 || !v31.Data[0] )
  {
    if ( !(unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout(this) )
    {
      LayoutModificationXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v7, &v26);
      v5 = LayoutModificationXML;
      if ( LayoutModificationXML < 0 )
      {
        v6 = 443LL;
        goto LABEL_22;
      }
      goto LABEL_24;
    }
    LayoutModificationXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v7, &v26);
    v5 = LayoutModificationXML;
    if ( LayoutModificationXML < 0 )
    {
      v6 = 438LL;
      goto LABEL_22;
    }
    v32 = 0;
    v10 = wil::wnf_query_nothrow(v8, &v31, (bool *)&v32, v9);
    v5 = v10;
    if ( v10 >= 0 )
    {
      if ( !LOBYTE(v31.Data[0]) )
      {
        v5 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24C,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)0x8000FFFFLL);
        goto LABEL_19;
      }
      v31.Data[0] = v32;
      v13 = _RegSetKeyValue(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
              L"MDMLayoutXMLLastModified",
              4u,
              &v31,
              4u);
      v5 = (unsigned __int16)v13 | 0x80070000;
      if ( v13 <= 0 )
        v5 = v13;
      if ( v5 >= 0 )
      {
        v5 = 0;
LABEL_18:
        if ( v5 >= 0 )
          goto LABEL_24;
LABEL_19:
        v14 = (unsigned int)v5;
        v6 = 439LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)v14);
        v15 = v26;
        goto LABEL_39;
      }
      v11 = (unsigned int)v5;
      v12 = 590LL;
    }
    else
    {
      v11 = (unsigned int)v10;
      v12 = 585LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v11);
    goto LABEL_18;
  }
  LayoutModificationXML = TaskbarLayoutPolicyManager::GetPolicyLayoutXML((const WCHAR **)this, &v26);
  v5 = LayoutModificationXML;
  if ( LayoutModificationXML < 0 )
  {
    v6 = 434LL;
LABEL_22:
    v14 = (unsigned int)LayoutModificationXML;
    goto LABEL_23;
  }
LABEL_24:
  v25 = 0LL;
  v28 = *((_OWORD *)this + 4);
  v29 = *((_QWORD *)this + 10);
  v15 = v26;
  v16 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v26->lpVtbl->setProperty)(
          v26,
          *((_QWORD *)this + 11),
          &v28);
  v5 = v16;
  if ( v16 >= 0 )
  {
    v16 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, _QWORD))v15->lpVtbl->selectSingleNode)(
            v15,
            *((_QWORD *)this + 13),
            &v25);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 448LL;
      goto LABEL_28;
    }
    v27[0] = 0LL;
    v18 = (**v25)(v25, &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60, v27);
    v5 = v18;
    if ( v18 >= 0 )
    {
      v18 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v19, a2, &v25, 3LL, v24);
      v5 = v18;
      if ( v18 >= 0 )
      {
        v5 = 0;
LABEL_35:
        v21 = v27[0];
        if ( v27[0] )
        {
          v27[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        goto LABEL_37;
      }
      v20 = 452LL;
    }
    else
    {
      v20 = 451LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_35;
  }
  v17 = 447LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)v16);
LABEL_37:
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v22)[2])(v22);
  }
LABEL_39:
  if ( v15 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v15->lpVtbl->Release)(v15);
  return (unsigned int)v5;
}

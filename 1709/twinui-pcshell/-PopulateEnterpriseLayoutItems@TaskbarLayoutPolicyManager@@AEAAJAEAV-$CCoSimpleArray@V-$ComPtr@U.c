/*
 * XREFs of ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A0C0
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180088F10 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180089198 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180089590 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089A00 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089B5C (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089DB4 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18008A548 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18008CCB8 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  _WNF_STATE_NAME v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _WNF_STATE_NAME v23; // rcx
  __int64 v24; // rcx
  _WNF_STATE_NAME v25; // rcx
  void *v27; // [rsp+20h] [rbp-40h]
  struct IXMLDOMDocument2 *v28[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  _WNF_STATE_NAME v32; // [rsp+90h] [rbp+30h] BYREF
  __int64 v33; // [rsp+98h] [rbp+38h] BYREF

  v28[1] = (struct IXMLDOMDocument2 *)-2LL;
  v28[0] = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(this, (int *)&v32, (int *)&v33) < 0 || !v32.Data[0] )
  {
    if ( !(unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout(this) )
    {
      LayoutModificationXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v7, v28);
      v5 = LayoutModificationXML;
      if ( LayoutModificationXML < 0 )
      {
        v6 = 454LL;
        goto LABEL_22;
      }
      goto LABEL_24;
    }
    LayoutModificationXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v7, v28);
    v5 = LayoutModificationXML;
    if ( LayoutModificationXML < 0 )
    {
      v6 = 449LL;
      goto LABEL_22;
    }
    LODWORD(v33) = 0;
    v10 = wil::wnf_query_nothrow(v8, &v32, (bool *)&v33, v9);
    v5 = v10;
    if ( v10 >= 0 )
    {
      if ( !LOBYTE(v32.Data[0]) )
      {
        v5 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x269,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)0x8000FFFFLL);
        goto LABEL_19;
      }
      v32.Data[0] = v33;
      v13 = _RegSetKeyValue(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
              L"MDMLayoutXMLLastModified",
              4u,
              &v32,
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
        v6 = 450LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)v14);
        v15 = v28[0];
        goto LABEL_45;
      }
      v11 = (unsigned int)v5;
      v12 = 619LL;
    }
    else
    {
      v11 = (unsigned int)v10;
      v12 = 614LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v11);
    goto LABEL_18;
  }
  LayoutModificationXML = TaskbarLayoutPolicyManager::GetPolicyLayoutXML((const WCHAR **)this, v28);
  v5 = LayoutModificationXML;
  if ( LayoutModificationXML < 0 )
  {
    v6 = 445LL;
LABEL_22:
    v14 = (unsigned int)LayoutModificationXML;
    goto LABEL_23;
  }
LABEL_24:
  v15 = v28[0];
  if ( !v28[0] )
    goto LABEL_44;
  v32 = 0LL;
  v29 = *((_OWORD *)this + 5);
  v30 = *((_QWORD *)this + 12);
  v16 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v28[0]->lpVtbl->setProperty)(
          v28[0],
          *((_QWORD *)this + 13),
          &v29);
  v5 = v16;
  if ( v16 >= 0 )
  {
    v18 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(_WNF_STATE_NAME))(**(_QWORD **)&v18 + 16LL))(v18);
    }
    v16 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, _WNF_STATE_NAME *))v15->lpVtbl->selectSingleNode)(
            v15,
            *((_QWORD *)this + 15),
            &v32);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 461LL;
      goto LABEL_31;
    }
    v33 = 0LL;
    v19 = (***(__int64 (__fastcall ****)(_WNF_STATE_NAME, GUID *, __int64 *))&v32)(
            v32,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v33);
    v5 = v19;
    if ( v19 < 0 )
    {
      v21 = 464LL;
      goto LABEL_36;
    }
    v19 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v20, a2, &v32, 3LL, v27);
    v5 = v19;
    if ( v19 < 0 )
    {
      v21 = 465LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v19);
      v22 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      goto LABEL_38;
    }
    v24 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(_WNF_STATE_NAME))(**(_QWORD **)&v25 + 16LL))(v25);
    }
LABEL_44:
    v5 = 0;
    goto LABEL_45;
  }
  v17 = 460LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)v16);
LABEL_38:
  v23 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(_WNF_STATE_NAME))(**(_QWORD **)&v23 + 16LL))(v23);
  }
LABEL_45:
  if ( v15 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v15->lpVtbl->Release)(v15);
  return (unsigned int)v5;
}

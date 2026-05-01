/*
 * XREFs of ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180089DB4
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180088B30 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A0C0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008AC58 (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  int MDMStartLayoutPolicy; // eax
  unsigned int v4; // ebx
  void *v5; // rdi
  HRESULT v6; // eax
  __int64 v7; // rdx
  struct IXMLDOMDocument2 *v8; // rcx
  LPVOID pv[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  TaskbarLayoutPolicyManager *v12; // [rsp+70h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+28h] BYREF

  v12 = this;
  *a2 = 0LL;
  memset(pv, 0, sizeof(pv));
  MDMStartLayoutPolicy = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy(this, pv);
  v4 = MDMStartLayoutPolicy;
  v5 = pv[0];
  if ( MDMStartLayoutPolicy < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x191,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)MDMStartLayoutPolicy);
    goto LABEL_21;
  }
  if ( !pv[0] || !*(_WORD *)pv[0] )
  {
    v4 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x195,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)0x80004005LL);
    goto LABEL_21;
  }
  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 409LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 410LL;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(LPVOID, void *, TaskbarLayoutPolicyManager **))(*(_QWORD *)ppv + 520LL))(
         ppv,
         v5,
         &v12);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 413LL;
    goto LABEL_11;
  }
  if ( (_WORD)v12 )
  {
    v8 = (struct IXMLDOMDocument2 *)ppv;
    if ( ppv )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
      v8 = (struct IXMLDOMDocument2 *)ppv;
    }
    *a2 = v8;
    v4 = 0;
    goto LABEL_18;
  }
  v4 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A0,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)0x80004005LL);
LABEL_14:
  v8 = (struct IXMLDOMDocument2 *)ppv;
LABEL_18:
  if ( v8 )
  {
    ppv = 0LL;
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v8->lpVtbl->Release)(v8);
  }
LABEL_21:
  if ( v5 )
    CoTaskMemFree(v5);
  return v4;
}

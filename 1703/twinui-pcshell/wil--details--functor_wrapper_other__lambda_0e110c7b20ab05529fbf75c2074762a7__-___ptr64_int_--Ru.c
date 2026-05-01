/*
 * XREFs of wil::details::functor_wrapper_other__lambda_0e110c7b20ab05529fbf75c2074762a7__&___ptr64_int_::Run @ 0x18008A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008872C (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18008A890 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_other__lambda_0e110c7b20ab05529fbf75c2074762a7______ptr64_int_::Run(
        __int64 a1)
{
  int v1; // ebx
  int MDMStartLayoutPolicy; // eax
  wil *v4; // rcx
  struct wil::WNF_CHANGE_STAMP_STRUCT *v5; // r9
  void *v6; // rdi
  int v7; // eax
  LSTATUS ValueW; // eax
  unsigned int v9; // esi
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct _WNF_STATE_NAME pcbData; // [rsp+90h] [rbp+30h] BYREF
  int v14; // [rsp+98h] [rbp+38h] BYREF
  int pvData; // [rsp+A0h] [rbp+40h] BYREF

  v1 = 0;
  memset(pv, 0, 24);
  MDMStartLayoutPolicy = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy(a1, pv);
  if ( MDMStartLayoutPolicy < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11F,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)MDMStartLayoutPolicy);
  v6 = pv[0];
  if ( pv[0] )
  {
    if ( *(_WORD *)pv[0] )
    {
      v14 = 0;
      v7 = wil::wnf_query_nothrow(v4, &pcbData, (bool *)&v14, v5);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12A,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v7);
      pvData = 0;
      pcbData.Data[0] = 4;
      ValueW = RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
                 L"MDMLayoutXMLLastModified",
                 0x10u,
                 0LL,
                 &pvData,
                 (LPDWORD)&pcbData);
      v9 = (unsigned __int16)ValueW | 0x80070000;
      if ( ValueW <= 0 )
        v9 = ValueW;
      if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147024894 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x242,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)v9);
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x130,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)v9);
      }
      LOBYTE(v1) = pvData != v14;
    }
    CoTaskMemFree(v6);
  }
  **(_DWORD **)(a1 + 16) = v1;
  return 0LL;
}

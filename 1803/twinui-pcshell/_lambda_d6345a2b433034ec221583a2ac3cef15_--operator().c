/*
 * XREFs of _lambda_d6345a2b433034ec221583a2ac3cef15_::operator() @ 0x180145B80
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_d6345a2b433034ec221583a2ac3cef15__&___ptr64_int_::Run @ 0x1801489A0 (wil--details--functor_wrapper_other__lambda_d6345a2b433034ec221583a2ac3cef15__-___ptr64_int_--Ru.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z @ 0x180147094 (-GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z.c)
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1801470EC (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x180149B8C (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall lambda_d6345a2b433034ec221583a2ac3cef15_::operator()(_WNF_STATE_NAME a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  wil *v3; // rcx
  struct wil::WNF_CHANGE_STAMP_STRUCT *v4; // r9
  char v5; // al
  int v6; // eax
  TaskbarLayoutPolicyManager *v7; // rcx
  int MDMPolicyLayoutTimestamp; // eax
  _QWORD v10[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  _WNF_STATE_NAME v12; // [rsp+50h] [rbp+10h] BYREF
  int v13; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+20h] BYREF

  v12 = a1;
  v1 = 0;
  memset(v10, 0, 24);
  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD))TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy)(a1, v10);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      288LL,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v10[0] || (v5 = 1, !*(_WORD *)v10[0]) )
    v5 = 0;
  if ( v5 )
  {
    v13 = 0;
    v6 = wil::wnf_query_nothrow(v3, &v12, (bool *)&v13, v4);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        299LL,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
    MDMPolicyLayoutTimestamp = TaskbarLayoutPolicyManager::GetMDMPolicyLayoutTimestamp(v7, &v14);
    if ( MDMPolicyLayoutTimestamp < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        305LL,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)MDMPolicyLayoutTimestamp);
    LOBYTE(v1) = v14 != v13;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v10);
  return v1;
}

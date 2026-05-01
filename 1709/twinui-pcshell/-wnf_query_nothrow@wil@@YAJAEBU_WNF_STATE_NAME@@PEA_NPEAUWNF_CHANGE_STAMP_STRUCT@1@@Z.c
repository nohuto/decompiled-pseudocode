/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18008CCB8
 * Callers:
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A0C0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     wil::details::functor_wrapper_other__lambda_0e110c7b20ab05529fbf75c2074762a7__&___ptr64_int_::Run @ 0x18008C880 (wil--details--functor_wrapper_other__lambda_0e110c7b20ab05529fbf75c2074762a7__-___ptr64_int_--Ru.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004278 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18008CC68 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  unsigned int v6; // edi
  const char *v7; // r9
  int v9; // ecx
  bool v10; // al
  const char *v11; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil *v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = this;
  LOBYTE(a2->Data[0]) = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  LODWORD(v13) = 0;
  v6 = NtQueryWnfStateData(&WNF_SHEL_ENTERPRISE_START_LAYOUT_POLICY_VALUE_CHANGED, 0LL, 0LL, &v14, 0LL, &v13) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    if ( v14 && (_DWORD)v13 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1430,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v7);
      JUMPOUT(0x18008CDC2LL);
    }
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x1431,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (__int64)"Inconsistent state data size in wnf_query",
      v11);
    v9 = v14;
    v10 = v14 && !(_DWORD)v13;
    LOBYTE(a2->Data[0]) = v10;
    if ( a3 )
      *(_DWORD *)a3 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142F,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v6);
    return v6;
  }
}

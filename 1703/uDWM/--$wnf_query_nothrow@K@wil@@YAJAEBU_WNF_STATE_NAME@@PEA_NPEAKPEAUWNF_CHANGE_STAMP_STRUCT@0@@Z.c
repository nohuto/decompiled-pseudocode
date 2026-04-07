/*
 * XREFs of ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800498C8
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180049984 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180071144 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072054 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<unsigned long>(__int64 a1, char *a2, int a3, __int64 a4)
{
  char v5; // bl
  unsigned int v6; // edi
  unsigned int v7; // r8d
  const char *v8; // r9
  const char *v11; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+20h]
  int v15; // [rsp+5Ch] [rbp+24h]

  v15 = HIDWORD(a4);
  v13 = a1;
  v14 = 4;
  v5 = 0;
  *a2 = 0;
  v6 = NtQueryWnfStateData(&WNF_SHEL_LOCKSCREEN_ACTIVE, 0LL, 0LL, &v13) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    if ( (_DWORD)v13 && v14 != 4 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, (void *)0x12F0, v7, v8);
      __debugbreak();
    }
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x12F1,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (bool)"Inconsistent state data size in wnf_query",
      v11);
    if ( (_DWORD)v13 )
    {
      if ( v14 == 4 )
        v5 = 1;
    }
    *a2 = v5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12EF,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v6,
      a3);
    return v6;
  }
}

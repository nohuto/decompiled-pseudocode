/*
 * XREFs of CSimpleHashTable_unsigned_short_const_____ptr64_Microsoft::WRL::ComPtr_IStream__CStringHashPolicy_CStringCompare_CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_be93856df8de9135463e2f17db76c91b___ @ 0x18002793C
 * Callers:
 *     _lambda_849682ba5faec79a8a918f75d9dbfadc_::operator() @ 0x1800252D8 (_lambda_849682ba5faec79a8a918f75d9dbfadc_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000A63C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CSimpleHashTable_unsigned_short_const_____ptr64_Microsoft::WRL::ComPtr_IStream__CStringHashPolicy_CStringCompare_CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_be93856df8de9135463e2f17db76c91b___(
        _DWORD **a1,
        __int64 *a2,
        IStream **a3)
{
  __int64 v3; // rbp
  HRESULT v6; // eax
  HRESULT v7; // edi
  int v8; // eax
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a2;
  v6 = IStream_Reset(*a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3CD,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v6);
  *a1[1] = v7;
  if ( (int)*a1[1] >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, IStream *))(**((_QWORD **)*a1 + 9) + 104LL))(
           *((_QWORD *)*a1 + 9),
           v3,
           *a3);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D0,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v8);
    *a1[1] = v9;
  }
  return *a1[1] >= 0;
}

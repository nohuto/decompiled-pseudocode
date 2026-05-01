/*
 * XREFs of _lambda_5560a5ae6a27c3052849bcc6223d54f3_::operator() @ 0x180297A04
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_5560a5ae6a27c3052849bcc6223d54f3_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x180297720 (--$LambdaEnumWindowsProc@V_lambda_5560a5ae6a27c3052849bcc6223d54f3_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800F6188 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 */

__int64 __fastcall lambda_5560a5ae6a27c3052849bcc6223d54f3_::operator()(__int64 a1, HWND a2)
{
  HRESULT WindowAttribute; // eax
  __int128 pvAttribute; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  pvAttribute = 0LL;
  if ( IsIconic(a2) || GetWindow(a2, 4u) != **(HWND **)a1 )
    return 1LL;
  WindowAttribute = DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u);
  if ( WindowAttribute < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      257LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)WindowAttribute);
    return 1LL;
  }
  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)&pvAttribute) )
    return 1LL;
  *(_OWORD *)*(_QWORD *)(a1 + 8) = pvAttribute;
  return 0LL;
}

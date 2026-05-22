/*
 * XREFs of ?ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ @ 0x1800AE46C
 * Callers:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800AC908 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall ManipulationInjector::ValidateInjectionRectForPanZoom(ManipulationInjector *this)
{
  int v1; // edx
  unsigned int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 2 * *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 18) - *((_DWORD *)this + 16) < v1 || *((_DWORD *)this + 19) - *((_DWORD *)this + 17) < v1 )
  {
    v2 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x580,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)v2);
    JUMPOUT(0x1800AE4B1LL);
  }
}

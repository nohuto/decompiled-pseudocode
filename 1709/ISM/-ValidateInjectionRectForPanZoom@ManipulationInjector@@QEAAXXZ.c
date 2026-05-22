/*
 * XREFs of ?ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ @ 0x1800C26F8
 * Callers:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C0BC0 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005594 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::ValidateInjectionRectForPanZoom(ManipulationInjector *this)
{
  int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 2 * *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 18) - *((_DWORD *)this + 16) < v1 || *((_DWORD *)this + 19) - *((_DWORD *)this + 17) < v1 )
  {
    v2 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x57F, v3, (const char *)v2);
    JUMPOUT(0x1800C2736LL);
  }
}

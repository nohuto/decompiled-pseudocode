/*
 * XREFs of ??0CWRLObjectWithSite@@QEAA@XZ @ 0x18002BBA4
 * Callers:
 *     ??0VirtualTouchpadUriHandler@@QEAA@XZ @ 0x180147CB4 (--0VirtualTouchpadUriHandler@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CWRLObjectWithSite *__fastcall CWRLObjectWithSite::CWRLObjectWithSite(CWRLObjectWithSite *this)
{
  CWRLObjectWithSite *result; // rax

  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::Nil>,1,1>'};
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}

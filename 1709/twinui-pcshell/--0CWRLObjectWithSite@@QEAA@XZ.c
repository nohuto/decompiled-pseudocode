/*
 * XREFs of ??0CWRLObjectWithSite@@QEAA@XZ @ 0x18002D594
 * Callers:
 *     ??0VirtualTouchpadUriHandler@@QEAA@XZ @ 0x18017C924 (--0VirtualTouchpadUriHandler@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CWRLObjectWithSite *__fastcall CWRLObjectWithSite::CWRLObjectWithSite(CWRLObjectWithSite *this)
{
  CWRLObjectWithSite *result; // rax

  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithSite>'};
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  return result;
}

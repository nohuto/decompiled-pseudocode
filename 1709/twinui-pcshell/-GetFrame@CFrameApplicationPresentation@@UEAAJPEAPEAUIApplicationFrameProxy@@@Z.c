/*
 * XREFs of ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180069F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::GetFrame(
        CFrameApplicationPresentation *this,
        struct IApplicationFrameProxy **a2)
{
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 16) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x472,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = (struct IApplicationFrameProxy *)*((_QWORD *)this + 16);
    return 0LL;
  }
}

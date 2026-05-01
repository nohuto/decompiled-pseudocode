/*
 * XREFs of ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180080E30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__&___ptr64_::Run @ 0x180081100 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__-___ptr64.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::GetApplication(
        CWinRTApplicationView *this,
        struct IImmersiveApplication **a2)
{
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 5) )
  {
    v5 = *((_QWORD *)this + 5);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = (struct IImmersiveApplication *)*((_QWORD *)this + 5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}

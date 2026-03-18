/*
 * XREFs of ?OnDroppedScribble@CFramebuffer@CComputeScribbleRenderer@@QEAAX_K@Z @ 0x18021CA58
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021DD44 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CComputeScribbleRenderer::CFramebuffer::OnDroppedScribble(CComputeScribbleRenderer::CFramebuffer *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 80LL))(*((_QWORD *)this + 10));
  if ( v1 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)v1);
    __debugbreak();
  }
}

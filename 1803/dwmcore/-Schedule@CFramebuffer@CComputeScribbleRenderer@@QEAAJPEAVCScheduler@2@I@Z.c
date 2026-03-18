/*
 * XREFs of ?Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z @ 0x18021CA90
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x180218EA4 (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18021CCAC (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x18021E2F8 (-ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V-$span@QEAV.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::Schedule(
        CComputeScribbleRenderer::CFramebuffer *this,
        struct CComputeScribbleRenderer::CScheduler *a2,
        int a3)
{
  int v4; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 13) != *((_QWORD *)this + 14) )
  {
    v4 = CComputeScribbleRenderer::CScheduler::ScheduleScribbleFrame(a2, a3);
    if ( v4 < 0 )
    {
      std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear((char *)this + 104);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    *((_BYTE *)this + 208) = 1;
  }
  return 0LL;
}

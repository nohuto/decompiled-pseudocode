/*
 * XREFs of ?PostRender@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18007BB70
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x180218EA4 (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::PostRender(CHwFullScreenRenderTarget *this, bool *a2)
{
  CComputeScribbleRenderer *v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v2 = (CComputeScribbleRenderer *)*((_QWORD *)this + 44);
  if ( !v2 )
    return 0LL;
  v4 = CComputeScribbleRenderer::PostRender(v2, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x75,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
    (const char *)(unsigned int)v4,
    v6);
  return v5;
}

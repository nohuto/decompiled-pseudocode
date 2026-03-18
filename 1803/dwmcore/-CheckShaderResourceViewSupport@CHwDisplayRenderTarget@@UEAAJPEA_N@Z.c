/*
 * XREFs of ?CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z @ 0x180046640
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x1800464C0 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckShaderResourceViewSupport(CHwDisplayRenderTarget *this, bool *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 216));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwdisplayrendertarget.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return v5;
  }
  else
  {
    *a2 = (*((_DWORD *)this + 19) & 0x10) != 0;
    return 0LL;
  }
}

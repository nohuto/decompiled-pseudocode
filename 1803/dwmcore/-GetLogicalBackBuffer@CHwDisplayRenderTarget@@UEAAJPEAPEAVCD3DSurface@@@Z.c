/*
 * XREFs of ?GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1800466C0
 * Callers:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007C740 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0560 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetLogicalBackBuffer(CSwapChainBase **this, struct CD3DSurface **a2)
{
  CHwDisplayRenderTarget *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsValid; // al
  int LogicalBackBuffer; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (CHwDisplayRenderTarget *)(this - 27);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 32LL);
  if ( (char *)v5 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid(v4);
  else
    IsValid = v5();
  if ( IsValid )
  {
    LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(this[4], a2);
    if ( LogicalBackBuffer >= 0 )
      return 0LL;
    v9 = 717LL;
  }
  else
  {
    LogicalBackBuffer = -2003304307;
    v9 = 714LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwdisplayrendertarget.cpp",
    (const char *)(unsigned int)LogicalBackBuffer,
    v10);
  return (unsigned int)LogicalBackBuffer;
}

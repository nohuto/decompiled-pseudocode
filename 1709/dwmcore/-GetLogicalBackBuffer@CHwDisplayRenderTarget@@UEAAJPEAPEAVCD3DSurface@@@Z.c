/*
 * XREFs of ?GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x18002BC80
 * Callers:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18002F534 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetLogicalBackBuffer(CHwDisplayRenderTarget *this, struct CD3DSurface **a2)
{
  CHwDisplayRenderTarget *v4; // rcx
  unsigned int v5; // ebx
  __int64 (*v6)(void); // rax
  char IsValid; // al
  struct CD3DSurface *v8; // rcx

  v4 = (CHwDisplayRenderTarget *)((char *)this - 192);
  v5 = -2003304307;
  v6 = *(__int64 (**)(void))(*(_QWORD *)v4 + 32LL);
  if ( (char *)v6 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid(v4);
  else
    IsValid = v6();
  if ( IsValid )
  {
    v8 = **(struct CD3DSurface ***)(*((_QWORD *)this + 5) + 376LL);
    *a2 = v8;
    (**(void (__fastcall ***)(struct CD3DSurface *))v8)(v8);
    return 0;
  }
  return v5;
}

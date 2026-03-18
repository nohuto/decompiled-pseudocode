/*
 * XREFs of ?GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1801B8070
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetLogicalBackBuffer(
        CHwStereoFullScreenRenderTarget *this,
        struct CD3DSurface **a2)
{
  unsigned int v4; // ebx
  struct CD3DSurface *v5; // rcx

  v4 = -2003304307;
  if ( CHwDisplayRenderTarget::IsValid((CHwStereoFullScreenRenderTarget *)((char *)this - 192)) )
  {
    v5 = (struct CD3DSurface *)*((_QWORD *)this - 1);
    *a2 = v5;
    if ( v5 )
      (**(void (__fastcall ***)(struct CD3DSurface *))v5)(v5);
    return 0;
  }
  return v4;
}

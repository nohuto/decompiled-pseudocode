/*
 * XREFs of ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x180070C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x1800734E4 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwFullScreenRenderTarget::UpdatePixelFormatInfo(
        CHwFullScreenRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DSurface *v4; // rcx
  CMILPoolResource *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( *((_BYTE *)this + 321) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 152LL))(
      *((_QWORD *)this + 43),
      *((unsigned int *)a2 + 1));
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27)) )
    {
      (*(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, _QWORD, CMILPoolResource **))(*(_QWORD *)this + 224LL))(
        this,
        0LL,
        0LL,
        &v5);
      CD3DSurface::UpdatePixelFormatInfo(v5, a2);
    }
    v4 = (CD3DSurface *)*((_QWORD *)this + 21);
    if ( v4 )
      CD3DSurface::UpdatePixelFormatInfo(v4, a2);
  }
  if ( v5 )
    CMILPoolResource::Release(v5);
}

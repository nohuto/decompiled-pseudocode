/*
 * XREFs of ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x18007CB20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180043598 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwFullScreenRenderTarget::UpdatePixelFormatInfo(CD3DSurface **this, const struct PixelFormatInfo *a2)
{
  CD3DSurface *v2; // rax
  CD3DSurface *v5; // rcx
  CD3DSurface *v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *this;
  v6 = 0LL;
  if ( (*((unsigned __int8 (__fastcall **)(CD3DSurface **))v2 + 4))(this) )
  {
    (*((void (__fastcall **)(CD3DSurface **, _QWORD, _QWORD, CD3DSurface **))*this + 34))(this, 0LL, 0LL, &v6);
    CD3DSurface::UpdatePixelFormatInfo(v6, a2);
  }
  v5 = this[25];
  if ( v5 )
    CD3DSurface::UpdatePixelFormatInfo(v5, a2);
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v6);
}

/*
 * XREFs of ?GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002B520
 * Callers:
 *     ?GetPixelFormatInfo@CHwDisplayRenderTarget@@WMA@EBA?AUPixelFormatInfo@@XZ @ 0x1800C6C60 (-GetPixelFormatInfo@CHwDisplayRenderTarget@@WMA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CD3DSurface@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002D930 (-GetPixelFormatInfo@CD3DSurface@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CHwDisplayRenderTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 (*v4)(void); // rax
  char IsValid; // al
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, _DWORD *); // rax

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v4 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid((CHwDisplayRenderTarget *)a1);
  else
    IsValid = v4();
  if ( IsValid )
  {
    v6 = *(_QWORD *)(a1 + 184) + 120LL;
    v7 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 24LL);
    if ( (char *)v7 == (char *)CD3DSurface::GetPixelFormatInfo )
      CD3DSurface::GetPixelFormatInfo(v6, a2);
    else
      v7(v6, a2);
  }
  else
  {
    *a2 = *(_DWORD *)(a1 + 256);
    a2[1] = *(_DWORD *)(a1 + 312);
    a2[2] = *(_DWORD *)(a1 + 316);
  }
  return a2;
}

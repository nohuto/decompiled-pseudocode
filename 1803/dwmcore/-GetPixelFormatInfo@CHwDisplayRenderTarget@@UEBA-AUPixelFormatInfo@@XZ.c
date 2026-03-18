/*
 * XREFs of ?GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800460B0
 * Callers:
 *     ?GetPixelFormatInfo@CHwDisplayRenderTarget@@WNI@EBA?AUPixelFormatInfo@@XZ @ 0x1800DE300 (-GetPixelFormatInfo@CHwDisplayRenderTarget@@WNI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHDRConversionRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801E74E0 (-GetPixelFormatInfo@CHDRConversionRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetPixelFormatInfo@CD3DSurface@@UEBA?AUPixelFormatInfo@@XZ @ 0x180042AD0 (-GetPixelFormatInfo@CD3DSurface@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CHwDisplayRenderTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 (*v4)(void); // rax
  char IsValid; // al
  _DWORD *v6; // rcx
  void (__fastcall *v7)(_DWORD *, _DWORD *); // rax

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v4 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid((CHwDisplayRenderTarget *)a1);
  else
    IsValid = v4();
  if ( IsValid )
  {
    v6 = (_DWORD *)(*(_QWORD *)(a1 + 200) + 120LL);
    v7 = *(void (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)v6 + 24LL);
    if ( (char *)v7 == (char *)CD3DSurface::GetPixelFormatInfo )
      CD3DSurface::GetPixelFormatInfo(v6, a2);
    else
      v7(v6, a2);
  }
  else
  {
    *a2 = *(_DWORD *)(a1 + 272);
    a2[1] = *(_DWORD *)(a1 + 328);
    a2[2] = *(_DWORD *)(a1 + 332);
  }
  return a2;
}

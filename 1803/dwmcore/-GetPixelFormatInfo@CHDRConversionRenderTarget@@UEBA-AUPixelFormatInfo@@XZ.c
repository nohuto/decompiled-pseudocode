/*
 * XREFs of ?GetPixelFormatInfo@CHDRConversionRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801E74E0
 * Callers:
 *     ?GetPixelFormatInfo@CHDRConversionRenderTarget@@WNI@EBA?AUPixelFormatInfo@@XZ @ 0x1800DE2F0 (-GetPixelFormatInfo@CHDRConversionRenderTarget@@WNI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800460B0 (-GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CHDRConversionRenderTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 608);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 608));
  else
    CHwDisplayRenderTarget::GetPixelFormatInfo(a1, a2);
  return a2;
}

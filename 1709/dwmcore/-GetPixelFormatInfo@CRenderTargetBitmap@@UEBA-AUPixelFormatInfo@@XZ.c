/*
 * XREFs of ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008B4E0
 * Callers:
 *     ?IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ @ 0x18008B578 (-IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ.c)
 *     ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x180090440 (-IsOpaque@CRenderTargetImageSource@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CRenderTargetBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  }
  else
  {
    *a2 = 0;
    a2[2] = 0;
    a2[1] = 3;
  }
  return a2;
}

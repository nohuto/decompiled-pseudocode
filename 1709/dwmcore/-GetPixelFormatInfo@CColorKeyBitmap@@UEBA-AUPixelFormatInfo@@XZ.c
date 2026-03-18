/*
 * XREFs of ?GetPixelFormatInfo@CColorKeyBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801D1750
 * Callers:
 *     ?GetPixelFormatInfo@CColorKeyBitmap@@W7EBA?AUPixelFormatInfo@@XZ @ 0x1800C7090 (-GetPixelFormatInfo@CColorKeyBitmap@@W7EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CColorKeyBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  if ( *a2 == 88 )
    *a2 = 87;
  a2[1] = 1;
  return a2;
}

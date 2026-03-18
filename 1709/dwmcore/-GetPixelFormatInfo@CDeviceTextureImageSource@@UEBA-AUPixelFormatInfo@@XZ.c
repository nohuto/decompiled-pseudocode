/*
 * XREFs of ?GetPixelFormatInfo@CDeviceTextureImageSource@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801D4930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceTextureImageSource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL) + 24LL))(*(_QWORD *)(a1 + 16) + 120LL);
  return a2;
}

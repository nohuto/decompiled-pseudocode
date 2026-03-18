/*
 * XREFs of ?IsHardwareProtected@CColorKeyBitmap@@W7EBA_NXZ @ 0x1800C6760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CColorKeyBitmap::IsHardwareProtected(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 8));
}

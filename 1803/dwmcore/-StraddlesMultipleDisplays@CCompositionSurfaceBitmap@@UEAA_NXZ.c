/*
 * XREFs of ?StraddlesMultipleDisplays@CCompositionSurfaceBitmap@@UEAA_NXZ @ 0x180007310
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::StraddlesMultipleDisplays(CCompositionSurfaceBitmap *this)
{
  return *((_DWORD *)this + 21) > 1u;
}

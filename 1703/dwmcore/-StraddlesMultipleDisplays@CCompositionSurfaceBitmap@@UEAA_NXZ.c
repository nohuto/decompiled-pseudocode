/*
 * XREFs of ?StraddlesMultipleDisplays@CCompositionSurfaceBitmap@@UEAA_NXZ @ 0x18000AB50
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::StraddlesMultipleDisplays(CCompositionSurfaceBitmap *this)
{
  return *((_DWORD *)this + 115) > 1u;
}

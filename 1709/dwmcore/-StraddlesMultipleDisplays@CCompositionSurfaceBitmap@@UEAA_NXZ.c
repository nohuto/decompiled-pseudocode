/*
 * XREFs of ?StraddlesMultipleDisplays@CCompositionSurfaceBitmap@@UEAA_NXZ @ 0x180028DA0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::StraddlesMultipleDisplays(CCompositionSurfaceBitmap *this)
{
  return *((_DWORD *)this + 21) > 1u;
}

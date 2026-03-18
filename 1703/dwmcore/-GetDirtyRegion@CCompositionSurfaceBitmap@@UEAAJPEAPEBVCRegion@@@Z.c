/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z @ 0x18000AB30
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetDirtyRegion(
        CCompositionSurfaceBitmap *this,
        const struct CRegion **a2)
{
  const struct CRegion *v2; // r8

  v2 = (const struct CRegion *)*((_QWORD *)this + 50);
  if ( v2 && **(_DWORD **)v2 )
    *a2 = v2;
  else
    *a2 = 0LL;
  return 0LL;
}

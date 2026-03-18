/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z @ 0x180047700
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetDirtyRegion(
        CCompositionSurfaceBitmap *this,
        const struct CRegion **a2)
{
  const struct CRegion *v2; // r8

  v2 = (const struct CRegion *)*((_QWORD *)this + 3);
  if ( !v2 || !**(_DWORD **)v2 )
    v2 = 0LL;
  *a2 = v2;
  return 0LL;
}

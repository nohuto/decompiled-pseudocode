/*
 * XREFs of ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18006F990
 * Callers:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B220 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::NotifyOnChanged(
        CVisual *a1,
        struct CProcessAttribution *(__fastcall *a2)(CWindowNode *__hidden this),
        CCompositionSurfaceBitmap *a3)
{
  *((_DWORD *)a1 + 8) |= 1u;
  return CResource::NotifyOnChanged(a1, a2, a3);
}

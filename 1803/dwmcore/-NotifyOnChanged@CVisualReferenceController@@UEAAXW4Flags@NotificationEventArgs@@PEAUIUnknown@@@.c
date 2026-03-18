/*
 * XREFs of ?NotifyOnChanged@CVisualReferenceController@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18013D510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualReferenceController::NotifyOnChanged(
        CVisual *a1,
        struct CProcessAttribution *(__fastcall *a2)(CWindowNode *__hidden this),
        CCompositionSurfaceBitmap *a3)
{
  CCompositionSurfaceBitmap *v4; // r8

  v4 = a1;
  if ( a3 )
    v4 = a3;
  return CResource::NotifyOnChanged(a1, a2, v4);
}

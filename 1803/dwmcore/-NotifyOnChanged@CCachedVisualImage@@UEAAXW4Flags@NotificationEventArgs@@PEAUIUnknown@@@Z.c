/*
 * XREFs of ?NotifyOnChanged@CCachedVisualImage@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DCFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::NotifyOnChanged(CVisual *a1, unsigned int a2, CCompositionSurfaceBitmap *a3)
{
  __int64 v4; // rdx

  v4 = 6LL;
  if ( a2 != 1 )
    v4 = a2;
  return CResource::NotifyOnChanged(a1, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v4, a3);
}

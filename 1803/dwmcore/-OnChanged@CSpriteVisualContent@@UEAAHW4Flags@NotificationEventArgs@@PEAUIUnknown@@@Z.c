/*
 * XREFs of ?OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009D8C0
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CSpriteVisualContent::OnChanged(__int64 a1, int a2)
{
  if ( a2 == 14 )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)(a1 + 64));
  return 1LL;
}

/*
 * XREFs of ?OnChanged@CProjectedShadowCaster@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801A0780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DestroyWhiteColor@CProjectedShadowCaster@@AEAAXXZ @ 0x18019FBA8 (-DestroyWhiteColor@CProjectedShadowCaster@@AEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowCaster::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 == *(_QWORD *)(a1 + 112) )
  {
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)(a1 + 120));
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)(a1 + 128));
    CProjectedShadowCaster::DestroyWhiteColor((CRenderTargetImageSource **)a1);
  }
  return 1LL;
}

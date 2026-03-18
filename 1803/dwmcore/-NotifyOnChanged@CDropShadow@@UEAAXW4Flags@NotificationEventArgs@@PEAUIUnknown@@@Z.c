/*
 * XREFs of ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18018A760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDropShadow::NotifyOnChanged(__int64 a1, unsigned int a2, CRenderTargetImageSource *a3)
{
  __int64 v6; // rbx
  CRenderTargetImageSource ***v7; // r15
  CRenderTargetImageSource **i; // rbx

  if ( a3 && a3 != (CRenderTargetImageSource *)a1 )
  {
    if ( a3 == *(CRenderTargetImageSource **)(a1 + 224) )
    {
      v6 = a1 + 192;
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)(a1 + 192));
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)(v6 + 8));
    }
    v7 = *(CRenderTargetImageSource ****)(a1 + 80);
    for ( i = *v7; i != (CRenderTargetImageSource **)v7; i = (CRenderTargetImageSource **)*i )
    {
      if ( a3 == i[7] )
      {
        Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(i + 3);
        Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(i + 4);
      }
    }
    if ( a2 == 1 )
      a2 = 6;
  }
  return CResource::NotifyOnChanged(
           (CVisual *)a1,
           (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))a2,
           (CCompositionSurfaceBitmap *)a1);
}

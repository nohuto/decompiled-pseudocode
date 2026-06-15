/*
 * XREFs of ??_G?$InvokeHelper@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageUninstallingEventArgs@23@@Foundation@Windows@@V_lambda_bcae059e430ab0425bfd15752f8ec40b_@@$01$0?0@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800D4F60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18004604C (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>,_lambda_bcae059e430ab0425bfd15752f8ec40b_,2,-1>::`scalar deleting destructor'(
        volatile signed __int32 **a1,
        char a2)
{
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

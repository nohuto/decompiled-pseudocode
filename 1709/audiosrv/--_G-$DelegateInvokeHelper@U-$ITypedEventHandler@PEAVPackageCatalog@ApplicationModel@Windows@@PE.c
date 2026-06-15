/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageInstallingEventArgs@23@@Foundation@Windows@@V_lambda_3e6e6990ae6602ba2aad8f5a9254f972_@@$0?0PEAUIPackageCatalog@ApplicationModel@3@PEAUIPackageInstallingEventArgs@63@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVPackageCatalog@ApplicationModel@Windows@@PEAUIPackageCatalog@23@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPackageInstallingEventArgs@ApplicationModel@Windows@@PEAUIPackageInstallingEventArgs@23@@234@@Foundation@Windows@@EAAJPEAUIPackageCatalog@ApplicationModel@3@PEAUIPackageInstallingEventArgs@53@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800E2870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::IPackageCatalog *>,Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::PackageInstallingEventArgs *,Windows::ApplicationModel::IPackageInstallingEventArgs *>>::*)(Windows::ApplicationModel::IPackageCatalog *,Windows::ApplicationModel::IPackageInstallingEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>,_lambda_3e6e6990ae6602ba2aad8f5a9254f972_,-1,Windows::ApplicationModel::IPackageCatalog *,Windows::ApplicationModel::IPackageInstallingEventArgs *>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

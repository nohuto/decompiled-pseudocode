/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageInstallingEventArgs@23@@Foundation@Windows@@V_lambda_f6dae7814606855f79762b97c09932ee_@@$0?0PEAUIPackageCatalog@ApplicationModel@3@PEAUIPackageInstallingEventArgs@63@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVPackageCatalog@ApplicationModel@Windows@@PEAUIPackageCatalog@23@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPackageInstallingEventArgs@ApplicationModel@Windows@@PEAUIPackageInstallingEventArgs@23@@234@@Foundation@Windows@@EAAJPEAUIPackageCatalog@ApplicationModel@3@PEAUIPackageInstallingEventArgs@53@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18010F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18004F278 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::IPackageCatalog *>,Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::PackageInstallingEventArgs *,Windows::ApplicationModel::IPackageInstallingEventArgs *>>::*)(Windows::ApplicationModel::IPackageCatalog *,Windows::ApplicationModel::IPackageInstallingEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>,_lambda_f6dae7814606855f79762b97c09932ee_,-1,Windows::ApplicationModel::IPackageCatalog *,Windows::ApplicationModel::IPackageInstallingEventArgs *>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

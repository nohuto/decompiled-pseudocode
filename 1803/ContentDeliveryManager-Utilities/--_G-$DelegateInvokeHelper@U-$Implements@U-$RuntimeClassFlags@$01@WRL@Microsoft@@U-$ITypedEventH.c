/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@AEAV_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_@@$0?0PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIAppServiceClosedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIAppServiceConnection@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAppServiceClosedEventArgs@AppService@ApplicationModel@Windows@@PEAUIAppServiceClosedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIAppServiceConnection@AppService@ApplicationModel@3@PEAUIAppServiceClosedEventArgs@563@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800407F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::IAppServiceConnection *>,Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *,Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs *>>::*)(Windows::ApplicationModel::AppService::IAppServiceConnection *,Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_d4e16ff8e34da2edeeacc718f45dd8b6_ &,-1,Windows::ApplicationModel::AppService::IAppServiceConnection *,Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs *>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx

  *(_DWORD *)(a1 + 60) = -1073741823;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}

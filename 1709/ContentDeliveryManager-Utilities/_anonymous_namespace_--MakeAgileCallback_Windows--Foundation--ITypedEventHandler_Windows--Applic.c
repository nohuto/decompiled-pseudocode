/*
 * XREFs of _anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64___lambda_d4e16ff8e34da2edeeacc718f45dd8b6___ @ 0x180037778
 * Callers:
 *     ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18002D7DC (-EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnect.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection_____ptr64_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____ptr64___lambda_d4e16ff8e34da2edeeacc718f45dd8b6___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v5; // rbx
  bool v6; // zf
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v5 )
  {
    *v5 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 1));
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_DWORD *)v5 + 17) = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v2 = v5;
    v5[9] = *a2;
    *v5 = off_1800C4B60;
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  }
  result = a1;
  *a1 = v2;
  return result;
}

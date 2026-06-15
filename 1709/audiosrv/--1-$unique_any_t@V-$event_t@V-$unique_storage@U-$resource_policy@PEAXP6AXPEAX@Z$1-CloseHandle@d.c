/*
 * XREFs of ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x18005AB2C
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$14 @ 0x18003943B (_CAudioStream--_CAudioStream_--_1_--dtor$14.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$14 @ 0x180039555 (_CAudioStream--CAudioStream_--_1_--dtor$14.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::_ProcessLocalStorageData_wil::details_abi::FeatureStateData__::_1_::dtor$0 @ 0x18008A334 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--_ProcessLocalSto.c)
 *     _CWorkFifo::CWorkFifo_::_1_::dtor$2 @ 0x1800BF4BA (_CWorkFifo--CWorkFifo_--_1_--dtor$2.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800317C0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}

/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180097D14
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$3 @ 0x180068E1C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$3.c)
 *     __lambda_1b72e5d594e55fed068379ebbc44b0d0_::operator()_::_1_::dtor$1 @ 0x1800CF70F (__lambda_1b72e5d594e55fed068379ebbc44b0d0_--operator()_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$14 @ 0x1800D146A (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$14.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$7 @ 0x1800D320D (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$7.c)
 *     _TelephonyController::CreateCallInstance_::_1_::dtor$0 @ 0x18011A51B (_TelephonyController--CreateCallInstance_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,0,std::nullptr_t>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return (*(__int64 (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  return result;
}

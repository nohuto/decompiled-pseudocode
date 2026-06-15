/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019CF0
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$1 @ 0x180036A54 (_CApplication--CApplication_--_1_--dtor$1.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$56 @ 0x180036D36 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$56.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$57 @ 0x180036D46 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$57.c)
 *     _CProcess::CProcess_::_1_::dtor$6 @ 0x180036E57 (_CProcess--CProcess_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$7 @ 0x180036E6A (_CProcess--CProcess_--_1_--dtor$7.c)
 *     _CProcess::CProcess_::_1_::dtor$8 @ 0x180036E7D (_CProcess--CProcess_--_1_--dtor$8.c)
 *     _CProcess::CProcess_::_1_::dtor$9 @ 0x180036E90 (_CProcess--CProcess_--_1_--dtor$9.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$9 @ 0x180037375 (_CApplicationManager--RpcGetProcess_--_1_--dtor$9.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$10 @ 0x180037381 (_CApplicationManager--RpcGetProcess_--_1_--dtor$10.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$3 @ 0x180037F5E (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$3.c)
 *     _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::dtor$1 @ 0x180037F76 (_ApplicationSpecificEndpointInfo--GetAppKey_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$0 @ 0x180037FE8 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$1 @ 0x180037FF4 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$7 @ 0x18003803C (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}

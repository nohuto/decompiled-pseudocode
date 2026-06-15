/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001AA60
 * Callers:
 *     _CApplicationManager::CreateInstance_::_1_::dtor$2 @ 0x1800372F9 (_CApplicationManager--CreateInstance_--_1_--dtor$2.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$6 @ 0x180037351 (_CApplicationManager--RpcGetProcess_--_1_--dtor$6.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$7 @ 0x18003735D (_CApplicationManager--RpcGetProcess_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}

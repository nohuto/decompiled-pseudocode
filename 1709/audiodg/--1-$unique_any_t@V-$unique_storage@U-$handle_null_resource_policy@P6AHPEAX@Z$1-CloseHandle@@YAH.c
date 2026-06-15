/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140030CA0
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$4 @ 0x1400214A0 (_CSubmixImpl--CreateStream_--_1_--dtor$4.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$5 @ 0x1400214AC (_CSubmixImpl--CreateStream_--_1_--dtor$5.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$14 @ 0x140021C1C (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$14.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}

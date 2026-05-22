/*
 * XREFs of _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$4 @ 0x1800D1BC8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(*(_QWORD *)(a2 + 64) + 72LL));
}

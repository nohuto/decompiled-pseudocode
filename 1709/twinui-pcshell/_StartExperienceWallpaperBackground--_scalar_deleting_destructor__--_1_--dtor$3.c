/*
 * XREFs of _StartExperienceWallpaperBackground::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1801EB6F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall StartExperienceWallpaperBackground::_scalar_deleting_destructor__::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>>((void **)(*(_QWORD *)(a2 + 64) + 48LL));
}

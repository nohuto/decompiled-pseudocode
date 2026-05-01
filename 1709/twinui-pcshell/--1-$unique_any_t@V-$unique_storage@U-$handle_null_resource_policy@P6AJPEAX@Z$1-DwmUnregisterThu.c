/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BA41C
 * Callers:
 *     _StartExperienceWallpaperBackground::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1801EB6F5 (_StartExperienceWallpaperBackground--_scalar_deleting_destructor__--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  HRESULT result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return DwmUnregisterThumbnail(v1);
  return result;
}

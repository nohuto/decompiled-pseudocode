/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x180041E7C
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x1800411F8 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180041234 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x1800412C0 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180041320 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x1800413B0 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x18004152C (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}

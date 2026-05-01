/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x180098F9C
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x1800986C8 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180098704 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180098790 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800987F0 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x180098880 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x1800989FC (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}

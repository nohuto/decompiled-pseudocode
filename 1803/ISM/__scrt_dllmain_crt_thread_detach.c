/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x1800E134C
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800E0E20 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180043CF0 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char _scrt_dllmain_crt_thread_detach()
{
  _scrt_stub_for_acrt_uninitialize_critical();
  _scrt_stub_for_acrt_uninitialize_critical();
  return 1;
}

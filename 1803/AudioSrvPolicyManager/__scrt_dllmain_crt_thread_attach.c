/*
 * XREFs of __scrt_dllmain_crt_thread_attach @ 0x1800351A0
 * Callers:
 *     dllmain_crt_dispatch @ 0x180034AF0 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180033550 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char _scrt_dllmain_crt_thread_attach()
{
  if ( !_scrt_stub_for_acrt_uninitialize_critical() )
    return 0;
  if ( !_scrt_stub_for_acrt_uninitialize_critical() )
  {
    _scrt_stub_for_acrt_uninitialize_critical();
    return 0;
  }
  return 1;
}

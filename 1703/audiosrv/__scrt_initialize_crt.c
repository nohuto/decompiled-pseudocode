/*
 * XREFs of __scrt_initialize_crt @ 0x180048FF4
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800488B0 (dllmain_crt_process_attach.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x18002F7F0 (__scrt_stub_for_acrt_uninitialize_critical.c)
 *     __isa_available_init @ 0x180049924 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_18012B611;
  if ( !a1 )
    v1 = 1;
  byte_18012B611 = v1;
  _isa_available_init();
  if ( !_scrt_stub_for_acrt_uninitialize_critical() )
    return 0;
  if ( !_scrt_stub_for_acrt_uninitialize_critical() )
  {
    _scrt_stub_for_acrt_uninitialize_critical();
    return 0;
  }
  return 1;
}

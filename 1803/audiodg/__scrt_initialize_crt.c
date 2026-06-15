/*
 * XREFs of __scrt_initialize_crt @ 0x14001C084
 * Callers:
 *     __scrt_common_main_seh @ 0x14001BACC (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x14001B360 (__scrt_stub_for_acrt_uninitialize.c)
 *     __isa_available_init @ 0x14001C75C (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_140087D68;
  if ( !a1 )
    v1 = 1;
  byte_140087D68 = v1;
  _isa_available_init();
  if ( !_scrt_stub_for_acrt_uninitialize() )
    return 0;
  if ( !_scrt_stub_for_acrt_uninitialize() )
  {
    _scrt_stub_for_acrt_uninitialize();
    return 0;
  }
  return 1;
}

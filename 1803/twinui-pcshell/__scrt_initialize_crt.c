/*
 * XREFs of __scrt_initialize_crt @ 0x180098834
 * Callers:
 *     dllmain_crt_process_attach @ 0x180097E60 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?v_SupportsBack@UAPViewWrapper@@EEAA_NXZ @ 0x180096310 (-v_SupportsBack@UAPViewWrapper@@EEAA_NXZ.c)
 *     __isa_available_init @ 0x180098DE0 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  UAPViewWrapper *v2; // rcx
  UAPViewWrapper *v3; // rcx

  v1 = byte_180437BC8;
  if ( !a1 )
    v1 = 1;
  byte_180437BC8 = v1;
  _isa_available_init();
  if ( !UAPViewWrapper::v_SupportsBack(v2) )
    return 0;
  if ( !UAPViewWrapper::v_SupportsBack(v3) )
  {
    UAPViewWrapper::v_SupportsBack(0LL);
    return 0;
  }
  return 1;
}

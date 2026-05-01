/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x180098820
 * Callers:
 *     dllmain_crt_process_detach @ 0x180097F7C (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_SupportsBack@UAPViewWrapper@@EEAA_NXZ @ 0x180096310 (-v_SupportsBack@UAPViewWrapper@@EEAA_NXZ.c)
 */

char _scrt_dllmain_uninitialize_critical()
{
  UAPViewWrapper *v0; // rcx

  UAPViewWrapper::v_SupportsBack(0LL);
  return UAPViewWrapper::v_SupportsBack(v0);
}

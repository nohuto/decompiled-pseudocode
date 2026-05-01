/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x1801944B0
 * Callers:
 *     dllmain_crt_process_detach @ 0x180193C24 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_SupportsBack@UAPViewWrapper@@EEAA_NXZ @ 0x180064980 (-v_SupportsBack@UAPViewWrapper@@EEAA_NXZ.c)
 */

char _scrt_dllmain_uninitialize_critical()
{
  UAPViewWrapper *v0; // rcx

  UAPViewWrapper::v_SupportsBack(0LL);
  return UAPViewWrapper::v_SupportsBack(v0);
}

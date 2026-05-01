/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x180098778
 * Callers:
 *     dllmain_crt_dispatch @ 0x180097E10 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?v_SupportsBack@UAPViewWrapper@@EEAA_NXZ @ 0x180096310 (-v_SupportsBack@UAPViewWrapper@@EEAA_NXZ.c)
 */

char __fastcall _scrt_dllmain_crt_thread_detach(UAPViewWrapper *a1)
{
  UAPViewWrapper *v1; // rcx

  UAPViewWrapper::v_SupportsBack(a1);
  UAPViewWrapper::v_SupportsBack(v1);
  return 1;
}

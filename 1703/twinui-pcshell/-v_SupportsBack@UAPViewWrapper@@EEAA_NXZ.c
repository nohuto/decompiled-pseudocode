/*
 * XREFs of ?v_SupportsBack@UAPViewWrapper@@EEAA_NXZ @ 0x180064980
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x1801943E0 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x180194408 (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x1801944B0 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x1801944C4 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x1801946B0 (__scrt_uninitialize_crt.c)
 * Callees:
 *     <none>
 */

char __fastcall UAPViewWrapper::v_SupportsBack(UAPViewWrapper *this)
{
  return 1;
}

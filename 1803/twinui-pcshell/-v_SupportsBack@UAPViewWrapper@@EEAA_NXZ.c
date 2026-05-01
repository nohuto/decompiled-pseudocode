/*
 * XREFs of ?v_SupportsBack@UAPViewWrapper@@EEAA_NXZ @ 0x180096310
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x180098750 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x180098778 (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180098820 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x180098834 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x180098A20 (__scrt_uninitialize_crt.c)
 * Callees:
 *     <none>
 */

char __fastcall UAPViewWrapper::v_SupportsBack(UAPViewWrapper *this)
{
  return 1;
}

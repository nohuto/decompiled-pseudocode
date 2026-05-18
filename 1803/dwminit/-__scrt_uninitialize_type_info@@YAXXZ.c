/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180008538
 * Callers:
 *     dllmain_crt_process_detach @ 0x18000826C (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

void __scrt_uninitialize_type_info(void)
{
  _std_type_info_destroy_list();
}

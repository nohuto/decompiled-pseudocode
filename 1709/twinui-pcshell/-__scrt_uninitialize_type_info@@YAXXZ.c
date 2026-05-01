/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x1801E2884
 * Callers:
 *     dllmain_crt_process_detach @ 0x1801E1C84 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

void __scrt_uninitialize_type_info(void)
{
  _std_type_info_destroy_list(&__type_info_root_node);
}

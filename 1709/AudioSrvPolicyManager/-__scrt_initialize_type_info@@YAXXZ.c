/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x180027194
 * Callers:
 *     dllmain_crt_process_attach @ 0x180026660 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}

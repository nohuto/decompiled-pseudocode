/*
 * XREFs of __scrt_get_dyn_tls_init_callback @ 0x180008560
 * Callers:
 *     dllmain_crt_process_attach @ 0x180008150 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void *_scrt_get_dyn_tls_init_callback()
{
  return &_dyn_tls_init_callback;
}

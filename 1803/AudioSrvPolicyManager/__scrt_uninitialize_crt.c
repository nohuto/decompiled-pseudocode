/*
 * XREFs of __scrt_uninitialize_crt @ 0x180035470
 * Callers:
 *     dllmain_crt_process_detach @ 0x180034C5C (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180033550 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_18004ED18 || !a2 )
  {
    _scrt_stub_for_acrt_uninitialize_critical();
    _scrt_stub_for_acrt_uninitialize_critical();
  }
  return 1;
}

/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800417B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18005BA58);
  if ( hObject )
    CloseHandle(hObject);
}

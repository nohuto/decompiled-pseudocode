/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180042760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18005DA20);
  if ( hObject )
    CloseHandle(hObject);
}

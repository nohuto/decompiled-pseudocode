/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800CBE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18010EC60);
  if ( hHandle )
    CloseHandle(hHandle);
}

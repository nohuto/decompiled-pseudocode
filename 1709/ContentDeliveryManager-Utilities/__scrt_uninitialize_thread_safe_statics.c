/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800B3FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18015D820);
  if ( hHandle )
    CloseHandle(hHandle);
}

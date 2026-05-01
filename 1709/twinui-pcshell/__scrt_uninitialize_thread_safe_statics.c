/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1801E2020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1802B9298);
  if ( hHandle )
    CloseHandle(hHandle);
}

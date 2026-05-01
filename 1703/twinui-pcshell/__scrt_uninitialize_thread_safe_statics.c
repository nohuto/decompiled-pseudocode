/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180193FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180243A98);
  if ( hHandle )
    CloseHandle(hHandle);
}

/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180029330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18003B918);
  if ( hHandle )
    CloseHandle(hHandle);
}

/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180035F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18004ED68);
  if ( hHandle )
    CloseHandle(hHandle);
}

/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x14001D260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_140087DC8);
  if ( hEvent )
    CloseHandle(hEvent);
}

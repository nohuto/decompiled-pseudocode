/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800C2F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18026E980);
  if ( hHandle )
    CloseHandle(hHandle);
}

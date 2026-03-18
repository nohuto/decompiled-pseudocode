/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800DB220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1802D5D30);
  if ( hHandle )
    CloseHandle(hHandle);
}

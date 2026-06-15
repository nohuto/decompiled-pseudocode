/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x14001E1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_140089DC8);
  if ( hHandle )
    CloseHandle(hHandle);
}

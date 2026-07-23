/*
 * XREFs of TpCallbackReleaseMutexOnCompletion @ 0x1801056A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackReleaseMutexOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Mutex)
{
  if ( !Instance || (char *)Mutex - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_DWORD *)Instance + 38) )
  {
    sub_1801058B8(Instance);
  }
  else
  {
    *((_DWORD *)Instance + 38) = (_DWORD)Mutex;
    *((_DWORD *)Instance + 36) |= 2u;
  }
}

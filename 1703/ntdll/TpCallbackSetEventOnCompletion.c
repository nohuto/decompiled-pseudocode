/*
 * XREFs of TpCallbackSetEventOnCompletion @ 0x1800896B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackSetEventOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Event)
{
  if ( !Instance || (char *)Event - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_DWORD *)Instance + 37) )
  {
    sub_1801058B8(Instance);
  }
  else
  {
    *((_DWORD *)Instance + 37) = (_DWORD)Event;
    *((_DWORD *)Instance + 36) |= 4u;
  }
}

/*
 * XREFs of TpCallbackSetEventOnCompletion @ 0x180083610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackSetEventOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Event)
{
  __int64 v2; // r8

  if ( !Instance || (char *)Event - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_DWORD *)Instance + 37) )
  {
    sub_1801086C8(Instance, Event, v2);
  }
  else
  {
    *((_DWORD *)Instance + 37) = (_DWORD)Event;
    *((_DWORD *)Instance + 36) |= 4u;
  }
}

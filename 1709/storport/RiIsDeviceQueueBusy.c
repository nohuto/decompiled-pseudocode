/*
 * XREFs of RiIsDeviceQueueBusy @ 0x1C0009CAC
 * Callers:
 *     RiGetEnqueueReason @ 0x1C0009BD8 (RiGetEnqueueReason.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RiIsDeviceQueueBusy(_DWORD *a1, char a2)
{
  int v2; // eax

  if ( !a1[8] )
  {
    v2 = a1[1];
    if ( a2 )
    {
      if ( a1[19] <= v2 )
        return 0LL;
    }
    else if ( a1[19] < v2 )
    {
      return 0LL;
    }
  }
  return 1LL;
}

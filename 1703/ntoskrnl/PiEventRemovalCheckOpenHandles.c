/*
 * XREFs of PiEventRemovalCheckOpenHandles @ 0x14059A538
 * Callers:
 *     PiEventQueryRemoveDevices @ 0x14059A3AC (PiEventQueryRemoveDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     PnpIsChainDereferenced @ 0x140132070 (PnpIsChainDereferenced.c)
 */

__int64 __fastcall PiEventRemovalCheckOpenHandles(_QWORD *a1, int a2, _QWORD *a3)
{
  int v4; // ebx
  unsigned int v7; // edi
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  Interval.QuadPart = -1000000LL;
  v7 = -2147483631;
  while ( 1 )
  {
    if ( v4 )
      KeDelayExecutionThread(0, 0, &Interval);
    if ( !(unsigned int)PnpIsChainDereferenced(a1, a2, 1, 0, a3) )
      break;
    if ( (unsigned int)++v4 >= 0x32 )
      return v7;
  }
  return 0;
}

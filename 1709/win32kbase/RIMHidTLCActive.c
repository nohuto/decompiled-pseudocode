/*
 * XREFs of RIMHidTLCActive @ 0x1C0018FA8
 * Callers:
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     RIMFreeSpecificDevWorker @ 0x1C000E7F0 (RIMFreeSpecificDevWorker.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0018DA0 (RIMDirectStartStopDeviceRead.c)
 *     rimObsStartStopDeviceRead @ 0x1C0114A4C (rimObsStartStopDeviceRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1[7] || a1[6] || a1[8] > (unsigned int)(a1[9] - a1[10]) )
    return 1;
  return v1;
}

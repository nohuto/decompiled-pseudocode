/*
 * XREFs of RIMHidTLCActive @ 0x1C005030C
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0008734 (RIMFreeSpecificDevWorker.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050100 (RIMDirectStartStopDeviceRead.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1[6] || a1[7] > (unsigned int)(a1[8] - a1[9]) )
    return 1;
  return v1;
}

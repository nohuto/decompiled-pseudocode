/*
 * XREFs of UnqueueMouseEvent @ 0x1C01A0E54
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     MonotonicTick @ 0x1C01A0938 (MonotonicTick.c)
 */

__int64 __fastcall UnqueueMouseEvent(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  char *v4; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresMouseEventQueue);
  MonotonicTick();
  v2 = gdwMouseEvents;
  v3 = 0;
  if ( gdwMouseEvents )
  {
    v3 = 1;
    v4 = (char *)&gMouseEventQueue
       + 104 * (((unsigned __int8)gdwMouseQueueHead - (unsigned __int8)gdwMouseEvents + 1) & 0xF);
    *(_OWORD *)a1 = *(_OWORD *)v4;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)v4 + 1);
    *(_OWORD *)(a1 + 32) = *((_OWORD *)v4 + 2);
    *(_OWORD *)(a1 + 48) = *((_OWORD *)v4 + 3);
    *(_OWORD *)(a1 + 64) = *((_OWORD *)v4 + 4);
    *(_OWORD *)(a1 + 80) = *((_OWORD *)v4 + 5);
    *(_QWORD *)(a1 + 96) = *((_QWORD *)v4 + 12);
    memset(v4, 0, 0x68uLL);
    gdwMouseEvents = v2 - 1;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
  return v3;
}

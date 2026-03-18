/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x1400AE16C
 * Callers:
 *     EtwTraceAutoBoostClearFloor @ 0x14027ADF0 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14027AF04 (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceReadyThread @ 0x14027B7EC (EtwTraceReadyThread.c)
 *     EtwpProfileInterrupt @ 0x14027C9C0 (EtwpProfileInterrupt.c)
 *     PerfLogImageUnload @ 0x140452774 (PerfLogImageUnload.c)
 *     PerfLogImageLoad @ 0x1404529B8 (PerfLogImageLoad.c)
 *     EtwpWriteProcessEvent @ 0x1404DBBF8 (EtwpWriteProcessEvent.c)
 *     EtwTraceThread @ 0x14074619C (EtwTraceThread.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 */

void __fastcall EtwTraceSiloKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  unsigned __int64 v8; // rsi
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v15; // ecx

  v8 = a4;
  EtwTraceKernelEvent(a2, a3, a4, a5, a6);
  if ( a1 )
  {
    v10 = *((_QWORD *)PsGetServerSiloGlobals(a1) + 108);
    v11 = *(_DWORD *)(v10 + 4172);
    while ( _BitScanForward(&v15, v11) )
    {
      v12 = v15;
      v11 &= v11 - 1;
      v13 = 32LL * v15 + v10 + 4208;
      if ( v13 )
      {
        if ( ((unsigned int)v8 & *(_DWORD *)(v13 + 4 * (v8 >> 29)) & 0x1FFFFFFF) != 0 )
          EtwpLogKernelEvent(a2, v10, *(unsigned __int8 *)(v10 + 2 * v12 + 4156), a3, a5, a6);
      }
    }
  }
}

/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x14003EF90
 * Callers:
 *     EtwpTraceImageUnload @ 0x14003E620 (EtwpTraceImageUnload.c)
 *     EtwpTraceIo @ 0x140177130 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140177690 (EtwpTraceFileName.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1402AE7C8 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1402AE8DC (EtwTraceAutoBoostSetFloor.c)
 *     EtwTracePageFault @ 0x1402AEF04 (EtwTracePageFault.c)
 *     EtwTraceReadyThread @ 0x1402AF168 (EtwTraceReadyThread.c)
 *     EtwpProfileInterrupt @ 0x1402AFF40 (EtwpProfileInterrupt.c)
 *     EtwpTraceFileIo @ 0x1402B0590 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1402B06D0 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1402B0C70 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1402B0E30 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1402B0ED0 (PerfInfoLogSysCallExit.c)
 *     PerfLogImageLoad @ 0x1404B7840 (PerfLogImageLoad.c)
 *     EtwpWriteProcessEvent @ 0x1404F8600 (EtwpWriteProcessEvent.c)
 *     EtwTraceThread @ 0x1404FD384 (EtwTraceThread.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A8664 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1407A936C (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1407A93FC (PerfInfoLogVirtualFree.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceSiloKernelEvent(__int64 a1, int a2, int a3, unsigned int a4, __int16 a5, int a6)
{
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // ebx
  bool v12; // zf
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx

  result = EtwpHostSiloState;
  v10 = a4;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4188);
  while ( 1 )
  {
    v12 = !_BitScanForward((unsigned int *)&v13, v11);
    if ( v12 )
      break;
    result = v11 - 1;
    v11 &= result;
    v14 = EtwpHostSiloState + 32 * (v13 + 132);
    if ( v14 )
    {
      result = v10 >> 29;
      if ( ((unsigned int)v10 & *(_DWORD *)(v14 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
        result = EtwpLogKernelEvent(
                   a2,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4172),
                   a3,
                   a5,
                   a6);
    }
  }
  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 1256);
    v15 = *(_QWORD *)(result + 864);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 4188);
      while ( 1 )
      {
        v12 = !_BitScanForward((unsigned int *)&v19, v16);
        if ( v12 )
          break;
        v17 = (unsigned int)v19;
        result = v16 - 1;
        v16 &= result;
        v18 = v15 + 32 * (v19 + 132);
        if ( v18 )
        {
          result = v10 >> 29;
          if ( ((unsigned int)v10 & *(_DWORD *)(v18 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
            result = EtwpLogKernelEvent(a2, v15, *(unsigned __int8 *)(v15 + 2 * v17 + 4172), a3, a5, a6);
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1800F0084
 * Callers:
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800A9AFC (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800A9FD8 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 */

void __fastcall AEWMILOG_GLITCH(__int64 a1, void *a2, __int64 a3, char a4, unsigned __int64 a5, unsigned __int64 a6)
{
  _QWORD v8[12]; // [rsp+20h] [rbp-60h] BYREF

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(v8, 0, 0x40uLL);
    HIDWORD(v8[5]) = 0x20000;
    LODWORD(v8[7]) = 0;
    LOWORD(v8[0]) = 96;
    v8[8] = a5;
    v8[10] = 0LL;
    v8[11] = 0LL;
    v8[9] = a6;
    *(_OWORD *)&v8[3] = AEWMIGUID_GLITCH;
    BYTE5(v8[0]) = 5;
    BYTE4(v8[0]) = a4;
    v8[6] = a2;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v8);
  }
}

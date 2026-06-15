/*
 * XREFs of WPP_SF_qdDdigi @ 0x1800AB7BC
 * Callers:
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800A9AFC (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800A9FD8 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdDdigi(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+C8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, a2, (__int64 *)va);
}

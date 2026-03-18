/*
 * XREFs of ?VgpuDebugPrint@@YAXPEBDZZ @ 0x1C002B108
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C002B8C0 (-VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__.c)
 *     ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C002BA50 (-VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETI.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C002E4B0 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void VgpuDebugPrint(const char *a1, ...)
{
  char DstBuf[256]; // [rsp+20h] [rbp-118h] BYREF
  va_list va; // [rsp+148h] [rbp+10h] BYREF

  va_start(va, a1);
  if ( g_EnableDebugPrint )
  {
    vsprintf_s(DstBuf, 0x100uLL, a1, va);
    DbgPrintEx(0, 0, DstBuf);
  }
}

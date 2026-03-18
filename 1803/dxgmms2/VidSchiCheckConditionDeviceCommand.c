/*
 * XREFs of VidSchiCheckConditionDeviceCommand @ 0x1C00019F0
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00012F0 (VidSchSubmitDeviceCommand.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A450 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C002BAE0 (VidSchiProcessPrimariesTerminationList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckConditionDeviceCommand(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 156) && !*(_DWORD *)(a2 + 104) )
  {
    if ( (*(_BYTE *)(a2 + 25) & 1) != 0 )
      LOBYTE(v2) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 16LL) + 8LL) == 0;
    else
      return 1;
  }
  return v2;
}

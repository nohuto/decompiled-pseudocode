/*
 * XREFs of VidSchiCheckConditionDeviceCommand @ 0x1C0010E14
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0008F20 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E8C8 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00108F0 (VidSchSubmitDeviceCommand.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0026AF0 (VidSchiProcessPrimariesTerminationList.c)
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

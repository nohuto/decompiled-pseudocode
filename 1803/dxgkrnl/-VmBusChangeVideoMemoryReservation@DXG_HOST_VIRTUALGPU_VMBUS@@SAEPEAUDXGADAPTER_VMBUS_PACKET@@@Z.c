/*
 * XREFs of ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017CB90
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D40C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C016BBEC (DxgkChangeVideoMemoryReservationInternal.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChangeVideoMemoryReservation(
        struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = -1073741811;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  if ( v2 )
  {
    if ( !*(_QWORD *)(v2 + 24) && !*(_DWORD *)(v2 + 32) )
      v4 = DxgkChangeVideoMemoryReservationInternal(
             (_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *)(v2 + 24),
             0,
             *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL));
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v4, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

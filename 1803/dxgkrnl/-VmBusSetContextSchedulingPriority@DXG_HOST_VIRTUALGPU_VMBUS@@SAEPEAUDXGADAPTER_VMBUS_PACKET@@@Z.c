/*
 * XREFs of ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186380
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D45C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C010E060 (DxgkSetContextSchedulingPriority.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetContextSchedulingPriority(
        struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  struct VMBPACKETCOMPLETION__ *v6; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v2 )
  {
    v5 = DxgkSetContextSchedulingPriority(v2 + 24, v3, v4);
    v6 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v8 = v5;
    VmBusCompletePacket(v6, &v8, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

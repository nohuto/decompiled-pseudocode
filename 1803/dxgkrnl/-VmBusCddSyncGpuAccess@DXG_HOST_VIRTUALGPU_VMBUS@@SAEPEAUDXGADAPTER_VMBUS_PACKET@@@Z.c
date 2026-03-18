/*
 * XREFs of ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017CB30
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D45C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@IH@Z @ 0x1C00D0300 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@IH@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddSyncGpuAccess(struct _KTHREAD ***a1)
{
  __int64 v2; // rax
  int v3; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v2 )
  {
    v3 = DxgkpCddSyncGPUAccess(a1[6], a1[5][2], *(_DWORD *)(v2 + 24), *(unsigned __int8 *)(v2 + 28));
    v4 = (struct VMBPACKETCOMPLETION__ *)a1[8];
    v6 = v3;
    VmBusCompletePacket(v4, &v6, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

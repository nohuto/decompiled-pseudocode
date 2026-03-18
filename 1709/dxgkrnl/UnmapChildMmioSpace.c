/*
 * XREFs of UnmapChildMmioSpace @ 0x1C019A720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0024CC8 (-GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

void __fastcall UnmapChildMmioSpace(DXGPROCESS *a1, __int64 a2, void *a3)
{
  struct VMBCHANNEL__ *VmBusChannel; // rax
  __int64 v5; // r8

  _InterlockedDecrement(&g_VgpuNumHpaToGpaMappings);
  _InterlockedExchangeAdd64(&g_VgpuSizeHpaToGpaMappings, -a2);
  VmBusChannel = DXGPROCESS::GetVmBusChannel(a1);
  VmbChannelUnmapChildMmioSpace(VmBusChannel, v5);
  ExFreePoolWithTag(a3, 0x4B677844u);
}

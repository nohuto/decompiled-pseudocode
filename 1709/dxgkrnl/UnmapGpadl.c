/*
 * XREFs of UnmapGpadl @ 0x1C019A770
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0024CC8 (-GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

__int64 __fastcall UnmapGpadl(DXGPROCESS *a1, __int64 a2, __int64 a3)
{
  struct VMBCHANNEL__ *VmBusChannel; // rax
  __int64 result; // rax

  VmBusChannel = DXGPROCESS::GetVmBusChannel(a1);
  result = VmbChannelUnmapGpadl(VmBusChannel);
  _InterlockedDecrement(&g_VgpuNumGpadlMappings);
  _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, -a3);
  return result;
}

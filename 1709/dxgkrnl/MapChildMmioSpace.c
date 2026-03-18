/*
 * XREFs of MapChildMmioSpace @ 0x1C019A600
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0024CC8 (-GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

__int64 __fastcall MapChildMmioSpace(DXGPROCESS *this, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  PVOID PoolWithTag; // rbx
  struct VMBCHANNEL__ *VmBusChannel; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // esi

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4B677844u);
  if ( !PoolWithTag )
    return 3221225495LL;
  VmBusChannel = DXGPROCESS::GetVmBusChannel(this);
  v13 = VmbChannelMapChildMmioSpace(VmBusChannel, v11, v12, a4, PoolWithTag);
  if ( v13 >= 0 )
  {
    *a5 = PoolWithTag;
    _InterlockedIncrement(&g_VgpuNumHpaToGpaMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeHpaToGpaMappings, a3);
  }
  else
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B677844u);
  }
  return (unsigned int)v13;
}

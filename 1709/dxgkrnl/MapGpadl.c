/*
 * XREFs of MapGpadl @ 0x1C019A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0024CC8 (-GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

__int64 __fastcall MapGpadl(DXGPROCESS *a1, __int64 a2, unsigned __int64 a3)
{
  struct VMBCHANNEL__ *VmBusChannel; // rax
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax

  VmBusChannel = DXGPROCESS::GetVmBusChannel(a1);
  v6 = VmbChannelMapGpadl(VmBusChannel, 0LL, v5);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdAssertion(v9);
  }
  _InterlockedIncrement(&g_VgpuNumGpadlMappings);
  _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, a3);
  return (unsigned int)v8;
}

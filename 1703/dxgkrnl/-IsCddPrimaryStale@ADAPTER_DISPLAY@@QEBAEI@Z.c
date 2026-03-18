/*
 * XREFs of ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AC8C
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C008ACA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C00E873C (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::IsCddPrimaryStale(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = *((_QWORD *)this + 14);
  v3 = 3208LL * a2;
  return *(_QWORD *)(v3 + v2 + 928) != *(_QWORD *)(v3 + v2 + 972)
      || *(_DWORD *)(v3 + v2 + 936) != *(_DWORD *)(v3 + v2 + 980)
      || *(_DWORD *)(v3 + v2 + 944) != *(_DWORD *)(v3 + v2 + 988)
      || *(_DWORD *)(v3 + v2 + 948) != *(_DWORD *)(v3 + v2 + 992);
}

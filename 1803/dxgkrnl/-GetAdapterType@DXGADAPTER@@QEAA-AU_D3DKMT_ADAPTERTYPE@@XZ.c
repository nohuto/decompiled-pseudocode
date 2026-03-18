/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F51FC
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00A8B9C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0147E6C (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C014EE2C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019CFC4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     <none>
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  int v2; // r10d
  int v3; // r11d
  bool v4; // cc
  int *result; // rax

  v2 = 0;
  v3 = *((_DWORD *)this + 75) & 4 | (*((_DWORD *)this + 75) >> 2) & 0x40 | (*((_BYTE *)this + 185) != 0 ? 0x80 : 0) | (*((_BYTE *)this + 187) != 0 ? 0x100 : 0) | (*((_QWORD *)this + 307) != 0LL ? 2 : 0) | (*((_QWORD *)this + 308) != 0LL) | (8 * (*((_DWORD *)this + 75) & 1));
  v4 = *((_DWORD *)this + 526) < 8704;
  *a2 = v3;
  if ( !v4 && *((_DWORD *)this + 416) >= 0x7007u && *((_QWORD *)this + 131) && *((_QWORD *)this + 113) )
    v2 = 512;
  result = a2;
  *a2 = v2 | v3 | (16
                 * (*((_BYTE *)this + 2311) & 1 | (2
                                                 * (*((_BYTE *)this + 2316) & 1 | (16 * (*((_DWORD *)this + 586) & 2))))));
  return result;
}

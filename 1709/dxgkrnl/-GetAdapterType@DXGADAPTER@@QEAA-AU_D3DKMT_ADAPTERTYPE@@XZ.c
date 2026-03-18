/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0084D8C
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0112FA0 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119870 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01723C0 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DpiIsHybridDiscreteAdapter @ 0x1C002E358 (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C002E36C (DpiIsHybridIntegratedAdapter.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844DC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  unsigned int *v4; // r10
  int v5; // r9d
  bool v6; // zf
  bool IsHybridIntegratedAdapter; // al
  int v9; // r9d
  unsigned int *v10; // r10
  __int64 v11; // rcx
  bool IsHybridDiscreteAdapter; // al
  int v13; // r9d

  *a2 = (*((_DWORD *)this + 75) >> 2) & 0x40 | (*((_BYTE *)this + 186) != 0 ? 0x100 : 0) | (*((_BYTE *)this + 185) != 0
                                                                                          ? 0x80
                                                                                          : 0) | *((_DWORD *)this + 75) & 4 | (*((_QWORD *)this + 288) != 0LL ? 2 : 0) | (*((_QWORD *)this + 289) != 0LL) | (8 * (*((_BYTE *)this + 300) & 1)) & 0x3F;
  v2 = DXGADAPTER::DriverSupportSetTimingsFromVidPn(this);
  v6 = (_BYTE)word_1C006085C == 0;
  *v4 = (v2 != 0 ? 0x200 : 0) | v5 & 0xFFFFFDFF;
  if ( !v6 )
  {
    IsHybridIntegratedAdapter = DpiIsHybridIntegratedAdapter(*(_QWORD *)(v3 + 192));
    *v10 = (IsHybridIntegratedAdapter ? 0x20 : 0) | v9 & 0xFFFFFFDF;
    IsHybridDiscreteAdapter = DpiIsHybridDiscreteAdapter(v11);
    *v4 = (IsHybridDiscreteAdapter ? 0x10 : 0) | v13 & 0xFFFFFFEF;
  }
  return v4;
}

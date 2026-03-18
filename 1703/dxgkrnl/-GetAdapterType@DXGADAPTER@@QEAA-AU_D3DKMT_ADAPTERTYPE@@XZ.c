/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00D3750
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00F6E18 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B9C8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C016EBE8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DpiIsHybridDiscreteAdapter @ 0x1C003D818 (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C003D82C (DpiIsHybridIntegratedAdapter.c)
 */

unsigned int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  unsigned int *v2; // r11
  bool v3; // zf
  bool IsHybridIntegratedAdapter; // al
  int v6; // r10d
  unsigned int *v7; // r11
  __int64 v8; // rcx
  bool IsHybridDiscreteAdapter; // al
  int v10; // r10d

  v2 = (unsigned int *)a2;
  v3 = (_BYTE)word_1C006F9DC == 0;
  *a2 = ((unsigned __int8)(*((_DWORD *)this + 75) >> 2) ^ ((*((_QWORD *)this + 285) != 0LL ? 2 : 0) | (*((_QWORD *)this + 286) != 0LL))) & 0x40 ^ (*((_DWORD *)this + 75) & 4 | (8 * (*((_DWORD *)this + 75) & 1)) | (*((_QWORD *)this + 285) != 0LL ? 2 : 0) | (*((_QWORD *)this + 286) != 0LL));
  if ( !v3 )
  {
    IsHybridIntegratedAdapter = DpiIsHybridIntegratedAdapter(*((_QWORD *)this + 24));
    *v7 = (IsHybridIntegratedAdapter ? 0x20 : 0) | v6 & 0xFFFFFFDF;
    IsHybridDiscreteAdapter = DpiIsHybridDiscreteAdapter(v8);
    *v2 = (IsHybridDiscreteAdapter ? 0x10 : 0) | v10 & 0xFFFFFFEF;
  }
  return v2;
}

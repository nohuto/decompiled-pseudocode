/*
 * XREFs of ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0014CA0
 * Callers:
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1C0036AD0 (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00DC0B4 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00DC224 (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C01581E0 (DxgkSetMonitorColorSpaceTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(ADAPTER_DISPLAY *this, int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d

  v2 = *((_DWORD *)this + 20);
  v3 = 0;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  while ( *(_DWORD *)(3760LL * v3 + *((_QWORD *)this + 14) + 1068) != a2 )
  {
    if ( ++v3 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}

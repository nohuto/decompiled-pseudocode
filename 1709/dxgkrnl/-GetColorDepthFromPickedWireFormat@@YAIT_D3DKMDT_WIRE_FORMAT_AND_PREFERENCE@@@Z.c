/*
 * XREFs of ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00B999C
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00B626C (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E2398 (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorDepthFromPickedWireFormat(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = (unsigned int)a1;
  switch ( (((unsigned int)a1 | (((unsigned int)a1 | (((unsigned int)a1 | ((unsigned int)a1 >> 6)) >> 6)) >> 6)) >> 2) & 0x3F )
  {
    case 1u:
      return 6LL;
    case 2u:
      return 8LL;
    case 4u:
      return 10LL;
    case 8u:
      return 12LL;
    case 0x10u:
      return 14LL;
    case 0x20u:
      return 16LL;
  }
  v3 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v3 + 24) = v1;
  WdLogEvent5_WdError(v3);
  return 0LL;
}

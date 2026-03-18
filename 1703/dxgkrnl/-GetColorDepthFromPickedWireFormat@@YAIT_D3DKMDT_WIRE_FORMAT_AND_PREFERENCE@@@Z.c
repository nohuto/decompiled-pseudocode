/*
 * XREFs of ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00FA1CC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorDepthFromPickedWireFormat(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = (unsigned int)a1;
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
  v4 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v4 + 24) = v2;
  WdLogEvent5_WdError(v4);
  return 0LL;
}

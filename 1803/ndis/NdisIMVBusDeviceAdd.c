/*
 * XREFs of NdisIMVBusDeviceAdd @ 0x1C00E57F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ?ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x1C0050CC0 (-ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z.c)
 *     ndisVBusVirtMiniAdd @ 0x1C0076358 (ndisVBusVirtMiniAdd.c)
 */

__int64 __fastcall NdisIMVBusDeviceAdd(_BYTE *a1, struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *a2)
{
  unsigned int v4; // edi
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x1Bu, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, a1, a2);
  if ( ndisIMVBusIsValidInput(a1, a2) )
    v4 = ndisVBusVirtMiniAdd((__int64)a2 + 8, (__int64)a2 + 24, (__int64)a2 + 72);
  else
    v4 = -1073741811;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v6 = v4;
    WPP_SF_qqd(0x1Cu, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, a1, a2, v6);
  }
  return v4;
}

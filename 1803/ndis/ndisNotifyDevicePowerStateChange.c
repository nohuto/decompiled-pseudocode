/*
 * XREFs of ndisNotifyDevicePowerStateChange @ 0x1C00B068C
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F640 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001C2EC (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

void __fastcall ndisNotifyDevicePowerStateChange(__int64 a1, int a2)
{
  __int128 *v4; // r9
  PVOID v5; // rsi
  NTSTATUS v6; // eax
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned int v8; // ebp
  __int128 *v9; // r9
  PVOID v10; // rsi
  _WORD *v11; // rcx
  NTSTATUS v12; // eax
  struct _MCGEN_TRACE_CONTEXT *v13; // rcx
  unsigned int v14; // ebp
  PVOID WnodeEventItem; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(0x34u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1, a2);
  v4 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON;
  if ( a2 != 1 )
    v4 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF;
  ndisSetupWmiNode(a1, *(const void ***)(a1 + 3880), *(unsigned __int16 *)(a1 + 3832) + 2, v4, &WnodeEventItem);
  v5 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    memmove(
      (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14),
      *(const void **)(a1 + 3840),
      *(unsigned __int16 *)(a1 + 3832));
    v6 = IoWMIWriteEvent(v5);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_d(0x35u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v6);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        McTemplateK0qqq(v7, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4032), v8, 0x12FEu, 0);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v9 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX;
  if ( a2 != 1 )
    v9 = (__int128 *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX;
  ndisSetupWmiNode(a1, *(const void ***)(a1 + 3880), *(unsigned __int16 *)(a1 + 3832) + 2, v9, &WnodeEventItem);
  v10 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v11 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
    *v11 = *(_WORD *)(a1 + 3832);
    memmove(v11 + 1, *(const void **)(a1 + 3840), *(unsigned __int16 *)(a1 + 3832));
    v12 = IoWMIWriteEvent(v10);
    v14 = v12;
    if ( v12 < 0 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_d(0x36u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v12);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        McTemplateK0qqq(v13, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4032), v14, 0x132Cu, 0);
      ExFreePoolWithTag(v10, 0);
    }
  }
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(0x37u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1, a2);
}

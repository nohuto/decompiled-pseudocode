/*
 * XREFs of ndisNotifyWmiBindUnbind @ 0x1C00B739C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5D68 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00BF110 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00EAB6C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FADCC (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001C8F4 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 */

void __fastcall ndisNotifyWmiBindUnbind(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int128 *v6; // r9
  PVOID v7; // rsi
  char *v8; // rbx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // [rsp+20h] [rbp-28h]
  PVOID Argument1; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qqd(0x35u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, a1, a2, a3);
  v6 = (__int128 *)&GUID_NDIS_NOTIFY_BIND;
  if ( !a3 )
    v6 = (__int128 *)&GUID_NDIS_NOTIFY_UNBIND;
  ndisSetupWmiNode(
    a1,
    *(const void ***)(a1 + 3880),
    *(unsigned __int16 *)(*(_QWORD *)(a1 + 3792) + 8LL) + *(unsigned __int16 *)(a2 + 72) + 4,
    v6,
    &Argument1);
  v7 = Argument1;
  if ( Argument1 )
  {
    v8 = (char *)Argument1 + *((unsigned int *)Argument1 + 14);
    memmove(v8, *(const void **)(a2 + 80), *(unsigned __int16 *)(a2 + 72));
    memmove(
      &v8[*(unsigned __int16 *)(a2 + 72) + 2],
      *(const void **)(*(_QWORD *)(a1 + 3792) + 16LL),
      *(unsigned __int16 *)(*(_QWORD *)(a1 + 3792) + 8LL));
    if ( ndisBindUnbindCallbackObject )
      ExNotifyCallback(ndisBindUnbindCallbackObject, v7, 0LL);
    v9 = IoWMIWriteEvent(v7);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( (unsigned __int8)byte_1C0092614 >= 2u )
        WPP_SF_d(0x36u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        Template_qqq(v10, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4032), v11, 67, 0);
      ExFreePoolWithTag(v7, 0);
    }
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
  {
    LODWORD(v12) = a3;
    WPP_SF_qqd(0x37u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, a1, a2, v12);
  }
}

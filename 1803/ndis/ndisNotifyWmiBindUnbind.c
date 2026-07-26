/*
 * XREFs of ndisNotifyWmiBindUnbind @ 0x1C00C0970
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00B25B0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F6D18 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001C2EC (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

void __fastcall ndisNotifyWmiBindUnbind(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int128 *v6; // r9
  PVOID v7; // rsi
  char *v8; // rbx
  NTSTATUS v9; // eax
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  unsigned int v11; // ebx
  unsigned int Arg1[2]; // [rsp+20h] [rbp-28h]
  PVOID Argument1; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qqd(0x31u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1, a2, a3);
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
      if ( (unsigned __int8)byte_1C0099614 >= 2u )
        WPP_SF_d(0x32u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        McTemplateK0qqq(v10, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4032), v11, 0x12B5u, 0);
      ExFreePoolWithTag(v7, 0);
    }
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
  {
    Arg1[0] = a3;
    WPP_SF_qqd(0x33u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1, a2, *(_QWORD *)Arg1);
  }
}

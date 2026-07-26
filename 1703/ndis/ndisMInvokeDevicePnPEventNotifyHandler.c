/*
 * XREFs of ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00B88BC
 * Callers:
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00A7D30 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00B87B0 (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeDevicePnPEventNotifyHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ebp

  v2 = *(_QWORD *)(a1 + 3784);
  v4 = *(_DWORD *)(a2 + 8);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0xE0u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v4);
  if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    ndisVerifierNdisDispatch->NdisMiniportDevicePnPEventNotifyHandler(
      *(void **)(a1 + 24),
      (_NET_DEVICE_PNP_EVENT *)a2,
      (void *)a1,
      *(void **)(a1 + 4992),
      *(void (__fastcall **)(void *, _NET_DEVICE_PNP_EVENT *))(v2 + 224));
  else
    (*(void (__fastcall **)(_QWORD, __int64))(v2 + 224))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0xE1u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v4);
}

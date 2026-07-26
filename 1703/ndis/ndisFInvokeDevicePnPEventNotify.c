/*
 * XREFs of ndisFInvokeDevicePnPEventNotify @ 0x1C00A7DE0
 * Callers:
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00A7D30 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00B87B0 (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __fastcall ndisFInvokeDevicePnPEventNotify(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // edi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 8);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x7Fu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, v4);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 272))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x80u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, v4);
}

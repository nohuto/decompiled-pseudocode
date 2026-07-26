/*
 * XREFs of ndisPnPNotifyBinding @ 0x1C00F77D4
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B547C (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_qqZZ @ 0x1C005C678 (WPP_SF_qqZZ.c)
 *     ndisLegacyProtocolPauseRestartHandler @ 0x1C005C810 (ndisLegacyProtocolPauseRestartHandler.c)
 *     WPP_SF_LqqZZ @ 0x1C0064358 (WPP_SF_LqqZZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B54E4 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00B5940 (ndisShallowCopyNetPnPEvent.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14BC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisPnPNotifyBinding(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[20]; // [rsp+60h] [rbp-A0h] BYREF
  char v15; // [rsp+100h] [rbp+0h] BYREF
  char v16; // [rsp+101h] [rbp+1h]
  __int16 v17; // [rsp+102h] [rbp+2h]
  int v18; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v19; // [rsp+110h] [rbp+10h]
  struct _KEVENT *p_Event; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+1A0h] [rbp+A0h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = -1073741637;
  ndisShallowCopyNetPnPEvent((__int64)&v15, a2);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_BYTE *)(v5 + 56);
  if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v5 + 57) >= 0x32u )
  {
    v16 = 2;
    v17 = 172;
  }
  else
  {
    v16 = 1;
    v17 = 164;
    if ( (v21 & 4) == 0 )
      v21 |= 4u;
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x1Au, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, a1, v18);
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(v7 + 56) >= 6u || *(_QWORD *)(v7 + 128) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    p_Event = &Event;
    v9 = v18;
    if ( v18 == 8 )
    {
      if ( (unsigned __int8)byte_1C0092610 < 4u )
      {
LABEL_11:
        *(_QWORD *)(v2 + 3136) = a1;
        v10 = ndisDeliverNetPnPEventSynchronously(v7, a1, (__int64)&v15);
        *(_QWORD *)(v2 + 3136) = 0LL;
        v4 = v10;
        if ( v18 == 1 && v10 && v10 != -1073741637 )
          DbgPrint("***NDIS***: Protocol %wZ failed QueryPower %lx\n", v7 + 72, v10);
        goto LABEL_12;
      }
      WPP_SF_LqqZZ(v7 + 72, v8, v19[2], v2, a1, v7 + 72, *(_QWORD *)(v2 + 3880));
      v9 = v18;
    }
    if ( (unsigned __int8)byte_1C0092610 >= 4u && v9 == 9 )
      WPP_SF_qqZZ(0x1Cu, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, v2, a1, v7 + 72, *(_QWORD *)(v2 + 3880));
    goto LABEL_11;
  }
  if ( (unsigned int)(v18 - 1) <= 2 )
  {
LABEL_37:
    v4 = 0;
    goto LABEL_14;
  }
LABEL_12:
  if ( (*(_DWORD *)(a1 + 224) & 0x10000000) != 0 && (unsigned int)(v18 - 8) <= 1 )
    ndisLegacyProtocolPauseRestartHandler(a1, &v18);
  if ( v4 == -1073741637 && !v18 && (unsigned int)(*v19 - 2) <= 2 )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5136));
    if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(a1 + 952), BindingDisabled, Reason_MiniportLowPower)
      && (unsigned __int8)byte_1C0092623 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_PROTOCOL_LINK **)(a1 + 952), (struct NDIS_PNPTRACE_LOCALS *)v14);
      WPP_SF_Zq(0x1Du, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (const wchar_t *)v14[1], v14[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5136));
    goto LABEL_37;
  }
LABEL_14:
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
  {
    LODWORD(v12) = v4;
    WPP_SF_qdD(0x1Eu, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, a1, v18, v12);
  }
  return v4;
}

/*
 * XREFs of ndisPnPNotifyBinding @ 0x1C0103560
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B85A4 (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0101810 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_qqZZ @ 0x1C005C954 (WPP_SF_qqZZ.c)
 *     ndisLegacyProtocolPauseRestartHandler @ 0x1C005CAF0 (ndisLegacyProtocolPauseRestartHandler.c)
 *     WPP_SF_LqqZZ @ 0x1C00654D8 (WPP_SF_LqqZZ.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00B8A90 (ndisShallowCopyNetPnPEvent.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC164 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD4D4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisPnPNotifyBinding(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[20]; // [rsp+60h] [rbp-A0h] BYREF
  char v16; // [rsp+100h] [rbp+0h] BYREF
  char v17; // [rsp+101h] [rbp+1h]
  __int16 v18; // [rsp+102h] [rbp+2h]
  int v19; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v20; // [rsp+110h] [rbp+10h]
  struct _KEVENT *p_Event; // [rsp+120h] [rbp+20h]
  int v22; // [rsp+1A0h] [rbp+A0h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = -1073741637;
  ndisShallowCopyNetPnPEvent((__int64)&v16, a2);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_BYTE *)(v5 + 56);
  if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v5 + 57) >= 0x32u )
  {
    v17 = 2;
    v18 = 172;
  }
  else
  {
    v17 = 1;
    v18 = 164;
    if ( (v22 & 4) == 0 )
      v22 |= 4u;
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
  {
    WPP_SF_qD(0x1Au, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1, v19);
    v5 = *(_QWORD *)(a1 + 24);
  }
  if ( *(_BYTE *)(v5 + 56) >= 6u || *(_QWORD *)(v5 + 128) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    p_Event = &Event;
    v9 = v19;
    if ( v19 == 8 )
    {
      if ( (unsigned __int8)byte_1C0099610 < 4u )
      {
LABEL_12:
        *(_QWORD *)(v2 + 3136) = a1;
        v11 = ndisDeliverNetPnPEventSynchronously(v5, a1, (__int64)&v16);
        *(_QWORD *)(v2 + 3136) = 0LL;
        v4 = v11;
        if ( v19 == 1 && v11 && v11 != -1073741637 )
          DbgPrint("***NDIS***: Protocol %wZ failed QueryPower %lx\n", v5 + 72, v11);
        goto LABEL_13;
      }
      v10 = v5 + 72;
      WPP_SF_LqqZZ(v8, v7, v20[2], v2, a1, v5 + 72, *(_QWORD *)(v2 + 3880));
      v9 = v19;
    }
    else
    {
      v10 = v5 + 72;
    }
    if ( (unsigned __int8)byte_1C0099610 >= 4u && v9 == 9 )
      WPP_SF_qqZZ(0x1Cu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, v2, a1, v10, *(_QWORD *)(v2 + 3880));
    goto LABEL_12;
  }
  if ( (unsigned int)(v19 - 1) <= 2 )
  {
LABEL_38:
    v4 = 0;
    goto LABEL_15;
  }
LABEL_13:
  if ( (*(_DWORD *)(a1 + 224) & 0x10000000) != 0 && (unsigned int)(v19 - 8) <= 1 )
    ndisLegacyProtocolPauseRestartHandler(a1, &v19);
  if ( v4 == -1073741637 && !v19 && (unsigned int)(*v20 - 2) <= 2 )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5136));
    if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(a1 + 952), BindingDisabled, Reason_MiniportLowPower)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_PROTOCOL_LINK **)(a1 + 952), (struct NDIS_PNPTRACE_LOCALS *)v15);
      WPP_SF_Zq(0x1Du, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (const wchar_t *)v15[1], v15[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5136));
    goto LABEL_38;
  }
LABEL_15:
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
  {
    LODWORD(v13) = v4;
    WPP_SF_qdD(0x1Eu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1, v19, v13);
  }
  return v4;
}

/*
 * XREFs of ndisFNetPnPEventInternal @ 0x1C00C4270
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001C788 (ndisGetHigherFilterWithPnpRef.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0057CC0 (-ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00BA908 (ndisShallowCopyNetPnPEvent.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00C436C (ndisFForwardNetPnPEventToFilter.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C44BC (ndisInitializeNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0104EDC (ndisPnPNotifyAllTransports.c)
 */

void __fastcall ndisFNetPnPEventInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  int v6; // eax
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v8; // r15
  int v9; // eax
  _BYTE v10[176]; // [rsp+30h] [rbp-D8h] BYREF

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v3 = Parameter[3];
  v4 = 0;
  Miniport = v1->Miniport;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qqd(0x3Bu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Miniport, v1, *(_DWORD *)(v3 + 8));
  v6 = *(_DWORD *)(v3 + 8);
  if ( v6 != 15 )
  {
    if ( v6 <= 17 || v6 > 21 )
    {
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((__int64)Miniport, (__int64)v1);
      v8 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        v4 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, v3);
        ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320));
        goto LABEL_7;
      }
      ndisInitializeNetPnPEvent(v10, 0LL);
      ndisShallowCopyNetPnPEvent((__int64)v10, v3);
      v9 = ndisPnPNotifyAllTransports(Miniport);
    }
    else
    {
      v9 = ndisFBindRequest(v1, (const struct _NET_PNP_EVENT_NOTIFICATION *)v3);
    }
    v4 = v9;
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qq(0x3Cu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Miniport, v1);
  *(_DWORD *)Parameter = v4;
}

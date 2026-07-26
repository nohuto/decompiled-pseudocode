/*
 * XREFs of ndisOidPMAddRemove @ 0x1C00248FC
 * Callers:
 *     ndisMOidRequest @ 0x1C000A070 (ndisMOidRequest.c)
 *     NdisFOidRequest @ 0x1C000BF60 (NdisFOidRequest.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E1C60 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     ndisPMAddProtocolOffload @ 0x1C0014590 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00249E0 (ndisPMAddWOLPattern.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0049C68 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisOidPMRemove @ 0x1C00B44D8 (ndisOidPMRemove.c)
 */

__int64 __fastcall ndisOidPMAddRemove(_QWORD *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(64LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, MiniportAdapterHandle, a2, Request);
  if ( !KeGetCurrentIrql() )
  {
    Oid = Request->DATA.QUERY_INFORMATION.Oid;
    switch ( Oid )
    {
      case 0xFD01010A:
        v7 = ndisPMAddWOLPattern(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C0099615 < 2u )
          goto LABEL_6;
        v11 = 66LL;
        break;
      case 0xFD01010D:
        v7 = ndisPMAddProtocolOffload(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C0099615 < 2u )
          goto LABEL_6;
        v11 = 67LL;
        break;
      case 0xFD01010F:
      case 0xFD01010B:
        v7 = ndisOidPMRemove(MiniportAdapterHandle, a2, Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C0099615 < 2u )
          goto LABEL_6;
        v11 = 68LL;
        break;
      default:
        v8 = -1073741823;
        goto LABEL_6;
    }
    WPP_SF_d(v11, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v7);
LABEL_6:
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qqqL(69LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, MiniportAdapterHandle, a2, Request, v8);
    return v8;
  }
  v10 = ndisCreatePMAddRemoveWorkItem(MiniportAdapterHandle, a2, Request);
  v8 = v10;
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_dd(65LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, Request->DATA.QUERY_INFORMATION.Oid, v10);
    return v8;
  }
  return 259LL;
}

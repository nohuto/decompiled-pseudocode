/*
 * XREFs of ndisOidPMAddRemove @ 0x1C00230F8
 * Callers:
 *     NdisFOidRequest @ 0x1C000A120 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C000C330 (ndisMOidRequest.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisPMAddRemoveAsync @ 0x1C00D5FF0 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     ndisPMAddWOLPattern @ 0x1C002319C (ndisPMAddWOLPattern.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C004ADD4 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisPMAddProtocolOffload @ 0x1C004C21C (ndisPMAddProtocolOffload.c)
 *     ndisOidPMRemove @ 0x1C00D4F7C (ndisOidPMRemove.c)
 */

__int64 __fastcall ndisOidPMAddRemove(NDIS_HANDLE MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(64LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, MiniportAdapterHandle, a2, Request);
  if ( !KeGetCurrentIrql() )
  {
    Oid = Request->DATA.QUERY_INFORMATION.Oid;
    if ( Oid == -50265846 )
    {
      v7 = ndisPMAddWOLPattern(MiniportAdapterHandle, a2, Request);
      v8 = v7;
      if ( !v7 || (unsigned __int8)byte_1C0092615 < 2u )
        goto LABEL_6;
      v11 = 66LL;
      goto LABEL_25;
    }
    if ( Oid != -50265845 )
    {
      if ( Oid == -50265843 )
      {
        v7 = ndisPMAddProtocolOffload(MiniportAdapterHandle, a2, (__int64)Request);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C0092615 < 2u )
          goto LABEL_6;
        v11 = 67LL;
LABEL_25:
        WPP_SF_d(v11, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v7);
LABEL_6:
        if ( (unsigned __int8)byte_1C0092612 >= 4u )
          WPP_SF_qqqL(69LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, MiniportAdapterHandle, a2, Request, v8);
        return v8;
      }
      if ( Oid != -50265841 )
      {
        v8 = -1073741823;
        goto LABEL_6;
      }
    }
    v7 = ndisOidPMRemove(MiniportAdapterHandle, a2, Request);
    v8 = v7;
    if ( !v7 || (unsigned __int8)byte_1C0092615 < 2u )
      goto LABEL_6;
    v11 = 68LL;
    goto LABEL_25;
  }
  v10 = ndisCreatePMAddRemoveWorkItem(MiniportAdapterHandle, a2, Request);
  v8 = v10;
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_dd(65LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, Request->DATA.QUERY_INFORMATION.Oid, v10);
    return v8;
  }
  return 259LL;
}

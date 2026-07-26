/*
 * XREFs of ndisOidPMAddRemove @ 0x1C001E894
 * Callers:
 *     ndisMOidRequest @ 0x1C00094B0 (ndisMOidRequest.c)
 *     NdisFOidRequest @ 0x1C000A360 (NdisFOidRequest.c)
 *     ndisWmiExecuteMethod @ 0x1C00B7E2C (ndisWmiExecuteMethod.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E0480 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     ndisPMAddWOLPattern @ 0x1C001E958 (ndisPMAddWOLPattern.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0048858 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisPMAddProtocolOffload @ 0x1C0049ABC (ndisPMAddProtocolOffload.c)
 *     ndisOidPMRemove @ 0x1C00AC398 (ndisOidPMRemove.c)
 */

__int64 __fastcall ndisOidPMAddRemove(NDIS_HANDLE MiniportAdapterHandle, __int64 a2, struct _NDIS_OID_REQUEST *a3)
{
  NDIS_OID Oid; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(64LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportAdapterHandle, a2, a3);
  if ( !KeGetCurrentIrql() )
  {
    Oid = a3->DATA.QUERY_INFORMATION.Oid;
    if ( Oid == -50265846 )
    {
      v7 = ndisPMAddWOLPattern(MiniportAdapterHandle, a2, a3);
      v8 = v7;
      if ( !v7 || (unsigned __int8)byte_1C0098755 < 2u )
        goto LABEL_6;
      v11 = 66LL;
      goto LABEL_26;
    }
    if ( Oid != -50265845 )
    {
      if ( Oid == -50265843 )
      {
        v7 = ndisPMAddProtocolOffload(MiniportAdapterHandle, a2, (__int64)a3);
        v8 = v7;
        if ( !v7 || (unsigned __int8)byte_1C0098755 < 2u )
          goto LABEL_6;
        v11 = 67LL;
LABEL_26:
        WPP_SF_d(v11, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v7);
LABEL_6:
        if ( (unsigned __int8)byte_1C0098752 >= 4u )
          WPP_SF_qqqL(69LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportAdapterHandle, a2, a3, v8);
        return v8;
      }
      if ( Oid != -50265841 )
      {
        v8 = -1073741823;
        goto LABEL_6;
      }
    }
    v7 = ndisOidPMRemove(MiniportAdapterHandle, a2, a3);
    v8 = v7;
    if ( !v7 || (unsigned __int8)byte_1C0098755 < 2u )
      goto LABEL_6;
    v11 = 68LL;
    goto LABEL_26;
  }
  v10 = ndisCreatePMAddRemoveWorkItem(MiniportAdapterHandle, a2, a3);
  v8 = v10;
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_dd(65LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a3->DATA.QUERY_INFORMATION.Oid, v10);
    return v8;
  }
  return 259LL;
}

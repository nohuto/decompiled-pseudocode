/*
 * XREFs of ndisOidPMRemove @ 0x1C00D4F7C
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C00230F8 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     WPP_SF_sL @ 0x1C004AC54 (WPP_SF_sL.c)
 */

__int64 __fastcall ndisOidPMRemove(char *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // ebx
  __int64 v7; // rbp
  struct _KSEMAPHORE *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int SetMiniport; // edi
  const char *v12; // r8
  __int64 v14; // [rsp+20h] [rbp-18h]

  Oid = Request->DATA.QUERY_INFORMATION.Oid;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0x4Cu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)MiniportAdapterHandle, Oid);
  v7 = 3976LL;
  if ( Oid == -50265845 )
    v7 = 3944LL;
  v8 = (struct _KSEMAPHORE *)&MiniportAdapterHandle[v7];
  KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
  *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
  SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, a2);
  if ( SetMiniport && (unsigned __int8)byte_1C0092615 >= 2u )
  {
    v12 = "OID_PM_REMOVE_WOL_PATTERN";
    if ( Oid != -50265845 )
      v12 = "OID_PM_REMOVE_PROTOCOL_OFFLOAD";
    WPP_SF_sL(v10, v9, v12, SetMiniport);
  }
  KeReleaseSemaphore(v8, 0, 1, 0);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    LODWORD(v14) = SetMiniport;
    WPP_SF_qdD(0x4Eu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)MiniportAdapterHandle, Oid, v14);
  }
  return SetMiniport;
}

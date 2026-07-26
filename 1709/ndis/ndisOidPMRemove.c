/*
 * XREFs of ndisOidPMRemove @ 0x1C00AC398
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001E894 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_sL @ 0x1C00486D8 (WPP_SF_sL.c)
 */

__int64 __fastcall ndisOidPMRemove(char *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // ebx
  __int64 v7; // rbp
  struct _KSEMAPHORE *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int SetMiniport; // edi
  const char *v13; // r8
  __int64 v14; // [rsp+20h] [rbp-18h]

  Oid = Request->DATA.QUERY_INFORMATION.Oid;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x4Cu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)MiniportAdapterHandle, Oid);
  v7 = 3944LL;
  if ( Oid != -50265845 )
    v7 = 3976LL;
  v8 = (struct _KSEMAPHORE *)&MiniportAdapterHandle[v7];
  KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
  *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
  SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, a2);
  if ( SetMiniport && (unsigned __int8)byte_1C0098755 >= 2u )
  {
    v13 = "OID_PM_REMOVE_WOL_PATTERN";
    if ( Oid != -50265845 )
      v13 = "OID_PM_REMOVE_PROTOCOL_OFFLOAD";
    WPP_SF_sL(v10, v9, v13, SetMiniport);
  }
  KeReleaseSemaphore(v8, 0, 1, 0);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v14) = SetMiniport;
    WPP_SF_qdD(0x4Eu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)MiniportAdapterHandle, Oid, v14);
  }
  return SetMiniport;
}

/*
 * XREFs of ndisPnPQuerySriovInterface @ 0x1C00E8458
 * Callers:
 *     ndisPnPIrpQueryInterface @ 0x1C00ACF88 (ndisPnPIrpQueryInterface.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisSriovInterfaceReference @ 0x1C006C490 (ndisSriovInterfaceReference.c)
 */

__int64 __fastcall ndisPnPQuerySriovInterface(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rbx

  v4 = 0;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_q(0x57u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_WORD *)(v5 + 16) >= 0x78u && *(_WORD *)(v5 + 18) == 1 )
  {
    if ( ndisSystemSupportsSriov && (v6 = *(_QWORD *)(a1 + 4640)) != 0 && (*(_BYTE *)(v6 + 8) & 3) == 3 )
    {
      v7 = *(_QWORD **)(v5 + 24);
      memset(v7, 0, 0x78uLL);
      *(_DWORD *)v7 = 65656;
      v7[2] = ndisSriovInterfaceReference;
      v7[1] = a1;
      v7[3] = ndisSriovInterfaceDereference;
      v7[4] = &ndisSriovInterfaceReadVFConfig;
      v7[5] = ndisSriovInterfaceWriteVFConfig;
      v7[6] = &ndisSriovInterfaceReadVfConfigBlock;
      v7[7] = ndisSriovInterfaceWriteVfConfigBlock;
      v7[8] = ndisSriovInterfaceQueryProbedBars;
      v7[9] = ndisSriovInterfaceGetVendorAndDeviceIds;
      v7[10] = ndisSriovInterfaceGetDeviceLocation;
      v7[11] = ndisSriovInterfaceResetVF;
      v7[12] = ndisSriovInterfaceSetVfPowerState;
      v7[14] = ndisSriovQueryLuid;
      v7[13] = ndisSriovGetResourceForBar;
      ndisSriovInterfaceReference(a1);
    }
    else
    {
      v4 = -1073741637;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qD(0x58u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1, v4);
  return v4;
}

/*
 * XREFs of ndisSetupMiniportProtocolHandlers @ 0x1C001ACD4
 * Callers:
 *     ndisSetupNdis6OpenHandlers @ 0x1C001A4D4 (ndisSetupNdis6OpenHandlers.c)
 * Callees:
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 */

void *__fastcall ndisSetupMiniportProtocolHandlers(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bp
  unsigned __int8 v5; // r14
  char v8; // dl
  __int64 v9; // rcx
  void *result; // rax
  bool v11; // zf

  v3 = *(_BYTE *)(a2 + 56);
  v5 = *(_BYTE *)(a3 + 32);
  v8 = byte_1C009260D;
  if ( (unsigned __int8)byte_1C009260D >= 4u )
  {
    WPP_SF_qqq(136LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, a3, a1);
    v8 = byte_1C009260D;
  }
  if ( v3 < 6u )
  {
    result = &ndisMSendNetBufferListsCompleteToNdisPackets;
    a1[67] = a1;
    a1[65] = &ndisMSendNetBufferListsCompleteToNdisPackets;
  }
  else if ( v5 < 6u )
  {
    if ( !*(_BYTE *)(a3 + 1993) )
    {
      *(_DWORD *)(a3 + 2012) = 0;
      *(_BYTE *)(a3 + 1993) = 1;
    }
    a1[66] = a3;
    a1[65] = *(_QWORD *)(a2 + 184);
    a1[67] = a1[4];
    v11 = (*(_DWORD *)(a3 + 120) & 0x20000000) == 0;
    *(_QWORD *)(a3 + 1896) = ndisMIndicatePacketsToNetBufferLists;
    if ( !v11 )
      *(_QWORD *)(a3 + 432) = ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a3 + 2192) = a3;
    *(_QWORD *)(a3 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a3 + 640) = &EthIndicateReceive;
    a1[68] = *(_QWORD *)(a2 + 176);
    result = (void *)a1[4];
    a1[69] = result;
    *(_DWORD *)(a3 + 2248) = 1;
  }
  else
  {
    v9 = a1[4];
    a1[65] = *(_QWORD *)(a2 + 184);
    a1[67] = v9;
    result = *(void **)(a2 + 176);
    a1[68] = result;
    a1[69] = v9;
    *(_DWORD *)(a3 + 2248) = 1;
  }
  if ( (unsigned __int8)v8 >= 4u )
    return (void *)WPP_SF_qqq(137LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2, a3, a1);
  return result;
}

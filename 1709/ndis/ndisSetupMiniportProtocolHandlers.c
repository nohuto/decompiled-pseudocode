/*
 * XREFs of ndisSetupMiniportProtocolHandlers @ 0x1C000FF7C
 * Callers:
 *     ndisSetupNdis6OpenHandlers @ 0x1C000F77C (ndisSetupNdis6OpenHandlers.c)
 * Callees:
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 */

void *__fastcall ndisSetupMiniportProtocolHandlers(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bp
  unsigned __int8 v5; // r14
  __int64 v8; // rcx
  void *result; // rax
  bool v10; // zf

  v3 = *(_BYTE *)(a2 + 56);
  v5 = *(_BYTE *)(a3 + 32);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qqq(143LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, a3, a1);
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
    v10 = (*(_DWORD *)(a3 + 120) & 0x20000000) == 0;
    *(_QWORD *)(a3 + 1896) = ndisMIndicatePacketsToNetBufferLists;
    if ( !v10 )
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
    v8 = a1[4];
    a1[65] = *(_QWORD *)(a2 + 184);
    a1[67] = v8;
    result = *(void **)(a2 + 176);
    a1[68] = result;
    a1[69] = v8;
    *(_DWORD *)(a3 + 2248) = 1;
  }
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    return (void *)WPP_SF_qqq(144LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a2, a3, a1);
  return result;
}

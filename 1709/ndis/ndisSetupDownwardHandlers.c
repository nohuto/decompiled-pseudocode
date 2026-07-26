/*
 * XREFs of ndisSetupDownwardHandlers @ 0x1C000FB58
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C000F7EC (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void (__stdcall *__fastcall ndisSetupDownwardHandlers(
        __int64 a1))(NDIS_HANDLE NdisAdapterHandle, ULONG Length, PVOID VirtualAddress, NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void (__stdcall *result)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax

  v1 = *(_QWORD **)(a1 + 2048);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(65LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_QWORD *)(a1 + 2192) = a1;
    *(_QWORD *)(a1 + 2032) = ndisMSendPacketsToNetBufferLists;
    *(_QWORD *)(a1 + 2184) = ndisSynchReturnPacketsForTranslation;
  }
  v3 = (_QWORD *)v1[15];
  v1[71] = *(_QWORD *)(a1 + 2432);
  v1[72] = *(_QWORD *)(a1 + 2312);
  v1[55] = *(_QWORD *)(a1 + 2472);
  v1[56] = *(_QWORD *)(a1 + 2376);
  v1[57] = *(_QWORD *)(a1 + 4104);
  v1[58] = a1;
  v1[67] = *(_QWORD *)(a1 + 2464);
  v1[68] = *(_QWORD *)(a1 + 2352);
  v1[69] = *(_QWORD *)(a1 + 2360);
  v1[70] = *(_QWORD *)(a1 + 2368);
  v1[53] = *(_QWORD *)(a1 + 2424);
  v1[106] = *(_QWORD *)(a1 + 2480);
  while ( v3 )
  {
    v4 = (_QWORD *)v3[14];
    v5 = v4[76];
    if ( v5 )
    {
      v3[71] = v5;
      v6 = v4[3];
    }
    else
    {
      v3[71] = v4[71];
      v6 = v4[72];
    }
    v3[72] = v6;
    v7 = v4[74];
    if ( v7 )
    {
      v3[55] = v7;
      v3[56] = v4[3];
      v3[57] = v4[100];
      v3[58] = v4;
    }
    else
    {
      v3[55] = v4[55];
      v3[56] = v4[56];
      v3[57] = v4[57];
      v3[58] = v4[58];
    }
    v8 = v4[78];
    if ( v8 )
    {
      v3[67] = v8;
      v3[68] = v4[3];
      v3[69] = v4[100];
      v3[70] = v4;
    }
    else
    {
      v3[67] = v4[67];
      v3[68] = v4[68];
      v3[69] = v4[69];
      v3[70] = v4[70];
    }
    if ( *(_QWORD *)(v4[2] + 248LL) )
      v3[53] = v4;
    else
      v3[53] = v4[53];
    if ( *(_QWORD *)(v4[2] + 296LL) )
      v3[106] = v4;
    else
      v3[106] = v4[106];
    v3 = (_QWORD *)v3[15];
  }
  v9 = *(_QWORD **)(a1 + 2056);
  v10 = v9[76];
  if ( v10 )
  {
    *(_QWORD *)(a1 + 2616) = v10;
    v11 = v9[3];
  }
  else
  {
    *(_QWORD *)(a1 + 2616) = v9[71];
    v11 = v9[72];
  }
  *(_QWORD *)(a1 + 2496) = v11;
  v12 = v9[74];
  if ( v12 )
  {
    *(_QWORD *)(a1 + 2656) = v12;
    *(_QWORD *)(a1 + 2560) = v9[3];
    *(_QWORD *)(a1 + 2568) = v9[100];
    *(_QWORD *)(a1 + 2576) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 2656) = v9[55];
    *(_QWORD *)(a1 + 2560) = v9[56];
    *(_QWORD *)(a1 + 2568) = v9[57];
    *(_QWORD *)(a1 + 2576) = v9[58];
  }
  v13 = v9[78];
  if ( v13 )
  {
    *(_QWORD *)(a1 + 2648) = v13;
    *(_QWORD *)(a1 + 2536) = v9[3];
    *(_QWORD *)(a1 + 2544) = v9[100];
    *(_QWORD *)(a1 + 2552) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 2648) = v9[67];
    *(_QWORD *)(a1 + 2536) = v9[68];
    *(_QWORD *)(a1 + 2544) = v9[69];
    *(_QWORD *)(a1 + 2552) = v9[70];
  }
  if ( *(_QWORD *)(v9[2] + 248LL) )
    *(_QWORD *)(a1 + 2608) = v9;
  else
    *(_QWORD *)(a1 + 2608) = v9[53];
  if ( *(_QWORD *)(v9[2] + 296LL) )
    *(_QWORD *)(a1 + 2664) = v9;
  else
    *(_QWORD *)(a1 + 2664) = v9[106];
  *(_QWORD *)(a1 + 680) = &ndisSendNBLToFilter;
  if ( *(_BYTE *)(a1 + 930) )
  {
    *(_DWORD *)(a1 + 2680) = 0;
    result = ndisFakeMiniportCancelSendPackets;
  }
  else
  {
    *(_QWORD *)(a1 + 656) = &ndisSendNBLToFilter;
    result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisOpenCancelSendNetBufferLists;
    *(_QWORD *)(a1 + 2676) = 0LL;
  }
  *(_QWORD *)(a1 + 184) = result;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))WPP_SF_q(
                                                                                   66LL,
                                                                                   &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids,
                                                                                   a1);
  return result;
}

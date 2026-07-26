/*
 * XREFs of ndisSetupDownwardHandlers @ 0x1C001B39C
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B040 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void (__stdcall *__fastcall ndisSetupDownwardHandlers(
        __int64 a1))(NDIS_HANDLE NdisAdapterHandle, ULONG Length, PVOID VirtualAddress, NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  void (__stdcall *result)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax

  v1 = *(_QWORD **)(a1 + 2048);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(65LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
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
      v8 = v4;
    }
    else
    {
      v3[55] = v4[55];
      v3[56] = v4[56];
      v3[57] = v4[57];
      v8 = (_QWORD *)v4[58];
    }
    v3[58] = v8;
    v9 = v4[78];
    if ( v9 )
    {
      v3[67] = v9;
      v3[68] = v4[3];
      v3[69] = v4[100];
      v10 = v4;
    }
    else
    {
      v3[67] = v4[67];
      v3[68] = v4[68];
      v3[69] = v4[69];
      v10 = (_QWORD *)v4[70];
    }
    v3[70] = v10;
    v11 = v4;
    if ( !*(_QWORD *)(v4[2] + 248LL) )
      v11 = (_QWORD *)v4[53];
    v3[53] = v11;
    if ( !*(_QWORD *)(v4[2] + 296LL) )
      v4 = (_QWORD *)v4[106];
    v3[106] = v4;
    v3 = (_QWORD *)v3[15];
  }
  v12 = *(_QWORD **)(a1 + 2056);
  v13 = v12[76];
  if ( v13 )
  {
    *(_QWORD *)(a1 + 2616) = v13;
    v14 = v12[3];
  }
  else
  {
    *(_QWORD *)(a1 + 2616) = v12[71];
    v14 = v12[72];
  }
  *(_QWORD *)(a1 + 2496) = v14;
  v15 = v12[74];
  if ( v15 )
  {
    *(_QWORD *)(a1 + 2656) = v15;
    *(_QWORD *)(a1 + 2560) = v12[3];
    *(_QWORD *)(a1 + 2568) = v12[100];
    v16 = v12;
  }
  else
  {
    *(_QWORD *)(a1 + 2656) = v12[55];
    *(_QWORD *)(a1 + 2560) = v12[56];
    *(_QWORD *)(a1 + 2568) = v12[57];
    v16 = (_QWORD *)v12[58];
  }
  *(_QWORD *)(a1 + 2576) = v16;
  v17 = v12[78];
  if ( v17 )
  {
    *(_QWORD *)(a1 + 2648) = v17;
    *(_QWORD *)(a1 + 2536) = v12[3];
    *(_QWORD *)(a1 + 2544) = v12[100];
    v18 = v12;
  }
  else
  {
    *(_QWORD *)(a1 + 2648) = v12[67];
    *(_QWORD *)(a1 + 2536) = v12[68];
    *(_QWORD *)(a1 + 2544) = v12[69];
    v18 = (_QWORD *)v12[70];
  }
  *(_QWORD *)(a1 + 2552) = v18;
  v19 = v12;
  if ( !*(_QWORD *)(v12[2] + 248LL) )
    v19 = (_QWORD *)v12[53];
  *(_QWORD *)(a1 + 2608) = v19;
  if ( !*(_QWORD *)(v12[2] + 296LL) )
    v12 = (_QWORD *)v12[106];
  *(_QWORD *)(a1 + 2664) = v12;
  if ( *(_BYTE *)(a1 + 930) )
  {
    result = ndisFakeMiniportCancelSendPackets;
  }
  else
  {
    *(_DWORD *)(a1 + 2676) = 0;
    result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisOpenCancelSendNetBufferLists;
    *(_QWORD *)(a1 + 656) = &ndisSendNBLToFilter;
  }
  *(_DWORD *)(a1 + 2680) = 0;
  *(_QWORD *)(a1 + 680) = &ndisSendNBLToFilter;
  *(_QWORD *)(a1 + 184) = result;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))WPP_SF_q(
                                                                                   66LL,
                                                                                   &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids,
                                                                                   a1);
  return result;
}

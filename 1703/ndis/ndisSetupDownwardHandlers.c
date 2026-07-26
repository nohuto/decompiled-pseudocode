/*
 * XREFs of ndisSetupDownwardHandlers @ 0x1C001A8B8
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001A544 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void (__stdcall *__fastcall ndisSetupDownwardHandlers(
        __int64 a1))(NDIS_HANDLE NdisAdapterHandle, ULONG Length, PVOID VirtualAddress, NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  _QWORD *v1; // rdi
  unsigned __int8 v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void (__stdcall *result)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax

  v1 = *(_QWORD **)(a1 + 2048);
  v3 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(67LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
    v3 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_QWORD *)(a1 + 2192) = a1;
    *(_QWORD *)(a1 + 2032) = ndisMSendPacketsToNetBufferLists;
    *(_QWORD *)(a1 + 2184) = ndisSynchReturnPacketsForTranslation;
  }
  v4 = (_QWORD *)v1[15];
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
  while ( v4 )
  {
    v5 = (_QWORD *)v4[14];
    v6 = v5[76];
    if ( v6 )
    {
      v4[71] = v6;
      v7 = v5[3];
    }
    else
    {
      v4[71] = v5[71];
      v7 = v5[72];
    }
    v4[72] = v7;
    v8 = v5[74];
    if ( v8 )
    {
      v4[55] = v8;
      v4[56] = v5[3];
      v4[57] = v5[100];
      v4[58] = v5;
    }
    else
    {
      v4[55] = v5[55];
      v4[56] = v5[56];
      v4[57] = v5[57];
      v4[58] = v5[58];
    }
    v9 = v5[78];
    if ( v9 )
    {
      v4[67] = v9;
      v4[68] = v5[3];
      v4[69] = v5[100];
      v4[70] = v5;
    }
    else
    {
      v4[67] = v5[67];
      v4[68] = v5[68];
      v4[69] = v5[69];
      v4[70] = v5[70];
    }
    if ( *(_QWORD *)(v5[2] + 248LL) )
      v4[53] = v5;
    else
      v4[53] = v5[53];
    if ( *(_QWORD *)(v5[2] + 296LL) )
      v4[106] = v5;
    else
      v4[106] = v5[106];
    v4 = (_QWORD *)v4[15];
  }
  v10 = *(_QWORD **)(a1 + 2056);
  v11 = v10[76];
  if ( v11 )
  {
    *(_QWORD *)(a1 + 2616) = v11;
    v12 = v10[3];
  }
  else
  {
    *(_QWORD *)(a1 + 2616) = v10[71];
    v12 = v10[72];
  }
  *(_QWORD *)(a1 + 2496) = v12;
  v13 = v10[74];
  if ( v13 )
  {
    *(_QWORD *)(a1 + 2656) = v13;
    *(_QWORD *)(a1 + 2560) = v10[3];
    *(_QWORD *)(a1 + 2568) = v10[100];
    *(_QWORD *)(a1 + 2576) = v10;
  }
  else
  {
    *(_QWORD *)(a1 + 2656) = v10[55];
    *(_QWORD *)(a1 + 2560) = v10[56];
    *(_QWORD *)(a1 + 2568) = v10[57];
    *(_QWORD *)(a1 + 2576) = v10[58];
  }
  v14 = v10[78];
  if ( v14 )
  {
    *(_QWORD *)(a1 + 2648) = v14;
    *(_QWORD *)(a1 + 2536) = v10[3];
    *(_QWORD *)(a1 + 2544) = v10[100];
    *(_QWORD *)(a1 + 2552) = v10;
  }
  else
  {
    *(_QWORD *)(a1 + 2648) = v10[67];
    *(_QWORD *)(a1 + 2536) = v10[68];
    *(_QWORD *)(a1 + 2544) = v10[69];
    *(_QWORD *)(a1 + 2552) = v10[70];
  }
  if ( *(_QWORD *)(v10[2] + 248LL) )
    *(_QWORD *)(a1 + 2608) = v10;
  else
    *(_QWORD *)(a1 + 2608) = v10[53];
  if ( *(_QWORD *)(v10[2] + 296LL) )
    *(_QWORD *)(a1 + 2664) = v10;
  else
    *(_QWORD *)(a1 + 2664) = v10[106];
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
  if ( v3 >= 4u )
    return (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))WPP_SF_q(
                                                                                   68LL,
                                                                                   &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids,
                                                                                   a1);
  return result;
}

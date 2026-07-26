/*
 * XREFs of ndisSetMiniportHandlers @ 0x1C010390C
 * Callers:
 *     NdisMSetAttributesEx @ 0x1C0103A40 (NdisMSetAttributesEx.c)
 * Callees:
 *     ndisSetupNdis6OpenHandlers @ 0x1C000F77C (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C000F7EC (ndisSetupLwfMiniportHandlers.c)
 *     ndisMIsPowerSynchronizedDatapathRequired @ 0x1C00110AC (ndisMIsPowerSynchronizedDatapathRequired.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisSetMiniportHandlers(__int64 a1)
{
  bool v2; // cf
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  __int64 i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, struct _NDIS_PACKET *); // rax
  void (__stdcall *v11)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  __int64 v12; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x95u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  v2 = *(_BYTE *)(a1 + 32) < 6u;
  *(_QWORD *)(a1 + 2448) = ndisMTopReceiveNetBufferLists;
  *(_QWORD *)(a1 + 2320) = a1;
  *(_QWORD *)(a1 + 2328) = 32LL;
  *(_QWORD *)(a1 + 2336) = a1;
  if ( v2 )
  {
    v6 = *(_DWORD *)(a1 + 2248) == 1;
    v8 = *(_QWORD *)(a1 + 3784);
    v9 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 2168) = *(_QWORD *)(v8 + 224);
    *(_QWORD *)(a1 + 2176) = v9;
    if ( v6 || *(_QWORD *)(a1 + 2056) )
    {
      v10 = ndisSynchReturnPacketsForTranslation;
      *(_QWORD *)(a1 + 2192) = a1;
    }
    else
    {
      v10 = *(void (__fastcall **)(__int64, struct _NDIS_PACKET *))(v8 + 224);
      *(_QWORD *)(a1 + 2192) = v9;
    }
    v6 = (*(_DWORD *)(a1 + 120) & 0x40000) == 0;
    *(_QWORD *)(a1 + 2184) = v10;
    if ( v6 || (v11 = *(void (__stdcall **)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))(v8 + 296)) == 0LL )
      v11 = ndisFakeMiniportCancelSendPackets;
    *(_QWORD *)(a1 + 2432) = v11;
    *(_QWORD *)(a1 + 2312) = v9;
    *(_QWORD *)(a1 + 2472) = ndisMSendNetBufferListsToPackets;
    v12 = *(_QWORD *)(a1 + 4104);
    *(_QWORD *)(a1 + 2384) = v12;
    *(_QWORD *)(a1 + 2360) = v12;
    *(_QWORD *)(a1 + 2376) = a1;
    *(_QWORD *)(a1 + 2392) = a1;
    *(_QWORD *)(a1 + 2464) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a1 + 2352) = a1;
    *(_QWORD *)(a1 + 2368) = a1;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 4104);
    *(_QWORD *)(a1 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a1 + 2192) = a1;
    *(_QWORD *)(a1 + 2432) = ndisMCancelSendNetBufferListsOnMiniport;
    *(_QWORD *)(a1 + 2472) = ndisMSendNBLToMiniport;
    *(_QWORD *)(a1 + 2312) = a1;
    *(_QWORD *)(a1 + 2376) = a1;
    *(_QWORD *)(a1 + 2384) = v3;
    *(_QWORD *)(a1 + 2392) = a1;
    if ( ndisMIsPowerSynchronizedDatapathRequired((_DWORD *)a1) )
    {
      *(_QWORD *)(a1 + 2352) = a1;
      *(_QWORD *)(a1 + 2464) = ndisReturnNblWithPowerQueue;
    }
    else
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 192LL);
      *(_QWORD *)(a1 + 2352) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 2464) = v5;
    }
    v6 = (*(_DWORD *)(a1 + 120) & 0x20000) == 0;
    *(_QWORD *)(a1 + 2360) = v4;
    *(_QWORD *)(a1 + 2368) = a1;
    if ( !v6 )
      *(_QWORD *)(a1 + 2240) = *(_QWORD *)(a1 + 24);
  }
  ndisSetupLwfMiniportHandlers(a1);
  for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    ndisSetupNdis6OpenHandlers(i, *(_QWORD *)(i + 24), a1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x96u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
}

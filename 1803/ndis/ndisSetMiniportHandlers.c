/*
 * XREFs of ndisSetMiniportHandlers @ 0x1C0104E18
 * Callers:
 *     NdisMSetAttributesEx @ 0x1C0104F50 (NdisMSetAttributesEx.c)
 * Callees:
 *     ndisSetupNdis6OpenHandlers @ 0x1C001AFD0 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B040 (ndisSetupLwfMiniportHandlers.c)
 *     ndisMIsPowerSynchronizedDatapathRequired @ 0x1C001D2BC (ndisMIsPowerSynchronizedDatapathRequired.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisSetMiniportHandlers(__int64 a1)
{
  bool v2; // cf
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64, struct _NET_BUFFER_LIST *, unsigned int); // rax
  bool v5; // zf
  __int64 i; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64, struct _NDIS_PACKET *); // rax
  void (__stdcall *v10)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rcx
  __int64 v11; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x98u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  v2 = *(_BYTE *)(a1 + 32) < 6u;
  *(_QWORD *)(a1 + 2448) = ndisMTopReceiveNetBufferLists;
  *(_QWORD *)(a1 + 2320) = a1;
  *(_QWORD *)(a1 + 2328) = 32LL;
  *(_QWORD *)(a1 + 2336) = a1;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 2248) == 1;
    v7 = *(_QWORD *)(a1 + 3784);
    v8 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 2168) = *(_QWORD *)(v7 + 224);
    *(_QWORD *)(a1 + 2176) = v8;
    if ( v5 || *(_QWORD *)(a1 + 2056) )
    {
      v8 = a1;
      v9 = ndisSynchReturnPacketsForTranslation;
    }
    else
    {
      v9 = *(void (__fastcall **)(__int64, struct _NDIS_PACKET *))(v7 + 224);
    }
    *(_QWORD *)(a1 + 2184) = v9;
    *(_QWORD *)(a1 + 2192) = v8;
    if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0
      || (v10 = *(void (__stdcall **)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))(*(_QWORD *)(a1 + 3784) + 296LL)) == 0LL )
    {
      v10 = ndisFakeMiniportCancelSendPackets;
    }
    *(_QWORD *)(a1 + 2432) = v10;
    *(_QWORD *)(a1 + 2312) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 2472) = ndisMSendNetBufferListsToPackets;
    v11 = *(_QWORD *)(a1 + 4104);
    *(_QWORD *)(a1 + 2384) = v11;
    *(_QWORD *)(a1 + 2360) = v11;
    *(_QWORD *)(a1 + 2376) = a1;
    *(_QWORD *)(a1 + 2392) = a1;
    *(_QWORD *)(a1 + 2464) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a1 + 2352) = a1;
    *(_QWORD *)(a1 + 2368) = a1;
  }
  else
  {
    *(_QWORD *)(a1 + 2192) = a1;
    *(_QWORD *)(a1 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a1 + 2312) = a1;
    *(_QWORD *)(a1 + 2432) = ndisMCancelSendNetBufferListsOnMiniport;
    *(_QWORD *)(a1 + 2472) = ndisMSendNBLToMiniport;
    *(_QWORD *)(a1 + 2384) = *(_QWORD *)(a1 + 4104);
    *(_QWORD *)(a1 + 2376) = a1;
    *(_QWORD *)(a1 + 2392) = a1;
    if ( ndisMIsPowerSynchronizedDatapathRequired((_DWORD *)a1) )
    {
      v4 = ndisReturnNblWithPowerQueue;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, unsigned int))(*(_QWORD *)(a1 + 3784) + 192LL);
    }
    *(_QWORD *)(a1 + 2464) = v4;
    *(_QWORD *)(a1 + 2352) = v3;
    v5 = (*(_DWORD *)(a1 + 120) & 0x20000) == 0;
    *(_QWORD *)(a1 + 2360) = *(_QWORD *)(a1 + 4104);
    *(_QWORD *)(a1 + 2368) = a1;
    if ( !v5 )
      *(_QWORD *)(a1 + 2240) = *(_QWORD *)(a1 + 24);
  }
  ndisSetupLwfMiniportHandlers(a1);
  for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    ndisSetupNdis6OpenHandlers(i, *(_QWORD *)(i + 24), a1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x99u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
}

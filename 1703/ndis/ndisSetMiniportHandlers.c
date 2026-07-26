/*
 * XREFs of ndisSetMiniportHandlers @ 0x1C00F6108
 * Callers:
 *     NdisMSetAttributesEx @ 0x1C00F5ED0 (NdisMSetAttributesEx.c)
 * Callees:
 *     ndisSetupNdis6OpenHandlers @ 0x1C001A4D4 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C001A544 (ndisSetupLwfMiniportHandlers.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisSetMiniportHandlers(__int64 a1)
{
  bool v2; // cf
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, struct _NDIS_PACKET *); // rax
  void (__stdcall *v11)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  __int64 v12; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x8Eu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
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
    *(_QWORD *)(a1 + 2432) = ndisMCancelSendNetBufferListsOnMiniport;
    *(_QWORD *)(a1 + 2472) = ndisMSendNBLToMiniport;
    v4 = *(_DWORD *)(a1 + 3936) & 0x3000;
    *(_QWORD *)(a1 + 2192) = a1;
    *(_QWORD *)(a1 + 2312) = a1;
    *(_QWORD *)(a1 + 2376) = a1;
    *(_QWORD *)(a1 + 2384) = v3;
    *(_QWORD *)(a1 + 2392) = a1;
    if ( v4 == 0x2000 || ndisNoPauseOnSuspend && *(int *)(a1 + 1872) < 0 )
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
    *(_QWORD *)(a1 + 2360) = v3;
    *(_QWORD *)(a1 + 2368) = a1;
    if ( !v6 )
      *(_QWORD *)(a1 + 2240) = *(_QWORD *)(a1 + 24);
  }
  ndisSetupLwfMiniportHandlers(a1);
  for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    ndisSetupNdis6OpenHandlers(i, *(_QWORD *)(i + 24), a1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x8Fu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
}

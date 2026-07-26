/*
 * XREFs of ndisSetupNoFilterHandlers @ 0x1C0021F60
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001A544 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupNoFilterHandlers(__int64 a1)
{
  unsigned __int8 v2; // dl
  bool v3; // zf
  int v4; // eax
  __int64 v5; // rax
  void (__stdcall *v6)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax

  v2 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(65LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
    v2 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  v3 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
  *(_QWORD *)(a1 + 2032) = *(_QWORD *)(a1 + 2040);
  *(_QWORD *)(a1 + 2616) = *(_QWORD *)(a1 + 2432);
  *(_QWORD *)(a1 + 2496) = *(_QWORD *)(a1 + 2312);
  *(_QWORD *)(a1 + 2568) = *(_QWORD *)(a1 + 2384);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 2680) = (*(_BYTE *)(a1 + 32) < 6u) + 1;
    *(_QWORD *)(a1 + 680) = *(_QWORD *)(a1 + 2472);
    v6 = ndisFakeMiniportCancelSendPackets;
  }
  else
  {
    v4 = (*(_BYTE *)(a1 + 32) < 6u) + 1;
    *(_DWORD *)(a1 + 2676) = v4;
    *(_DWORD *)(a1 + 2680) = v4;
    v5 = *(_QWORD *)(a1 + 2472);
    *(_QWORD *)(a1 + 656) = v5;
    *(_QWORD *)(a1 + 680) = v5;
    v6 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisOpenCancelSendNetBufferLists;
  }
  v7 = *(_QWORD *)(a1 + 2448);
  v8 = *(_QWORD *)(a1 + 2320);
  *(_QWORD *)(a1 + 184) = v6;
  *(_QWORD *)(a1 + 2648) = *(_QWORD *)(a1 + 2464);
  *(_QWORD *)(a1 + 2536) = *(_QWORD *)(a1 + 2352);
  *(_QWORD *)(a1 + 2544) = *(_QWORD *)(a1 + 2360);
  *(_QWORD *)(a1 + 2552) = *(_QWORD *)(a1 + 2368);
  *(_QWORD *)(a1 + 2624) = *(_QWORD *)(a1 + 2440);
  *(_QWORD *)(a1 + 2584) = *(_QWORD *)(a1 + 2400);
  *(_QWORD *)(a1 + 2592) = *(_QWORD *)(a1 + 2408);
  *(_QWORD *)(a1 + 2600) = *(_QWORD *)(a1 + 2416);
  *(_QWORD *)(a1 + 2512) = *(_QWORD *)(a1 + 2328);
  result = *(_QWORD *)(a1 + 2336);
  *(_QWORD *)(a1 + 2520) = result;
  *(_QWORD *)(a1 + 2608) = a1;
  *(_QWORD *)(a1 + 2664) = a1;
  *(_QWORD *)(a1 + 2632) = v7;
  *(_QWORD *)(a1 + 2504) = v8;
  *(_QWORD *)(a1 + 2640) = v7;
  *(_QWORD *)(a1 + 2528) = v8;
  if ( v2 >= 4u )
    return WPP_SF_q(66LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
  return result;
}

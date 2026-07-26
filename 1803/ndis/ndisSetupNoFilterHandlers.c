/*
 * XREFs of ndisSetupNoFilterHandlers @ 0x1C001D134
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B040 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupNoFilterHandlers(__int64 a1)
{
  bool v2; // zf
  unsigned __int8 v3; // dl
  __int64 v4; // rcx
  void (__stdcall *v5)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // r8
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(63LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  v2 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
  v3 = *(_BYTE *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 2472);
  *(_QWORD *)(a1 + 2032) = *(_QWORD *)(a1 + 2040);
  *(_QWORD *)(a1 + 2616) = *(_QWORD *)(a1 + 2432);
  *(_QWORD *)(a1 + 2496) = *(_QWORD *)(a1 + 2312);
  *(_QWORD *)(a1 + 2568) = *(_QWORD *)(a1 + 2384);
  if ( v2 )
  {
    v5 = ndisFakeMiniportCancelSendPackets;
    v6 = (v3 < 6u) + 1;
  }
  else
  {
    *(_QWORD *)(a1 + 656) = v4;
    v5 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisOpenCancelSendNetBufferLists;
    v6 = (v3 < 6u) + 1;
    *(_DWORD *)(a1 + 2676) = v6;
  }
  *(_DWORD *)(a1 + 2680) = v6;
  *(_QWORD *)(a1 + 680) = v4;
  *(_QWORD *)(a1 + 184) = v5;
  v7 = *(_QWORD *)(a1 + 2448);
  v8 = *(_QWORD *)(a1 + 2320);
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
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return WPP_SF_q(64LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  return result;
}

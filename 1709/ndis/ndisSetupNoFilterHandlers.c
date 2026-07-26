/*
 * XREFs of ndisSetupNoFilterHandlers @ 0x1C0010F38
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C000F7EC (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupNoFilterHandlers(__int64 a1)
{
  bool v2; // zf
  int v3; // eax
  __int64 v4; // rax
  void (__stdcall *v5)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(63LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  v2 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
  *(_QWORD *)(a1 + 2032) = *(_QWORD *)(a1 + 2040);
  *(_QWORD *)(a1 + 2616) = *(_QWORD *)(a1 + 2432);
  *(_QWORD *)(a1 + 2496) = *(_QWORD *)(a1 + 2312);
  *(_QWORD *)(a1 + 2568) = *(_QWORD *)(a1 + 2384);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 2680) = (*(_BYTE *)(a1 + 32) < 6u) + 1;
    *(_QWORD *)(a1 + 680) = *(_QWORD *)(a1 + 2472);
    v5 = ndisFakeMiniportCancelSendPackets;
  }
  else
  {
    v3 = (*(_BYTE *)(a1 + 32) < 6u) + 1;
    *(_DWORD *)(a1 + 2676) = v3;
    *(_DWORD *)(a1 + 2680) = v3;
    v4 = *(_QWORD *)(a1 + 2472);
    *(_QWORD *)(a1 + 656) = v4;
    *(_QWORD *)(a1 + 680) = v4;
    v5 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisOpenCancelSendNetBufferLists;
  }
  v6 = *(_QWORD *)(a1 + 2448);
  v7 = *(_QWORD *)(a1 + 2320);
  *(_QWORD *)(a1 + 184) = v5;
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
  *(_QWORD *)(a1 + 2632) = v6;
  *(_QWORD *)(a1 + 2504) = v7;
  *(_QWORD *)(a1 + 2640) = v6;
  *(_QWORD *)(a1 + 2528) = v7;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return WPP_SF_q(64LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  return result;
}

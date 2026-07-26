/*
 * XREFs of ndisIfQueryBindingMiniportIfIndex @ 0x1C00BFA90
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001ACAC (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisIfQueryBindingIfIndex @ 0x1C00CA490 (NdisIfQueryBindingIfIndex.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001A448 (ndisReferenceMiniportByHandle.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisIfQueryBindingMiniportIfIndex(__int64 a1, _DWORD *a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _NDIS_MINIPORT_BLOCK *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x32u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
  *a2 = 0;
  *a3 = 0LL;
  *a4 = 0;
  *a5 = 0LL;
  v9 = *(_QWORD *)(a1 + 2056);
  if ( v9 && (v10 = *(_QWORD *)(v9 + 840)) != 0 )
  {
    *a2 = *(_DWORD *)(v10 + 4);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2056) + 840LL) + 1312LL);
  }
  else
  {
    *a2 = *(_DWORD *)(a1 + 4080);
    v11 = *(_QWORD *)(a1 + 4048);
  }
  *a3 = v11;
  if ( (*(_DWORD *)(a1 + 124) & 0x8000000) != 0
    && (v13 = *(_NDIS_MINIPORT_BLOCK **)(a1 + 16)) != 0LL
    && ndisReferenceMiniportByHandle(v13, 0) )
  {
    *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4080LL);
    *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 4048LL);
    ndisDereferenceMiniport(*(_QWORD *)(a1 + 16), 0x3Eu, v14, v15);
  }
  else
  {
    *a4 = *(_DWORD *)(a1 + 4080);
    *a5 = *(_QWORD *)(a1 + 4048);
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x33u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
  return 0LL;
}

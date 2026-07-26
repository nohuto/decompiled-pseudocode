/*
 * XREFs of ndisMAllocateMiniportOffload @ 0x1C001EFA0
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisMSetOffloadAttributes @ 0x1C00C3014 (ndisMSetOffloadAttributes.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00F01E4 (ndisGetMiniportOffloadCapability.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisMAllocateMiniportOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(12LL, &WPP_7c9d8bcebdf13e66a2adfd9d6f9d271d_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 4120) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x4C8uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(13LL, &WPP_7c9d8bcebdf13e66a2adfd9d6f9d271d_Traceguids, *(_QWORD *)(a1 + 4120));
  return v2;
}

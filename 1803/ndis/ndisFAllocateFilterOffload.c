/*
 * XREFs of ndisFAllocateFilterOffload @ 0x1C001A068
 * Callers:
 *     ndisFIndicateOffloadChange @ 0x1C0013AA8 (ndisFIndicateOffloadChange.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0019370 (ndisIndicateInitialStateToFilter.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(14LL, &WPP_7c9d8bcebdf13e66a2adfd9d6f9d271d_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xBCuLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 808) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xBCuLL);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(15LL, &WPP_7c9d8bcebdf13e66a2adfd9d6f9d271d_Traceguids, *(_QWORD *)(a1 + 808));
  return v2;
}

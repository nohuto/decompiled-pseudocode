/*
 * XREFs of ndisFAllocateFilterOffload @ 0x1C001E450
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0005230 (ndisIndicateInitialStateToFilter.c)
 *     ndisFIndicateOffloadChange @ 0x1C0023D40 (ndisFIndicateOffloadChange.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(14LL, &WPP_fde93b4b8ac33b470d75b3ac150a1f69_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xBCuLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 808) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xBCuLL);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(15LL, &WPP_fde93b4b8ac33b470d75b3ac150a1f69_Traceguids, *(_QWORD *)(a1 + 808));
  return v2;
}

/*
 * XREFs of ndisAllocateOpenOffload @ 0x1C00C39C0
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C001C280 (ndisOidPreOpenSetEncapsulation.c)
 *     ndisOidPreTaskOffload @ 0x1C00DCE40 (ndisOidPreTaskOffload.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x52u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 792) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x53u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, *(_QWORD *)(a1 + 792));
  return v2;
}

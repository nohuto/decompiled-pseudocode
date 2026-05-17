/*
 * XREFs of sub_180005DB0 @ 0x180005DB0
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     sub_180024300 @ 0x180024300 (sub_180024300.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180005DB0(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 52));
  v1 = *(_DWORD *)(a1 + 52);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}

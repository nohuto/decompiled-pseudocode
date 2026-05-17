/*
 * XREFs of sub_180052928 @ 0x180052928
 * Callers:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     sub_18001B870 @ 0x18001B870 (sub_18001B870.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180052928(__int64 a1)
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

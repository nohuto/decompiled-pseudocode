/*
 * XREFs of MiFreeZeroPageSlistSufficient @ 0x14021EFC4
 * Callers:
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1400B8330 (MiNodeFreeZeroPages.c)
 */

_BOOL8 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 3944) + 16LL * a2) >= *(int *)(a1 + 5084)
      || (unsigned __int64)MiNodeFreeZeroPages(
                             (_QWORD *)(*(_QWORD *)(a1 + 48) + 2184 * ((unsigned __int64)a2 >> byte_14036C1B9)),
                             (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_14036C1BA)),
                             a3 != 0 ? 1024 : 1026) <= 0x40;
}

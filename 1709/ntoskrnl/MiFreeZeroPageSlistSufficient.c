/*
 * XREFs of MiFreeZeroPageSlistSufficient @ 0x14022A49C
 * Callers:
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1400C5878 (MiNodeFreeZeroPages.c)
 */

_BOOL8 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 4072) + 16LL * a2) >= *(int *)(a1 + 5212)
      || (unsigned __int64)MiNodeFreeZeroPages(
                             *(_QWORD *)(a1 + 16) + 8256 * ((unsigned __int64)a2 >> byte_140388501),
                             (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_140388502)),
                             a3 != 0 ? 1024 : 1026) <= 0x40;
}

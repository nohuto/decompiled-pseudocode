/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x140137038
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1400C5360 (MmMapLockedPagesWithReservedMapping.c)
 *     MiSetProbePagesAhead @ 0x140136E40 (MiSetProbePagesAhead.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1)
{
  unsigned __int64 v1; // rdx
  char v3; // dl

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
    return 0LL;
  v1 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( v1 < 0xFFFFF68000000000uLL )
    return 0LL;
  if ( v1 > 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  v3 = *(_BYTE *)(a1 + 34);
  if ( (v3 & 0x20) != 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(a1 + 32) )
    return 0LL;
  if ( (v3 & 8) != 0 )
    return 0LL;
  else
    return ((*(_QWORD *)a1 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL ? 0xC0000018 : 0;
}

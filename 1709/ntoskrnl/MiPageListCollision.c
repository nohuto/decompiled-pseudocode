/*
 * XREFs of MiPageListCollision @ 0x14010F9B8
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400C68C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14010FE88 (MiZeroPageWorkMapping.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiPageListCollision(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // r8
  _BYTE *v6; // rdx

  *(_BYTE *)(a1 + 34) &= ~8u;
  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_BYTE *)(v1 + 68) = 1;
  result = MiMakeDemandZeroPte(4LL);
  *(_QWORD *)(v5 + 16) = result;
  v6 = *(_BYTE **)(v3 + 32);
  if ( v6 )
  {
    if ( (*v6 & 1) != 0 )
      return MiZeroPageWorkMapping(*(unsigned int *)(v3 + 64), v6, v4 == 0 ? 2 : 0);
  }
  return result;
}

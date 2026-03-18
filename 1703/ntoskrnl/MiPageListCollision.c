/*
 * XREFs of MiPageListCollision @ 0x140125804
 * Callers:
 *     MiReplenishPageSlist @ 0x1400756C0 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401294A0 (MiUnlinkNodeLargePageHelper.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x1400B3330 (MiZeroPageWorkMapping.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiPageListCollision(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  _BYTE *v5; // rdx

  *(_BYTE *)(a1 + 34) &= ~8u;
  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_BYTE *)(v1 + 68) = 1;
  result = MiMakeDemandZeroPte(4LL);
  *(_QWORD *)(v4 + 16) = result;
  v5 = *(_BYTE **)(v3 + 32);
  if ( v5 )
  {
    if ( (*v5 & 1) != 0 )
      return MiZeroPageWorkMapping(*(_DWORD *)(v3 + 64), (__int64)v5);
  }
  return result;
}

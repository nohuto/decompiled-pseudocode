/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x140031FE0
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140059A10 (MiRelockProtoPoolPage.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiReferenceDriverPage @ 0x140252558 (MiReferenceDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // ax
  __int64 v4; // r8
  unsigned int v5; // ecx

  v2 = (*(_QWORD *)(a1 + 40) >> 52) & 1LL;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( !v2 )
    {
LABEL_3:
      v3 = *(_WORD *)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v5 = 0;
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          if ( !v4 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
            return v5;
        }
        else if ( v3 != 2 || !v4 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
        {
          return v5;
        }
      }
      return 1;
    }
  }
  else if ( !v2 )
  {
    goto LABEL_3;
  }
  return 0LL;
}

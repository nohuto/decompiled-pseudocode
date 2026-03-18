/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x1400780A0
 * Callers:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002AE10 (MiFinishMdlForMappedFileFault.c)
 *     MiRelockProtoPoolPage @ 0x14002E068 (MiRelockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiReferenceDriverPage @ 0x1402142F4 (MiReferenceDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // ax
  __int64 v3; // rdx
  unsigned int v4; // r8d

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v1 & 0x10000000000000LL) == 0 )
    {
LABEL_3:
      v2 = *(_WORD *)(a1 + 32);
      v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v4 = 0;
      if ( v2 )
      {
        if ( v2 == 1 )
        {
          if ( !v3 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
            return v4;
        }
        else if ( v2 != 2 || !v3 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
        {
          return v4;
        }
      }
      return 1;
    }
  }
  else if ( (v1 & 0x10000000000000LL) == 0 )
  {
    goto LABEL_3;
  }
  return 0LL;
}

/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x1400CB220
 * Callers:
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiFinishMdlForMappedFileFault @ 0x140107260 (MiFinishMdlForMappedFileFault.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x14010B1D8 (MiCheckProtoPtePageState.c)
 *     MiReferenceDriverPage @ 0x14020D294 (MiReferenceDriverPage.c)
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

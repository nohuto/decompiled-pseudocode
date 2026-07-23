/*
 * XREFs of sub_18001DEA8 @ 0x18001DEA8
 * Callers:
 *     sub_180039AE0 @ 0x180039AE0 (sub_180039AE0.c)
 *     sub_18006EC1C @ 0x18006EC1C (sub_18006EC1C.c)
 *     sub_18006F46C @ 0x18006F46C (sub_18006F46C.c)
 *     RtlDeleteFunctionTable @ 0x180073E80 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180074030 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180074550 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800747E0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180074B10 (RtlAddGrowableFunctionTable.c)
 *     sub_180077618 @ 0x180077618 (sub_180077618.c)
 *     sub_1800790E8 @ 0x1800790E8 (sub_1800790E8.c)
 *     sub_18007DCD4 @ 0x18007DCD4 (sub_18007DCD4.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     RtlSetProtectedPolicy @ 0x1800850D0 (RtlSetProtectedPolicy.c)
 *     sub_180085C94 @ 0x180085C94 (sub_180085C94.c)
 *     sub_180087928 @ 0x180087928 (sub_180087928.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     RtlInitializeNtUserPfn @ 0x180095B50 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x180095D30 (RtlResetNtUserPfn.c)
 *     sub_1800D75C8 @ 0x1800D75C8 (sub_1800D75C8.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     sub_18001DE44 @ 0x18001DE44 (sub_18001DE44.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18001DEA8(int a1)
{
  int Wow64CfgBitMapSize; // edi

  RtlAcquireSRWLockExclusive(&stru_18015AF70);
  Wow64CfgBitMapSize = LdrSystemDllInitBlock.Wow64CfgBitMapSize;
  if ( a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.Wow64CfgBitMapSize) )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    --LODWORD(LdrSystemDllInitBlock.Wow64CfgBitMapSize);
    if ( Wow64CfgBitMapSize == 1 )
      sub_18001DE44(2u);
  }
  else
  {
    if ( !LODWORD(LdrSystemDllInitBlock.Wow64CfgBitMapSize) )
      sub_18001DE44(4u);
    if ( Wow64CfgBitMapSize == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    LODWORD(LdrSystemDllInitBlock.Wow64CfgBitMapSize) = Wow64CfgBitMapSize + 1;
  }
  RtlReleaseSRWLockExclusive(&stru_18015AF70);
}

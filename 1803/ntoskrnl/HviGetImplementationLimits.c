/*
 * XREFs of HviGetImplementationLimits @ 0x1402C0CC0
 * Callers:
 *     HvlpSelectLpSet @ 0x140227CE0 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140228110 (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x140717888 (HvlQueryDetailInfo.c)
 *     KiPerformGroupConfiguration @ 0x1408AC1C8 (KiPerformGroupConfiguration.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140172300 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetImplementationLimits(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741829LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}

/*
 * XREFs of HviGetImplementationLimits @ 0x1402619F0
 * Callers:
 *     HvlpSelectLpSet @ 0x1401E5E1C (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401E6278 (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x1406873BC (HvlQueryDetailInfo.c)
 *     KiPerformGroupConfiguration @ 0x1408099B0 (KiPerformGroupConfiguration.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140155D50 (HviIsHypervisorMicrosoftCompatible.c)
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

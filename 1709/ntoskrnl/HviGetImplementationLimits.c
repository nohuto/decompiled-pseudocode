/*
 * XREFs of HviGetImplementationLimits @ 0x14028B5D0
 * Callers:
 *     HvlpSelectLpSet @ 0x1401EAC40 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401EB098 (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x1406B2DB8 (HvlQueryDetailInfo.c)
 *     KiPerformGroupConfiguration @ 0x14082F088 (KiPerformGroupConfiguration.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1401348F0 (HviIsHypervisorMicrosoftCompatible.c)
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

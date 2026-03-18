/*
 * XREFs of HviGetHypervisorInterface @ 0x140134930
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1401348F0 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlpHvIdentityInfoCallback @ 0x1401E9DA0 (HvlpHvIdentityInfoCallback.c)
 *     HvlQueryDetailInfo @ 0x1406B2DB8 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall HviGetHypervisorInterface(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsAnyHypervisorPresent();
  if ( (_BYTE)result )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}

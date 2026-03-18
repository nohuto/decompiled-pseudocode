/*
 * XREFs of HviGetHypervisorInterface @ 0x140172340
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140172300 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlpHvIdentityInfoCallback @ 0x140226EA0 (HvlpHvIdentityInfoCallback.c)
 *     HvlQueryDetailInfo @ 0x140717888 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorInterface(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741825LL;
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

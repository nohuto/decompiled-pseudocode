/*
 * XREFs of HviGetEnlightenmentInformation @ 0x1402C0B60
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x14022DF7C (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x1402747D0 (PopIsRunningInVm.c)
 *     HvlQueryDetailInfo @ 0x140717888 (HvlQueryDetailInfo.c)
 *     ExGetVMType @ 0x1407BDE9C (ExGetVMType.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140172300 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetEnlightenmentInformation(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741828LL;
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

/*
 * XREFs of HviGetHypervisorFeatures @ 0x1401722C0
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140172250 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x14022B0F0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14022DF7C (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x1402747D0 (PopIsRunningInVm.c)
 *     HvipApertureDetectParameters @ 0x140294278 (HvipApertureDetectParameters.c)
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x140717888 (HvlQueryDetailInfo.c)
 *     ExGetVMType @ 0x1407BDE9C (ExGetVMType.c)
 *     EtwpTraceSystemInitialization @ 0x1408A5194 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140172300 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
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

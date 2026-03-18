/*
 * XREFs of HviGetHypervisorFeatures @ 0x140155D10
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140155CA0 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401E86D0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1401E9D50 (HvlpDetermineEnlightenments.c)
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x1406873BC (HvlQueryDetailInfo.c)
 *     EtwpTraceSystemInitialization @ 0x140811798 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140155D50 (HviIsHypervisorMicrosoftCompatible.c)
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

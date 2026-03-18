/*
 * XREFs of HviGetHypervisorFeatures @ 0x1401348B0
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140134808 (HvlpTryConfigureInterface.c)
 *     HvlpIsDebugDeviceShared @ 0x1401E9E44 (HvlpIsDebugDeviceShared.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401ED8C0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1401EEFA8 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x14023D330 (PopIsRunningInVm.c)
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x1406B2DB8 (HvlQueryDetailInfo.c)
 *     EtwpTraceSystemInitialization @ 0x1408288A4 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1401348F0 (HviIsHypervisorMicrosoftCompatible.c)
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

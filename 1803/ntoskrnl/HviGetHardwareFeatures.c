/*
 * XREFs of HviGetHardwareFeatures @ 0x1402C0BB0
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x14022B0F0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14022DF7C (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x140294278 (HvipApertureDetectParameters.c)
 *     HviIsIommuInUse @ 0x1402C0D10 (HviIsIommuInUse.c)
 *     HvlQueryDetailInfo @ 0x140717888 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x1407179A4 (HvlQueryVsmProtectionInfo.c)
 *     EtwpTraceSystemInitialization @ 0x1408A5194 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1402C0C20 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v10[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorVendorAndMaxFunction(v10, a2, a3, a4);
  _RAX = 1073741830LL;
  if ( v10[0] < 0x40000006 )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}

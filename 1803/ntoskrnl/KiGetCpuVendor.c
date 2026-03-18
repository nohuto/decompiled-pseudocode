/*
 * XREFs of KiGetCpuVendor @ 0x14047A4BC
 * Callers:
 *     HvlpProcessIommu @ 0x14022D424 (HvlpProcessIommu.c)
 *     KiGetProcessorSignature @ 0x14046F3F4 (KiGetProcessorSignature.c)
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 *     KiIsNXSupported @ 0x14047A578 (KiIsNXSupported.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407AAA00 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407AB938 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407AC050 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     KiInitializeNxSupportDiscard @ 0x1408A4EDC (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strncmp @ 0x140187D50 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[8]; // [rsp+24h] [rbp-24h] BYREF
  int v8; // [rsp+2Ch] [rbp-1Ch]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)Str1 = __PAIR64__(_RDX, _RBX);
  v8 = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = v8;
  CurrentPrcb->VendorString[12] = 0;
  if ( !strncmp(Str1, "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(Str1, "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( !strncmp(Str1, "CentaurHauls", 0xCuLL) )
    return 3LL;
  return strncmp(Str1, "HygonGenuine", 0xCuLL) == 0 ? 4 : 0;
}

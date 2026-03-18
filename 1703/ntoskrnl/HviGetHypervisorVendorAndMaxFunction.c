/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140261950
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1401E4F50 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401E86D0 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x1402618E0 (HviGetHardwareFeatures.c)
 *     HvlQueryDetailInfo @ 0x1406873BC (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorVendorAndMaxFunction(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 0x40000000LL;
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

/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x14028B530
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1401E9DA0 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401ED8C0 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x14028B4C0 (HviGetHardwareFeatures.c)
 *     HvlQueryDetailInfo @ 0x1406B2DB8 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
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

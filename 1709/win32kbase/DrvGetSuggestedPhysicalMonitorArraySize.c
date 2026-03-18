/*
 * XREFs of DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00A1D30
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00A0570 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C007A450 (UpdateMonitorDevices.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C00A1DAC (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A1DF4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 */

__int64 __fastcall DrvGetSuggestedPhysicalMonitorArraySize(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        unsigned int *Address)
{
  __int64 result; // rax
  struct tagGRAPHICS_DEVICE *v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  UpdateMonitorDevices();
  result = DrvGetDeviceFromNameAndValidateDevice(a1, a2, &v7);
  if ( (int)result >= 0 )
  {
    result = DrvGetNumberOfPhysicalMonitors(v7, &v8);
    if ( (int)result >= 0 )
    {
      ProbeForWrite(Address, 4uLL, 4u);
      *Address = v8;
      return 0LL;
    }
  }
  return result;
}

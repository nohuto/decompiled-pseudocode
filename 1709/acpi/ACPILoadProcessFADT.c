/*
 * XREFs of ACPILoadProcessFADT @ 0x1C00AE684
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00AEB50 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPIGpeClearRegisters @ 0x1C0013C48 (ACPIGpeClearRegisters.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 *     ACPIProcessHardwareInformation @ 0x1C008FA58 (ACPIProcessHardwareInformation.c)
 *     ACPILoadProcessDSDT @ 0x1C00AE720 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00AE7D8 (ACPILoadProcessFACS.c)
 */

__int64 ACPILoadProcessFADT()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int v2; // edx
  bool v3; // zf

  v0 = *((_QWORD *)AcpiInformation + 1);
  if ( *(_BYTE *)(v0 + 8) >= 5u && (*(_DWORD *)(v0 + 112) & 0x100000) != 0 )
    *((_BYTE *)AcpiInformation + 133) = 1;
  result = ACPILoadProcessFACS();
  if ( (int)result >= 0 || *((_BYTE *)AcpiInformation + 133) )
  {
    if ( !*((_BYTE *)AcpiInformation + 133) )
    {
      result = ACPIProcessHardwareInformation();
      if ( (int)result < 0 )
        return result;
      ACPIGpeClearRegisters();
      ACPIGpeEnableDisableEvents(0);
    }
    *((_DWORD *)AcpiInformation + 31) = 0;
    *((_DWORD *)AcpiInformation + 32) = 0;
    v3 = (*(_DWORD *)(v0 + 112) & 0x200) == 0;
    *((_BYTE *)AcpiInformation + 132) = (*(_DWORD *)(v0 + 112) & 0x200) != 0;
    if ( !v3 && (*((_BYTE *)AcpiInformation + 133) || (*(_DWORD *)(v0 + 112) & 0x200000) != 0) )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        17,
        (__int64)&WPP_2260554ba3bf3834a501608aef56474b_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 0xCuLL, *(unsigned int *)(v0 + 112), 0LL);
    }
    return ACPILoadProcessDSDT();
  }
  return result;
}

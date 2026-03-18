/*
 * XREFs of ACPILoadProcessFADT @ 0x1C00ADCC8
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00AC150 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C001F1BC (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeClearRegisters @ 0x1C0020454 (ACPIGpeClearRegisters.c)
 *     ACPIProcessHardwareInformation @ 0x1C0090784 (ACPIProcessHardwareInformation.c)
 *     ACPILoadProcessFACS @ 0x1C00AC4F4 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessDSDT @ 0x1C00ADD68 (ACPILoadProcessDSDT.c)
 */

__int64 ACPILoadProcessFADT()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int v2; // edx
  _DWORD *v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx

  v0 = *((_QWORD *)AcpiInformation + 1);
  if ( *(_BYTE *)(v0 + 8) >= 5u && (*(_DWORD *)(v0 + 112) & 0x100000) != 0 )
    *((_BYTE *)AcpiInformation + 133) = 1;
  result = ACPILoadProcessFACS();
  v3 = AcpiInformation;
  if ( (int)result >= 0 || *((_BYTE *)AcpiInformation + 133) )
  {
    if ( !*((_BYTE *)AcpiInformation + 133) )
    {
      result = ACPIProcessHardwareInformation();
      if ( (int)result < 0 )
        return result;
      ACPIGpeClearRegisters();
      ACPIGpeEnableDisableEvents(0, v4);
      v3 = AcpiInformation;
    }
    v3[31] = 0;
    *((_DWORD *)AcpiInformation + 32) = 0;
    v5 = (*(_DWORD *)(v0 + 112) >> 9) & 1;
    *((_BYTE *)AcpiInformation + 132) = (*(_DWORD *)(v0 + 112) & 0x200) != 0;
    if ( (_BYTE)v5 && (*((_BYTE *)AcpiInformation + 133) || (*(_DWORD *)(v0 + 112) & 0x200000) != 0) )
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

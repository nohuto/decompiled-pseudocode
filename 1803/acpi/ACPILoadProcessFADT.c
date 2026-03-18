/*
 * XREFs of ACPILoadProcessFADT @ 0x1C009A88C
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C009A99C (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIGpeClearRegisters @ 0x1C0027948 (ACPIGpeClearRegisters.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00279A4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIProcessHardwareInformation @ 0x1C007E17C (ACPIProcessHardwareInformation.c)
 *     ACPILoadProcessDSDT @ 0x1C009A65C (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C009A774 (ACPILoadProcessFACS.c)
 */

__int64 ACPILoadProcessFADT()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int v2; // edx
  __int64 v3; // rdx
  bool v4; // zf

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
      ACPIGpeEnableDisableEvents(0, v3);
    }
    *((_DWORD *)AcpiInformation + 31) = 0;
    *((_DWORD *)AcpiInformation + 32) = 0;
    v4 = (*(_DWORD *)(v0 + 112) & 0x200) == 0;
    *((_BYTE *)AcpiInformation + 132) = (*(_DWORD *)(v0 + 112) & 0x200) != 0;
    if ( !v4 && (*((_BYTE *)AcpiInformation + 133) || (*(_DWORD *)(v0 + 112) & 0x200000) != 0) )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        17,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 0xCuLL, *(unsigned int *)(v0 + 112), 0LL);
    }
    return ACPILoadProcessDSDT();
  }
  return result;
}

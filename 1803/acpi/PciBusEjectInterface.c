/*
 * XREFs of PciBusEjectInterface @ 0x1C007F73C
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0013E10 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C0003EF0 (PciConfigPinToLine.c)
 */

__int64 __fastcall PciBusEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // r8
  __int64 v6; // rdx
  unsigned __int16 v7; // ax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_WORD *)(v4 + 16) < 0x40u )
    return 3221225485LL;
  if ( *(_WORD *)(v4 + 18) > 2u )
    return 3221225659LL;
  v6 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v6 + 16) = PciConfigPinToLine;
  *(_QWORD *)(v6 + 24) = PciConfigPinToLine;
  *(_QWORD *)(v6 + 32) = AcpiWrapperReadConfig;
  *(_QWORD *)(v6 + 40) = AcpiWrapperWriteConfig;
  *(_QWORD *)(v6 + 48) = PciConfigPinToLine;
  *(_QWORD *)(v6 + 56) = PciConfigPinToLine;
  *(_DWORD *)v6 = 131136;
  *(_QWORD *)(v6 + 8) = DeviceExtension;
  v7 = *(_WORD *)(v4 + 16);
  if ( v7 >= 0x48u )
  {
    *(_WORD *)v6 = 72;
    *(_QWORD *)(v6 + 64) = PciGetRootBusCapability;
    v7 = *(_WORD *)(v4 + 16);
  }
  if ( v7 >= 0x50u )
  {
    if ( (*(_DWORD *)(*((_QWORD *)AcpiInformation + 1) + 112LL) & 0x4000) != 0 )
    {
      *(_WORD *)v6 = 88;
      *(_QWORD *)(v6 + 72) = PciExpressWakeControl;
    }
    else
    {
      *(_QWORD *)(v6 + 72) = 0LL;
    }
  }
  if ( *(_WORD *)(v4 + 16) >= 0x58u )
    *(_QWORD *)(v6 + 80) = PciConfigPinToLine;
  PciConfigPinToLine();
  return 0LL;
}

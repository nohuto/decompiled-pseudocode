/*
 * XREFs of AcpiPccGetInterfaceInformation @ 0x1C0053390
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0004580 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C0011410 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiPccGetInterfaceInformation(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  KIRQL v8; // al

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x58u || !*(_WORD *)(v2 + 18) )
    return (unsigned int)-1073741811;
  v5 = *(_QWORD *)(v2 + 24);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x1000000000LL) != 0 && *(_DWORD *)(v5 + 32) == -1 )
  {
    v6 = AcpiPccLegacySubspace;
  }
  else
  {
    v7 = *(unsigned int *)(v5 + 32);
    if ( (unsigned int)v7 >= AcpiPccSubspaceCount )
      return (unsigned int)-1073741637;
    v6 = AcpiPccSubspaces + 528 * v7;
  }
  if ( !v6 )
    return (unsigned int)-1073741637;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 520));
  if ( (*(_BYTE *)v6 & 0x3C) == 0xC )
  {
    *(_DWORD *)v6 = *(_DWORD *)v6 & 0xFFFFFFC3 | 0x30;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 520), v8);
    *(_DWORD *)v5 = 65624;
    *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
    *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 40) = *(_QWORD *)(v6 + 96);
    *(_DWORD *)(v5 + 48) = *(_DWORD *)(v6 + 104);
    *(_QWORD *)(v5 + 72) = *(_QWORD *)(v6 + 80);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(v6 + 88);
    *(_QWORD *)(v5 + 64) = *(_QWORD *)(v6 + 64);
    *(_QWORD *)(v5 + 56) = *(_QWORD *)(v6 + 56);
    PciConfigPinToLine();
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 520), v8);
  }
  return v3;
}

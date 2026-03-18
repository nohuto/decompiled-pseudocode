/*
 * XREFs of AcpiPccEjectInterface @ 0x1C002FDE4
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0013E10 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0087D40 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C0003EF0 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiPccEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 DeviceExtension; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  KIRQL v9; // al
  unsigned int v10; // ebp
  KIRQL v11; // cl
  __int64 v12; // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x80u || !*(_WORD *)(v2 + 18) )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x1000000000LL) != 0 && *(_DWORD *)(v6 + 32) == -1 )
  {
    v7 = AcpiPccLegacySubspace;
  }
  else
  {
    v8 = *(unsigned int *)(v6 + 32);
    if ( (unsigned int)v8 >= AcpiPccSubspaceCount )
      return (unsigned int)-1073741637;
    v7 = AcpiPccSubspaces + 528 * v8;
  }
  v5 = 0;
  if ( !v7 || *(_QWORD *)(v6 + 40) && (*(_DWORD *)v7 & 2) == 0 )
    return (unsigned int)-1073741637;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 520));
  v10 = *(_DWORD *)v7 & 0x3C;
  v11 = v9;
  if ( v10 == 8 )
  {
    *(_DWORD *)v7 = *(_DWORD *)v7 & 0xFFFFFFC3 | 0xC;
    v12 = *(_QWORD *)(v6 + 40);
    if ( v12 )
    {
      *(_QWORD *)(v7 + 144) = v12;
      *(_QWORD *)(v7 + 152) = *(_QWORD *)(v6 + 48);
      *(_QWORD *)(v7 + 160) = a1;
      _InterlockedAdd(&AcpiPccSciReferenceCount, 1u);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 520), v11);
    *(_DWORD *)v6 = 65664;
    *(_QWORD *)(v6 + 16) = PciConfigPinToLine;
    *(_QWORD *)(v6 + 24) = PciConfigPinToLine;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 56) = v7;
    *(_DWORD *)(v6 + 64) = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v6 + 68) = *(_DWORD *)(v7 + 8);
    *(_QWORD *)(v6 + 72) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(v6 + 80) = *(_DWORD *)(v7 + 24);
    *(_DWORD *)(v6 + 84) ^= (*(_DWORD *)(v6 + 84) ^ (*(_DWORD *)v7 >> 1)) & 1;
    *(_QWORD *)(v6 + 88) = AcpiPccAcquireSubspace;
    *(_QWORD *)(v6 + 96) = AcpiPccAcquireSubspaceAsync;
    *(_QWORD *)(v6 + 104) = AcpiPccExecuteCommand;
    *(_QWORD *)(v6 + 112) = AcpiPccExecuteCommandAsync;
    *(_QWORD *)(v6 + 120) = AcpiPccReleaseSubspace;
    PciConfigPinToLine();
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 520), v9);
    return v10 < 8 ? -1073741823 : -1073740024;
  }
  return v5;
}

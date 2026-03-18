/*
 * XREFs of ACPIWakeInitializePmeRouting @ 0x1C0041654
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C008C180 (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C007DA98 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIWakeInitializePmeRouting(PDEVICE_OBJECT DeviceObject)
{
  PVOID PoolWithTag; // rbx
  int v4; // edi
  KIRQL v5; // si
  _QWORD v6[9]; // [rsp+20h] [rbp-58h] BYREF

  if ( PciPmeInterface )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x41706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(v6, 0, sizeof(v6));
  v6[4] = 0LL;
  v6[1] = &GUID_PCI_PME_INTERFACE;
  LOWORD(v6[0]) = 2075;
  LODWORD(v6[2]) = 65600;
  v6[3] = PoolWithTag;
  v4 = ACPIInternalSendSynchronousIrp(DeviceObject);
  if ( v4 >= 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    if ( PciPmeInterfaceInstantiated )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      PciPmeInterfaceInstantiated = 1;
      PciPmeInterface = PoolWithTag;
    }
    KeReleaseSpinLock(&AcpiPowerLock, v5);
  }
  else
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v4;
}

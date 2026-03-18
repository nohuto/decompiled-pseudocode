/*
 * XREFs of PcisuppInitializePciRouting @ 0x1C008C690
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C008C180 (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C007DA98 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall PcisuppInitializePciRouting(PDEVICE_OBJECT DeviceObject)
{
  int v2; // ebx
  PVOID PoolWithTag; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v5; // rsi
  _QWORD v7[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( InterruptRouting )
  {
    return 0;
  }
  else
  {
    memset(v7, 0, 0x48uLL);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x41706341u);
    if ( PoolWithTag )
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
      v7[4] = 0LL;
      v5 = AttachedDeviceReference;
      LOWORD(v7[0]) = 2075;
      LODWORD(v7[2]) = 131128;
      v7[1] = &GUID_INT_ROUTE_INTERFACE_STANDARD;
      v7[3] = PoolWithTag;
      v2 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference, (__int64)v7, 0LL);
      if ( v2 < 0 )
        ExFreePoolWithTag(PoolWithTag, 0);
      else
        InterruptRouting = PoolWithTag;
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v2;
}

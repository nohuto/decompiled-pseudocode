/*
 * XREFs of VfGetDmaAdapter @ 0x140769DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IoGetDmaAdapter @ 0x1405CB2A0 (IoGetDmaAdapter.c)
 *     VF_ASSERT_IRQL @ 0x140768728 (VF_ASSERT_IRQL.c)
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x1407688B8 (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     VfIsPCIBus @ 0x14076A648 (VfIsPCIBus.c)
 *     ViHookDmaAdapter @ 0x14076C7EC (ViHookDmaAdapter.c)
 *     ViReleaseDmaAdapter @ 0x14076CDD8 (ViReleaseDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  _LIST_ENTRY *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( !ViVerifyDma || ViDMADisabledNoRebootNeeded == 1 || (unsigned int)VfIsPCIBus() )
    return IoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  if ( (MmVerifierData & 0x20000) == 0 )
    VF_ASSERT_IRQL(0);
  if ( PhysicalDeviceObject )
  {
    while ( 1 )
    {
      v6 = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE((struct _LIST_ENTRY *)PhysicalDeviceObject);
      if ( !v6 )
        break;
      ViReleaseDmaAdapter((ULONG_PTR)v6);
    }
  }
  if ( ViDoubleBufferDma )
  {
    if ( *NumberOfMapRegisters > 0x20 )
      *NumberOfMapRegisters = 32;
  }
  ((__int64 (__fastcall *)(struct _KTHREAD *))off_14033B620)(KeGetCurrentThread());
  v7 = (_QWORD *)((__int64 (__fastcall *)(PDEVICE_OBJECT, struct _DEVICE_DESCRIPTION *, PULONG))pXdvIoGetDmaAdapter)(
                   PhysicalDeviceObject,
                   DeviceDescription,
                   NumberOfMapRegisters);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v10 = ViHookDmaAdapter(v7);
  if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD *))(v8[1] + 8LL))(v8);
    return 0LL;
  }
  *(_QWORD *)(v10 + 24) = PhysicalDeviceObject;
  *(_QWORD *)(v10 + 40) = retaddr;
  return (struct _DMA_ADAPTER *)v8;
}

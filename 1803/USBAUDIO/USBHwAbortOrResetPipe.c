/*
 * XREFs of USBHwAbortOrResetPipe @ 0x1C0021430
 * Callers:
 *     USBHwStopMIDIPipe @ 0x1C0002A04 (USBHwStopMIDIPipe.c)
 *     USBType1AsyncEndpointPoll @ 0x1C00039C0 (USBType1AsyncEndpointPoll.c)
 *     USBHwDataPipeReset @ 0x1C00214C0 (USBHwDataPipeReset.c)
 * Callees:
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001FCE4 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwAbortOrResetPipe(PDEVICE_OBJECT DeviceObject, void *a2, USHORT a3)
{
  unsigned int v6; // edi
  struct _URB *PoolWithTag; // rax
  struct _URB *v8; // rbx

  v6 = -1073741670;
  PoolWithTag = (struct _URB *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x41627845u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->UrbHeader.Length = 40;
    PoolWithTag->UrbHeader.Function = a3;
    PoolWithTag->UrbSelectInterface.ConfigurationHandle = a2;
    v6 = USBHwSubmitUrbToUsbdSynch(DeviceObject, PoolWithTag, 0LL);
    ExFreePool(v8);
  }
  return v6;
}

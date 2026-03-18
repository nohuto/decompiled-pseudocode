/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C00064FC
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0006CB8 (XilCommonBuffer_AcquireBufferEx.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C000C9B0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     TR_AcquireDoubleBuffer @ 0x1C001F864 (TR_AcquireDoubleBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C0037584 (Crashdump_CommonBufferAcquire.c)
 *     XilCoreCommand_AllocateResources @ 0x1C003E5B8 (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C003F548 (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     CommonBuffer_QueueWorkItem @ 0x1C00067A0 (CommonBuffer_QueueWorkItem.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C003E900 (XilCoreCommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffer(PVOID Context, int a2, int a3, int a4)
{
  __int64 v5; // rdi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = XilCoreCommonBuffer_AcquireBuffer((int)Context + 88, a2, a3, a4, (__int64)&v7);
  if ( v7 == 1 )
    CommonBuffer_QueueWorkItem(Context);
  return v5;
}

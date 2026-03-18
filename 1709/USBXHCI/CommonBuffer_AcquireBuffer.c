/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C000F6FC
 * Callers:
 *     XilCommonBuffer_AcquireBuffer @ 0x1C000FE04 (XilCommonBuffer_AcquireBuffer.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000FE18 (XilCommonBuffer_AcquireBufferEx.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0014620 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C00173A8 (XilEndpoint_AllocateStreamContextArray.c)
 *     TR_AcquireDoubleBuffer @ 0x1C0021FBC (TR_AcquireDoubleBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C0038F94 (Crashdump_CommonBufferAcquire.c)
 *     XilCoreCommand_AllocateResources @ 0x1C003FF04 (XilCoreCommand_AllocateResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0040E4C (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     CommonBuffer_QueueWorkItem @ 0x1C000F908 (CommonBuffer_QueueWorkItem.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C00401F0 (XilCoreCommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffer(PVOID Context, int a2, int a3, int a4)
{
  __int64 v5; // rdi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = XilCoreCommonBuffer_AcquireBuffer((int)Context + 80, a2, a3, a4, (__int64)&v7);
  if ( v7 == 1 )
    CommonBuffer_QueueWorkItem(Context);
  return v5;
}

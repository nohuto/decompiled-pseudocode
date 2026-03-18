/*
 * XREFs of VidSchiUpdatePriorityTables @ 0x1C0007EE0
 * Callers:
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0022300 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     VidSchiSelectContext @ 0x1C002787C (VidSchiSelectContext.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0007F80 (VidSchiInsertCommandToSoftwareQueue.c)
 */

__int64 __fastcall VidSchiUpdatePriorityTables(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v8 = 0;
  v12 = 0;
  v9 = 0;
  if ( a2 )
  {
    VidSchiInsertCommandToSoftwareQueue(a2, &v12);
    v9 = v12;
  }
  if ( *(_DWORD *)(a1 + 944) )
    v8 = 1;
  if ( a4 )
    *a4 = v9;
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v8;
}

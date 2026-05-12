/*
 * XREFs of RaidUnitQuiesceDeviceWorkRoutine @ 0x1C000F180
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C000F1F8 (RaidLunQueueWaitForQuiescence.c)
 */

void __fastcall RaidUnitQuiesceDeviceWorkRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  struct _KEVENT *DeviceExtension; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  char v6; // r8

  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Context + 1) + 184LL) + 8LL);
  v5 = RaidLunQueueWaitForQuiescence(&DeviceExtension[16].Header.WaitListHead.Blink, *(unsigned int *)(v4 + 20));
  v6 = 1;
  if ( v5 == 258 )
    v6 = 9;
  *(_BYTE *)(v4 + 3) = v6;
  RaidCompleteRequestEx(*((PIRP *)Context + 1), 0, v5);
  RaUnitReleaseRemoveLock(DeviceExtension);
}

/*
 * XREFs of RaidUnitQuiesceDeviceWorkRoutine @ 0x1C003EEF0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C0031C70 (RaidLunQueueWaitForQuiescence.c)
 */

void __fastcall RaidUnitQuiesceDeviceWorkRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  void *DeviceExtension; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  char v6; // r8

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Context + 1) + 184LL) + 8LL);
  v5 = RaidLunQueueWaitForQuiescence((__int64)DeviceExtension + 400, *(_DWORD *)(v4 + 20));
  v6 = 1;
  if ( v5 == 258 )
    v6 = 9;
  *(_BYTE *)(v4 + 3) = v6;
  RaidCompleteRequestEx(*((PIRP *)Context + 1), 0, v5);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}

/*
 * XREFs of PopFxUnregisterDevice @ 0x1406C8A30
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x140570848 (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x1406C75E0 (PoFxUnregisterDevice.c)
 * Callees:
 *     PoFxActivateComponent @ 0x140068EA0 (PoFxActivateComponent.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PopFxAssignDeviceToDevNode @ 0x14015EC40 (PopFxAssignDeviceToDevNode.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401F7A10 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceDpm @ 0x14022A988 (PopFxDestroyDeviceDpm.c)
 *     PopFxRemoveDevice @ 0x14022BB90 (PopFxRemoveDevice.c)
 *     PopPluginUnregisterDevice @ 0x14022CE6C (PopPluginUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x1406CAFC8 (PopPepUnregisterDevice.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x1406CD5E0 (PopDiagTraceFxDeviceUnregistration.c)
 */

void __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int i; // edi
  __int64 j; // rdi
  struct _KEVENT *v4; // rdi
  __int64 k; // r8
  ULONG_PTR v6; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 624) & 1) == 0 )
  {
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 628); ++i )
      PoFxActivateComponent(BugCheckParameter2, i, 2LL);
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(BugCheckParameter2 + 628); j = (unsigned int)(j + 1) )
      KeWaitForSingleObject(
        (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 632) + 8 * j) + 104LL),
        Executive,
        0,
        0,
        0LL);
  }
  v4 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v4 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2);
    PopDiagTraceFxDeviceUnregistration(v4);
    PopFxAssignDeviceToDevNode((__int64)v4, 0LL);
  }
  for ( k = 0LL; (unsigned int)k < *(_DWORD *)(BugCheckParameter2 + 628); k = (unsigned int)(k + 1) )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 632) + 8 * k) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 216), 0LL, 0x20u);
  PopPepUnregisterDevice(*(_QWORD *)(BugCheckParameter2 + 56));
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v6 )
    PopPluginUnregisterDevice(v6, *(_QWORD *)(BugCheckParameter2 + 72));
  if ( v4 )
    KeSetEvent(v4 + 4, 0, 0);
  if ( (*(_DWORD *)(BugCheckParameter2 + 624) & 1) != 0 )
    PopFxDestroyDeviceDpm((__int64)v4, BugCheckParameter2);
}

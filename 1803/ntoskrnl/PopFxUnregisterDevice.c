/*
 * XREFs of PopFxUnregisterDevice @ 0x140760910
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x1405C81EC (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x14075F710 (PoFxUnregisterDevice.c)
 * Callees:
 *     PoFxActivateComponent @ 0x140078070 (PoFxActivateComponent.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x140164020 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxAssignDeviceToDevNode @ 0x14016EDC8 (PopFxAssignDeviceToDevNode.c)
 *     PopFxDestroyDeviceDpm @ 0x140275108 (PopFxDestroyDeviceDpm.c)
 *     PopFxRemoveDevice @ 0x1402762AC (PopFxRemoveDevice.c)
 *     PopPluginUnregisterDevice @ 0x140277818 (PopPluginUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140764870 (PopPepUnregisterDevice.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x140767BCC (PopDiagTraceFxDeviceUnregistration.c)
 */

void __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // eax
  unsigned int i; // edi
  __int64 v4; // rdi
  struct _KEVENT *v5; // rdi
  __int64 j; // r8
  ULONG_PTR v7; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 1) == 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter2 + 708);
    for ( i = 0; i < v2; ++i )
    {
      PoFxActivateComponent(BugCheckParameter2, i, 2LL);
      v2 = *(_DWORD *)(BugCheckParameter2 + 708);
    }
    v4 = 0LL;
    if ( v2 )
    {
      do
      {
        KeWaitForSingleObject(
          (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 712) + 8 * v4) + 104LL),
          Executive,
          0,
          0,
          0LL);
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(BugCheckParameter2 + 708) );
    }
  }
  v5 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v5 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (__int64 *)BugCheckParameter2);
    PopDiagTraceFxDeviceUnregistration(v5);
    PopFxAssignDeviceToDevNode((__int64)v5, 0LL);
  }
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(BugCheckParameter2 + 708); j = (unsigned int)(j + 1) )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 712) + 8 * j) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 216), 0LL, 0x20u);
  PopPepUnregisterDevice(*(PVOID *)(BugCheckParameter2 + 56));
  v7 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v7 )
    PopPluginUnregisterDevice(v7, *(_QWORD *)(BugCheckParameter2 + 72));
  if ( v5 )
    KeSetEvent(v5 + 4, 0, 0);
  if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 1) != 0 )
    PopFxDestroyDeviceDpm((__int64)v5, BugCheckParameter2);
}

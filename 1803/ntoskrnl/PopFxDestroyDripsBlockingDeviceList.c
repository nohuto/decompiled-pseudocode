/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x14075F754
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140274C18 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsCallbackTakeAction @ 0x14076DE64 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14076DFD0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x1400C88F0 (IoControlPnpDeviceActionQueue.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PopFxReleaseDevice @ 0x1402761E8 (PopFxReleaseDevice.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PopFxDestroyDripsBlockingDeviceList(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v2[1] != a1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = (void *)v2[3];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4D584650u);
      v2[3] = 0LL;
      *((_DWORD *)v2 + 8) = 0;
    }
    PopFxReleaseDevice((__int64)(v2 - 94));
  }
  IoControlPnpDeviceActionQueue(0);
  ExReleasePushLockEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL, v5, v6);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

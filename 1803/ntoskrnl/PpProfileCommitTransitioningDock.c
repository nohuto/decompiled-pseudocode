/*
 * XREFs of PpProfileCommitTransitioningDock @ 0x140731E94
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x1405CA7BC (PipProcessStartPhase2.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x1405CDA64 (PnpIrpQueryID.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140725874 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x1407319FC (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x140731B4C (PnpProfileUpdateHardwareProfile.c)
 */

LONG __fastcall PpProfileCommitTransitioningDock(__int64 a1, int a2)
{
  __int64 v2; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  LONG result; // eax
  char v9; // [rsp+38h] [rbp+10h] BYREF
  ULONG_PTR v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 592);
  if ( a2 == 3 )
  {
    if ( v2 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 592), 0);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    ExAcquireFastMutex(&PiProfileDeviceListLock);
    v5 = (_QWORD *)(a1 + 576);
    v6 = *(_QWORD *)(a1 + 576);
    if ( *(_QWORD *)(v6 + 8) != a1 + 576 || (v7 = *(_QWORD **)(a1 + 584), (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(a1 + 584) = a1 + 576;
    *v5 = v5;
    --PiProfileDeviceCount;
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  }
  else if ( !v2 )
  {
    PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 4, &v10);
    *(_QWORD *)(a1 + 592) = v10;
  }
  *(_DWORD *)(a1 + 568) = 1;
  result = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v9 = 0;
    if ( (a2 != 2 || *(_QWORD *)(a1 + 592)) && (int)PnpProfileUpdateHardwareProfile((__int64)&v9) >= 0 && v9 )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
      PiProfileUpdateDeviceTree();
    }
    else if ( PiProfileChangeCancelRequired )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
    }
    return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
  }
  return result;
}

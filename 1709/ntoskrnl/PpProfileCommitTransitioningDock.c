/*
 * XREFs of PpProfileCommitTransitioningDock @ 0x1406CA854
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x140555E8C (PipProcessStartPhase2.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x14051AD78 (PnpIrpQueryID.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1406BFE20 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x1406CA3B4 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406CA50C (PnpProfileUpdateHardwareProfile.c)
 */

LONG __fastcall PpProfileCommitTransitioningDock(__int64 a1, int a2)
{
  void *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  LONG result; // eax
  char v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == 3 )
  {
    v4 = *(void **)(a1 + 592);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
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
  else if ( !*(_QWORD *)(a1 + 592) )
  {
    PnpIrpQueryID(*(_QWORD *)(a1 + 32), 4, &v10);
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

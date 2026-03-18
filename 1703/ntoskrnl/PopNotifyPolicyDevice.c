/*
 * XREFs of PopNotifyPolicyDevice @ 0x1405D6760
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     PopConnectToPolicyDevice @ 0x1405D67E8 (PopConnectToPolicyDevice.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  bool v5; // di
  char v7; // bl

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopAcquirePolicyLock();
    if ( v5 )
    {
      if ( byte_14034BC93 )
      {
        byte_14034BC93 = 0;
LABEL_13:
        PopResetCurrentPolicies();
      }
    }
    else if ( byte_14034BC93 != 1 )
    {
      byte_14034BC93 = 1;
      goto LABEL_13;
    }
    PopReleasePolicyLock();
    return 0LL;
  }
  if ( (_DWORD)Context == 3 )
  {
    KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
    PopAcquirePolicyLock();
    v7 = PopHiberEnabled;
    PopEnableHiberFile(0, 0);
    if ( v7 )
      PopEnableHiberFile(1, 0);
    PopReleasePolicyLock();
    KeSetEvent(&PopTransitionLock, 0, 0);
  }
  else if ( v3 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
    PopConnectToPolicyDevice(v2, NotificationStructure[5]);
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  return 0LL;
}

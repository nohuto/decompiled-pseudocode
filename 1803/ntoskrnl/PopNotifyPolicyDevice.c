/*
 * XREFs of PopNotifyPolicyDevice @ 0x140626B50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 *     PopConnectToPolicyDevice @ 0x140626BD4 (PopConnectToPolicyDevice.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  bool v5; // bl
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
      if ( byte_1403AAB73 )
      {
        byte_1403AAB73 = 0;
LABEL_13:
        PopResetCurrentPolicies();
      }
    }
    else if ( byte_1403AAB73 != 1 )
    {
      byte_1403AAB73 = 1;
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

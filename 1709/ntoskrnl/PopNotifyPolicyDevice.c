/*
 * XREFs of PopNotifyPolicyDevice @ 0x140706F40
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 *     PopConnectToPolicyDevice @ 0x140706CAC (PopConnectToPolicyDevice.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(char *NotificationStructure, PVOID Context)
{
  int v2; // edi
  __int64 v3; // rax
  bool v5; // bl
  char v6; // bl

  v2 = (int)Context;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopAcquirePolicyLock();
    if ( v5 )
    {
      if ( byte_140366313 )
      {
        byte_140366313 = 0;
LABEL_9:
        PopResetCurrentPolicies();
      }
    }
    else if ( byte_140366313 != 1 )
    {
      byte_140366313 = 1;
      goto LABEL_9;
    }
    PopReleasePolicyLock();
    return 0LL;
  }
  if ( (_DWORD)Context == 3 )
  {
    KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
    PopAcquirePolicyLock();
    v6 = PopHiberEnabled;
    PopEnableHiberFile(0, 0);
    if ( v6 )
      PopEnableHiberFile(1, 0);
    PopReleasePolicyLock();
    KeSetEvent(&PopTransitionLock, 0, 0);
  }
  else if ( v3 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
    PopConnectToPolicyDevice(v2, *((const UNICODE_STRING **)NotificationStructure + 5));
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  return 0LL;
}

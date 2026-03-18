/*
 * XREFs of PopPolicyDeviceTargetChange @ 0x1407070C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140126F40 (PnpUnregisterPlugPlayNotification.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopConnectToPolicyDevice @ 0x140706CAC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x14070704C (PopPolicyDeviceRemove.c)
 */

__int64 __fastcall PopPolicyDeviceTargetChange(char *NotificationStructure, UNICODE_STRING *Context)
{
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
    PopPolicyDeviceRemove((__int64)Context);
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v6 )
  {
    PopPolicyDeviceRemove((__int64)Context);
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
  {
    PopConnectToPolicyDevice(*(_DWORD *)&Context[1].Length, Context + 2);
    goto LABEL_13;
  }
LABEL_14:
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  if ( v4 )
  {
    PnpUnregisterPlugPlayNotification(Context[1].Buffer, 1);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_140355F04 + 8 * *(int *)&Context[1].Length));
  }
  return 0LL;
}

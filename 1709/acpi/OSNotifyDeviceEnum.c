/*
 * XREFs of OSNotifyDeviceEnum @ 0x1C005218C
 * Callers:
 *     NotifyHandler @ 0x1C0055C60 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C000CF70 (ACPIDockIsDockDevice.c)
 *     AMLIIterateParentNext @ 0x1C0028AFC (AMLIIterateParentNext.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00291E4 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0044DB8 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEnum(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  void (__fastcall *v6)(__int64, __int64); // rdx
  KIRQL v7; // si
  __int64 v8; // rcx

  v1 = a1;
  v2 = 0LL;
  dword_1C0079638 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  byte_1C007963C = 0;
  WPP_RECORDER_SF_qs(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x18u,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    (char)a1,
    (const char *)&dword_1C0079638);
  if ( ACPIDockIsDockDevice((__int64 *)v1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      v6 = ACPIBuildIssueNotifyInvalidateRelationsForDockDevice;
LABEL_15:
      ACPIBuildSynchronizationRequestInternal(v4, (__int64)v6, v5, v3, 1);
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    dword_1C00797B8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v1 + 2);
    do
    {
      if ( v2 )
        break;
      v8 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( v8 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( *(_DWORD *)(v8 + 16) != 1599293264 )
          v2 = 0LL;
      }
      v1 = (volatile signed __int32 *)AMLIIterateParentNext((__int64)v1);
    }
    while ( v1 );
    if ( v1 )
      AMLIDereferenceHandleEx((__int64)v1);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
    if ( v2 )
    {
      v5 = v2;
      v6 = ACPIBuildIssueNotifyInvalidateRelations;
      v4 = v2;
      goto LABEL_15;
    }
  }
  return 0LL;
}

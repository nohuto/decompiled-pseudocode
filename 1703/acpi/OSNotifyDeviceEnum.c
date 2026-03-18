/*
 * XREFs of OSNotifyDeviceEnum @ 0x1C005174C
 * Callers:
 *     NotifyHandler @ 0x1C0055070 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C00172D0 (ACPIDockIsDockDevice.c)
 *     AMLIIterateParentNext @ 0x1C0027690 (AMLIIterateParentNext.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00286D8 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C00453F4 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEnum(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  void (__fastcall *v6)(__int64, __int64); // rdx
  __int64 v7; // rdx
  KIRQL v8; // si
  __int64 v9; // rcx

  v1 = a1;
  v2 = 0LL;
  dword_1C0077574 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  byte_1C0077578 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    8,
    24,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    (char)a1,
    (__int64)&dword_1C0077574);
  if ( ACPIDockIsDockDevice() )
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
    v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    dword_1C00776F8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v1 + 2);
    do
    {
      if ( v2 )
        break;
      v9 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( v9 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( *(_DWORD *)(v9 + 16) != 1599293264 )
          v2 = 0LL;
      }
      v1 = (volatile signed __int32 *)AMLIIterateParentNext(v1);
    }
    while ( v1 );
    if ( v1 )
      AMLIDereferenceHandleEx(v1, v7);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
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

/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C0051F9C
 * Callers:
 *     NotifyHandler @ 0x1C0055C60 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C000CF70 (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     AMLIIterateParentNext @ 0x1C0028AFC (AMLIIterateParentNext.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00291E4 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0044DB8 (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x1C0052108 (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 *a1)
{
  int v2; // edx
  KIRQL v4; // si
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9

  dword_1C0079638 = *(_DWORD *)(*a1 + 40);
  byte_1C007963C = 0;
  WPP_RECORDER_SF_qs(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x16u,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    (char)a1,
    (const char *)&dword_1C0079638);
  if ( ACPIDockIsDockDevice(a1) )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      21,
      23,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids);
    return OSNotifyDeviceEject(a1);
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = *(_QWORD *)(*a1 + 104);
    if ( v5 && (*(_QWORD *)(v5 + 8) & 0x2000000000LL) != 0 && (unsigned int)(*(_DWORD *)(v5 + 320) - 2) > 1 )
      *(_BYTE *)(v5 + 185) = 0;
    v6 = 0LL;
    v7 = AMLIGetParent((__int64)a1);
    if ( v7 )
    {
      do
      {
        if ( v6 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)v7 + 104LL);
        if ( v8 )
        {
          v6 = *(_QWORD *)(*(_QWORD *)v7 + 104LL);
          if ( *(_DWORD *)(v8 + 16) != 1599293264 )
            v6 = 0LL;
        }
        v7 = AMLIIterateParentNext(v7);
      }
      while ( v7 );
      if ( v7 )
        AMLIDereferenceHandleEx(v7);
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
    if ( v6 )
      ACPIBuildSynchronizationRequestInternal(v6, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v6, v9, 1);
    return 0LL;
  }
}

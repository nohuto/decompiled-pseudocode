/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C005155C
 * Callers:
 *     NotifyHandler @ 0x1C0055070 (NotifyHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     AMLIGetParent @ 0x1C00127F8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C00172D0 (ACPIDockIsDockDevice.c)
 *     AMLIIterateParentNext @ 0x1C0027690 (AMLIIterateParentNext.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00286D8 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C00453F4 (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x1C00516C8 (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  KIRQL v5; // si
  __int64 v6; // rdx
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r9

  dword_1C0077574 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  v2 = dword_1C0077574;
  LOBYTE(v2) = 4;
  byte_1C0077578 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    8,
    22,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    a1,
    (__int64)&dword_1C0077574);
  if ( ACPIDockIsDockDevice() )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      21,
      23,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids);
    return OSNotifyDeviceEject(a1);
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v6 && (*(_QWORD *)(v6 + 8) & 0x2000000000LL) != 0 && (unsigned int)(*(_DWORD *)(v6 + 320) - 2) > 1 )
      *(_BYTE *)(v6 + 185) = 0;
    v7 = 0LL;
    v8 = (volatile signed __int32 *)AMLIGetParent(a1);
    if ( v8 )
    {
      do
      {
        if ( v7 )
          break;
        v10 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
        if ( v10 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
          if ( *(_DWORD *)(v10 + 16) != 1599293264 )
            v7 = 0LL;
        }
        v8 = (volatile signed __int32 *)AMLIIterateParentNext(v8);
      }
      while ( v8 );
      if ( v8 )
        AMLIDereferenceHandleEx(v8, v9);
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v7 )
      ACPIBuildSynchronizationRequestInternal(v7, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v7, v11, 1);
    return 0LL;
  }
}

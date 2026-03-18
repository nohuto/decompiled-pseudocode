/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C002EB9C
 * Callers:
 *     NotifyHandler @ 0x1C0035A50 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C00087E4 (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00117C0 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0012C5C (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x1C002ED08 (OSNotifyDeviceEject.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 *     AMLIIterateParentNext @ 0x1C0043E7C (AMLIIterateParentNext.c)
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
  __int64 v10; // r9

  dword_1C00678C0 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  v2 = dword_1C00678C0;
  LOBYTE(v2) = 4;
  byte_1C00678C4 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    8,
    22,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    a1,
    (__int64)&dword_1C00678C0);
  if ( ACPIDockIsDockDevice() )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      21,
      23,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids);
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
        v9 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
        if ( v9 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
          if ( *(_DWORD *)(v9 + 16) != 1599293264 )
            v7 = 0LL;
        }
        v8 = (volatile signed __int32 *)AMLIIterateParentNext(v8);
      }
      while ( v8 );
      if ( v8 )
        AMLIDereferenceHandleEx(v8);
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v7 )
      ACPIBuildSynchronizationRequestInternal(v7, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v7, v10, 1);
    return 0LL;
  }
}

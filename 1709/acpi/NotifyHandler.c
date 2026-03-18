/*
 * XREFs of NotifyHandler @ 0x1C0055C60
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C0054710 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     OSNotifyDeviceCheck @ 0x1C0051F9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0052108 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C005218C (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceWake @ 0x1C00522CC (OSNotifyDeviceWake.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0054DA4 (WPP_RECORDER_SF_DDD.c)
 *     DispatchNotification @ 0x1C0055A30 (DispatchNotification.c)
 */

__int64 __fastcall NotifyHandler(__int64 a1, int a2, __int64 *a3)
{
  __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // r8

  WPP_RECORDER_SF_DDD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0xAu,
    (__int64)&WPP_acb0b370a7c232efd340811dbc739035_Traceguids,
    (_DWORD)a3,
    a2,
    *(unsigned __int16 *)(*a3 + 66));
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        OSNotifyDeviceCheck(a3);
        break;
      case 2:
        OSNotifyDeviceWake(a3);
        break;
      case 3:
        OSNotifyDeviceEject((__int64)a3);
        break;
    }
  }
  else
  {
    OSNotifyDeviceEnum((volatile signed __int32 *)a3);
  }
  v5 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(*a3 + 104);
  if ( v7 && *(_DWORD *)(v7 + 16) == 1599293264 )
    v5 = v7 + 328;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  if ( v5 )
    DispatchNotification(v5 - 328, a2);
  return 0LL;
}

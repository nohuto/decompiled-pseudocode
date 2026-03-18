/*
 * XREFs of NotifyHandler @ 0x1C0035A50
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C0033650 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     OSNotifyDeviceCheck @ 0x1C002EB9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C002ED08 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C002ED8C (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceWake @ 0x1C002EECC (OSNotifyDeviceWake.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0033F14 (WPP_RECORDER_SF_DDD.c)
 *     DispatchNotification @ 0x1C0035820 (DispatchNotification.c)
 */

__int64 __fastcall NotifyHandler(__int64 a1, int a2, __int64 *a3)
{
  int v4; // esi
  __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v9 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_DDD(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    2,
    10,
    (__int64)&WPP_4b880bb8951430c9af1b6a6df9ba6007_Traceguids,
    (char)a3,
    v9,
    *(_WORD *)(*a3 + 66));
  if ( v4 )
  {
    switch ( v4 )
    {
      case 1:
        OSNotifyDeviceCheck((__int64)a3);
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
    DispatchNotification(v5 - 328, v4);
  return 0LL;
}

/*
 * XREFs of PiSendTargetDeviceRemoveCanceledNotification @ 0x1406D5448
 * Callers:
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14055BB28 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PipProcessQueryRemovalInKernelMode @ 0x14055BBFC (PipProcessQueryRemovalInKernelMode.c)
 * Callees:
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 */

__int64 __fastcall PiSendTargetDeviceRemoveCanceledNotification(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 result; // rax

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v5 = *(_QWORD **)(a1 + 8LL * (a2 - i - 1));
      if ( v5 )
        v6 = *(_QWORD *)(v5[39] + 40LL);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 300);
        result = (unsigned int)(v7 - 769);
        if ( (result & 0xFFFFFFEE) == 0 && v7 != 785 )
          continue;
      }
      result = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, v5, 0LL, 0LL);
    }
  }
  return result;
}

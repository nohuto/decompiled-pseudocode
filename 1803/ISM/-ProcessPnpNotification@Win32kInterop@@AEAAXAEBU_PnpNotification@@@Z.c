/*
 * XREFs of ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x180013FBC
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180014D40 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x180013EC8 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z.c)
 */

void __fastcall Win32kInterop::ProcessPnpNotification(Win32kInterop *this, const struct _PnpNotification *a2)
{
  int v2; // r8d

  if ( *((_DWORD *)a2 + 2) == 2 )
  {
    v2 = *(_DWORD *)a2;
    if ( ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) == 0 && v2 != 3 )
      Win32kInterop::ProcessDeviceArrival((__int64)Win32kInterop::s_pInterop, *((_DWORD *)a2 + 1), v2);
  }
  else if ( *((_DWORD *)a2 + 2) == 3 && ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) == 0 && *(_DWORD *)a2 != 3 )
  {
    Win32kInterop::ProcessDeviceRemoval(Win32kInterop::s_pInterop, *((_DWORD *)a2 + 1));
  }
}

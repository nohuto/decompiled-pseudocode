/*
 * XREFs of ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x18000F640
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180010200 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z @ 0x18000F46C (-ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x18000F578 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z.c)
 */

void __fastcall Win32kInterop::ProcessPnpNotification(Win32kInterop *this, const struct _PnpNotification *a2)
{
  Win32kInterop *v3; // rdi
  int v4; // edx
  int v5; // edx

  v3 = Win32kInterop::s_pInterop;
  if ( *((_DWORD *)a2 + 2) == 2 )
  {
    v4 = *(_DWORD *)a2;
    if ( v4 == 1
      || v4 == 4
      || v4 == 2 && (this = (Win32kInterop *)gdwDeviceFamily, ((1LL << gdwDeviceFamily) & 0x224A) == 0) )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
        McTemplateU0qqq((__int64)this, &MinInput_Win32kInterop_DeviceConnected, 15, *((_DWORD *)a2 + 1), v4);
      Win32kInterop::ProcessDeviceArrival((__int64)v3, *((_DWORD *)a2 + 1), *(_DWORD *)a2);
    }
  }
  else if ( *((_DWORD *)a2 + 2) == 3 )
  {
    v5 = *(_DWORD *)a2;
    if ( v5 == 1
      || v5 == 4
      || v5 == 2 && (this = (Win32kInterop *)gdwDeviceFamily, ((1LL << gdwDeviceFamily) & 0x224A) == 0) )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
        McTemplateU0qqq((__int64)this, &MinInput_Win32kInterop_DeviceDisconnected, 15, *((_DWORD *)a2 + 1), v5);
      Win32kInterop::ProcessDeviceRemoval(v3, *((_DWORD *)a2 + 1));
    }
  }
}

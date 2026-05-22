/*
 * XREFs of ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180010200
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x18000F640 (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 *     ?ProcessRawInputReport@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_DeviceRawInputReportNotification@@@Z @ 0x18000F720 (-ProcessRawInputReport@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_DeviceRawInputReportNot.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x18000F838 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x18000FA1C (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18000FBB0 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x180010034 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 */

__int64 __fastcall Win32kInterop::s_DeviceNotificationsCallback(struct _CLIENT_DEVICE_NOTIFICATION *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  const struct _PnpNotification *v9; // rdi
  unsigned __int64 i; // rbx

  v1 = *((_DWORD *)a1 + 1);
  if ( v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = (unsigned int)(v6 - 1);
            if ( (_DWORD)v7 )
            {
              if ( (_DWORD)v7 == 1 )
              {
                v8 = *((unsigned int *)a1 + 2);
                v9 = (const struct _PnpNotification *)*((_QWORD *)a1 + 2);
                for ( i = v8 / 0xC; i; --i )
                {
                  Win32kInterop::ProcessPnpNotification((Win32kInterop *)v8, v9);
                  v9 = (const struct _PnpNotification *)((char *)v9 + 12);
                }
              }
            }
            else
            {
              Win32kInterop::ProcessCursorPosMessage((__int64)a1, v7, (unsigned int *)a1 + 2);
            }
          }
          else
          {
            Win32kInterop::ProcessRawInputMessage((__int64)a1, *(_DWORD *)a1, (_DWORD *)a1 + 2);
          }
        }
        else
        {
          Win32kInterop::ProcessInterceptMessage((__int64)a1, *(_DWORD *)a1, (int *)a1 + 2);
        }
      }
      else
      {
        Win32kInterop::ProcessInputMessage((__int64)a1, *(_DWORD *)a1, (__int64)a1 + 8);
      }
    }
    else
    {
      Win32kInterop::ProcessRawInputReport((__int64)a1, *(_DWORD *)a1, (__int64)a1 + 8);
    }
  }
  else
  {
    Win32kInterop::ProcessPnpNotification(a1, (struct _CLIENT_DEVICE_NOTIFICATION *)((char *)a1 + 8));
  }
  return 1LL;
}

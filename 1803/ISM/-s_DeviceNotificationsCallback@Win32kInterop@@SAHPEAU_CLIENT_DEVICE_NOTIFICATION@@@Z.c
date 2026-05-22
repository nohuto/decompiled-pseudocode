/*
 * XREFs of ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180014D40
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x180013FBC (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x180014018 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x18001420C (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18001436C (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x180014AA8 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 */

__int64 __fastcall Win32kInterop::s_DeviceNotificationsCallback(struct _CLIENT_DEVICE_NOTIFICATION *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  const struct _PnpNotification *v8; // rdi
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
          v6 = (unsigned int)(v5 - 1);
          if ( (_DWORD)v6 )
          {
            if ( (_DWORD)v6 == 1 )
            {
              v7 = *((unsigned int *)a1 + 2);
              v8 = (const struct _PnpNotification *)*((_QWORD *)a1 + 2);
              for ( i = v7 / 0xC; i; --i )
              {
                Win32kInterop::ProcessPnpNotification((Win32kInterop *)v7, v8);
                v8 = (const struct _PnpNotification *)((char *)v8 + 12);
              }
            }
          }
          else
          {
            Win32kInterop::ProcessCursorPosMessage((__int64)a1, v6, (unsigned int *)a1 + 2);
          }
        }
        else
        {
          Win32kInterop::ProcessRawInputMessage((__int64)a1, *(_DWORD *)a1, (__int64)a1 + 8);
        }
      }
      else
      {
        Win32kInterop::ProcessInterceptMessage((__int64)a1, *(_DWORD *)a1, (__int64)a1 + 8);
      }
    }
    else
    {
      Win32kInterop::ProcessInputMessage((__int64)a1, *(_DWORD *)a1, (__int64)a1 + 8);
    }
  }
  else
  {
    Win32kInterop::ProcessPnpNotification(a1, (struct _CLIENT_DEVICE_NOTIFICATION *)((char *)a1 + 8));
  }
  return 1LL;
}

/*
 * XREFs of HUBFDO_PowerSettingCallback @ 0x1C000C040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBFDO_PowerSettingCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+28h] [rbp-70h]
  _DWORD v17[10]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  if ( (*((_DWORD *)Context + 10) & 0x4000000) == 0 )
    return (unsigned int)-1073741811;
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( ValueLength >= 4 && (unsigned int)*Value <= 1 )
    {
      v9 = *((_DWORD *)Context + 10) & 0x8000000;
      if ( *Value == 1 )
      {
        if ( v9 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            *((_QWORD *)Context + 2),
            0LL,
            5078LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
          _InterlockedAnd((volatile signed __int32 *)Context + 10, 0xF7FFFFFF);
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 314),
            4u,
            3u,
            0x32u,
            (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids);
        }
      }
      else if ( !v9 )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 314),
          4u,
          3u,
          0x33u,
          (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids);
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *((_QWORD *)Context + 2),
               0LL,
               0LL,
               5090,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v4 < 0 )
        {
          v4 = 0;
          LODWORD(v14) = 0;
          WPP_RECORDER_SF_d(
            *((_QWORD *)Context + 314),
            3u,
            3u,
            0x34u,
            (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids,
            v14);
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)Context + 10, 0x8000000u);
        }
      }
      return (unsigned int)v4;
    }
    return (unsigned int)-1073741811;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT, 0x10uLL) != 16 )
    return (unsigned int)-1073741811;
  if ( *Value != *((_DWORD *)Context + 642) )
  {
    v15 = *Value;
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 314),
      4u,
      3u,
      0x35u,
      (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids,
      v15);
    *((_DWORD *)Context + 642) = *Value;
    memset(v17, 0, 0x24uLL);
    v10 = *Value;
    v17[7] = 0;
    v17[3] = v10;
    v17[6] = 2;
    v17[8] = 2;
    v17[1] = 2;
    v17[4] = 2;
    v17[5] = 2;
    v17[0] = 36;
    v17[2] = 3;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, Context);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v11,
            v17);
    v4 = v12;
    if ( v12 < 0 )
    {
      LODWORD(v16) = v12;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 314),
        3u,
        3u,
        0x36u,
        (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids,
        v16);
      return 0;
    }
  }
  return (unsigned int)v4;
}

/*
 * XREFs of HUBREG_UpdateSqmFlags @ 0x1C00725C0
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C0017780 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A170 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall HUBREG_UpdateSqmFlags(__int64 a1)
{
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v4; // rax
  int result; // eax
  unsigned __int16 v6; // r9
  int v7; // eax
  int v8; // edi
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // [rsp+28h] [rbp-28h]
  int v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v15 = 0LL;
  v3 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632);
  v14 = 0LL;
  v4 = v3(WdfDriverGlobals, v2);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             v4,
             1LL,
             131103LL,
             0LL,
             &v15);
  if ( result < 0 )
  {
    v6 = 116;
LABEL_29:
    v11 = *(_QWORD *)(a1 + 8);
    goto LABEL_30;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
             WdfDriverGlobals,
             v15,
             L"\b\n",
             131103LL,
             0,
             0LL,
             0LL,
             &v14);
  if ( result < 0 )
  {
    v6 = 117;
    goto LABEL_29;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, int *))(WdfFunctions_01015 + 1920))(
         WdfDriverGlobals,
         v14,
         L"\"$",
         &v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = v13;
  }
  else
  {
    if ( v7 != -1073741772 )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C005B110);
      LODWORD(v12) = v8;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(v9 + 64),
                 2u,
                 2u,
                 0x76u,
                 (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids,
                 v12);
      goto LABEL_31;
    }
    v10 = 0;
  }
  v13 = *(_DWORD *)(a1 + 1640) | 8 | v10;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *))(WdfFunctions_01015 + 1968))(
             WdfDriverGlobals,
             v14,
             L"\"$");
  v11 = *(_QWORD *)(a1 + 8);
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD))(WdfFunctions_01015 + 1968))(
               WdfDriverGlobals,
               v14,
               L"(*",
               *(unsigned int *)(v11 + 216));
    if ( result >= 0 )
    {
      result = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 2592));
      if ( !result )
        goto LABEL_31;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                 WdfDriverGlobals,
                 v14,
                 L"24",
                 4LL,
                 4,
                 a1 + 2608);
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                   WdfDriverGlobals,
                   v14,
                   L"24",
                   4LL,
                   4,
                   a1 + 2612);
        if ( result >= 0 )
        {
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                     WdfDriverGlobals,
                     v14,
                     L"24",
                     4LL,
                     4,
                     a1 + 2616);
          if ( result >= 0 )
          {
            result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                       WdfDriverGlobals,
                       v14,
                       L"24",
                       4LL,
                       4,
                       a1 + 2620);
            if ( result >= 0 )
            {
              result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                         WdfDriverGlobals,
                         v14,
                         L"24",
                         4LL,
                         4,
                         a1 + 2624);
              if ( result >= 0 )
              {
                result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                           WdfDriverGlobals,
                           v14,
                           L"24",
                           4LL,
                           4,
                           a1 + 2628);
                if ( result >= 0 )
                {
                  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int, __int64))(WdfFunctions_01015 + 1928))(
                             WdfDriverGlobals,
                             v14,
                             L"24",
                             4LL,
                             4,
                             a1 + 2632);
                  if ( result >= 0 )
                    goto LABEL_31;
                  v6 = 127;
                }
                else
                {
                  v6 = 126;
                }
              }
              else
              {
                v6 = 125;
              }
            }
            else
            {
              v6 = 124;
            }
          }
          else
          {
            v6 = 123;
          }
        }
        else
        {
          v6 = 122;
        }
      }
      else
      {
        v6 = 121;
      }
    }
    else
    {
      v6 = 120;
    }
    goto LABEL_29;
  }
  v6 = 119;
LABEL_30:
  LODWORD(v12) = result;
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(v11 + 1432),
             2u,
             5u,
             v6,
             (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids,
             v12);
LABEL_31:
  if ( v14 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v15 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}

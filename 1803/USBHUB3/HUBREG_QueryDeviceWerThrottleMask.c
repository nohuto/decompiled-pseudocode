/*
 * XREFs of HUBREG_QueryDeviceWerThrottleMask @ 0x1C0072B1C
 * Callers:
 *     WER_UpdateThrottlePolicy @ 0x1C0035C4C (WER_UpdateThrottlePolicy.c)
 *     WER_CreateReport @ 0x1C0035FAC (WER_CreateReport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryDeviceWerThrottleMask(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v10[0] = 0LL;
  v12 = 0LL;
  v11 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         a1,
         1LL,
         131103LL,
         0LL,
         v10);
  if ( v3 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, int, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v10[0],
           &g_DeviceWerKey,
           131103LL,
           1,
           0LL,
           0LL,
           &v12);
    if ( v4 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, unsigned int *))(WdfFunctions_01015 + 1920))(
             WdfDriverGlobals,
             v12,
             &g_ThrottleMask,
             &v11);
      if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741772 )
      {
        v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               WdfDriverGlobals->Driver,
               off_1C005B110);
        LODWORD(v9) = v5;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 64),
          2u,
          2u,
          0x82u,
          (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids,
          v9);
      }
    }
    else
    {
      LODWORD(v9) = v4;
      WPP_RECORDER_SF_d(a2, 2u, 5u, 0x81u, (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids, v9);
    }
  }
  else
  {
    LODWORD(v8) = v3;
    WPP_RECORDER_SF_d(a2, 2u, 5u, 0x80u, (__int64)&WPP_cdad0992e1bf302d72a6f37b218e7fd9_Traceguids, v8);
  }
  if ( v12 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v10[0] )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v11;
}

/*
 * XREFs of Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C000A830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1C000A56C (Controller_TranslateFrameNumberToQpcValue.c)
 *     WPP_RECORDER_SF_II @ 0x1C000DA18 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E8FC (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C000EA20 (WPP_RECORDER_SF_qqqd.c)
 */

__int64 __fastcall Controller_UcxEvtGetFrameNumberAndQpcForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  LARGE_INTEGER *v9; // rdi
  int v10; // edx
  int v11; // r8d
  char v12; // r12
  int v13; // r9d
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // ebx
  int v18; // edx
  LARGE_INTEGER *v19; // rcx
  int v21; // [rsp+20h] [rbp-68h]
  __int64 *v22; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER *v23; // [rsp+A8h] [rbp+20h] BYREF

  LOBYTE(v7) = 0;
  LOBYTE(v8) = 0;
  v9 = (LARGE_INTEGER *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                          WdfDriverGlobals,
                          a1,
                          off_1C004B430);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2240))(WdfDriverGlobals, a2);
  if ( a4 < 0x3C )
  {
    v13 = 289;
LABEL_3:
    WPP_RECORDER_SF_II(v9[9].QuadPart, v10, v11, v13);
LABEL_4:
    v17 = -1073741811;
    goto LABEL_23;
  }
  v21 = 0;
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v22);
  if ( v17 >= 0 )
  {
    if ( !*v22 )
    {
      WPP_RECORDER_SF_(v9[9].QuadPart, 2u, 4u, 0x122u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
      goto LABEL_4;
    }
    if ( v12 == 1 )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
      if ( v8 != *v22 )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_qq(
          v9[9].QuadPart,
          v18,
          4,
          291,
          (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
          *v22,
          v8);
        goto LABEL_4;
      }
    }
    else
    {
      v8 = *v22;
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v8,
           off_1C004B3E0);
    if ( *(_BYTE *)(v7 + 40) )
    {
      if ( a3 < 0x3C )
      {
        v13 = 293;
        goto LABEL_3;
      }
      v21 = 0;
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, LARGE_INTEGER **))(WdfFunctions_01023 + 2160))(
              WdfDriverGlobals,
              a2,
              a3,
              &v23);
      if ( v17 >= 0 )
      {
        if ( v9[41].LowPart == 1 )
        {
          ++*(_DWORD *)(v7 + 44);
          v19 = v23;
          if ( v23[1].LowPart || v23[1].HighPart )
          {
            ++*(_DWORD *)(v7 + 48);
            v19 = v23;
          }
          v19[4].HighPart = v9[71].LowPart;
          v23[3] = v9[84];
          v17 = Controller_TranslateFrameNumberToQpcValue((__int64)v9, v23);
        }
        else
        {
          v17 = -1073741436;
        }
      }
    }
    else
    {
      v17 = -1073741811;
      WPP_RECORDER_SF_q(v9[9].QuadPart, 2u, 4u, 0x124u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    }
  }
LABEL_23:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqd(v9[9].QuadPart, v14, v15, v16, v21, a2, v8, v7, v17);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v17,
           a3);
}

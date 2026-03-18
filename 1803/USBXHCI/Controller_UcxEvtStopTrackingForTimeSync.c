/*
 * XREFs of Controller_UcxEvtStopTrackingForTimeSync @ 0x1C000B690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0009B90 (Controller_StopTimeTrackingForHandle.c)
 *     WPP_RECORDER_SF_II @ 0x1C000DA18 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C000E0D0 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E8FC (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall Controller_UcxEvtStopTrackingForTimeSync(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  char v8; // bp
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  int v13; // edx
  int v14; // ebx
  int v16; // edx
  int v17; // eax
  __int64 *v18; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v7) = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2240))(WdfDriverGlobals);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B430);
  v12 = v9;
  if ( a4 < 8 )
  {
    WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 279);
    v14 = -1073741811;
    goto LABEL_3;
  }
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v18,
          0LL);
  if ( v14 >= 0 )
  {
    if ( !*v18 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), 2u, 4u, 0x118u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
LABEL_9:
      v14 = -1073741811;
      goto LABEL_3;
    }
    if ( v8 == 1 )
    {
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(WdfDriverGlobals, a2);
      if ( v7 != *v18 )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_qq(
          *(_QWORD *)(v12 + 72),
          v16,
          4,
          281,
          (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
          *v18,
          v7);
        goto LABEL_9;
      }
    }
    else
    {
      v7 = *v18;
    }
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v7,
                      off_1C004B3E0)
                  + 40) )
    {
      if ( *(_DWORD *)(v12 + 328) == 1 )
      {
        v17 = Controller_StopTimeTrackingForHandle(v12, v7, 1u);
        v14 = v17;
        if ( v17 < 0 )
        {
          WPP_RECORDER_SF_qd(
            *(_QWORD *)(v12 + 72),
            2u,
            4u,
            0x11Bu,
            (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
            v7,
            v17);
          if ( !v8 )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1664))(WdfDriverGlobals, v7);
        }
      }
      else
      {
        v14 = -1073741436;
      }
    }
    else
    {
      v14 = -1073741811;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v12 + 72),
        2u,
        4u,
        0x11Au,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        v7);
    }
  }
LABEL_3:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(v12 + 72),
      v13,
      4,
      284,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      v14,
      v7,
      v8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v14);
}

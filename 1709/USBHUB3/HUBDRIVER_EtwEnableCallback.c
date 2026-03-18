/*
 * XREFs of HUBDRIVER_EtwEnableCallback @ 0x1C0065EDC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001090 (McGenControlCallbackV2.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00012B0 (McTemplateK0.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     HUBDRIVER_EtwRundownHub @ 0x1C00654B0 (HUBDRIVER_EtwRundownHub.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C006592C (HUBDRIVER_EtwRundownUsbDevice.c)
 */

__int64 __fastcall HUBDRIVER_EtwEnableCallback(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 i; // rbx
  __int64 j; // rax
  __int64 v7; // rbp
  __int64 v8; // rbx
  GUID ActivityId; // [rsp+30h] [rbp-28h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 32),
    0LL);
  if ( a2 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 4), 0x1000u);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      McTemplateK0(v4, &USBHUB3_ETW_EVENT_RUNDOWN_START, &ActivityId);
    for ( i = *(_QWORD *)(v3 + 16); ; i = *(_QWORD *)(v8 + 2424) )
    {
      v8 = i - 2424;
      if ( v3 + 16 == v8 + 2424 )
        break;
      HUBDRIVER_EtwRundownHub(&ActivityId, v8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
        WdfDriverGlobals,
        *(_QWORD *)(v8 + 16));
      for ( j = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v8 + 16),
                  0LL,
                  1LL);
            ;
            j = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v8 + 16),
                  v7,
                  1LL) )
      {
        v7 = j;
        if ( !j )
          break;
        HUBDRIVER_EtwRundownUsbDevice(&ActivityId, j);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
        WdfDriverGlobals,
        *(_QWORD *)(v8 + 16));
    }
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      McTemplateK0(v4, &USBHUB3_ETW_EVENT_RUNDOWN_COMPLETE, &ActivityId);
  }
  else if ( !a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 4), 0xFFFFEFFF);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(v3 + 32));
}

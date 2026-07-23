/*
 * XREFs of RtlSetLastWin32Error @ 0x18005D580
 * Callers:
 *     sub_1800017D8 @ 0x1800017D8 (sub_1800017D8.c)
 *     sub_18000184C @ 0x18000184C (sub_18000184C.c)
 *     sub_1800018C4 @ 0x1800018C4 (sub_1800018C4.c)
 *     sub_180002A00 @ 0x180002A00 (sub_180002A00.c)
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 *     sub_180002DE4 @ 0x180002DE4 (sub_180002DE4.c)
 *     sub_180002E64 @ 0x180002E64 (sub_180002E64.c)
 *     sub_180003048 @ 0x180003048 (sub_180003048.c)
 *     sub_1800030E8 @ 0x1800030E8 (sub_1800030E8.c)
 *     sub_1800031C4 @ 0x1800031C4 (sub_1800031C4.c)
 *     sub_180003454 @ 0x180003454 (sub_180003454.c)
 *     sub_1800034D4 @ 0x1800034D4 (sub_1800034D4.c)
 *     sub_18000353C @ 0x18000353C (sub_18000353C.c)
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 *     sub_180019E6C @ 0x180019E6C (sub_180019E6C.c)
 *     EtwRegisterTraceGuidsW @ 0x18001A200 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x18001B3E0 (EtwNotificationRegister.c)
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18005D560 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     sub_18005D768 @ 0x18005D768 (sub_18005D768.c)
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 *     sub_18005F868 @ 0x18005F868 (sub_18005F868.c)
 *     EtwUnregisterTraceGuids @ 0x18005FCB0 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 *     EtwEventActivityIdControl @ 0x180070C40 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180071F50 (RtlQueryUnbiasedInterruptTime.c)
 *     sub_18008354C @ 0x18008354C (sub_18008354C.c)
 *     EtwGetTraceLoggerHandle @ 0x180088330 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableFlags @ 0x180088E30 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceEnableLevel @ 0x180088E70 (EtwGetTraceEnableLevel.c)
 *     sub_18008A97C @ 0x18008A97C (sub_18008A97C.c)
 *     EtwRegisterSecurityProvider @ 0x18008F730 (EtwRegisterSecurityProvider.c)
 *     EtwCreateTraceInstanceId @ 0x1801042D0 (EtwCreateTraceInstanceId.c)
 *     sub_180104668 @ 0x180104668 (sub_180104668.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 *     sub_180109360 @ 0x180109360 (sub_180109360.c)
 *     sub_180109410 @ 0x180109410 (sub_180109410.c)
 *     sub_180109490 @ 0x180109490 (sub_180109490.c)
 *     sub_180109904 @ 0x180109904 (sub_180109904.c)
 *     sub_180109A28 @ 0x180109A28 (sub_180109A28.c)
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 *     sub_180109B30 @ 0x180109B30 (sub_180109B30.c)
 *     sub_180109C90 @ 0x180109C90 (sub_180109C90.c)
 *     sub_18010BD24 @ 0x18010BD24 (sub_18010BD24.c)
 *     sub_18010BE1C @ 0x18010BE1C (sub_18010BE1C.c)
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C198 @ 0x18010C198 (sub_18010C198.c)
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 *     sub_18010C2FC @ 0x18010C2FC (sub_18010C2FC.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 *     sub_18010C634 @ 0x18010C634 (sub_18010C634.c)
 *     sub_18010C758 @ 0x18010C758 (sub_18010C758.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 *     sub_18010CAF8 @ 0x18010CAF8 (sub_18010CAF8.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 *     sub_18010CFA0 @ 0x18010CFA0 (sub_18010CFA0.c)
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 *     sub_18010D2E4 @ 0x18010D2E4 (sub_18010D2E4.c)
 *     sub_18010D3AC @ 0x18010D3AC (sub_18010D3AC.c)
 *     sub_18010D418 @ 0x18010D418 (sub_18010D418.c)
 *     sub_18010D4D4 @ 0x18010D4D4 (sub_18010D4D4.c)
 *     sub_18010D57C @ 0x18010D57C (sub_18010D57C.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 *     sub_18010D69C @ 0x18010D69C (sub_18010D69C.c)
 *     sub_18010DE7C @ 0x18010DE7C (sub_18010DE7C.c)
 *     sub_18010DFF0 @ 0x18010DFF0 (sub_18010DFF0.c)
 *     sub_18010E088 @ 0x18010E088 (sub_18010E088.c)
 *     sub_18010E1E0 @ 0x18010E1E0 (sub_18010E1E0.c)
 *     sub_18010E330 @ 0x18010E330 (sub_18010E330.c)
 *     sub_18010E4A8 @ 0x18010E4A8 (sub_18010E4A8.c)
 * Callees:
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax
  bool v2; // zf
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  LONG v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = Win32Error;
  v1 = NtCurrentTeb();
  if ( dword_18015C77C && Win32Error == dword_18015C77C )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v2 = byte_18015C3E1 == 0;
    v1->LastErrorValue = Win32Error;
    if ( !v2 )
    {
      if ( v4 )
      {
        v3[0] = &v4;
        v3[1] = 4LL;
        EtwEventWrite(qword_180159A20, &stru_1801246C0, 1u, (PEVENT_DATA_DESCRIPTOR)v3);
      }
    }
  }
}

/*
 * XREFs of PopDiagTraceFxDeviceAccounting @ 0x140245CDC
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x14023F518 (PopFxStopDeviceAccounting.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceAccounting(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-30h]
  int v5; // [rsp+58h] [rbp-28h]
  int v6; // [rsp+5Ch] [rbp-24h]
  __int64 *v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+6Ch] [rbp-14h]
  __int64 v10; // [rsp+90h] [rbp+10h] BYREF
  __int64 v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = a2;
  v10 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_ACCOUNTING) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v5 = 8;
      v4 = &v10;
      v8 = 8;
      v7 = &v11;
      UserData.Size = 1;
      EtwWriteEx(v2, &POP_ETW_EVENT_DEVICE_ACCOUNTING, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}

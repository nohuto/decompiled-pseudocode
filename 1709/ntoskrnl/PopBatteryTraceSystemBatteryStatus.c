/*
 * XREFs of PopBatteryTraceSystemBatteryStatus @ 0x140146E2C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEtwCallback @ 0x1406FE3A0 (PopBatteryEtwCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTraceSystemBatteryStatus(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v3; // rdi
  int v5; // [rsp+40h] [rbp+7h] BYREF
  __int64 v6; // [rsp+44h] [rbp+Bh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  char *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  v1 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  v2 = (const EVENT_DESCRIPTOR *)&BATTERY_EVT_SYSTEM_BATTERY_STATUS_CHANGE;
  if ( a1 )
    v2 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  if ( PopBatteryEtwRegistered )
  {
    v3 = PopBatteryEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PopBatteryEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      if ( dword_140365914 )
      {
        v6 = xmmword_140365940;
        v5 = 1;
      }
      else
      {
        v5 = 0;
        v6 = 0LL;
      }
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      v8 = &v6;
      v9 = 4;
      v11 = (char *)&v6 + 4;
      v12 = 4;
      LOBYTE(v1) = EtwWriteEx(v3, v2, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}

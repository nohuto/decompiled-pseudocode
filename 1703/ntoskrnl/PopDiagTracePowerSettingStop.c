/*
 * XREFs of PopDiagTracePowerSettingStop @ 0x1404C5230
 * Callers:
 *     PopCallPowerSettingCallback @ 0x1404C5114 (PopCallPowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerSettingStop(__int64 a1, __int64 a2)
{
  REGHANDLE v3; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = a1;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 8;
      v5 = a2;
      v6 = 16;
      EtwWrite(v3, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_STOP, 0LL, 2u, &UserData);
    }
  }
}

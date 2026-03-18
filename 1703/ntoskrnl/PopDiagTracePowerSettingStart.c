/*
 * XREFs of PopDiagTracePowerSettingStart @ 0x1404C52E0
 * Callers:
 *     PopCallPowerSettingCallback @ 0x1404C5114 (PopCallPowerSettingCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerSettingStart(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v8; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-19h] BYREF
  __int64 v11; // [rsp+48h] [rbp-9h]
  int v12; // [rsp+50h] [rbp-1h]
  int v13; // [rsp+54h] [rbp+3h]
  int *v14; // [rsp+58h] [rbp+7h]
  int v15; // [rsp+60h] [rbp+Fh]
  int v16; // [rsp+64h] [rbp+13h]
  __int64 v17; // [rsp+68h] [rbp+17h]
  int v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+74h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  __int64 v21; // [rsp+B8h] [rbp+67h] BYREF
  int v22; // [rsp+C8h] [rbp+77h] BYREF

  v4 = &retaddr;
  v22 = a3;
  v21 = a1;
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 8;
      v14 = &v22;
      v11 = a2;
      v12 = 16;
      v15 = 4;
      v17 = a4;
      v18 = a3;
      LOBYTE(v4) = EtwWrite(v8, &POP_ETW_EVENT_POWER_SETTING_CALLBACK_START, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}

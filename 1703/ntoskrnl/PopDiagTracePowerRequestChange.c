/*
 * XREFs of PopDiagTracePowerRequestChange @ 0x140072404
 * Callers:
 *     PoSetPowerRequestInternal @ 0x1400722B0 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x140072C50 (PoClearPowerRequestInternal.c)
 *     PopClearSpecialRequest @ 0x1406C57EC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1406C5970 (PopSetSpecialRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerRequestChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  __int64 v6; // [rsp+58h] [rbp-29h]
  int v7; // [rsp+60h] [rbp-21h]
  int v8; // [rsp+64h] [rbp-1Dh]
  __int64 v9; // [rsp+68h] [rbp-19h]
  int v10; // [rsp+70h] [rbp-11h]
  int v11; // [rsp+74h] [rbp-Dh]
  __int64 v12; // [rsp+78h] [rbp-9h]
  int v13; // [rsp+80h] [rbp-1h]
  int v14; // [rsp+84h] [rbp+3h]
  __int64 v15; // [rsp+88h] [rbp+7h]
  int v16; // [rsp+90h] [rbp+Fh]
  int v17; // [rsp+94h] [rbp+13h]
  __int64 v18; // [rsp+98h] [rbp+17h]
  int v19; // [rsp+A0h] [rbp+1Fh]
  int v20; // [rsp+A4h] [rbp+23h]
  __int64 v21; // [rsp+A8h] [rbp+27h]
  int v22; // [rsp+B0h] [rbp+2Fh]
  int v23; // [rsp+B4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+E8h] [rbp+67h] BYREF

  v1 = &retaddr;
  v25 = a1;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CHANGE_POWER_REQUEST);
    if ( (_BYTE)v1 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      v6 = a1 + 36;
      v9 = a1 + 32;
      v12 = a1 + 40;
      v15 = a1 + 44;
      v18 = a1 + 48;
      v21 = a1 + 52;
      v7 = 4;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      UserData.Size = 8;
      LOBYTE(v1) = EtwWriteEx(v3, &POP_ETW_EVENT_CHANGE_POWER_REQUEST, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v1;
}

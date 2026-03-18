/*
 * XREFs of PopDiagTraceCsDeepSleepWatchdog @ 0x1402305C8
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x1406D4D0C (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDeepSleepWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6)
{
  _UNKNOWN **v6; // rax
  REGHANDLE v8; // rbx
  int v10; // [rsp+48h] [rbp-59h] BYREF
  int v11; // [rsp+4Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  int *v13; // [rsp+68h] [rbp-39h]
  int v14; // [rsp+70h] [rbp-31h]
  int v15; // [rsp+74h] [rbp-2Dh]
  int *v16; // [rsp+78h] [rbp-29h]
  int v17; // [rsp+80h] [rbp-21h]
  int v18; // [rsp+84h] [rbp-1Dh]
  int *v19; // [rsp+88h] [rbp-19h]
  int v20; // [rsp+90h] [rbp-11h]
  int v21; // [rsp+94h] [rbp-Dh]
  char *v22; // [rsp+98h] [rbp-9h]
  int v23; // [rsp+A0h] [rbp-1h]
  int v24; // [rsp+A4h] [rbp+3h]
  int *v25; // [rsp+A8h] [rbp+7h]
  int v26; // [rsp+B0h] [rbp+Fh]
  int v27; // [rsp+B4h] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+4Fh] BYREF
  int v29; // [rsp+F8h] [rbp+57h] BYREF
  int v30; // [rsp+100h] [rbp+5Fh] BYREF
  int v31; // [rsp+108h] [rbp+67h] BYREF

  v6 = &retaddr;
  v31 = a3;
  v30 = a2;
  v29 = a1;
  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v10 = a4;
      UserData.Ptr = (ULONGLONG)&v29;
      v13 = &v30;
      v16 = &v31;
      v19 = &v10;
      v22 = &a5;
      v11 = a6;
      v25 = &v11;
      UserData.Size = 4;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v26 = 4;
      v23 = 1;
      LOBYTE(v6) = EtwWriteEx(v8, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}

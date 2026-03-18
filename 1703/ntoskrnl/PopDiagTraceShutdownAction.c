/*
 * XREFs of PopDiagTraceShutdownAction @ 0x140232170
 * Callers:
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceShutdownAction(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v6; // rbx
  int v8; // [rsp+48h] [rbp+7h] BYREF
  int v9; // [rsp+4Ch] [rbp+Bh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  int *v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+6Ch] [rbp+2Bh]
  int *v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+7Ch] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v18; // [rsp+B0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v18 = a2;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SHUTDOWN_ACTION);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      v11 = &v18;
      v12 = 4;
      v14 = &v9;
      v15 = 4;
      v8 = a1;
      v9 = a3;
      LOBYTE(v3) = EtwWriteEx(v6, &POP_ETW_EVENT_SHUTDOWN_ACTION, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}

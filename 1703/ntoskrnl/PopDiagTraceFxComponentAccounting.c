/*
 * XREFs of PopDiagTraceFxComponentAccounting @ 0x1406CD338
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x14022C150 (PopFxStopDeviceAccounting.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentAccounting(__int64 a1, int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+7h]
  int v8; // [rsp+50h] [rbp+Fh]
  int v9; // [rsp+54h] [rbp+13h]
  int *v10; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+64h] [rbp+23h]
  __int64 *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int64 v17; // [rsp+A8h] [rbp+67h] BYREF
  int v18; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+B8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_ACCOUNTING);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v7 = &v17;
      v10 = &v18;
      v8 = 8;
      v13 = &v19;
      v14 = 8;
      UserData.Size = 1;
      v11 = 4;
      LOBYTE(v3) = EtwWrite(v4, &POP_ETW_EVENT_COMPONENT_ACCOUNTING, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}

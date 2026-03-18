/*
 * XREFs of PopTraceStandbyConnectivityUpdate @ 0x1405D0DC0
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1405D0C70 (PopNetEvaluationWorkerCallback.c)
 *     PopNetInitialize @ 0x14080C59C (PopNetInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopTraceStandbyConnectivityUpdate(int a1, int a2)
{
  _UNKNOWN **v2; // rax
  int v3; // r9d
  int v4; // r10d
  REGHANDLE v5; // rbx
  int v7; // [rsp+38h] [rbp-39h] BYREF
  int v8; // [rsp+3Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-31h] BYREF
  int *v10; // [rsp+50h] [rbp-21h]
  int v11; // [rsp+58h] [rbp-19h]
  int v12; // [rsp+5Ch] [rbp-15h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  int *v14; // [rsp+88h] [rbp+17h]
  int v15; // [rsp+90h] [rbp+1Fh]
  int v16; // [rsp+94h] [rbp+23h]
  int *v17; // [rsp+98h] [rbp+27h]
  int v18; // [rsp+A0h] [rbp+2Fh]
  int v19; // [rsp+A4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v21; // [rsp+D8h] [rbp+67h] BYREF
  int v22; // [rsp+E0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v22 = a2;
  v21 = a1;
  if ( hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v2) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v7;
      v17 = &v8;
      v7 = v4;
      v8 = v3;
      v15 = 4;
      v18 = 4;
      LOBYTE(v2) = TlgWrite(&hProvider, &unk_1402AD2EF, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 4;
      v10 = &v22;
      v11 = 4;
      LOBYTE(v2) = EtwWrite(v5, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE, 0LL, 2u, &UserData);
    }
  }
  return (char)v2;
}

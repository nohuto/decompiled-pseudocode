/*
 * XREFs of PopTraceBackgroundActivityPolicyUpdate @ 0x1406CEC10
 * Callers:
 *     PopBackgroundActivityPolicyCallback @ 0x14022A280 (PopBackgroundActivityPolicyCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopTraceBackgroundActivityPolicyUpdate(int a1)
{
  _UNKNOWN **v1; // rax
  int v2; // r9d
  int v3; // r10d
  REGHANDLE v4; // rbx
  int v6; // [rsp+38h] [rbp-49h] BYREF
  int v7; // [rsp+3Ch] [rbp-45h] BYREF
  int v8; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  int *v10; // [rsp+58h] [rbp-29h]
  int v11; // [rsp+60h] [rbp-21h]
  int v12; // [rsp+64h] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-9h] BYREF
  int *v14; // [rsp+98h] [rbp+17h]
  int v15; // [rsp+A0h] [rbp+1Fh]
  int v16; // [rsp+A4h] [rbp+23h]
  int *v17; // [rsp+A8h] [rbp+27h]
  int v18; // [rsp+B0h] [rbp+2Fh]
  int v19; // [rsp+B4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  int v21; // [rsp+E8h] [rbp+67h] BYREF

  v1 = &retaddr;
  v21 = a1;
  v8 = PopBackgroundActivityPolicy;
  if ( hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v6;
      v17 = &v7;
      v6 = v2;
      v7 = v3;
      v15 = 4;
      v18 = 4;
      LOBYTE(v1) = TlgWrite(&hProvider, &unk_1402AD32A, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_BACKGROUND_ACTIVITY_POLICY_UPDATE);
    if ( (_BYTE)v1 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 4;
      v10 = &v8;
      v11 = 4;
      LOBYTE(v1) = EtwWrite(v4, &POP_ETW_EVENT_BACKGROUND_ACTIVITY_POLICY_UPDATE, 0LL, 2u, &UserData);
    }
  }
  return (char)v1;
}

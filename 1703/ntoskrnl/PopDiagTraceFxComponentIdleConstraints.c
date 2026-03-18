/*
 * XREFs of PopDiagTraceFxComponentIdleConstraints @ 0x140231260
 * Callers:
 *     PopPluginRequestComponentIdleConstraints @ 0x14022CC1C (PopPluginRequestComponentIdleConstraints.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentIdleConstraints(__int64 a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v7; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  int *v10; // [rsp+58h] [rbp-9h]
  int v11; // [rsp+60h] [rbp-1h]
  int v12; // [rsp+64h] [rbp+3h]
  int *v13; // [rsp+68h] [rbp+7h]
  int v14; // [rsp+70h] [rbp+Fh]
  int v15; // [rsp+74h] [rbp+13h]
  __int64 v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  __int64 v20; // [rsp+C8h] [rbp+67h] BYREF
  int v21; // [rsp+D0h] [rbp+6Fh] BYREF
  int v22; // [rsp+E0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v22 = a4;
  v21 = a2;
  v20 = a1;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_CONSTRAINTS);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v20;
      v11 = 4;
      v10 = &v21;
      v13 = &v22;
      v17 = 4 * a4;
      v14 = 4;
      UserData.Size = 8;
      v16 = a3;
      LOBYTE(v4) = EtwWriteEx(v7, &POP_ETW_EVENT_COMPONENT_IDLE_CONSTRAINTS, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}

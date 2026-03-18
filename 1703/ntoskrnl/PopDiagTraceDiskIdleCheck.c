/*
 * XREFs of PopDiagTraceDiskIdleCheck @ 0x140230E78
 * Callers:
 *     PopScanIdleList @ 0x140070F24 (PopScanIdleList.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDiskIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  int *v8; // [rsp+58h] [rbp-9h]
  int v9; // [rsp+60h] [rbp-1h]
  int v10; // [rsp+64h] [rbp+3h]
  int *v11; // [rsp+68h] [rbp+7h]
  int v12; // [rsp+70h] [rbp+Fh]
  int v13; // [rsp+74h] [rbp+13h]
  __int64 v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+84h] [rbp+23h]
  __int64 v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  int v21; // [rsp+D0h] [rbp+6Fh] BYREF
  int v22; // [rsp+D8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v22 = a3;
  v21 = a2;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DISK_IDLE_CHECK);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = a1 + 24;
      v8 = &v21;
      v11 = &v22;
      v14 = a1 + 88;
      v17 = a1 + 92;
      v9 = 4;
      v12 = 4;
      v15 = 4;
      v18 = 4;
      UserData.Size = 8;
      LOBYTE(v3) = EtwWriteEx(v5, &POP_ETW_EVENT_DISK_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v3;
}

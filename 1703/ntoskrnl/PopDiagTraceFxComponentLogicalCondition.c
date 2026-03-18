/*
 * XREFs of PopDiagTraceFxComponentLogicalCondition @ 0x140069C1C
 * Callers:
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopFxIdleWorkerTail @ 0x140069A78 (PopFxIdleWorkerTail.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentLogicalCondition(__int64 a1, int a2, unsigned __int8 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  int v7; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  int *v9; // [rsp+60h] [rbp+1Fh]
  int v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+6Ch] [rbp+2Bh]
  int *v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+7Ch] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int64 v16; // [rsp+A8h] [rbp+67h] BYREF
  int v17; // [rsp+B0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v17 = a2;
  v16 = a1;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_CONDITION);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v7 = a3;
      UserData.Ptr = (ULONGLONG)&v16;
      v10 = 4;
      v9 = &v17;
      v12 = &v7;
      v13 = 4;
      UserData.Size = 8;
      LOBYTE(v3) = EtwWriteEx(v5, &POP_ETW_EVENT_COMPONENT_CONDITION, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}

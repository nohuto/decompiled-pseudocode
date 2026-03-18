/*
 * XREFs of PopDiagTraceFxPerfRequestComplete @ 0x140231868
 * Callers:
 *     PopFxCompleteComponentPerfState @ 0x14022A7C8 (PopFxCompleteComponentPerfState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPerfRequestComplete(__int64 *a1, unsigned __int8 a2)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+6Ch] [rbp+2Bh]
  int *v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+7Ch] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED);
    if ( (_BYTE)v2 )
    {
      v6 = *a1;
      v7 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = v7 + 48;
      v11 = v6 + 16;
      v9 = a2;
      v14 = &v9;
      v12 = 4;
      v15 = 4;
      UserData.Size = 8;
      LOBYTE(v2) = EtwWriteEx(v5, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_COMPLETED, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}

/*
 * XREFs of PopDiagTraceFxComponentIdleState @ 0x14014B18C
 * Callers:
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x14014AF30 (PoFxCompleteIdleState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentIdleState(__int64 a1, int a2, unsigned int a3)
{
  REGHANDLE v3; // rbx
  __int64 v4; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  int *v6; // [rsp+60h] [rbp+1Fh]
  int v7; // [rsp+68h] [rbp+27h]
  int v8; // [rsp+6Ch] [rbp+2Bh]
  int *v9; // [rsp+70h] [rbp+2Fh]
  int v10; // [rsp+78h] [rbp+37h]
  int v11; // [rsp+7Ch] [rbp+3Bh]
  int v12; // [rsp+B0h] [rbp+6Fh] BYREF
  unsigned int v13; // [rsp+B8h] [rbp+77h] BYREF

  v13 = a3;
  v12 = a2;
  v4 = a1;
  PopFxAddLogEntry(a1, a2, 8, a3);
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_STATE) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = 4;
      v6 = &v12;
      v9 = (int *)&v13;
      v10 = 4;
      UserData.Size = 8;
      EtwWriteEx(v3, &POP_ETW_EVENT_COMPONENT_IDLE_STATE, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
}

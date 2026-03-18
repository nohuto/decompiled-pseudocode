/*
 * XREFs of PopDiagTraceIdleResiliencyStart @ 0x140231AF8
 * Callers:
 *     PopDeepSleepEvaluateCallback @ 0x140233BD0 (PopDeepSleepEvaluateCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceIdleResiliencyStart(__int64 a1, int a2, unsigned __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp+Fh] BYREF
  int *v6; // [rsp+60h] [rbp+1Fh]
  __int64 v7; // [rsp+68h] [rbp+27h]
  unsigned __int64 *v8; // [rsp+70h] [rbp+2Fh]
  __int64 v9; // [rsp+78h] [rbp+37h]
  int v10; // [rsp+B0h] [rbp+6Fh] BYREF
  unsigned __int64 v11; // [rsp+B8h] [rbp+77h] BYREF

  v10 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = 0LL;
    *(_QWORD *)&v5.Size = 4LL;
    if ( a3 >= 0xFFFFFFFF )
      a3 = 0xFFFFFFFFLL;
    v7 = 4LL;
    v11 = a3;
    v5.Ptr = (ULONGLONG)&v4;
    v9 = 4LL;
    v6 = &v10;
    v8 = &v11;
    return EtwWriteEx(PopDiagHandle, &POP_ETW_IDLE_RESILIENCY_START, 0LL, 0, 0LL, 0LL, 3u, &v5);
  }
  return result;
}

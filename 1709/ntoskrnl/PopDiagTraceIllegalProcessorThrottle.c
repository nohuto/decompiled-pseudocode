/*
 * XREFs of PopDiagTraceIllegalProcessorThrottle @ 0x14024644C
 * Callers:
 *     PpmPerfAction @ 0x1400953A0 (PpmPerfAction.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x14011512C (PpmPerfCheckForIllegalProcessorThrottle.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIllegalProcessorThrottle(int a1, __int64 a2, _QWORD *a3)
{
  char v3; // si
  char v4; // bl
  char v6; // di
  int v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  int *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  int *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  int v18; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF

  v19 = a2;
  v18 = a1;
  v3 = PopDiagHandleRegistered;
  v4 = 1;
  v6 = 1;
  if ( !PopDiagHandleRegistered || !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC) )
    v4 = 0;
  if ( !v3 || !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL) )
    v6 = 0;
  if ( v4 || v6 )
  {
    UserData.Reserved = 0;
    v11 = 0;
    UserData.Ptr = (ULONGLONG)&v18;
    UserData.Size = 4;
    v9 = &v19;
    v10 = 8;
    if ( *a3 )
      v7 = KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *a3) / 10000000LL;
    else
      v7 = 0;
    v14 = 0;
    v17 = 0;
    v12 = &v7;
    v15 = &PopProcessorThrottleLogInterval;
    *a3 = MEMORY[0xFFFFF78000000320];
    v13 = 4;
    v16 = 4;
    if ( v4 )
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    if ( v6 )
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL, 0LL, 0, 0LL, 0LL, 4u, &UserData);
  }
}

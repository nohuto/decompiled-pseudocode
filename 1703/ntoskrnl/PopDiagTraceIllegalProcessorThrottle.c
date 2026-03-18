/*
 * XREFs of PopDiagTraceIllegalProcessorThrottle @ 0x140231BB4
 * Callers:
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x14001B890 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     PpmPerfAction @ 0x1400F2880 (PpmPerfAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIllegalProcessorThrottle(int a1, __int64 a2, _QWORD *a3)
{
  int *v3; // rax
  char v4; // si
  char v5; // bl
  REGHANDLE v6; // r14
  char v8; // di
  int v10; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-19h]
  int v13; // [rsp+70h] [rbp-11h]
  int v14; // [rsp+74h] [rbp-Dh]
  int *v15; // [rsp+78h] [rbp-9h]
  int v16; // [rsp+80h] [rbp-1h]
  int v17; // [rsp+84h] [rbp+3h]
  int *v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+94h] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  int v22; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v23; // [rsp+F0h] [rbp+6Fh] BYREF

  v3 = (int *)&retaddr;
  v23 = a2;
  v22 = a1;
  v4 = PopDiagHandleRegistered;
  v5 = 1;
  v6 = PopDiagHandle;
  v8 = 1;
  if ( !PopDiagHandleRegistered
    || (LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC), !(_BYTE)v3) )
  {
    v5 = 0;
  }
  if ( !v4 || (LOBYTE(v3) = EtwEventEnabled(v6, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL), !(_BYTE)v3) )
    v8 = 0;
  if ( v5 || v8 )
  {
    UserData.Reserved = 0;
    v14 = 0;
    UserData.Ptr = (ULONGLONG)&v22;
    UserData.Size = 4;
    v12 = &v23;
    v13 = 8;
    if ( *a3 )
      v10 = KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *a3) / 10000000LL;
    else
      v10 = 0;
    v17 = 0;
    v20 = 0;
    v15 = &v10;
    v3 = &PopProcessorThrottleLogInterval;
    v18 = &PopProcessorThrottleLogInterval;
    *a3 = MEMORY[0xFFFFF78000000320];
    v16 = 4;
    v19 = 4;
    if ( v5 )
      LOBYTE(v3) = EtwWriteEx(
                     PopDiagHandle,
                     &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     4u,
                     &UserData);
    if ( v8 )
      LOBYTE(v3) = EtwWriteEx(
                     PopDiagHandle,
                     &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     4u,
                     &UserData);
  }
  return (char)v3;
}

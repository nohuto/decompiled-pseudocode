/*
 * XREFs of PopDiagTraceServiceNotification @ 0x140578918
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceServiceNotification(int *a1)
{
  int v1; // eax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v4; // rsi
  _DWORD *v5; // rdi
  __int64 v6; // rax
  __int16 v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  _DWORD *v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+54h] [rbp-24h]

  v1 = *a1;
  v2 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_SUSPENDSERVICE;
  if ( *a1 )
    v2 = &POP_ETW_EVENT_SUSPENDSERVICE_END;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, v2);
    if ( (_BYTE)v1 )
    {
      v5 = a1 + 1;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_WORD *)v5 + v6) );
      v8 = v6;
      UserData.Ptr = (ULONGLONG)&v8;
      v11 = 2 * (unsigned __int16)v6;
      *(_QWORD *)&UserData.Size = 2LL;
      v10 = v5;
      v12 = 0;
      LOBYTE(v1) = EtwWrite(v4, v2, 0LL, 2u, &UserData);
    }
  }
  return v1;
}

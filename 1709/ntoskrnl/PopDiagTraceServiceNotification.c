/*
 * XREFs of PopDiagTraceServiceNotification @ 0x140704F30
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceServiceNotification(int *a1)
{
  int v1; // eax
  const EVENT_DESCRIPTOR *v2; // rbx
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int16 v7; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v1 = *a1;
  v2 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_SUSPENDSERVICE;
  if ( *a1 )
    v2 = &POP_ETW_EVENT_SUSPENDSERVICE_END;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, v2);
    if ( (_BYTE)v1 )
    {
      v4 = a1 + 1;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_WORD *)v4 + v5) );
      v7 = v5;
      UserData.Ptr = (ULONGLONG)&v7;
      v10 = 2 * (unsigned __int16)v5;
      *(_QWORD *)&UserData.Size = 2LL;
      v9 = v4;
      v11 = 0;
      LOBYTE(v1) = EtwWrite(PopDiagHandle, v2, 0LL, 2u, &UserData);
    }
  }
  return v1;
}

/*
 * XREFs of PpmEventTraceExpectedUtility @ 0x140147068
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x140146C0C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceExpectedUtility(__int64 a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // r8
  unsigned int v7; // edx
  __int16 v9; // [rsp+48h] [rbp-59h] BYREF
  int v10; // [rsp+4Ch] [rbp-55h] BYREF
  int v11; // [rsp+50h] [rbp-51h] BYREF
  int v12; // [rsp+54h] [rbp-4Dh] BYREF
  unsigned int v13; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-39h] BYREF
  int *v15; // [rsp+78h] [rbp-29h]
  __int64 v16; // [rsp+80h] [rbp-21h]
  int *v17; // [rsp+88h] [rbp-19h]
  __int64 v18; // [rsp+90h] [rbp-11h]
  int *v19; // [rsp+98h] [rbp-9h]
  __int64 v20; // [rsp+A0h] [rbp-1h]
  unsigned int *v21; // [rsp+A8h] [rbp+7h]
  __int64 v22; // [rsp+B0h] [rbp+Fh]
  __int16 *v23; // [rsp+B8h] [rbp+17h]
  __int64 v24; // [rsp+C0h] [rbp+1Fh]
  __int64 v25; // [rsp+C8h] [rbp+27h]
  __int64 v26; // [rsp+D0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_EXPECTED_UTILITY);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v4 = *(_QWORD *)(a1 + 24312);
      if ( v4 )
        v5 = *(_DWORD *)(v4 + 96);
      else
        v5 = 100;
      v13 = v5;
      v6 = PpmCheckPeriod / 0x2710uLL;
      v7 = ((unsigned int)(PpmCheckPeriod / 0x2710uLL) * (*(_DWORD *)(a1 + 24372) / v5) + 50) / 0x64;
      v11 = v7;
      if ( v7 <= (unsigned int)(PpmCheckPeriod / 0x2710uLL) )
      {
        v12 = 0;
        v10 = v6 - v7;
      }
      else
      {
        v11 = PpmCheckPeriod / 0x2710uLL;
        v12 = v7 - v6;
        v10 = 0;
      }
      v16 = 4LL;
      v15 = &v10;
      v18 = 4LL;
      v17 = &v11;
      v20 = 4LL;
      v19 = &v12;
      v22 = 4LL;
      v21 = &v13;
      v9 = *(unsigned __int8 *)(a1 + 208);
      v23 = &v9;
      v25 = a1 + 209;
      v24 = 2LL;
      v26 = 1LL;
      LOBYTE(v1) = EtwWriteEx(v3, &PPM_ETW_EXPECTED_UTILITY, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v1;
}

/*
 * XREFs of ProcLibTracePccSummary @ 0x1C001DE10
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D790 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

BOOLEAN ProcLibTracePccSummary()
{
  BOOLEAN result; // al
  char v1; // al
  char v2; // [rsp+30h] [rbp-19h] BYREF
  char v3; // [rsp+31h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v5; // [rsp+50h] [rbp+7h]
  __int64 v6; // [rsp+58h] [rbp+Fh]
  char *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  char *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]

  result = EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PCC_SUMMARY_RUNDOWN);
  if ( result )
  {
    if ( qword_1C00118B0 )
    {
      v2 = (unsigned int)(100 * *(_DWORD *)(qword_1C00118B0 + 36)) / *(_DWORD *)(qword_1C00118B0 + 28);
      v1 = (unsigned int)(100 * *(_DWORD *)(qword_1C00118B0 + 32)) / *(_DWORD *)(qword_1C00118B0 + 28);
      *(_QWORD *)&UserData.Size = 1LL;
      v3 = v1;
      UserData.Ptr = qword_1C00118B0 + 6;
      v5 = qword_1C00118B0 + 7;
      v7 = &v2;
      v9 = &v3;
      v6 = 1LL;
      v8 = 1LL;
      v10 = 1LL;
      return EtwWrite(ProcLibEtwHandle, &PPM_ETW_PCC_SUMMARY_RUNDOWN, 0LL, 4u, &UserData);
    }
  }
  return result;
}

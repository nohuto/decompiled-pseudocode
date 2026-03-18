/*
 * XREFs of EtwTraceThreadWorkOnBehalfUpdate @ 0x1402AF574
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceThreadWorkOnBehalfUpdate(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rsi
  BOOLEAN result; // al
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v2 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    if ( a1 )
      v6 = *(_DWORD *)(a1 + 1600);
    else
      v6 = 0;
    v8 = v6;
    UserData.Ptr = (ULONGLONG)&v8;
    *(_QWORD *)&UserData.Size = 4LL;
    if ( a2 )
      v7 = *(_DWORD *)(a2 + 1600);
    else
      v7 = 0;
    v9 = v7;
    v12 = 4LL;
    v11 = &v9;
    return EtwWriteEx(v2, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}

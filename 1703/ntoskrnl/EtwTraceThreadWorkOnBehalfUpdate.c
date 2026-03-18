/*
 * XREFs of EtwTraceThreadWorkOnBehalfUpdate @ 0x140044B84
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140044504 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x140044790 (PspRevertContainerImpersonation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceThreadWorkOnBehalfUpdate(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rsi
  BOOLEAN result; // al
  int v6; // [rsp+40h] [rbp-40h] BYREF
  int v7; // [rsp+44h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]

  v2 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    if ( a1 )
      v6 = *(_DWORD *)(a1 + 1600);
    else
      v6 = 0;
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v6;
    if ( a2 )
      v7 = *(_DWORD *)(a2 + 1600);
    else
      v7 = 0;
    v10 = 4LL;
    v9 = &v7;
    return EtwWriteEx(v2, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}

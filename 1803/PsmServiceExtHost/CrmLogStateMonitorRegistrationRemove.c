/*
 * XREFs of CrmLogStateMonitorRegistrationRemove @ 0x18006A39C
 * Callers:
 *     CrmStateMonitorRegistrationRemove @ 0x18006A6E0 (CrmStateMonitorRegistrationRemove.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogStateMonitorRegistrationRemove(int a1, __int64 a2, int a3)
{
  TLG_STATUS result; // eax
  bool v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  bool *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_180092130 > 5 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    v8 = &v5;
    v4 = a3 != 0;
    v5 = a1;
    v10 = &v6;
    v12 = &v4;
    v9 = 4LL;
    v11 = 4LL;
    v13 = 1LL;
    return TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_18008413C, 0LL, 0LL, 5u, &pData);
  }
  return result;
}

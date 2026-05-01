/*
 * XREFs of ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800681F4
 * Callers:
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180067E10 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180068080 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HampActMarkExpired(struct _HAM_ACTIVITY *a1)
{
  int v1; // edx
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  *((_DWORD *)a1 + 134) |= 0x20u;
  if ( _volatile_metadata > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
    {
      v7 = 0;
      v5 = v3 + 40;
      v6 = v1;
      TlgWrite(v2, &unk_1800837D0, 0LL, 0LL, 3u, &pData);
    }
  }
}

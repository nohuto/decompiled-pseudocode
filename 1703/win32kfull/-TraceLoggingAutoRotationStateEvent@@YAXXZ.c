/*
 * XREFs of ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C011BF50
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void TraceLoggingAutoRotationStateEvent(void)
{
  int v0; // eax
  LPCGUID v1; // r8
  LPCGUID v2; // r9
  int v3; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v5; // [rsp+60h] [rbp-48h]
  int v6; // [rsp+68h] [rbp-40h]
  int v7; // [rsp+6Ch] [rbp-3Ch]
  int *v8; // [rsp+70h] [rbp-38h]
  int v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+7Ch] [rbp-2Ch]

  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
    {
      v7 = 0;
      v5 = &dword_1C032A7D4;
      v6 = 4;
      v0 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v10 = 0;
      v3 = v0;
      v8 = &v3;
      v9 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB205, v1, v2, 4u, &pData);
    }
  }
}

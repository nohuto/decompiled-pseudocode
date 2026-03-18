/*
 * XREFs of ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C0124CE8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void TraceLoggingAutoRotationStateEvent(void)
{
  int v0; // eax
  LPCGUID v1; // r8
  LPCGUID v2; // r9
  int v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v7 = 0;
      v5 = &dword_1C03267CC;
      v6 = 4;
      v0 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v10 = 0;
      v3 = v0;
      v8 = &v3;
      v9 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7CF0, v1, v2, 4u, &pData);
    }
  }
}

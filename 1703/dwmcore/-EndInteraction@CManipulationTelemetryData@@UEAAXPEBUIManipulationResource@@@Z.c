/*
 * XREFs of ?EndInteraction@CManipulationTelemetryData@@UEAAXPEBUIManipulationResource@@@Z @ 0x180191300
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulationTelemetryData::EndInteraction(CManipulationTelemetryData *this, const GUID *a2)
{
  const GUID *v2; // r9
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const struct IManipulationResource *v6; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  const struct IManipulationResource **v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+64h] [rbp-24h]

  v2 = a2;
  v6 = (const struct IManipulationResource *)a2;
  if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v10 = 0;
    v8 = &v6;
    v9 = 8;
    TlgWrite(v4, &unk_1801F960E, v5, v2, 3u, &pData);
    v2 = (const GUID *)v6;
  }
  (*(void (__fastcall **)(_QWORD, const GUID *))(**(_QWORD **)(*((_QWORD *)this + 18) + 560LL) + 24LL))(
    *(_QWORD *)(*((_QWORD *)this + 18) + 560LL),
    v2);
}

/*
 * XREFs of ?OnHang@CWatchdogTimer@@AEAAXXZ @ 0x18006EA54
 * Callers:
 *     ?TimerCallback@CWatchdogTimer@@SAXPEAXE@Z @ 0x18006F490 (-TimerCallback@CWatchdogTimer@@SAXPEAXE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ReportHangInternal2_0 @ 0x18006F030 (ReportHangInternal2_0.c)
 *     ?ShouldReportHangToWatson@CWatchdogTimer@@AEAA_NXZ @ 0x18006F364 (-ShouldReportHangToWatson@CWatchdogTimer@@AEAA_NXZ.c)
 */

void __fastcall CWatchdogTimer::OnHang(CWatchdogTimer *this)
{
  const WCHAR *v2; // rdx
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  TraceLoggingHProvider v5; // r10
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD, _QWORD); // rcx
  DWORD CurrentProcessId; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  DWORD v10; // [rsp+30h] [rbp-29h] BYREF
  GUID pguid; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  GUID *p_pguid; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF
  char *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  pguid = GUID_00000000_0000_0000_0000_000000000000;
  CoCreateGuid(&pguid);
  if ( **((_DWORD **)this + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)this + 1), 0x400000000002uLL) )
  {
    v2 = (const WCHAR *)*((_QWORD *)this + 3);
    v15 = 0;
    p_pguid = &pguid;
    v14 = 16;
    TlgCreateWsz(&pDesc, v2);
    v19 = 0;
    v17 = (char *)this + 16;
    v18 = 4;
    TlgWrite(v5, &unk_18010ED3F, v3, v4, 5u, &pData);
  }
  RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)this + 4);
  if ( v6 )
    (**v6)(v6, *((unsigned int *)this + 4), *((_QWORD *)this + 3), *((_QWORD *)this + 1));
  if ( CWatchdogTimer::ShouldReportHangToWatson(this) )
  {
    CurrentProcessId = GetCurrentProcessId();
    v8 = *((unsigned int *)this + 4);
    v10 = CurrentProcessId;
    ReportHangInternal2_0(&v10, v9, v8);
  }
  *((_BYTE *)this + 40) = 1;
}

/*
 * XREFs of ?ReportHang@CWatchdogTimer@@AEAAXXZ @ 0x14003B748
 * Callers:
 *     ?TimerCallback@CWatchdogTimer@@SAXPEAXE@Z @ 0x14003B9D0 (-TimerCallback@CWatchdogTimer@@SAXPEAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x1400365CC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140036604 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CWatchdogTimer::ReportHang(CWatchdogTimer *this)
{
  const WCHAR *v2; // rdx
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  TraceLoggingHProvider v5; // r10
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rcx
  GUID pguid; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  GUID *p_pguid; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  char *v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+8Ch] [rbp+33h]

  pguid = GUID_00000000_0000_0000_0000_000000000000;
  CoCreateGuid(&pguid);
  if ( **((_DWORD **)this + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)this + 1), 0x400000000002uLL) )
  {
    v2 = (const WCHAR *)*((_QWORD *)this + 3);
    v11 = 0;
    p_pguid = &pguid;
    v10 = 16;
    TlgCreateWsz(&pDesc, v2);
    v15 = 0;
    v13 = (char *)this + 16;
    v14 = 4;
    TlgWrite(v5, &unk_14006F3A6, v3, v4, 5u, &pData);
  }
  RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)this + 4);
  if ( v6 )
    (**v6)(v6, *((_QWORD *)this + 3), *((_QWORD *)this + 1));
}

/*
 * XREFs of ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x18009C090
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ReportHangInternal2 @ 0x18009C2A0 (ReportHangInternal2.c)
 *     ?ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ @ 0x18009C5A4 (-ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioHealthMonitor::LooksLikeWeAreHung(
        CAudioHealthMonitor *this,
        __int64 a2,
        const unsigned __int16 *a3)
{
  __int64 v5; // rcx
  LPVOID v6; // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  TraceLoggingHProvider v9; // r10
  __int64 v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  HANDLE CurrentProcess; // rax
  int v16; // [rsp+38h] [rbp-69h] BYREF
  _DWORD Src[2]; // [rsp+40h] [rbp-61h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-59h] BYREF
  char v19; // [rsp+50h] [rbp-51h]
  __int64 v20; // [rsp+58h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-19h] BYREF
  _DWORD *v23; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+A0h] [rbp-1h]
  int v25; // [rsp+A4h] [rbp+3h]
  char *v26; // [rsp+A8h] [rbp+7h]
  int v27; // [rsp+B0h] [rbp+Fh]
  int v28; // [rsp+B4h] [rbp+13h]
  char *v29; // [rsp+B8h] [rbp+17h]
  int v30; // [rsp+C0h] [rbp+1Fh]
  int v31; // [rsp+C4h] [rbp+23h]

  v20 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)CAudioHealthMonitor::ShouldUpdateCounter(this) )
  {
    v5 = *((unsigned int *)this + 2);
    if ( (int)v5 + 1 >= (unsigned int)v5 )
      *((_DWORD *)this + 2) = v5 + 1;
  }
  if ( *((_DWORD *)this + 2) >= *((_DWORD *)this + 3) && *((_DWORD *)this + 4) == 16 && !*((_DWORD *)this + 17) )
  {
    v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           v5,
           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v6 + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v6 + 1), 0x400000000001uLL) )
    {
      TlgCreateWsz(&pDesc, a3);
      Src[0] = 0;
      v23 = Src;
      v24 = 4;
      v25 = 0;
      v26 = (char *)this + 8;
      v27 = 4;
      v28 = 0;
      v29 = (char *)this + 12;
      v30 = 4;
      v31 = 0;
      TlgWrite(v9, &unk_180144D9C, v7, v8, 6u, &pData);
    }
    *((_DWORD *)this + 17) = 1;
    Src[0] = GetCurrentProcessId();
    Src[1] = (*(__int64 (__fastcall **)(CAudioHealthMonitor *))(*(_QWORD *)this + 16LL))(this);
    v16 = ReportHangInternal2(Src);
    v11 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                       v10,
                                                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                         + 1);
    if ( *(_DWORD *)v11 > 4u && TlgKeywordOn(v11, 1uLL) )
    {
      pDesc.Ptr = (ULONGLONG)&v16;
      pDesc.Size = 4;
      pDesc.Reserved = 0;
      TlgWrite(v12, &unk_180144D78, v13, v14, 3u, &pData);
    }
    if ( v16 >= 0 )
      Sleep(0xEA60u);
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, 0);
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
}

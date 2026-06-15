/*
 * XREFs of ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x18002A440
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Do_call @ 0x18002AAC0 (std--_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_--_Do_call.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800077F0 (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _lambda_d712340aea87d10847fb2ae459792740_::operator() @ 0x1800DB2AC (_lambda_d712340aea87d10847fb2ae459792740_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioJournal::CheckAndLogTelemetry(AudioJournal *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // eax
  LPVOID v4; // rax
  int v5; // r10d
  const CHAR *v6; // rdx
  LPCGUID v7; // r8
  TraceLoggingHProvider v8; // r9
  int v9; // [rsp+38h] [rbp-59h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp-51h] BYREF
  LPCSTR psz; // [rsp+48h] [rbp-49h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v13[4]; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  int *v15; // [rsp+98h] [rbp+7h]
  int v16; // [rsp+A0h] [rbp+Fh]
  int v17; // [rsp+A4h] [rbp+13h]
  struct _RTL_CRITICAL_SECTION **v18; // [rsp+A8h] [rbp+17h]
  int v19; // [rsp+B0h] [rbp+1Fh]
  int v20; // [rsp+B4h] [rbp+23h]
  struct _FILETIME *p_SystemTimeAsFileTime; // [rsp+B8h] [rbp+27h]
  int v22; // [rsp+C0h] [rbp+2Fh]
  int v23; // [rsp+C4h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp+37h] BYREF

  v13[2] = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v12 = v2;
  if ( *(_BYTE *)this )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    if ( (__int64)((*(_QWORD *)&SystemTimeAsFileTime - *((_QWORD *)this + 28)) / 0x989680uLL) >= 86400 )
    {
      psz = 0LL;
      v13[0] = this;
      v13[1] = &psz;
      v3 = lambda_d712340aea87d10847fb2ae459792740_::operator()(v13);
      SystemTimeAsFileTime = (struct _FILETIME)*((_QWORD *)this + 28);
      v9 = v3;
      v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
             SystemTimeAsFileTime.dwHighDateTime,
             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( **((_DWORD **)v4 + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v4 + 1), 0x400000000000uLL) )
      {
        v15 = &v9;
        v16 = v5;
        v17 = 0;
        LODWORD(v12) = 1;
        v18 = &v12;
        v19 = v5;
        v20 = 0;
        p_SystemTimeAsFileTime = &SystemTimeAsFileTime;
        v22 = 8;
        v23 = 0;
        v6 = "none";
        if ( v9 >= 0 )
          v6 = psz;
        TlgCreateSz(&pDesc, v6);
        TlgWrite(v8, &unk_1801473DD, v7, (LPCGUID)v8, 6u, &pData);
      }
      AudioJournal::ResetData(this, 1);
      if ( psz )
        operator delete((void *)psz);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}

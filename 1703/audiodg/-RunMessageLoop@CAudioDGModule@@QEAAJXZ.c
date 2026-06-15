/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400030F8
 * Callers:
 *     wWinMain @ 0x140001340 (wWinMain.c)
 * Callees:
 *     Template_q @ 0x140001504 (Template_q.c)
 *     TraceLoggingRegisterEx @ 0x14001B678 (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     _TlgKeywordOn @ 0x140036604 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(CAudioDGModule *this)
{
  void *v2; // rcx
  DWORD v3; // edi
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  HANDLE CurrentProcess; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-50h] BYREF
  HANDLE Handles[2]; // [rsp+40h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-38h] BYREF

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids);
  }
  Handles[0] = *((HANDLE *)this + 14);
  Handles[1] = *((HANDLE *)this + 16);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_q((__int64)v2, (__int64)"\r", *((_DWORD *)this + 36));
  do
  {
    v3 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v3 == 1 )
    {
      *((_BYTE *)this + 140) = 1;
      InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = &qword_140086158;
        qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        qword_140086160 = (__int64)qword_140086170;
        byte_140086168 = 1;
        TraceLoggingRegisterEx(qword_140086170, v4, v5);
        dword_14008616C = 1;
        (*(void (__fastcall **)(__int64 *))(qword_140086158 + 8))(&qword_140086158);
        InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140086158);
      }
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v6 > 2u && TlgKeywordOn(v6, 0x400000000000uLL) )
        TlgWrite(v7, &unk_14006F214, v8, v9, 2u, &pData);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v3 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids);
  }
  return 0LL;
}

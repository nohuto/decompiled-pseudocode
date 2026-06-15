/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140012CB4
 * Callers:
 *     wWinMain @ 0x14001BB30 (wWinMain.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400012EC (_TlgKeywordOn.c)
 *     TraceLoggingRegisterEx @ 0x14001BFBC (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q @ 0x140035F04 (McTemplateU0q.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this)
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
  Handles[0] = this[14];
  Handles[1] = this[16];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0q(v2, &EVT_AUDIOSRV_AUDIODG_READY, *((unsigned int *)this + 36));
  do
  {
    v3 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v3 == 1 )
    {
      *((_BYTE *)this + 140) = 1;
      InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = &qword_14008A158;
        qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        qword_14008A160 = (__int64)qword_14008A170;
        byte_14008A168 = 1;
        TraceLoggingRegisterEx(qword_14008A170, v4, v5);
        dword_14008A16C = 1;
        (*(void (__fastcall **)(__int64 *))(qword_14008A158 + 8))(&qword_14008A158);
        InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_14008A158);
      }
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v6 > 2u && TlgKeywordOn(v6, 0x400000000000uLL) )
        TlgWrite(v7, &unk_1400721C4, v8, v9, 2u, &pData);
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

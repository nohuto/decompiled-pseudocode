/*
 * XREFs of ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x1800D3858
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x1800D3750 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x1800D37E8 (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18004925C (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<NUIAudioTracing>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  fPending = a1;
  InitOnceBeginInitialize(&`NUIAudioTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context);
  if ( (_DWORD)fPending )
  {
    Context = &qword_18012C548;
    qword_18012C548 = &NUIAudioTracing::`vftable';
    qword_18012C560 = (struct _TlgProvider_t *)&`NUIAudioTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18012C548, qword_18012C560, v3);
    InitOnceComplete(&`NUIAudioTracing::Instance'::`2'::wrapper, 0, &qword_18012C548);
  }
  return Context;
}

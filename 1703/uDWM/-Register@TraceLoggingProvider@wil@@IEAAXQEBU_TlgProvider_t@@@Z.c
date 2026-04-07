/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800172A8
 * Callers:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000C34C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180049F34 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180074B68 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180017218 (TraceLoggingRegisterEx.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _TlgProvider_t *a2,
        void *a3)
{
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  TraceLoggingRegisterEx(a2, (TLG_PENABLECALLBACK)a2, a3);
  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v4 + 8))(this);
}

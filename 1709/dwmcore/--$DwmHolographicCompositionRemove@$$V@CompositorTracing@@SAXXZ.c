/*
 * XREFs of ??$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ @ 0x1801BF244
 * Callers:
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXXZ @ 0x1801C0E90 (-RemoveHolographicComposition@CHolographicManager@@QEAAXXZ.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800016A0 (TraceLoggingProviderEnabled.c)
 *     atexit @ 0x1800C2D94 (atexit.c)
 *     ??1Completer@?$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ @ 0x1801BFA10 (--1Completer@-$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ.c)
 *     ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ @ 0x1801C0140 (-DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ.c)
 */

void CompositorTracing::DwmHolographicCompositionRemove<>()
{
  const struct _TlgProvider_t *v0; // rcx
  CompositorTracing *v1; // rcx
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-10h] BYREF
  int v3; // [rsp+28h] [rbp-8h]
  WINBOOL fPending; // [rsp+50h] [rbp+20h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+28h] BYREF

  InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    v2 = &`CompositorTracing::Instance'::`2'::wrapper;
    Context = &qword_180272208;
    qword_180272208 = (__int64)&CompositorTracing::`vftable';
    qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<CompositorTracing>::Completer::~Completer(&v2);
  }
  v0 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( v0 && TraceLoggingProviderEnabled(v0, 0, 0LL) )
  {
    InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      v2 = &`CompositorTracing::Instance'::`2'::wrapper;
      Context = &qword_180272208;
      qword_180272208 = (__int64)&CompositorTracing::`vftable';
      qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      v3 = 0;
      wil::details::static_lazy<CompositorTracing>::Completer::~Completer(&v2);
    }
    CompositorTracing::DwmHolographicCompositionRemove_(v1);
  }
}

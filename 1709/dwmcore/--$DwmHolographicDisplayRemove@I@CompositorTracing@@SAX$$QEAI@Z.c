/*
 * XREFs of ??$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF448
 * Callers:
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801C0EE4 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800016A0 (TraceLoggingProviderEnabled.c)
 *     atexit @ 0x1800C2D94 (atexit.c)
 *     ??1Completer@?$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ @ 0x1801BFA10 (--1Completer@-$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ.c)
 *     ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z @ 0x1801C0388 (-DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z.c)
 */

void __fastcall CompositorTracing::DwmHolographicDisplayRemove<unsigned int>(unsigned int *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  CompositorTracing *v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-10h] BYREF
  int v5; // [rsp+28h] [rbp-8h]
  WINBOOL fPending; // [rsp+68h] [rbp+38h] BYREF
  LPVOID Context; // [rsp+70h] [rbp+40h] BYREF

  InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    v4 = &`CompositorTracing::Instance'::`2'::wrapper;
    Context = &qword_180272208;
    qword_180272208 = (__int64)&CompositorTracing::`vftable';
    qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<CompositorTracing>::Completer::~Completer(&v4);
  }
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( v2 && TraceLoggingProviderEnabled(v2, 0, 0LL) )
  {
    InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      v4 = &`CompositorTracing::Instance'::`2'::wrapper;
      Context = &qword_180272208;
      qword_180272208 = (__int64)&CompositorTracing::`vftable';
      qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      v5 = 0;
      wil::details::static_lazy<CompositorTracing>::Completer::~Completer(&v4);
    }
    CompositorTracing::DwmHolographicDisplayRemove_(v3, *a1);
  }
}

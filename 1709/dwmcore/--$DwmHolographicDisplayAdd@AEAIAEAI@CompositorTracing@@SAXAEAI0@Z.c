/*
 * XREFs of ??$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z @ 0x1801BF33C
 * Callers:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801BFC88 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800016A0 (TraceLoggingProviderEnabled.c)
 *     atexit @ 0x1800C2D94 (atexit.c)
 *     ??1Completer@?$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ @ 0x1801BFA10 (--1Completer@-$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ.c)
 *     ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXII@Z @ 0x1801C0248 (-DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXII@Z.c)
 */

void __fastcall CompositorTracing::DwmHolographicDisplayAdd<unsigned int &,unsigned int &>(
        unsigned int *a1,
        unsigned int *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  CompositorTracing *v5; // rcx
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+28h] [rbp-8h]
  WINBOOL fPending; // [rsp+70h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+48h] BYREF

  InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    v6 = &`CompositorTracing::Instance'::`2'::wrapper;
    Context = &qword_180272208;
    qword_180272208 = (__int64)&CompositorTracing::`vftable';
    qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    v7 = 0;
    wil::details::static_lazy<CompositorTracing>::Completer::~Completer(&v6);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( v4 && TraceLoggingProviderEnabled(v4, 0, 0LL) )
  {
    InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      v6 = &`CompositorTracing::Instance'::`2'::wrapper;
      Context = &qword_180272208;
      qword_180272208 = (__int64)&CompositorTracing::`vftable';
      qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      v7 = 0;
      wil::details::static_lazy<CompositorTracing>::Completer::~Completer(&v6);
    }
    CompositorTracing::DwmHolographicDisplayAdd_(v5, *a1, *a2);
  }
}

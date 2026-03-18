/*
 * XREFs of ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ @ 0x1801C0038
 * Callers:
 *     ??$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ @ 0x1801BF14C (--$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     atexit @ 0x1800C2D94 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x18018F270 (TraceLoggingRegisterEx.c)
 */

void __fastcall CompositorTracing::DwmHolographicCompositionAdd_(CompositorTracing *this)
{
  TLG_PENABLECALLBACK v1; // rdx
  PVOID v2; // r8
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180272208;
    qword_180272208 = (__int64)&CompositorTracing::`vftable';
    qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    qword_180272210 = (__int64)qword_180272220;
    byte_180272218 = 1;
    TraceLoggingRegisterEx(qword_180272220, v1, v2);
    dword_18027221C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180272208 + 8))(&qword_180272208);
    InitOnceComplete(&`CompositorTracing::Instance'::`2'::wrapper, 0, &qword_180272208);
  }
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 4u )
  {
    if ( TlgKeywordOn(v3, 0x400000000000uLL) )
      TlgWrite(v4, &unk_1802165BD, v5, v6, 2u, &pData);
  }
}

/*
 * XREFs of ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z @ 0x1801C0388
 * Callers:
 *     ??$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF448 (--$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     atexit @ 0x1800C2D94 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x18018F270 (TraceLoggingRegisterEx.c)
 */

void __fastcall CompositorTracing::DwmHolographicDisplayRemove_(CompositorTracing *this, int a2)
{
  TLG_PENABLECALLBACK v2; // rdx
  PVOID v3; // r8
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  int *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]
  int v14; // [rsp+98h] [rbp+10h] BYREF

  v14 = a2;
  InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180272208;
    qword_180272208 = (__int64)&CompositorTracing::`vftable';
    qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    qword_180272210 = (__int64)qword_180272220;
    byte_180272218 = 1;
    TraceLoggingRegisterEx(qword_180272220, v2, v3);
    dword_18027221C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180272208 + 8))(&qword_180272208);
    InitOnceComplete(&`CompositorTracing::Instance'::`2'::wrapper, 0, &qword_180272208);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 4u )
  {
    if ( TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v13 = 0;
      v11 = &v14;
      v12 = 4;
      TlgWrite(v5, &unk_1802165E9, v6, v7, 3u, &pData);
    }
  }
}

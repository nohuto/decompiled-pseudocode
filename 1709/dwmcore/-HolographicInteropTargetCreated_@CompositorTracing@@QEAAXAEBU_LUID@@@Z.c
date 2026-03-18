/*
 * XREFs of ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1801C09FC
 * Callers:
 *     ??$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z @ 0x1801BF730 (--$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     atexit @ 0x1800C2D94 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x18018F270 (TraceLoggingRegisterEx.c)
 */

void __fastcall CompositorTracing::HolographicInteropTargetCreated_(CompositorTracing *this, const struct _LUID *a2)
{
  TLG_PENABLECALLBACK v3; // rdx
  PVOID v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *cData; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  LONG *p_HighPart; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  const struct _LUID *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180272208;
    qword_180272208 = (__int64)&CompositorTracing::`vftable';
    qword_180272220 = (TraceLoggingHProvider)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    qword_180272210 = (__int64)qword_180272220;
    byte_180272218 = 1;
    TraceLoggingRegisterEx(qword_180272220, v3, v4);
    dword_18027221C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180272208 + 8))(&qword_180272208);
    InitOnceComplete(&`CompositorTracing::Instance'::`2'::wrapper, 0, &qword_180272208);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 0x400000000000uLL) )
    {
      v14 = 0;
      v17 = 0;
      p_HighPart = &a2->HighPart;
      v13 = (int)cData;
      v15 = a2;
      v16 = (int)cData;
      TlgWrite(v6, &unk_1802164DD, v7, cData, (UINT32)cData, &pData);
    }
  }
}

/*
 * XREFs of ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801EC5DC
 * Callers:
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x1801E3E74 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     GetLPCreateDCompositionDirectInkFactoryPartner @ 0x1801EC64C (GetLPCreateDCompositionDirectInkFactoryPartner.c)
 */

__int64 __fastcall CD2DGenericInk::CreateDirectInkFactory(
        struct ID2D1DeviceContext *a1,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  int LPCreateDCompositionDirectInkFactoryPartner; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 (__fastcall *v8)(struct ID2D1DeviceContext *, struct IDCompositionDirectInkFactoryPartner **); // [rsp+50h] [rbp+18h] BYREF

  LPCreateDCompositionDirectInkFactoryPartner = GetLPCreateDCompositionDirectInkFactoryPartner(&v8);
  v5 = LPCreateDCompositionDirectInkFactoryPartner;
  if ( LPCreateDCompositionDirectInkFactoryPartner < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LPCreateDCompositionDirectInkFactoryPartner, 0x2Eu);
  }
  else
  {
    v6 = v8(a1, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2Fu);
  }
  return v5;
}

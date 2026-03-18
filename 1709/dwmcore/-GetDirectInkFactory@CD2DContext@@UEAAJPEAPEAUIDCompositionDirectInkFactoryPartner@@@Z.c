/*
 * XREFs of ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801AA8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x1801AAD74 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 */

__int64 __fastcall CD2DContext::GetDirectInkFactory(
        CD2DContext *this,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  signed int inited; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx

  inited = CD2DContext::LazyInitDirectInkFactory(this);
  v5 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x17Eu);
  }
  else
  {
    v6 = *((_QWORD *)this + 39);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v5 = 0;
    *a2 = (struct IDCompositionDirectInkFactoryPartner *)*((_QWORD *)this + 39);
  }
  return v5;
}

/*
 * XREFs of ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x1801AAD74
 * Callers:
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x1801A9770 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801AA8C0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801B3F48 (-CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInk.c)
 */

__int64 __fastcall CD2DContext::LazyInitDirectInkFactory(struct ID2D1DeviceContext **this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !this[39] )
    return CD2DGenericInk::CreateDirectInkFactory(this[22], this + 39);
  return result;
}

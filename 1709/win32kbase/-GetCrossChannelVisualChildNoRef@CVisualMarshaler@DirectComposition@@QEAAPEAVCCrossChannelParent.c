/*
 * XREFs of ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C002B8FC
 * Callers:
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C002EF88 (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C002F06C (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(__int64 a1, unsigned int a2)
{
  _QWORD *i; // rdi

  for ( i = *(_QWORD **)(a1 + 144); i; i = (_QWORD *)i[19] )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*i + 280LL))(i, a2) )
      return i;
  }
  return 0LL;
}

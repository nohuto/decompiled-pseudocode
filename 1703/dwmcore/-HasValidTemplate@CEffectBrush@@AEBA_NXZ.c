/*
 * XREFs of ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180010C38
 * Callers:
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800107D0 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180010C50 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x180011178 (-ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTY.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CEffectBrush::HasValidTemplate(CEffectBrush *this)
{
  return __PAIR128__(*((_QWORD *)this + 11), 0LL) != *(_QWORD *)(*((_QWORD *)this + 11) + 72LL);
}

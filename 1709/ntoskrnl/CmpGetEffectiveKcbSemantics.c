/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x140697F00
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKcbSemantics(__int64 a1)
{
  if ( *(_WORD *)(a1 + 58) )
    return *(unsigned __int8 *)(a1 + 57);
  else
    return 0LL;
}

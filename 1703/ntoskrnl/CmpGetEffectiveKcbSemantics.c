/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x14066D9E0
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
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

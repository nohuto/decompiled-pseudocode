/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1406FAFDC
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
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

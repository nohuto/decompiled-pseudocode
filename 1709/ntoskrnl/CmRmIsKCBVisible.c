/*
 * XREFs of CmRmIsKCBVisible @ 0x140568874
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  return !*(_QWORD *)(a1 + 232) || (unsigned __int8)CmEqualTrans(a2) != 0;
}

/*
 * XREFs of CmRmIsKCBVisible @ 0x14056FB10
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 232);
  return !v3 || CmEqualTrans(a2, v3) != 0;
}

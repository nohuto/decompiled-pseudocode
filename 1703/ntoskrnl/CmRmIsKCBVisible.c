/*
 * XREFs of CmRmIsKCBVisible @ 0x14044C0B4
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 232);
  return !v3 || (unsigned __int8)CmEqualTrans(a2, v3) != 0;
}

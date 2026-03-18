/*
 * XREFs of CmpIsValueTombstone @ 0x140471F84
 * Callers:
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpValueEnumStackAdvance @ 0x14069C39C (CmpValueEnumStackAdvance.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 144) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}

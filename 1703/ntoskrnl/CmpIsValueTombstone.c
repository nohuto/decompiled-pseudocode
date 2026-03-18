/*
 * XREFs of CmpIsValueTombstone @ 0x1404CF370
 * Callers:
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpValueEnumStackAdvance @ 0x140671354 (CmpValueEnumStackAdvance.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_DWORD *)(a1 + 144) & 0x80000) != 0 )
    return (*(unsigned __int8 *)(a2 + 16) >> 1) & 1;
  else
    LOBYTE(v2) = 0;
  return v2;
}

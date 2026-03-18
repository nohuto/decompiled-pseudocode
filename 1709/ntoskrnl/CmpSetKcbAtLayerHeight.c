/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x140698264
 * Callers:
 *     CmpPopulateKcbStack @ 0x14047EA38 (CmpPopulateKcbStack.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x14047F860 (CmpConstructNameFromKeyNodes.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetKcbAtLayerHeight(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 < 2 )
  {
    result = a2;
    *(_QWORD *)(a1 + 8LL * a2 + 8) = a3;
  }
  else
  {
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8LL * (a2 - 2)) = a3;
  }
  return result;
}

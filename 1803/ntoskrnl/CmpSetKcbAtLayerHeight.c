/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x1406FB3E8
 * Callers:
 *     CmpPopulateKcbStack @ 0x1404A5C10 (CmpPopulateKcbStack.c)
 *     CmpIsKeyDeleted @ 0x1404A5C40 (CmpIsKeyDeleted.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1404ABDD0 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
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

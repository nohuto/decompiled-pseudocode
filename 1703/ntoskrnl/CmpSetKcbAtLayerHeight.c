/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x14066DD6C
 * Callers:
 *     CmpPopulateKcbStack @ 0x1404FC4C8 (CmpPopulateKcbStack.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405039C0 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
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

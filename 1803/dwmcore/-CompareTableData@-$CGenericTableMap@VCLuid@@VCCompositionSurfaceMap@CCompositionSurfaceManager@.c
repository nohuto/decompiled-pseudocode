/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x1800BEB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  __int64 result; // rax

  if ( (*(unsigned int *)FirstStruct | (unsigned __int64)((__int64)(int)HIDWORD(*FirstStruct) << 32)) < ((unsigned int)*SecondStruct | (unsigned __int64)((__int64)(int)HIDWORD(*SecondStruct) << 32)) )
    return 0LL;
  if ( *(_DWORD *)FirstStruct != (unsigned int)*SecondStruct )
    return 1LL;
  result = 2LL;
  if ( HIDWORD(*FirstStruct) != HIDWORD(*SecondStruct) )
    return 1LL;
  return result;
}

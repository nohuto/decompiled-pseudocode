/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@IVPropertyMapEntry@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x1800B2940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<unsigned int,PropertyMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  if ( *FirstStruct == *SecondStruct )
    return 2LL;
  return 1LL;
}

/*
 * XREFs of mitUserModeHandleEntryCompare @ 0x1C007C710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall mitUserModeHandleEntryCompare(
        struct _RTL_AVL_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v3 = FirstStruct[2];
  v4 = SecondStruct[2];
  if ( v3 > v4 )
    return 1LL;
  else
    return v3 < v4 ? 0 : 2;
}

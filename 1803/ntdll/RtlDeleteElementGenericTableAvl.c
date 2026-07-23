/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x180066F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067154 @ 0x180067154 (sub_180067154.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1800671F0 (RtlDeleteElementGenericTableAvlEx.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)sub_180067154(Table, Buffer, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}

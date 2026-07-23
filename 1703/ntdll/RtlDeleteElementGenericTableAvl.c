/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1800691B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006938C @ 0x18006938C (sub_18006938C.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x180069430 (RtlDeleteElementGenericTableAvlEx.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h]

  if ( (unsigned int)sub_18006938C(Table, Buffer) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}

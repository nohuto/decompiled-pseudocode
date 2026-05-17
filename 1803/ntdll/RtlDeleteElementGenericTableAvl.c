/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x180066F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067154 @ 0x180067154 (sub_180067154.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1800671F0 (RtlDeleteElementGenericTableAvlEx.c)
 */

char __fastcall RtlDeleteElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)sub_180067154(a1, a2, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(a1, v4);
  return 1;
}

/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x180069830
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x180069A44 (FindNodeOrParent_0.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x180069AE0 (RtlDeleteElementGenericTableAvlEx.c)
 */

char __fastcall RtlDeleteElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent_0(a1, a2, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(a1, v4);
  return 1;
}

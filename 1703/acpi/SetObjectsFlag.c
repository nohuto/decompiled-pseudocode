/*
 * XREFs of SetObjectsFlag @ 0x1C005E338
 * Callers:
 *     AMLIFinalizeObject @ 0x1C005AB78 (AMLIFinalizeObject.c)
 *     SetObjectsFlag @ 0x1C005E338 (SetObjectsFlag.c)
 * Callees:
 *     SetObjectsFlag @ 0x1C005E338 (SetObjectsFlag.c)
 */

__int64 __fastcall SetObjectsFlag(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 24);
  *(_WORD *)(a1 + 64) |= a2;
  for ( i = *(_QWORD **)(a1 + 24); v3 != i; i = (_QWORD *)*i )
    result = SetObjectsFlag(i, a2);
  return result;
}

/*
 * XREFs of FreeOperandValue @ 0x140797E48
 * Callers:
 *     GetOperandValue @ 0x140798348 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140799754 (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall FreeOperandValue(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = (void *)P[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)P )
        ExFreePoolWithTag(v2, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}

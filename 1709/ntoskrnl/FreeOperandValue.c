/*
 * XREFs of FreeOperandValue @ 0x1407345E4
 * Callers:
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140735F08 (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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

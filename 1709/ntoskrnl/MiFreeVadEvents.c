/*
 * XREFs of MiFreeVadEvents @ 0x14021CA00
 * Callers:
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEvents(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 56);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      ExFreePoolWithTag(v1, 0);
      v1 = v2;
    }
    while ( v2 );
  }
}

/*
 * XREFs of EtwpFreeGuidEntry @ 0x14058E35C
 * Callers:
 *     EtwpAddGuidEntry @ 0x14058E46C (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall EtwpFreeGuidEntry(_QWORD *P)
{
  void *v2; // rcx

  ObDereferenceSecurityDescriptor(P[7], 1u);
  v2 = (void *)P[46];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  _InterlockedDecrement((volatile signed __int32 *)(P[47] + 4088LL));
  ExFreePoolWithTag(P, 0);
}

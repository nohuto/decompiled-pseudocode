/*
 * XREFs of EtwpFreeGuidEntry @ 0x14058B77C
 * Callers:
 *     EtwpAddGuidEntry @ 0x14048972C (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall EtwpFreeGuidEntry(_QWORD *P)
{
  void *v2; // rcx

  ObDereferenceSecurityDescriptor(P[7], 1u);
  v2 = (void *)P[46];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  _InterlockedDecrement((volatile signed __int32 *)(P[47] + 4080LL));
  ExFreePoolWithTag(P, 0);
}

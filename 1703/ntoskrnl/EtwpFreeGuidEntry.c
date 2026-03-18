/*
 * XREFs of EtwpFreeGuidEntry @ 0x14044E1FC
 * Callers:
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x140554888 (EtwpAddGuidEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall EtwpFreeGuidEntry(_QWORD *a1)
{
  void *v2; // rcx

  ObDereferenceSecurityDescriptor(a1[7]);
  v2 = (void *)a1[46];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  _InterlockedDecrement((volatile signed __int32 *)(a1[47] + 5080LL));
  ExFreePoolWithTag(a1, 0);
}

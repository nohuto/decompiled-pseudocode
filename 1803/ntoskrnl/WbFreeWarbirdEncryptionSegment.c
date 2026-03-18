/*
 * XREFs of WbFreeWarbirdEncryptionSegment @ 0x14048B8D4
 * Callers:
 *     sub_14048A48C @ 0x14048A48C (sub_14048A48C.c)
 *     WbFreeWarbirdProcess @ 0x1405399A8 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbFreeWarbirdEncryptionSegment(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( P )
  {
    v2 = (void *)P[5];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x42524157u);
    v3 = (void *)P[6];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x42524157u);
    ExFreePoolWithTag(P, 0x42524157u);
  }
  return 0LL;
}

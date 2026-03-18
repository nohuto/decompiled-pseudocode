/*
 * XREFs of WbFreeWarbirdEncryptionSegment @ 0x14041FBAC
 * Callers:
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 *     sub_140549C24 @ 0x140549C24 (sub_140549C24.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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

/*
 * XREFs of PfSnAsyncContextCleanup @ 0x14048EFE4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnAsyncContextCleanup(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (struct _EX_RUNDOWN_REF *)a1[28];
  if ( v2 )
    ExReleaseRundownProtection(v2 + 45);
  v3 = (void *)a1[26];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)a1[27];
  if ( v4 )
    ObfDereferenceObject(v4);
}

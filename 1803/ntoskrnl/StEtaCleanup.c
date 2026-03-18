/*
 * XREFs of StEtaCleanup @ 0x14009AD44
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099DC4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmcCacheCleanup @ 0x14079F24C (SmcCacheCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall StEtaCleanup(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 16);
  v2 = 2LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}

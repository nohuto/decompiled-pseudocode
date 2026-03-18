/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x1405BA78C
 * Callers:
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 * Callees:
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiPerformFixups @ 0x14053DF48 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  _QWORD *v6; // rbx
  int v7; // edx
  __int64 result; // rax
  ULONG_PTR v9; // rdi

  v6 = *(_QWORD **)(*(_QWORD *)(a2 + 96) + 32LL);
  if ( !v6 || (unsigned __int64)a3 >= v6[7] )
    return -1LL;
  v7 = 0;
  while ( !*(_QWORD *)(*v6 + 8LL * (v7 + a3)) )
  {
    if ( ++v7 )
      goto LABEL_6;
  }
  v7 = 5;
LABEL_6:
  if ( v7 != 5 )
    return -1LL;
  result = (__int64)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x68496D4Du);
  v9 = result;
  if ( result )
  {
    KeCopyPage(result, a1);
    MiPerformFixups(v9, a2, a3, v6[6] - v6[5], 0LL, 0);
    return v9;
  }
  return result;
}

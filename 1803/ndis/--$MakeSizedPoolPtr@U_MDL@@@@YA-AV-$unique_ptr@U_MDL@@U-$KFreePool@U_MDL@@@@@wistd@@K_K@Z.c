/*
 * XREFs of ??$MakeSizedPoolPtr@U_MDL@@@@YA?AV?$unique_ptr@U_MDL@@U?$KFreePool@U_MDL@@@@@wistd@@K_K@Z @ 0x1C00B490C
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C00B465C (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<_MDL>(_QWORD *a1, __int64 a2, SIZE_T a3)
{
  PVOID PoolWithTag; // rax
  void *v6; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x6D4D444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    memset(v6, 0, 0x30uLL);
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}

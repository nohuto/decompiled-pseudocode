/*
 * XREFs of ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C00EA7F0
 * Callers:
 *     ??$MakeExtendedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@KKPEAK@Z @ 0x1C00EA79C (--$MakeExtendedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UN.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<_UNICODE_STRING>(_QWORD *a1, __int64 a2, SIZE_T a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x6E61444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    *a1 = v6;
    *v6 = 0LL;
    v6[1] = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}

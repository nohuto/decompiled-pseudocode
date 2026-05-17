/*
 * XREFs of AlpcRegisterCompletionListWorkerThread @ 0x1800DADC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcRegisterCompletionListWorkerThread(__int64 a1)
{
  signed __int64 v1; // r8

  while ( HIWORD(*(_QWORD *)(a1 + 64)) != 0xFFFFLL )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( v1 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 64),
                 v1 & 0xFFFFFFFFFFFFLL | ((v1 & 0xFFFF000000000000uLL) + 0x1000000000000LL),
                 v1) )
      return 1LL;
  }
  return 0LL;
}

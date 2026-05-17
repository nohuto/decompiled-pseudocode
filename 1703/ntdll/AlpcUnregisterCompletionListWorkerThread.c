/*
 * XREFs of AlpcUnregisterCompletionListWorkerThread @ 0x180076D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcUnregisterCompletionListWorkerThread(__int64 a1)
{
  unsigned __int64 v1; // r8

  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( v1 < 0x1000000000000LL || (v1 & 0xFFFFFF) != 0xFFFFFF )
      break;
    if ( v1 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 64),
                 v1 & 0xFFFFFFFFFFFFLL | ((HIWORD(v1) - 1) << 48),
                 v1) )
      return 1LL;
  }
  return 0LL;
}

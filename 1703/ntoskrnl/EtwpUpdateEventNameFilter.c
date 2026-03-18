/*
 * XREFs of EtwpUpdateEventNameFilter @ 0x1405D3F6C
 * Callers:
 *     EtwpUpdateFilterData @ 0x140554514 (EtwpUpdateFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventNameFilter(volatile __int64 *a1, __int64 *a2, char a3)
{
  __int64 v3; // rcx

  if ( a3 )
    return _InterlockedExchange64(a1, 0LL);
  v3 = _InterlockedExchange64(a1, *a2);
  *a2 = 0LL;
  return v3;
}

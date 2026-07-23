/*
 * XREFs of TpAllocPool @ 0x18000A460
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  if ( PoolReturn )
  {
    if ( !Reserved )
    {
      Reserved = NtCurrentPeb()->Ldr;
      if ( !*((_BYTE *)Reserved + 72) )
        return TpAllocPoolInternal(PoolReturn, 0LL);
    }
  }
  TppRaiseInvalidParameter(PoolReturn, Reserved);
  return -1073741811;
}

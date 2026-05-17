/*
 * XREFs of AlpcGetOutstandingCompletionListMessageCount @ 0x18008AE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcGetOutstandingCompletionListMessageCount(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 192));
}

/*
 * XREFs of AlpcGetOutstandingCompletionListMessageCount @ 0x1800DFE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcGetOutstandingCompletionListMessageCount(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 192));
}

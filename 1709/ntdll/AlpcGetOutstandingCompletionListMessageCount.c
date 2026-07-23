/*
 * XREFs of AlpcGetOutstandingCompletionListMessageCount @ 0x1800DFE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl AlpcGetOutstandingCompletionListMessageCount(PVOID CompletionList)
{
  return *((_DWORD *)CompletionList + 32) - *((_DWORD *)CompletionList + 48);
}

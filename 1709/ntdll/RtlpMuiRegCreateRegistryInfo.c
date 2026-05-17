/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1800FC1D0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800054C4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 168LL);
  if ( result )
    *result |= 0x400u;
  return result;
}

/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1800FA9D0
 * Callers:
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 168LL);
  if ( result )
    *result |= 0x400u;
  return result;
}

/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1800F8C60
 * Callers:
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 168LL);
  if ( result )
    *result |= 0x400u;
  return result;
}

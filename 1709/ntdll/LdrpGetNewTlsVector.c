/*
 * XREFs of LdrpGetNewTlsVector @ 0x18001CA1C
 * Callers:
 *     LdrpHandleTlsData @ 0x18001C3A8 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18001C850 (LdrpAllocateTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = a1;
    memset(result + 4, 0, 8LL * a1);
    return v3 + 4;
  }
  return result;
}

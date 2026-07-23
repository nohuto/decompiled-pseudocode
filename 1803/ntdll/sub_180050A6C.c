/*
 * XREFs of sub_180050A6C @ 0x180050A6C
 * Callers:
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

_DWORD *__fastcall sub_180050A6C(unsigned int a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = a1;
    memset(result + 4, 0, 8LL * a1);
    return v3 + 4;
  }
  return result;
}

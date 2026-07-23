/*
 * XREFs of sub_180059228 @ 0x180059228
 * Callers:
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

_DWORD *__fastcall sub_180059228(unsigned int a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = a1;
    memset(result + 4, 0, 8LL * a1);
    return v3 + 4;
  }
  return result;
}

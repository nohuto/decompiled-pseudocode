/*
 * XREFs of sub_180004908 @ 0x180004908
 * Callers:
 *     sub_1800048B8 @ 0x1800048B8 (sub_1800048B8.c)
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180088240 (EtwEventWriteNoRegistration.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

_WORD *__fastcall sub_180004908(const void **a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  _WORD *v5; // rbx
  int v6; // eax
  _WORD *result; // rax
  _WORD *v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]

  v3 = *(unsigned __int16 *)a1;
  if ( v3 + 2 > *((unsigned __int16 *)a1 + 1) || (v5 = a1[1], v5[v3 >> 1]) )
  {
    result = (_WORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015B268 + 1572864), v3 + 2);
    v5 = result;
    if ( !result )
      return result;
    memmove(result, a1[1], *(unsigned __int16 *)a1);
    v5[(unsigned __int64)*(unsigned __int16 *)a1 >> 1] = 0;
  }
  v6 = *(unsigned __int16 *)a1 + 2;
  v8 = v5;
  v9 = v6;
  v10 = 0;
  result = (_WORD *)EtwEventWriteNoRegistration(&unk_180113E90, a2, 1LL, &v8);
  if ( v5 != a1[1] )
    return (_WORD *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  return result;
}

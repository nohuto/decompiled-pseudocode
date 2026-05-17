/*
 * XREFs of sub_1800896AC @ 0x1800896AC
 * Callers:
 *     sub_18008965C @ 0x18008965C (sub_18008965C.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180082B90 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

_WORD *__fastcall sub_1800896AC(unsigned __int16 *a1, __int128 *a2)
{
  __int64 v3; // rcx
  const void **v5; // rdi
  _WORD *v6; // rbx
  _WORD *result; // rax
  _WORD *v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]

  v3 = *a1;
  v5 = (const void **)(a1 + 4);
  if ( v3 + 2 > (unsigned __int64)a1[1] || (v6 = *v5, *((_WORD *)*v5 + ((unsigned __int64)(unsigned int)v3 >> 1))) )
  {
    result = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C294 + 1572864, v3 + 2);
    v6 = result;
    if ( !result )
      return result;
    memmove(result, *v5, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
    LOWORD(v3) = *a1;
  }
  v8 = v6;
  v9 = (unsigned __int16)v3 + 2;
  v10 = 0;
  result = (_WORD *)EtwEventWriteNoRegistration((__int64)qword_1801160F8, a2, 1, (__int64)&v8);
  if ( v6 != *v5 )
    return (_WORD *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v6);
  return result;
}

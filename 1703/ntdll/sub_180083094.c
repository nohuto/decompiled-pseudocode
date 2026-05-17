/*
 * XREFs of sub_180083094 @ 0x180083094
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 * Callees:
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 *     sub_1800798B8 @ 0x1800798B8 (sub_1800798B8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

wchar_t *__fastcall sub_180083094(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  wchar_t *v3; // rbx
  wchar_t *result; // rax
  int v5; // eax
  unsigned __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]

  v2 = *a1;
  if ( v2 + 2 > a1[1] || (v3 = (wchar_t *)*((_QWORD *)a1 + 1), v3[v2 >> 1]) )
  {
    result = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, v2 + 2);
    v3 = result;
    if ( !result )
      return result;
    memmove(result, *((const void **)a1 + 1), *a1);
    v3[(unsigned __int64)*a1 >> 1] = 0;
  }
  result = (wchar_t *)sub_1800798B8(v3, 4);
  if ( (_DWORD)result )
  {
    result = (wchar_t *)EtwEventRegister((int)&unk_180113E90, 0LL, 0LL, (__int64)&v6);
    if ( !(_DWORD)result )
    {
      v5 = *a1 + 2;
      v7 = v3;
      v8 = v5;
      v9 = 0;
      EtwEventWrite(v6, (int)&unk_1801246E0, 1, (__int64)&v7);
      result = (wchar_t *)EtwNotificationUnregister(v6, 0LL);
    }
    if ( v3 != *((wchar_t **)a1 + 1) )
      return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v3);
  }
  return result;
}

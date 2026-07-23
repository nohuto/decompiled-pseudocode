/*
 * XREFs of sub_1800DBD68 @ 0x1800DBD68
 * Callers:
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 sub_1800DBD68()
{
  PVOID ProcessHeap; // rbp
  PVOID Heap; // rax
  __int64 v2; // rbx
  __int64 *v4; // rax
  bool v5; // zf
  wchar_t *v6; // rbx
  wchar_t v7; // ax
  const WCHAR *v8; // rsi
  PVOID v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
  v2 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x48uLL);
  *(UNICODE_STRING *)(v2 + 16) = stru_180111408;
  v4 = (__int64 *)qword_18015A578;
  if ( *(__int64 **)qword_18015A578 != &qword_18015A570 )
    __fastfail(3u);
  v5 = dword_18015B264 == 0;
  *(_QWORD *)v2 = &qword_18015A570;
  *(_QWORD *)(v2 + 8) = v4;
  *v4 = v2;
  qword_18015A578 = v2;
  if ( v5 )
  {
    v6 = &word_18015A300;
    if ( word_18015A300 )
    {
      do
      {
        while ( *v6 == 32 || *v6 == 9 )
          ++v6;
        v7 = *v6;
        v8 = v6;
        if ( !*v6 )
          break;
        do
        {
          if ( v7 == 32 )
            break;
          if ( v7 == 9 )
            break;
          v7 = *++v6;
        }
        while ( *v6 );
        if ( v8 == v6 )
          break;
        *v6 = 0;
        if ( wcsicmp(v8, L"verifier.dll") )
        {
          v9 = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
          v10 = (__int64)v9;
          if ( !v9 )
            return 3221225495LL;
          memset(v9, 0, 0x48uLL);
          RtlInitUnicodeString((PUNICODE_STRING)(v10 + 16), v8);
          v11 = (__int64 *)qword_18015A578;
          if ( *(__int64 **)qword_18015A578 != &qword_18015A570 )
            __fastfail(3u);
          *(_QWORD *)v10 = &qword_18015A570;
          *(_QWORD *)(v10 + 8) = v11;
          *v11 = v10;
          qword_18015A578 = v10;
        }
        ++v6;
      }
      while ( *v6 );
    }
  }
  return 0LL;
}

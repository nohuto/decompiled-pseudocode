/*
 * XREFs of sub_1800D5528 @ 0x1800D5528
 * Callers:
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 sub_1800D5528()
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
  *(UNICODE_STRING *)(v2 + 16) = stru_180111318;
  v4 = (__int64 *)qword_18015B598;
  if ( *(__int64 **)qword_18015B598 != &qword_18015B590 )
    __fastfail(3u);
  v5 = dword_18015C290 == 0;
  *(_QWORD *)v2 = &qword_18015B590;
  *(_QWORD *)(v2 + 8) = v4;
  *v4 = v2;
  qword_18015B598 = v2;
  if ( v5 )
  {
    v6 = &word_18015B320;
    if ( word_18015B320 )
    {
      do
      {
        while ( 1 )
        {
          v7 = *v6;
          if ( *v6 != 32 && v7 != 9 )
            break;
          ++v6;
        }
        v8 = v6;
        if ( !v7 )
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
          v11 = (__int64 *)qword_18015B598;
          if ( *(__int64 **)qword_18015B598 != &qword_18015B590 )
            __fastfail(3u);
          *(_QWORD *)v10 = &qword_18015B590;
          *(_QWORD *)(v10 + 8) = v11;
          *v11 = v10;
          qword_18015B598 = v10;
        }
        ++v6;
      }
      while ( *v6 );
    }
  }
  return 0LL;
}

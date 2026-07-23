/*
 * XREFs of sub_1800DBBCC @ 0x1800DBBCC
 * Callers:
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800DBBCC(__int64 a1, char a2)
{
  __int64 result; // rax
  char v5; // dl
  void *v6; // rcx
  PVOID Heap; // rax
  unsigned __int64 v8; // rdi

  if ( !a1 )
    return 3221225485LL;
  v5 = dword_18015B2AC;
  result = 3221225473LL;
  if ( dword_18015B2AC )
  {
    if ( (dword_18015B2AC & 1) != 0 )
    {
      v6 = *(void **)(a1 + 40);
      if ( v6 )
      {
        ZwClose(v6);
        *(_QWORD *)(a1 + 40) = 0LL;
        v5 = dword_18015B2AC;
        result = 0LL;
      }
    }
    if ( (v5 & 6) != 0 )
    {
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 32) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL
        && (v5 & 4) == 0
        && (v5 & 2) != 0
        && a2 )
      {
        if ( *(_DWORD *)(a1 + 56) == -1073741799 )
          return 3221225497LL;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, *(_QWORD *)(a1 + 48));
        v8 = (unsigned __int64)Heap;
        if ( !Heap )
          return 3221225495LL;
        memmove(Heap, (const void *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL), *(_QWORD *)(a1 + 48));
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL));
        *(_DWORD *)(a1 + 56) = -1073741799;
        *(_QWORD *)(a1 + 32) = v8 | 1;
      }
      return 0LL;
    }
  }
  return result;
}

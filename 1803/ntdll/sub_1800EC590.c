/*
 * XREFs of sub_1800EC590 @ 0x1800EC590
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __fastcall sub_1800EC590(_QWORD *Src, __int64 a2)
{
  unsigned __int64 v2; // rax
  NTSTATUS result; // eax
  ULONG_PTR *ViewSize; // r14
  unsigned __int64 v7; // rdi
  size_t v8; // r8
  PVOID *v9; // r15
  SIZE_T CommitSize; // rdx
  __int64 v11; // rax

  v2 = Src[1];
  if ( v2 > 0x10000 )
    return -1073741595;
  *(_QWORD *)(a2 + 32) += v2;
  if ( *(_DWORD *)(a2 + 28) == -1073741789 )
    return 0;
  ViewSize = (ULONG_PTR *)(a2 + 56);
  v7 = (*(_QWORD *)(a2 + 72) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 72) = v7;
  v8 = Src[1];
  if ( v7 + v8 <= *(_QWORD *)(a2 + 56) )
    goto LABEL_9;
  v9 = (PVOID *)(a2 + 48);
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)(a2 + 48));
  CommitSize = *ViewSize;
  *(_QWORD *)(a2 + 64) += *ViewSize;
  v7 = 0LL;
  v11 = *(_QWORD *)(a2 + 64);
  *v9 = 0LL;
  if ( v11 < *(_QWORD *)(a2 + 8) )
  {
    result = ZwMapViewOfSection(
               *(HANDLE *)a2,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v9,
               0LL,
               CommitSize,
               (PLARGE_INTEGER)(a2 + 64),
               ViewSize,
               ViewUnmap,
               0,
               4u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 72) = 0LL;
    v8 = Src[1];
LABEL_9:
    memmove((void *)(v7 + *(_QWORD *)(a2 + 48)), Src, v8);
    ++*(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 72) += Src[1];
    return 0;
  }
  *(_DWORD *)(a2 + 28) = -1073741789;
  return 0;
}

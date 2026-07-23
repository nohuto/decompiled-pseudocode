/*
 * XREFs of sub_1800F0B70 @ 0x1800F0B70
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __fastcall sub_1800F0B70(char *Src, size_t Size, __int64 a3)
{
  size_t v4; // rsi
  ULONG_PTR *ViewSize; // r14
  PVOID *v7; // rbp
  LARGE_INTEGER *SectionOffset; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  ULONG_PTR v11; // rax
  SIZE_T CommitSize; // rcx
  NTSTATUS result; // eax

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    ViewSize = (ULONG_PTR *)(a3 + 56);
    if ( Size + *(_QWORD *)(a3 + 72) <= *(_QWORD *)(a3 + 56) )
    {
LABEL_10:
      memmove((void *)(*(_QWORD *)(a3 + 72) + *(_QWORD *)(a3 + 48)), Src, v4);
      *(_QWORD *)(a3 + 72) += v4;
    }
    else
    {
      v7 = (PVOID *)(a3 + 48);
      SectionOffset = (LARGE_INTEGER *)(a3 + 64);
      while ( 1 )
      {
        v9 = *(_QWORD *)(a3 + 72);
        v10 = *ViewSize - v9;
        memmove((char *)*v7 + v9, Src, v10);
        v4 -= v10;
        SectionOffset->QuadPart += *ViewSize;
        Src += v10;
        if ( SectionOffset->QuadPart >= *(_QWORD *)(a3 + 8) )
          break;
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v7);
        v11 = *(_QWORD *)(a3 + 8) - SectionOffset->QuadPart;
        *v7 = 0LL;
        CommitSize = *ViewSize;
        if ( *ViewSize >= v11 )
          CommitSize = *(_QWORD *)(a3 + 8) - SectionOffset->QuadPart;
        *ViewSize = CommitSize;
        result = ZwMapViewOfSection(
                   *(HANDLE *)a3,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   v7,
                   0LL,
                   CommitSize,
                   SectionOffset,
                   ViewSize,
                   ViewUnmap,
                   0,
                   4u);
        if ( result < 0 )
          return result;
        *(_QWORD *)(a3 + 72) = 0LL;
        if ( v4 <= *ViewSize )
          goto LABEL_10;
      }
      *(_DWORD *)(a3 + 28) = -1073741789;
    }
  }
  return 0;
}

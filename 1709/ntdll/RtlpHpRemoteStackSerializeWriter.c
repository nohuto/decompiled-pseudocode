/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x1800F0AA0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

NTSTATUS __fastcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, __int64 a3)
{
  size_t v4; // rsi
  ULONG_PTR *ViewSize; // r14
  PVOID *v7; // r12
  LARGE_INTEGER *SectionOffset; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  SIZE_T CommitSize; // rax
  void *v12; // rcx
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
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v7);
        CommitSize = *(_QWORD *)(a3 + 8) - SectionOffset->QuadPart;
        *v7 = 0LL;
        v12 = *(void **)a3;
        if ( *ViewSize < CommitSize )
          CommitSize = *ViewSize;
        *ViewSize = CommitSize;
        result = ZwMapViewOfSection(
                   v12,
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

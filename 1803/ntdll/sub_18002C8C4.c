/*
 * XREFs of sub_18002C8C4 @ 0x18002C8C4
 * Callers:
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18002C8C4(__int64 a1)
{
  struct _PEB *v1; // rbx
  __int64 result; // rax
  unsigned int v4; // edi
  unsigned int MaximumNumberOfHeaps; // ecx
  void **v6; // rbp
  void **ProcessHeaps; // r8

  v1 = NtCurrentPeb();
  result = v1->NumberOfHeaps;
  v4 = result + (unsigned __int16)word_18015D010;
  if ( v4 < 0xFFFE )
  {
    MaximumNumberOfHeaps = v1->MaximumNumberOfHeaps;
    if ( v4 == MaximumNumberOfHeaps )
    {
      v1->MaximumNumberOfHeaps = 2 * MaximumNumberOfHeaps;
      result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 16LL * MaximumNumberOfHeaps);
      v6 = (void **)result;
      if ( !result )
      {
        v1->MaximumNumberOfHeaps = v4;
        return result;
      }
      memmove((void *)result, v1->ProcessHeaps, 8LL * v1->NumberOfHeaps);
      ProcessHeaps = v1->ProcessHeaps;
      if ( ProcessHeaps != (void **)&unk_18015AB20 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)ProcessHeaps);
      LODWORD(result) = v1->NumberOfHeaps;
      v1->ProcessHeaps = v6;
    }
    v1->ProcessHeaps[(unsigned int)result] = (void *)a1;
    result = v1->NumberOfHeaps + 1;
    v1->NumberOfHeaps = result;
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_WORD *)(a1 + 60) = result;
    else
      *(_WORD *)(a1 + 208) = result;
  }
  return result;
}

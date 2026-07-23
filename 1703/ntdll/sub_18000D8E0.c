/*
 * XREFs of sub_18000D8E0 @ 0x18000D8E0
 * Callers:
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

void __fastcall sub_18000D8E0(__int64 a1)
{
  struct _PEB *v1; // rbx
  unsigned int v3; // edi
  ULONG MaximumNumberOfHeaps; // eax
  __int16 NumberOfHeaps; // ax
  unsigned int v6; // eax
  PVOID *Heap; // rax
  PVOID *v8; // rbp
  PVOID *ProcessHeaps; // r8

  v1 = NtCurrentPeb();
  v3 = v1->NumberOfHeaps + (unsigned __int16)word_18015BFA0;
  if ( v3 < 0xFFFE )
  {
    MaximumNumberOfHeaps = v1->MaximumNumberOfHeaps;
    if ( v3 == MaximumNumberOfHeaps )
    {
      v6 = 2 * MaximumNumberOfHeaps;
      v1->MaximumNumberOfHeaps = v6;
      Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v6);
      v8 = Heap;
      if ( !Heap )
      {
        v1->MaximumNumberOfHeaps = v3;
        return;
      }
      memmove(Heap, v1->ProcessHeaps, 8LL * v1->NumberOfHeaps);
      ProcessHeaps = v1->ProcessHeaps;
      if ( ProcessHeaps != (PVOID *)&unk_180159AE0 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessHeaps);
      v1->ProcessHeaps = v8;
    }
    v1->ProcessHeaps[v1->NumberOfHeaps++] = (PVOID)a1;
    NumberOfHeaps = v1->NumberOfHeaps;
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_WORD *)(a1 + 36) = NumberOfHeaps;
    else
      *(_WORD *)(a1 + 208) = NumberOfHeaps;
  }
}

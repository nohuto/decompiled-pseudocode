/*
 * XREFs of RtlDebugReAllocateHeap @ 0x180104040
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlReAllocateHeap @ 0x18003C6F0 (RtlReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18004C0E4 (RtlpValidateHeapEntry.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x180077C6C (RtlpGetExtraStuffPointer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F05D4 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180104C28 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180105204 (RtlpValidateHeapHeaders.c)
 */

char *__fastcall RtlDebugReAllocateHeap(unsigned __int64 a1, int a2, char *a3, SIZE_T a4)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  __int16 v14; // dx
  unsigned __int16 v15; // cx
  wchar_t *TagName; // rax
  char *Heap; // rax
  unsigned __int64 v18; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v20; // r14
  unsigned __int16 v21; // ax
  struct _PEB *v22; // rax
  wchar_t *v23; // rax
  char v24; // [rsp+30h] [rbp-48h]
  unsigned __int16 v25; // [rsp+34h] [rbp-44h]
  char *v26; // [rsp+38h] [rbp-40h]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  int Flags; // [rsp+88h] [rbp+10h]

  v24 = 0;
  v26 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return (char *)_guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlReAllocateHeap") )
    goto LABEL_68;
  v9 = *(_DWORD *)(a1 + 116) | 0x10000100 | a2;
  Flags = v9;
  v10 = a4;
  if ( !a4 )
    v10 = 1LL;
  v11 = (*(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v10)) + 16;
  if ( v11 < a4 || v11 > *(_QWORD *)(a1 + 200) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *(_QWORD *)(a1 + 200));
LABEL_68:
    v26 = 0LL;
    goto LABEL_69;
  }
  v25 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v24 = 1;
    Flags = v9 | 1;
  }
  RtlpValidateHeap(a1);
  v12 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v27 = v12;
  if ( RtlpValidateHeapEntry(a1, v12, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == (char *)qword_18015D670 )
    {
      if ( v13->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_18015D670, a4);
    }
    else
    {
      if ( (v13->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v14 = dword_18015D678;
      if ( !dword_18015D678 )
        goto LABEL_36;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v27 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v27 + 11) != (*(_BYTE *)(v27 + 8) ^ (unsigned __int8)(*(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10))) )
        {
          RtlpAnalyzeHeapFailure(a1, v27);
          v14 = dword_18015D678;
        }
      }
      if ( (*(_BYTE *)(v27 + 10) & 2) != 0 )
        v15 = *(_WORD *)(RtlpGetExtraStuffPointer(v27) + 2);
      else
        v15 = *(unsigned __int8 *)(v27 + 11);
      v25 = v15;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v27 + 11) = *(_BYTE *)(v27 + 8) ^ *(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10);
        *(_DWORD *)(v27 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( !v15 || v15 != v14 || *(_WORD *)(a1 + 208) != HIWORD(dword_18015D678) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName(a1, v25);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_36:
    Heap = (char *)RtlReAllocateHeap((PVOID)a1, Flags, a3, a4);
    v26 = Heap;
    if ( Heap )
    {
      v18 = (unsigned __int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v18 -= 16LL * *(unsigned __int8 *)(v18 + 14);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v18 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v18 + 11) != (*(_BYTE *)(v18 + 8) ^ (unsigned __int8)(*(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v18);
      }
      if ( (*(_BYTE *)(v18 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v18);
        v20 = ExtraStuffPointer;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v21 = v20[1];
      }
      else
      {
        v21 = *(unsigned __int8 *)(v18 + 11);
      }
      v25 = v21;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(v18 + 8) ^ *(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10);
        *(_DWORD *)(v18 + 8) ^= *(_DWORD *)(a1 + 136);
      }
    }
    RtlpValidateHeapHeaders((void *)a1);
    RtlpValidateHeap(a1);
  }
  if ( v26 )
  {
    v22 = NtCurrentPeb();
    if ( v26 == (char *)qword_18015D670 )
    {
      if ( v22->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_18015D670, a4);
LABEL_57:
      RtlpBreakPointHeap();
      goto LABEL_69;
    }
    if ( (v22->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*(_WORD *)(a1 + 208), v25) == dword_18015D678 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v23 = RtlpGetTagName(a1, v25);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v26, a4, v23);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v24 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v26;
}

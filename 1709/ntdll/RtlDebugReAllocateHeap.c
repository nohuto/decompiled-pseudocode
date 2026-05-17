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

__int64 __fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, __int64 a3, unsigned __int64 a4)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int16 v16; // dx
  unsigned __int16 v17; // cx
  wchar_t *TagName; // rax
  __int64 Heap; // rax
  unsigned __int64 v20; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v22; // r14
  unsigned __int16 v23; // ax
  struct _PEB *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  wchar_t *v27; // rax
  char v28; // [rsp+30h] [rbp-48h]
  unsigned __int16 v29; // [rsp+34h] [rbp-44h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  unsigned __int64 v31; // [rsp+40h] [rbp-38h]
  unsigned int v32; // [rsp+88h] [rbp+10h]

  v28 = 0;
  v30 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return _guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v9 = Src[29] | 0x10000100 | a2;
  v32 = v9;
  v10 = a4;
  if ( !a4 )
    v10 = 1LL;
  v11 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v10)) + 16;
  if ( v11 < a4 || v11 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_68:
    v30 = 0LL;
    goto LABEL_69;
  }
  v29 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v28 = 1;
    v32 = v9 | 1;
  }
  RtlpValidateHeap(Src, 0LL);
  v12 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v31 = v12;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v12, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == qword_18015D670 )
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
      v16 = dword_18015D678;
      if ( !dword_18015D678 )
        goto LABEL_36;
      if ( Src[31] )
      {
        *(_DWORD *)(v31 + 8) ^= Src[34];
        if ( *(_BYTE *)(v31 + 11) != (*(_BYTE *)(v31 + 8) ^ (unsigned __int8)(*(_BYTE *)(v31 + 9) ^ *(_BYTE *)(v31 + 10))) )
        {
          RtlpAnalyzeHeapFailure((__int64)Src, v31);
          v16 = dword_18015D678;
        }
      }
      if ( (*(_BYTE *)(v31 + 10) & 2) != 0 )
        v17 = *(_WORD *)(RtlpGetExtraStuffPointer(v31) + 2);
      else
        v17 = *(unsigned __int8 *)(v31 + 11);
      v29 = v17;
      if ( Src[31] )
      {
        *(_BYTE *)(v31 + 11) = *(_BYTE *)(v31 + 8) ^ *(_BYTE *)(v31 + 9) ^ *(_BYTE *)(v31 + 10);
        *(_DWORD *)(v31 + 8) ^= Src[34];
      }
      if ( !v17 || v17 != v16 || *((_WORD *)Src + 104) != HIWORD(dword_18015D678) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v29);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap(v15, v14);
LABEL_36:
    Heap = RtlReAllocateHeap((__int64)Src, v32, a3, a4);
    v30 = Heap;
    if ( Heap )
    {
      v20 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v20 -= 16LL * *(unsigned __int8 *)(v20 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v20 + 8) ^= Src[34];
        if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
          RtlpAnalyzeHeapFailure((__int64)Src, v20);
      }
      if ( (*(_BYTE *)(v20 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v20);
        v22 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v23 = v22[1];
      }
      else
      {
        v23 = *(unsigned __int8 *)(v20 + 11);
      }
      v29 = v23;
      if ( Src[31] )
      {
        *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
        *(_DWORD *)(v20 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src, 0LL);
  }
  if ( v30 )
  {
    v24 = NtCurrentPeb();
    if ( v30 == qword_18015D670 )
    {
      if ( v24->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_18015D670, a4);
LABEL_57:
      RtlpBreakPointHeap(v26, v25);
      goto LABEL_69;
    }
    if ( (v24->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v29) == dword_18015D678 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v27 = RtlpGetTagName((__int64)Src, v29);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v30, a4, v27);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v28 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v30;
}

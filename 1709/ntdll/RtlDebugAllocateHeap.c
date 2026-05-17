/*
 * XREFs of RtlDebugAllocateHeap @ 0x180103090
 * Callers:
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
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

__int64 __fastcall RtlDebugAllocateHeap(_DWORD *Src, int a2, unsigned __int64 a3)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 Heap; // rdi
  unsigned __int64 v12; // rdi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v14; // r14
  unsigned __int16 v15; // ax
  struct _PEB *v16; // rax
  wchar_t *TagName; // rax
  char v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v18 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return _guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_46;
  v7 = Src[29] | 0x10000100 | a2;
  v8 = a3;
  if ( !a3 )
    v8 = 1LL;
  v9 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v8);
  if ( v9 < 0x20 )
    v9 = 32LL;
  v10 = v9 + 16;
  if ( v10 < a3 || v10 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_46:
    v19 = 0LL;
    goto LABEL_47;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v18 = 1;
    v7 |= 1u;
  }
  RtlpValidateHeap(Src, 0LL);
  Heap = RtlAllocateHeap((__int64)Src, v7, a3);
  v19 = Heap;
  RtlpValidateHeapHeaders(Src);
  if ( !Heap )
    goto LABEL_47;
  v12 = Heap - 16;
  _m_prefetchw((const void *)v12);
  if ( *(_BYTE *)(v12 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v12 + 8) ^= Src[34];
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      RtlpAnalyzeHeapFailure((__int64)Src, v12);
  }
  if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v12);
    v14 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v15 = v14[1];
  }
  else
  {
    v15 = *(unsigned __int8 *)(v12 + 11);
  }
  v20 = v15;
  if ( Src[31] )
  {
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
    *(_DWORD *)(v12 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap(Src, 0LL);
  v16 = NtCurrentPeb();
  if ( v19 == RtlpHeapStopOn )
  {
    if ( v16->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
LABEL_33:
    RtlpBreakPointHeap();
    goto LABEL_47;
  }
  if ( (v16->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_18015D668 && *((_WORD *)Src + 104) == word_18015D66A )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v20);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v19, a3, TagName);
    goto LABEL_33;
  }
LABEL_47:
  if ( v18 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v19;
}

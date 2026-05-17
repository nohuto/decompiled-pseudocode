/*
 * XREFs of RtlDebugFreeHeap @ 0x180103A6C
 * Callers:
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
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

__int64 __fastcall RtlDebugFreeHeap(_DWORD *Src, int a2, unsigned __int64 a3)
{
  unsigned int v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rdx
  struct _PEB *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // dx
  unsigned __int16 v14; // cx
  wchar_t *TagName; // rax
  char v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]
  unsigned int v18; // [rsp+68h] [rbp+10h]
  unsigned __int16 v19; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v16 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned __int8)_guard_dispatch_icall_fptr();
  if ( RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v8 = Src[29] | 0x10000000 | a2;
    v18 = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v16 = 1;
      v18 = v8 | 1;
    }
    RtlpValidateHeap(Src, 0LL);
    v9 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    v17 = v9;
    if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v9, "RtlFreeHeap") )
      goto LABEL_34;
    v10 = NtCurrentPeb();
    if ( a3 == qword_18015D680 )
    {
      if ( v10->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_18015D680);
    }
    else
    {
      if ( (v10->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v13 = unk_18015D688;
      if ( !unk_18015D688 )
        goto LABEL_33;
      if ( Src[31] )
      {
        *(_DWORD *)(v17 + 8) ^= Src[34];
        if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
        {
          RtlpAnalyzeHeapFailure((__int64)Src, v17);
          v13 = unk_18015D688;
        }
      }
      if ( (*(_BYTE *)(v17 + 10) & 2) != 0 )
        v14 = *(_WORD *)(RtlpGetExtraStuffPointer(v17) + 2);
      else
        v14 = *(unsigned __int8 *)(v17 + 11);
      v19 = v14;
      if ( Src[31] )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= Src[34];
      }
      if ( !v14 || v14 != v13 || *((_WORD *)Src + 104) != word_18015D68A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v19);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap(v12, v11);
LABEL_33:
    v6 = RtlFreeHeap((__int64)Src, v18, a3);
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src, 0LL);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v16 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}

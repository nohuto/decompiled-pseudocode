/*
 * XREFs of sub_1801005E4 @ 0x1801005E4
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     sub_180072588 @ 0x180072588 (sub_180072588.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800EC9CC @ 0x1800EC9CC (sub_1800EC9CC.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_1801005E4(_DWORD *Src, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rsi
  int v10; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  struct _PEB *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int16 v17; // r8
  int v18; // edx
  unsigned __int16 v19; // cx
  wchar_t *v20; // rax
  __int64 Heap; // rax
  unsigned __int64 v22; // r14
  int v23; // edx
  _WORD *v24; // rax
  _WORD *v25; // r15
  unsigned __int16 v26; // ax
  struct _PEB *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  wchar_t *v30; // rax
  char v31; // [rsp+30h] [rbp-48h]
  unsigned __int16 v32; // [rsp+34h] [rbp-44h]
  __int64 v33; // [rsp+38h] [rbp-40h]
  unsigned __int64 v34; // [rsp+40h] [rbp-38h]
  int v35; // [rsp+88h] [rbp+10h]

  v31 = 0;
  v8 = 0LL;
  v33 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return _guard_dispatch_icall_fptr();
  if ( !sub_18001FC58(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = Src[29] | 0x10000100 | a2;
  v35 = v10;
  v11 = a4;
  if ( !a4 )
    v11 = 1LL;
  v12 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v11)) + 16;
  if ( v12 < a4 || v12 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_68:
    v8 = 0LL;
    goto LABEL_69;
  }
  v32 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v31 = 1;
    v35 = v10 | 1;
  }
  sub_18010120C(Src, 0LL);
  v13 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v34 = v13;
  if ( sub_180072588((unsigned __int64)Src, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == qword_18015A7D0 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_18015A7D0, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v17 = dword_18015A7D8;
      if ( !dword_18015A7D8 )
        goto LABEL_36;
      if ( Src[31] )
      {
        v18 = *(_DWORD *)(v34 + 8) ^ Src[34];
        *(_DWORD *)(v34 + 8) = v18;
        if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
        {
          sub_1800FC010((__int64)Src, v34);
          v17 = dword_18015A7D8;
        }
      }
      if ( (*(_BYTE *)(v34 + 10) & 2) != 0 )
        v19 = *(_WORD *)(sub_180063B6C(v34) + 2);
      else
        v19 = *(unsigned __int8 *)(v34 + 11);
      v32 = v19;
      if ( Src[31] )
      {
        *(_BYTE *)(v34 + 11) = *(_BYTE *)(v34 + 8) ^ *(_BYTE *)(v34 + 9) ^ *(_BYTE *)(v34 + 10);
        *(_DWORD *)(v34 + 8) ^= Src[34];
      }
      if ( !v19 || v19 != v17 || *((_WORD *)Src + 104) != HIWORD(dword_18015A7D8) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v20 = sub_1800EC9CC((__int64)Src, v32);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, v20);
    }
    sub_1801011EC(v16, v15);
LABEL_36:
    Heap = RtlReAllocateHeap((__int64)Src, v35, a3, a4);
    v8 = Heap;
    v33 = Heap;
    if ( Heap )
    {
      v22 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v22 -= 16LL * *(unsigned __int8 *)(v22 + 14);
      if ( Src[31] )
      {
        v23 = *(_DWORD *)(v22 + 8) ^ Src[34];
        *(_DWORD *)(v22 + 8) = v23;
        if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE1(v23) ^ BYTE2(v23))) )
          sub_1800FC010((__int64)Src, v22);
      }
      if ( (*(_BYTE *)(v22 + 10) & 2) != 0 )
      {
        v24 = (_WORD *)sub_180063B6C(v22);
        v25 = v24;
        if ( (Src[28] & 0x8000000) != 0 )
          *v24 = sub_1800244C4(1u);
        else
          *v24 = 0;
        v26 = v25[1];
      }
      else
      {
        v26 = *(unsigned __int8 *)(v22 + 11);
      }
      v32 = v26;
      if ( Src[31] )
      {
        *(_BYTE *)(v22 + 11) = *(_BYTE *)(v22 + 8) ^ *(_BYTE *)(v22 + 9) ^ *(_BYTE *)(v22 + 10);
        *(_DWORD *)(v22 + 8) ^= Src[34];
      }
    }
    sub_18010180C(Src);
    sub_18010120C(Src, 0LL);
  }
  if ( v8 )
  {
    v27 = NtCurrentPeb();
    v8 = v33;
    if ( v33 == qword_18015A7D0 )
    {
      if ( v27->Ldr )
      {
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        v8 = v33;
      }
      else
      {
        DbgPrint("HEAP: ");
      }
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_18015A7D0, a4);
LABEL_57:
      sub_1801011EC(v29, v28);
      goto LABEL_69;
    }
    if ( (v27->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v32) == dword_18015A7D8 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v30 = sub_1800EC9CC((__int64)Src, v32);
      v8 = v33;
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v33, a4, v30);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v31 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v8;
}

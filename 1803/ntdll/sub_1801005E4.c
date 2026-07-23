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

char *__fastcall sub_1801005E4(_DWORD *Src, int a2, char *a3, SIZE_T a4)
{
  char *v8; // rsi
  int v10; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  struct _PEB *v14; // rax
  __int16 v15; // r8
  int v16; // edx
  unsigned __int16 v17; // cx
  wchar_t *v18; // rax
  char *Heap; // rax
  unsigned __int64 v20; // r14
  int v21; // edx
  _WORD *v22; // rax
  _WORD *v23; // r15
  unsigned __int16 v24; // ax
  struct _PEB *v25; // rax
  wchar_t *v26; // rax
  char v27; // [rsp+30h] [rbp-48h]
  unsigned __int16 v28; // [rsp+34h] [rbp-44h]
  char *v29; // [rsp+38h] [rbp-40h]
  unsigned __int64 v30; // [rsp+40h] [rbp-38h]
  int Flags; // [rsp+88h] [rbp+10h]

  v27 = 0;
  v8 = 0LL;
  v29 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return (char *)_guard_dispatch_icall_fptr();
  if ( !sub_18001FC58(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = Src[29] | 0x10000100 | a2;
  Flags = v10;
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
  v28 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v27 = 1;
    Flags = v10 | 1;
  }
  sub_18010120C((_DWORD)Src);
  v13 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v30 = v13;
  if ( sub_180072588((unsigned __int64)Src, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == (char *)qword_18015A7D0 )
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
      v15 = dword_18015A7D8;
      if ( !dword_18015A7D8 )
        goto LABEL_36;
      if ( Src[31] )
      {
        v16 = *(_DWORD *)(v30 + 8) ^ Src[34];
        *(_DWORD *)(v30 + 8) = v16;
        if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
        {
          sub_1800FC010((__int64)Src, v30);
          v15 = dword_18015A7D8;
        }
      }
      if ( (*(_BYTE *)(v30 + 10) & 2) != 0 )
        v17 = *(_WORD *)(sub_180063B6C(v30) + 2);
      else
        v17 = *(unsigned __int8 *)(v30 + 11);
      v28 = v17;
      if ( Src[31] )
      {
        *(_BYTE *)(v30 + 11) = *(_BYTE *)(v30 + 8) ^ *(_BYTE *)(v30 + 9) ^ *(_BYTE *)(v30 + 10);
        *(_DWORD *)(v30 + 8) ^= Src[34];
      }
      if ( !v17 || v17 != v15 || *((_WORD *)Src + 104) != HIWORD(dword_18015A7D8) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v18 = sub_1800EC9CC((__int64)Src, v28);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, v18);
    }
    sub_1801011EC();
LABEL_36:
    Heap = (char *)RtlReAllocateHeap(Src, Flags, a3, a4);
    v8 = Heap;
    v29 = Heap;
    if ( Heap )
    {
      v20 = (unsigned __int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v20 -= 16LL * *(unsigned __int8 *)(v20 + 14);
      if ( Src[31] )
      {
        v21 = *(_DWORD *)(v20 + 8) ^ Src[34];
        *(_DWORD *)(v20 + 8) = v21;
        if ( HIBYTE(v21) != ((unsigned __int8)v21 ^ (unsigned __int8)(BYTE1(v21) ^ BYTE2(v21))) )
          sub_1800FC010((__int64)Src, v20);
      }
      if ( (*(_BYTE *)(v20 + 10) & 2) != 0 )
      {
        v22 = (_WORD *)sub_180063B6C(v20);
        v23 = v22;
        if ( (Src[28] & 0x8000000) != 0 )
          *v22 = sub_1800244C4(1u);
        else
          *v22 = 0;
        v24 = v23[1];
      }
      else
      {
        v24 = *(unsigned __int8 *)(v20 + 11);
      }
      v28 = v24;
      if ( Src[31] )
      {
        *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
        *(_DWORD *)(v20 + 8) ^= Src[34];
      }
    }
    sub_18010180C(Src);
    sub_18010120C((_DWORD)Src);
  }
  if ( v8 )
  {
    v25 = NtCurrentPeb();
    v8 = v29;
    if ( v29 == (char *)qword_18015A7D0 )
    {
      if ( v25->Ldr )
      {
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        v8 = v29;
      }
      else
      {
        DbgPrint("HEAP: ");
      }
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_18015A7D0, a4);
LABEL_57:
      sub_1801011EC();
      goto LABEL_69;
    }
    if ( (v25->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v28) == dword_18015A7D8 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v26 = sub_1800EC9CC((__int64)Src, v28);
      v8 = v29;
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v29, a4, v26);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v27 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return v8;
}

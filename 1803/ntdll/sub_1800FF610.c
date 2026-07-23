/*
 * XREFs of sub_1800FF610 @ 0x1800FF610
 * Callers:
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800EC9CC @ 0x1800EC9CC (sub_1800EC9CC.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

PVOID __fastcall sub_1800FF610(_DWORD *Src, int a2, SIZE_T a3)
{
  ULONG v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  SIZE_T v10; // rax
  PVOID Heap; // rdi
  unsigned __int64 v12; // rdi
  int v13; // edx
  _WORD *v14; // rax
  _WORD *v15; // r14
  unsigned __int16 v16; // ax
  struct _PEB *v17; // rax
  wchar_t *v18; // rax
  char v19; // [rsp+20h] [rbp-38h]
  PVOID v20; // [rsp+28h] [rbp-30h]
  unsigned __int16 v21; // [rsp+78h] [rbp+20h]

  v19 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (PVOID)_guard_dispatch_icall_fptr();
  if ( !sub_18001FC58(Src, "RtlAllocateHeap") )
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
    Heap = 0LL;
    goto LABEL_47;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v19 = 1;
    v7 |= 1u;
  }
  sub_18010120C((_DWORD)Src);
  Heap = RtlAllocateHeap(Src, v7, a3);
  v20 = Heap;
  sub_18010180C(Src);
  if ( !Heap )
    goto LABEL_47;
  v12 = (unsigned __int64)Heap - 16;
  _m_prefetchw((const void *)v12);
  if ( *(_BYTE *)(v12 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  if ( Src[31] )
  {
    v13 = *(_DWORD *)(v12 + 8) ^ Src[34];
    *(_DWORD *)(v12 + 8) = v13;
    if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
      sub_1800FC010((__int64)Src, v12);
  }
  if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
  {
    v14 = (_WORD *)sub_180063B6C(v12);
    v15 = v14;
    if ( (Src[28] & 0x8000000) != 0 )
      *v14 = sub_1800244C4(1u);
    else
      *v14 = 0;
    v16 = v15[1];
  }
  else
  {
    v16 = *(unsigned __int8 *)(v12 + 11);
  }
  v21 = v16;
  if ( Src[31] )
  {
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
    *(_DWORD *)(v12 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    sub_18010120C((_DWORD)Src);
  v17 = NtCurrentPeb();
  Heap = v20;
  if ( v20 == (PVOID)qword_18015A7C0 )
  {
    if ( v17->Ldr )
    {
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      Heap = v20;
    }
    else
    {
      DbgPrint("HEAP: ");
    }
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)qword_18015A7C0, a3);
LABEL_33:
    sub_1801011EC();
    goto LABEL_47;
  }
  if ( (v17->NtGlobalFlag & 0x800) != 0 && v21 && v21 == word_18015A7C8 && *((_WORD *)Src + 104) == word_18015A7CA )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    v18 = sub_1800EC9CC((__int64)Src, v21);
    Heap = v20;
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v20, a3, v18);
    goto LABEL_33;
  }
LABEL_47:
  if ( v19 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return Heap;
}

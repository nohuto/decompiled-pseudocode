/*
 * XREFs of sub_180090C78 @ 0x180090C78
 * Callers:
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     sub_1800774AC @ 0x1800774AC (sub_1800774AC.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F0878 @ 0x1800F0878 (sub_1800F0878.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

__int64 __fastcall sub_180090C78(_DWORD *Src, int a2, unsigned __int64 a3)
{
  unsigned __int16 v6; // ax
  struct _PEB *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 Heap; // rdi
  __int64 v14; // rdi
  _WORD *v15; // rax
  _WORD *v16; // r14
  char v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v18 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return _guard_dispatch_icall_fptr();
  if ( !sub_18001F9B0(Src, "RtlAllocateHeap") )
    goto LABEL_28;
  v9 = Src[29] | 0x10000100 | a2;
  v10 = a3;
  if ( !a3 )
    v10 = 1LL;
  v11 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v10);
  if ( v11 < 0x20 )
    v11 = 32LL;
  v12 = v11 + 16;
  if ( v12 < a3 || v12 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_28:
    v19 = 0LL;
    goto LABEL_47;
  }
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v18 = 1;
    v9 |= 1u;
  }
  sub_180090710((__int64)Src, 0);
  Heap = RtlAllocateHeap((__int64)Src, v9, a3);
  v19 = Heap;
  sub_1800610C8((void **)Src, 1);
  if ( !Heap )
    goto LABEL_47;
  v14 = Heap - 16;
  _m_prefetchw((const void *)v14);
  if ( *(_BYTE *)(v14 + 15) == 5 )
    v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v14 + 8) ^= Src[34];
    if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
      sub_1800FDA30(Src, v14);
  }
  if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
  {
    v15 = (_WORD *)sub_1800774AC(v14);
    v16 = v15;
    if ( (Src[28] & 0x8000000) != 0 )
      *v15 = sub_18000F3C8(1u);
    else
      *v15 = 0;
    v6 = v16[1];
  }
  else
  {
    v6 = *(unsigned __int8 *)(v14 + 11);
  }
  v20 = v6;
  if ( Src[31] )
  {
    *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
    *(_DWORD *)(v14 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    sub_180090710((__int64)Src, 0);
  v7 = NtCurrentPeb();
  if ( v19 == qword_180159660 )
  {
    if ( v7->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)qword_180159660, a3);
    goto LABEL_17;
  }
  if ( (v7->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_180159668 && *((_WORD *)Src + 104) == word_18015966A )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    v8 = sub_1800F0878(Src, v20);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v19, a3, v8);
LABEL_17:
    sub_180102310();
  }
LABEL_47:
  if ( v18 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v19;
}

/*
 * XREFs of sub_180101730 @ 0x180101730
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 * Callees:
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     sub_1800774AC @ 0x1800774AC (sub_1800774AC.c)
 *     sub_180078084 @ 0x180078084 (sub_180078084.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F0878 @ 0x1800F0878 (sub_1800F0878.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

char *__fastcall sub_180101730(_DWORD *BaseAddress, int a2, char *a3, SIZE_T a4)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  __int16 v14; // r8
  unsigned __int16 v15; // dx
  wchar_t *v16; // rax
  char *Heap; // rax
  unsigned __int64 v18; // rsi
  _WORD *v19; // rax
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
  if ( (BaseAddress[29] & 0x1000000) != 0 )
    return (char *)_guard_dispatch_icall_fptr();
  if ( !sub_18001F9B0(BaseAddress, "RtlReAllocateHeap") )
    goto LABEL_68;
  v9 = BaseAddress[29] | 0x10000100 | a2;
  Flags = v9;
  v10 = a4;
  if ( !a4 )
    v10 = 1LL;
  v11 = (*((_QWORD *)BaseAddress + 33) & (*((_QWORD *)BaseAddress + 32) + v10)) + 16;
  if ( v11 < a4 || v11 > *((_QWORD *)BaseAddress + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)BaseAddress + 25));
LABEL_68:
    v26 = 0LL;
    goto LABEL_69;
  }
  v25 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
    v24 = 1;
    Flags = v9 | 1;
  }
  sub_180090710((PVOID *)BaseAddress, 0);
  v12 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v27 = v12;
  if ( sub_180078084((unsigned __int64)BaseAddress, v12, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == (char *)qword_180159670 )
    {
      if ( v13->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_180159670, a4);
    }
    else
    {
      if ( (v13->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v14 = dword_180159678;
      if ( !dword_180159678 )
        goto LABEL_36;
      if ( BaseAddress[31] )
      {
        *(_DWORD *)(v27 + 8) ^= BaseAddress[34];
        if ( *(_BYTE *)(v27 + 11) != (*(_BYTE *)(v27 + 8) ^ (unsigned __int8)(*(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10))) )
        {
          sub_1800FDA30((__int64)BaseAddress, v27);
          v14 = dword_180159678;
        }
      }
      if ( (*(_BYTE *)(v27 + 10) & 2) != 0 )
        v15 = *(_WORD *)(sub_1800774AC(v27) + 2);
      else
        v15 = *(unsigned __int8 *)(v27 + 11);
      v25 = v15;
      if ( BaseAddress[31] )
      {
        *(_BYTE *)(v27 + 11) = *(_BYTE *)(v27 + 8) ^ *(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10);
        *(_DWORD *)(v27 + 8) ^= BaseAddress[34];
      }
      if ( !v15 || v15 != v14 || *((_WORD *)BaseAddress + 104) != HIWORD(dword_180159678) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v16 = sub_1800F0878((__int64)BaseAddress, v25);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, v16);
    }
    sub_180102310();
LABEL_36:
    Heap = (char *)RtlReAllocateHeap(BaseAddress, Flags, a3, a4);
    v26 = Heap;
    if ( Heap )
    {
      v18 = (unsigned __int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v18 -= 16LL * *(unsigned __int8 *)(v18 + 14);
      if ( BaseAddress[31] )
      {
        *(_DWORD *)(v18 + 8) ^= BaseAddress[34];
        if ( *(_BYTE *)(v18 + 11) != (*(_BYTE *)(v18 + 8) ^ (unsigned __int8)(*(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10))) )
          sub_1800FDA30((__int64)BaseAddress, v18);
      }
      if ( (*(_BYTE *)(v18 + 10) & 2) != 0 )
      {
        v19 = (_WORD *)sub_1800774AC(v18);
        v20 = v19;
        if ( (BaseAddress[28] & 0x8000000) != 0 )
          *v19 = sub_18000F3C8(1u);
        else
          *v19 = 0;
        v21 = v20[1];
      }
      else
      {
        v21 = *(unsigned __int8 *)(v18 + 11);
      }
      v25 = v21;
      if ( BaseAddress[31] )
      {
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(v18 + 8) ^ *(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10);
        *(_DWORD *)(v18 + 8) ^= BaseAddress[34];
      }
    }
    sub_1800610C8((PVOID *)BaseAddress, 1);
    sub_180090710((PVOID *)BaseAddress, 0);
  }
  if ( v26 )
  {
    v22 = NtCurrentPeb();
    if ( v26 == (char *)qword_180159670 )
    {
      if ( v22->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180159670, a4);
LABEL_57:
      sub_180102310();
      goto LABEL_69;
    }
    if ( (v22->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)BaseAddress + 104), v25) == dword_180159678 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v23 = sub_1800F0878((__int64)BaseAddress, v25);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v26, a4, v23);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v24 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
  return v26;
}

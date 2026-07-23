/*
 * XREFs of sub_18009100C @ 0x18009100C
 * Callers:
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
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

__int64 __fastcall sub_18009100C(PRTL_CRITICAL_SECTION *BaseAddress, int a2, char *a3)
{
  LOGICAL v6; // r14d
  unsigned __int16 v7; // dx
  __int16 v8; // r8
  __int64 v9; // rax
  int v10; // esi
  unsigned __int64 v11; // rdx
  struct _PEB *v12; // rax
  char v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v17; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v14 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return (unsigned __int8)_guard_dispatch_icall_fptr();
  if ( !sub_18001F9B0(BaseAddress, "RtlFreeHeap") )
  {
    v6 = 0;
    goto LABEL_34;
  }
  v10 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
  Flags = v10;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(BaseAddress[44]);
    v14 = 1;
    Flags = v10 | 1;
  }
  sub_180090710((PVOID *)BaseAddress, 0);
  v11 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
  v15 = v11;
  if ( !sub_180078084((unsigned __int64)BaseAddress, v11, "RtlFreeHeap") )
    goto LABEL_34;
  v12 = NtCurrentPeb();
  if ( a3 == (char *)qword_180159680 )
  {
    if ( v12->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_180159680);
  }
  else
  {
    if ( (v12->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_7;
    v8 = unk_180159688;
    if ( !unk_180159688 )
      goto LABEL_7;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v15 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
      {
        sub_1800FDA30(BaseAddress, v15);
        v8 = unk_180159688;
      }
    }
    if ( (*(_BYTE *)(v15 + 10) & 2) != 0 )
      v7 = *(_WORD *)(sub_1800774AC(v15) + 2);
    else
      v7 = *(unsigned __int8 *)(v15 + 11);
    v17 = v7;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
      *(_DWORD *)(v15 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    if ( !v7 || v7 != v8 || *((_WORD *)BaseAddress + 104) != word_18015968A )
      goto LABEL_7;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    v9 = sub_1800F0878(BaseAddress, v17);
    DbgPrint("About to free block at %p with tag %ws\n", a3, v9);
  }
  sub_180102310();
LABEL_7:
  v6 = RtlFreeHeap(BaseAddress, Flags, a3);
  sub_1800610C8((PVOID *)BaseAddress, 1);
  sub_180090710((PVOID *)BaseAddress, 0);
LABEL_34:
  if ( v14 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v6;
}

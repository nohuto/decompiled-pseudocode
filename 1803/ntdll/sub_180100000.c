/*
 * XREFs of sub_180100000 @ 0x180100000
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
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

__int64 __fastcall sub_180100000(PRTL_CRITICAL_SECTION *Src, int a2, char *a3)
{
  LOGICAL v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rdx
  struct _PEB *v10; // rax
  __int16 v11; // r8
  int v12; // edx
  unsigned __int16 v13; // cx
  wchar_t *v14; // rax
  char v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v18; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v15 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)_guard_dispatch_icall_fptr();
  if ( sub_18001FC58(Src, "RtlFreeHeap") )
  {
    v8 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    Flags = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v15 = 1;
      Flags = v8 | 1;
    }
    sub_18010120C((_DWORD)Src);
    v9 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    v16 = v9;
    if ( !sub_180072588((unsigned __int64)Src, v9, "RtlFreeHeap") )
      goto LABEL_34;
    v10 = NtCurrentPeb();
    if ( a3 == (char *)qword_18015A7E0 )
    {
      if ( v10->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_18015A7E0);
    }
    else
    {
      if ( (v10->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v11 = unk_18015A7E8;
      if ( !unk_18015A7E8 )
        goto LABEL_33;
      if ( *((_DWORD *)Src + 31) )
      {
        v12 = *(_DWORD *)(v16 + 8) ^ *((_DWORD *)Src + 34);
        *(_DWORD *)(v16 + 8) = v12;
        if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(BYTE1(v12) ^ BYTE2(v12))) )
        {
          sub_1800FC010((__int64)Src, v16);
          v11 = unk_18015A7E8;
        }
      }
      if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
        v13 = *(_WORD *)(sub_180063B6C(v16) + 2);
      else
        v13 = *(unsigned __int8 *)(v16 + 11);
      v18 = v13;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
        *(_DWORD *)(v16 + 8) ^= *((_DWORD *)Src + 34);
      }
      if ( !v13 || v13 != v11 || *((_WORD *)Src + 104) != word_18015A7EA )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v14 = sub_1800EC9CC((__int64)Src, v18);
      DbgPrint("About to free block at %p with tag %ws\n", a3, v14);
    }
    sub_1801011EC();
LABEL_33:
    v6 = RtlFreeHeap(Src, Flags, a3);
    sub_18010180C(Src);
    sub_18010120C((_DWORD)Src);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v15 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}

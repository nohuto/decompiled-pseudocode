/*
 * XREFs of sub_180022088 @ 0x180022088
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     sub_180006E54 @ 0x180006E54 (sub_180006E54.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     sub_1800FFDB0 @ 0x1800FFDB0 (sub_1800FFDB0.c)
 *     sub_1800FFE58 @ 0x1800FFE58 (sub_1800FFE58.c)
 *     sub_1800FFF00 @ 0x1800FFF00 (sub_1800FFF00.c)
 */

PSLIST_ENTRY __fastcall sub_180022088(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v6; // r8
  unsigned __int16 *v7; // rbx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  _DWORD *HotpatchInformation; // rax
  __int64 v12; // rdi
  PSLIST_ENTRY result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // r8d
  PSLIST_ENTRY v22; // rbp
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)a2;
  v6 = *(unsigned __int8 *)(a2 + 16) - 7 + 2LL;
  v7 = (unsigned __int16 *)(a1 + 48 * v6);
  if ( *(_WORD *)(v3 + 384) && (*(_BYTE *)(v3 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(v3 + 352));
    RtlLeaveCriticalSection(*(_QWORD *)(v3 + 352));
  }
  v8 = *v7;
  if ( v8 <= *((_DWORD *)v7 + 5) || v8 <= *((_DWORD *)v7 + 4) >> *((_DWORD *)v7 + 6) )
  {
    v9 = 1LL << *(_BYTE *)(a2 + 16);
    if ( v9 > 0xF0000 )
      v9 = 983040LL;
    v10 = v9 + *(unsigned __int16 *)(a2 + 18);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v10);
    HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
    if ( HotpatchInformation && *HotpatchInformation )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FFF00(*(_QWORD *)(a1 + 24), a2, v10, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    result = RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v7, (PSLIST_ENTRY)a2);
    ++v7[15];
  }
  else
  {
    v14 = 1LL << *(_BYTE *)(a2 + 16);
    if ( v14 > 0xF0000 )
      v14 = 983040LL;
    v29 = v14 + *(unsigned __int16 *)(a2 + 18);
    sub_180006E54(*(_QWORD *)(a1 + 24), a2, v6);
    result = (PSLIST_ENTRY)RtlGetCurrentServiceSessionId(v16, v15, v17, v18);
    v19 = 2147353472LL;
    if ( (_DWORD)result )
    {
      result = (PSLIST_ENTRY)NtCurrentPeb();
      v20 = (__int64)&result[9].Next[34].Next + 6;
    }
    else
    {
      v20 = 2147353472LL;
    }
    if ( *(_BYTE *)v20 )
    {
      result = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
        result = (PSLIST_ENTRY)sub_1800FFE58(*(_QWORD *)(a1 + 24), a2, v29, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    _InterlockedDecrement((volatile signed __int32 *)v7 + 4);
    if ( v8 )
    {
      result = RtlInterlockedPopEntrySList((PSLIST_HEADER)v7);
      v22 = result;
      if ( result )
      {
        v23 = 1LL << LOBYTE(result[1].Next);
        if ( v23 > 0xF0000 )
          v23 = 983040LL;
        v24 = v23 + WORD1(result[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v24);
        sub_180006E54(*(_QWORD *)(a1 + 24), (__int64)result, v21);
        result = (PSLIST_ENTRY)RtlGetCurrentServiceSessionId(v26, v25, v27, v28);
        if ( (_DWORD)result )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          v19 = (__int64)&result[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v19 )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
          {
            sub_1800FFDB0(*(_QWORD *)(a1 + 24), v22, v24, 0LL);
            result = (PSLIST_ENTRY)sub_1800FFE58(*(_QWORD *)(a1 + 24), v22, v24, 0LL);
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v7 + 4);
      }
    }
  }
  return result;
}

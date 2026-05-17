/*
 * XREFs of sub_180013AC8 @ 0x180013AC8
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180061A7C @ 0x180061A7C (sub_180061A7C.c)
 *     RtlInterlockedPopEntrySList @ 0x18009E550 (RtlInterlockedPopEntrySList.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     sub_1800FE73C @ 0x1800FE73C (sub_1800FE73C.c)
 *     sub_1800FE7E4 @ 0x1800FE7E4 (sub_1800FE7E4.c)
 *     sub_1800FE88C @ 0x1800FE88C (sub_1800FE88C.c)
 */

PSLIST_ENTRY __fastcall sub_180013AC8(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  unsigned __int16 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  _DWORD *HotpatchInformation; // rax
  __int64 v11; // rdi
  PSLIST_ENTRY result; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rcx
  PSLIST_ENTRY v19; // rbp
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *a2;
  v6 = (unsigned __int16 *)(a1 + 48 * (*((unsigned __int8 *)a2 + 16) - 5LL));
  if ( *(_WORD *)(v3 + 384) && (*(_BYTE *)(v3 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(v3 + 352));
    RtlLeaveCriticalSection(*(_QWORD *)(v3 + 352));
  }
  v7 = *v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v8 = 1LL << *((_BYTE *)a2 + 16);
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
    if ( HotpatchInformation && *HotpatchInformation )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FE88C(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    result = RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v6, (PSLIST_ENTRY)a2);
    ++v6[15];
  }
  else
  {
    v13 = 1LL << *((_BYTE *)a2 + 16);
    if ( v13 > 0xF0000 )
      v13 = 983040LL;
    v25 = v13 + *((unsigned __int16 *)a2 + 9);
    sub_180061A7C(*(_QWORD *)(a1 + 24), a2);
    result = (PSLIST_ENTRY)RtlGetCurrentServiceSessionId(v15, v14, v16);
    v17 = 2147353472LL;
    if ( (_DWORD)result )
    {
      result = (PSLIST_ENTRY)NtCurrentPeb();
      v18 = (__int64)&result[9].Next[34].Next + 6;
    }
    else
    {
      v18 = 2147353472LL;
    }
    if ( *(_BYTE *)v18 )
    {
      result = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
        result = (PSLIST_ENTRY)sub_1800FE7E4(*(_QWORD *)(a1 + 24), a2, v25, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
    if ( v7 )
    {
      result = RtlInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v19 = result;
      if ( result )
      {
        v20 = 1LL << LOBYTE(result[1].Next);
        if ( v20 > 0xF0000 )
          v20 = 983040LL;
        v21 = v20 + WORD1(result[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v21);
        sub_180061A7C(*(_QWORD *)(a1 + 24), result);
        result = (PSLIST_ENTRY)RtlGetCurrentServiceSessionId(v23, v22, v24);
        if ( (_DWORD)result )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          v17 = (__int64)&result[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v17 )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
          {
            sub_1800FE73C(*(_QWORD *)(a1 + 24), v19, v21, 0LL);
            result = (PSLIST_ENTRY)sub_1800FE7E4(*(_QWORD *)(a1 + 24), v19, v21, 0LL);
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
      }
    }
  }
  return result;
}

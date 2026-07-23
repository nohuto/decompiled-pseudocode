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

int __fastcall sub_180013AC8(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  unsigned __int16 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  PSILO_USER_SHARED_DATA SharedData; // rax
  __int64 UserModeGlobalLogger; // rdi
  PSLIST_ENTRY v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  unsigned __int64 v20; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *a2;
  v6 = (unsigned __int16 *)(a1 + 48 * (*((unsigned __int8 *)a2 + 16) - 5LL));
  if ( *(_WORD *)(v3 + 384) && (*(_BYTE *)(v3 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v3 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v3 + 352));
  }
  v7 = *v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v8 = 1LL << *((_BYTE *)a2 + 16);
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE88C(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v4 + 36));
    LODWORD(v12) = (unsigned int)RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v6, (PSLIST_ENTRY)a2);
    ++v6[15];
  }
  else
  {
    v13 = 1LL << *((_BYTE *)a2 + 16);
    if ( v13 > 0xF0000 )
      v13 = 983040LL;
    v20 = v13 + *((unsigned __int16 *)a2 + 9);
    sub_180061A7C(*(PVOID *)(a1 + 24), a2);
    LODWORD(v12) = RtlGetCurrentServiceSessionId();
    v14 = 2147353472LL;
    if ( (_DWORD)v12 )
    {
      v12 = (PSLIST_ENTRY)NtCurrentPeb();
      v15 = (__int64)&v12[9].Next[34].Next + 6;
    }
    else
    {
      v15 = 2147353472LL;
    }
    if ( *(_BYTE *)v15 )
    {
      v12 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v12[55].Next + 1) & 1) != 0 )
        LODWORD(v12) = sub_1800FE7E4(*(_QWORD *)(a1 + 24), a2, v20, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
    if ( v7 )
    {
      v12 = RtlInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v16 = v12;
      if ( v12 )
      {
        v17 = 1LL << LOBYTE(v12[1].Next);
        if ( v17 > 0xF0000 )
          v17 = 983040LL;
        v18 = v17 + WORD1(v12[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v18);
        sub_180061A7C(*(PVOID *)(a1 + 24), v12);
        LODWORD(v12) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v12 )
        {
          v12 = (PSLIST_ENTRY)NtCurrentPeb();
          v14 = (__int64)&v12[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v14 )
        {
          v12 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v12[55].Next + 1) & 1) != 0 )
          {
            sub_1800FE73C(*(_QWORD *)(a1 + 24), v16, v18, 0LL);
            LODWORD(v12) = sub_1800FE7E4(*(_QWORD *)(a1 + 24), v16, v18, 0LL);
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
      }
    }
  }
  return (int)v12;
}

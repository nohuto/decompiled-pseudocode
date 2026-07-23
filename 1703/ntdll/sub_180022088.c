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

int __fastcall sub_180022088(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v6; // r8
  unsigned __int16 *v7; // rbx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  PSILO_USER_SHARED_DATA SharedData; // rax
  __int64 UserModeGlobalLogger; // rdi
  PSLIST_ENTRY v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  ULONG v17; // r8d
  PSLIST_ENTRY v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r14
  unsigned __int64 v22; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *a2;
  v6 = *((unsigned __int8 *)a2 + 16) - 7 + 2LL;
  v7 = (unsigned __int16 *)(a1 + 48 * v6);
  if ( *(_WORD *)(v3 + 384) && (*(_BYTE *)(v3 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v3 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v3 + 352));
  }
  v8 = *v7;
  if ( v8 <= *((_DWORD *)v7 + 5) || v8 <= *((_DWORD *)v7 + 4) >> *((_DWORD *)v7 + 6) )
  {
    v9 = 1LL << *((_BYTE *)a2 + 16);
    if ( v9 > 0xF0000 )
      v9 = 983040LL;
    v10 = v9 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v10);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FFF00(*(_QWORD *)(a1 + 24), a2, v10, 16LL * *(unsigned __int16 *)(v4 + 36));
    LODWORD(v13) = (unsigned int)RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v7, (PSLIST_ENTRY)a2);
    ++v7[15];
  }
  else
  {
    v14 = 1LL << *((_BYTE *)a2 + 16);
    if ( v14 > 0xF0000 )
      v14 = 983040LL;
    v22 = v14 + *((unsigned __int16 *)a2 + 9);
    sub_180006E54(*(PVOID *)(a1 + 24), a2, v6);
    LODWORD(v13) = RtlGetCurrentServiceSessionId();
    v15 = 2147353472LL;
    if ( (_DWORD)v13 )
    {
      v13 = (PSLIST_ENTRY)NtCurrentPeb();
      v16 = (__int64)&v13[9].Next[34].Next + 6;
    }
    else
    {
      v16 = 2147353472LL;
    }
    if ( *(_BYTE *)v16 )
    {
      v13 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v13[55].Next + 1) & 1) != 0 )
        LODWORD(v13) = sub_1800FFE58(*(_QWORD *)(a1 + 24), a2, v22, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    _InterlockedDecrement((volatile signed __int32 *)v7 + 4);
    if ( v8 )
    {
      v13 = RtlInterlockedPopEntrySList((PSLIST_HEADER)v7);
      v18 = v13;
      if ( v13 )
      {
        v19 = 1LL << LOBYTE(v13[1].Next);
        if ( v19 > 0xF0000 )
          v19 = 983040LL;
        v20 = v19 + WORD1(v13[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v20);
        sub_180006E54(*(PVOID *)(a1 + 24), v13, v17);
        LODWORD(v13) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v13 )
        {
          v13 = (PSLIST_ENTRY)NtCurrentPeb();
          v15 = (__int64)&v13[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v15 )
        {
          v13 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v13[55].Next + 1) & 1) != 0 )
          {
            sub_1800FFDB0(*(_QWORD *)(a1 + 24), v18, v20, 0LL);
            LODWORD(v13) = sub_1800FFE58(*(_QWORD *)(a1 + 24), v18, v20, 0LL);
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v7 + 4);
      }
    }
  }
  return (int)v13;
}

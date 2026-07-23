/*
 * XREFs of sub_18002F644 @ 0x18002F644
 * Callers:
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     sub_1800751BC @ 0x1800751BC (sub_1800751BC.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 *     sub_1800FFDB0 @ 0x1800FFDB0 (sub_1800FFDB0.c)
 */

__int64 __fastcall sub_18002F644(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rbx
  PSLIST_ENTRY v10; // r10
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v16; // edx
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // eax

  v6 = a2;
  v7 = a2 - 7;
  v8 = 6LL * v7;
  v9 = a1 + 48LL * v7;
  ++*(_WORD *)(v9 + 124);
  v10 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(v9 + 96));
  if ( v10 )
  {
    ++*(_WORD *)(v9 + 128);
LABEL_3:
    v11 = (__int64)v10;
    v12 = 1LL << LOBYTE(v10[1].Next);
    if ( v12 > 0xF0000 )
      v12 = 983040LL;
    v13 = v12 + WORD1(v10[1].Next);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FFDB0(*(_QWORD *)(a1 + 24), v10, v13, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v13);
    goto LABEL_9;
  }
  if ( a2 > 7u )
  {
    v10 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (v6 - 8 + 2LL)));
    if ( v10 )
      goto LABEL_3;
  }
  v11 = sub_1800751BC(*(PVOID *)(a1 + 24));
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8 * v8 + 112));
LABEL_9:
  v16 = *(unsigned __int16 *)(v9 + 124);
  if ( v16 > 0x40 )
  {
    if ( v16 < *(unsigned __int16 *)(v9 + 126) + (*(unsigned __int16 *)(v9 + 126) >> 1)
      && *(unsigned __int16 *)(v9 + 128) < v16 - (v16 >> 1) )
    {
      v18 = *(_DWORD *)(v9 + 116);
      if ( v18 < 2 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 116), v18 + 1, v18);
      }
      else
      {
        v19 = *(_DWORD *)(v9 + 120);
        if ( v19 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 120), v19 - 1, v19);
      }
    }
    *(_WORD *)(v9 + 124) = 0;
    *(_WORD *)(v9 + 126) = 0;
    *(_WORD *)(v9 + 128) = 0;
  }
  return v11;
}

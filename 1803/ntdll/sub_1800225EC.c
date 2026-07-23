/*
 * XREFs of sub_1800225EC @ 0x1800225EC
 * Callers:
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 * Callees:
 *     sub_180022498 @ 0x180022498 (sub_180022498.c)
 *     RtlInterlockedPopEntrySList @ 0x18009E550 (RtlInterlockedPopEntrySList.c)
 *     sub_1800FE73C @ 0x1800FE73C (sub_1800FE73C.c)
 */

_BYTE *__fastcall sub_1800225EC(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  __int64 v8; // rbx
  _BYTE *v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v14; // edx
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // eax

  v8 = a1 + 48 * (a2 - 5LL);
  ++*(_WORD *)(v8 + 28);
  v9 = RtlInterlockedPopEntrySList((PSLIST_HEADER)v8);
  if ( v9 )
  {
    ++*(_WORD *)(v8 + 32);
LABEL_3:
    v10 = 1LL << v9[16];
    if ( v10 > 0xF0000 )
      v10 = 983040LL;
    v11 = v10 + *((unsigned __int16 *)v9 + 9);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE73C(*(_QWORD *)(a1 + 24), v9, v11, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v11);
    goto LABEL_9;
  }
  if ( a2 > 7u )
  {
    v9 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (a2 - 6LL)));
    if ( v9 )
      goto LABEL_3;
  }
  v9 = sub_180022498(*(PRTL_CRITICAL_SECTION **)(a1 + 24), a2, a3, a4);
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48LL * a2 - 224));
LABEL_9:
  v14 = *(unsigned __int16 *)(v8 + 28);
  if ( v14 > 0x40 )
  {
    if ( v14 < *(unsigned __int16 *)(v8 + 30) + (*(unsigned __int16 *)(v8 + 30) >> 1)
      && *(unsigned __int16 *)(v8 + 32) < v14 - (v14 >> 1) )
    {
      v16 = *(_DWORD *)(v8 + 20);
      if ( v16 < 2 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 20), v16 + 1, v16);
      }
      else
      {
        v17 = *(_DWORD *)(v8 + 24);
        if ( v17 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), v17 - 1, v17);
      }
    }
    *(_WORD *)(v8 + 28) = 0;
    *(_WORD *)(v8 + 30) = 0;
    *(_WORD *)(v8 + 32) = 0;
  }
  return v9;
}

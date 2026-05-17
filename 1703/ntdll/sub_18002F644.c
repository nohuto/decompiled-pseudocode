/*
 * XREFs of sub_18002F644 @ 0x18002F644
 * Callers:
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     sub_1800751BC @ 0x1800751BC (sub_1800751BC.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 *     sub_1800FFDB0 @ 0x1800FFDB0 (sub_1800FFDB0.c)
 */

__int64 __fastcall sub_18002F644(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  int v8; // r14d
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r9
  PSLIST_ENTRY v14; // r10
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  _DWORD *HotpatchInformation; // rcx
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned __int32 v22; // eax
  unsigned __int32 v23; // eax

  v8 = a2;
  v9 = a2 - 7;
  v10 = 6LL * v9;
  v11 = a1 + 48LL * v9;
  ++*(_WORD *)(v11 + 124);
  v14 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(v11 + 96));
  if ( v14 )
  {
    ++*(_WORD *)(v11 + 128);
LABEL_3:
    v15 = (__int64)v14;
    v16 = 1LL << LOBYTE(v14[1].Next);
    if ( v16 > 0xF0000 )
      v16 = 983040LL;
    v17 = v16 + WORD1(v14[1].Next);
    HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
    if ( HotpatchInformation && *HotpatchInformation )
      v19 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v19 = 2147353472LL;
    if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FFDB0(*(_QWORD *)(a1 + 24), v14, v17, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v17);
    goto LABEL_9;
  }
  if ( a2 > 7u )
  {
    v14 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (v8 - 8 + 2LL)));
    if ( v14 )
      goto LABEL_3;
  }
  LOBYTE(v13) = a4;
  LOBYTE(v12) = a2;
  v15 = sub_1800751BC(*(_QWORD *)(a1 + 24), v12, a3, v13);
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8 * v10 + 112));
LABEL_9:
  v20 = *(unsigned __int16 *)(v11 + 124);
  if ( v20 > 0x40 )
  {
    if ( v20 < *(unsigned __int16 *)(v11 + 126) + (*(unsigned __int16 *)(v11 + 126) >> 1)
      && *(unsigned __int16 *)(v11 + 128) < v20 - (v20 >> 1) )
    {
      v22 = *(_DWORD *)(v11 + 116);
      if ( v22 < 2 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 116), v22 + 1, v22);
      }
      else
      {
        v23 = *(_DWORD *)(v11 + 120);
        if ( v23 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 120), v23 - 1, v23);
      }
    }
    *(_WORD *)(v11 + 124) = 0;
    *(_WORD *)(v11 + 126) = 0;
    *(_WORD *)(v11 + 128) = 0;
  }
  return v15;
}

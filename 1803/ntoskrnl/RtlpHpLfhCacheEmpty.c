/*
 * XREFs of RtlpHpLfhCacheEmpty @ 0x14029A380
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x14029A4F8 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x14029B84C (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 */

PSLIST_ENTRY __fastcall RtlpHpLfhCacheEmpty(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdi
  _QWORD *v8; // rbp

  v2 = 0;
  v4 = 0LL;
  do
  {
    result = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 16 * v4));
    p_Next = &result->Next;
    while ( 1 )
    {
      v8 = p_Next;
      if ( !p_Next )
        break;
      p_Next = (_QWORD *)*p_Next;
      if ( *((_BYTE *)v8 + 45) > 1u )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(a2 + 72) + 24LL),
          -(__int64)((unsigned __int64)((unsigned int)RtlpHpLfhSubsegmentCountEmptyUnits(v8) << *((_BYTE *)v8 + 44)) >> 12));
      result = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD, __int64))(a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a2 + 16)))(
                               *(_QWORD *)a2,
                               v8,
                               (unsigned int)(1 << (v2 + 12)),
                               1LL);
    }
    ++v2;
    ++v4;
  }
  while ( v2 < 7 );
  return result;
}

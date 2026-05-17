/*
 * XREFs of RtlpHpLfhCacheEmpty @ 0x180079758
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x18004954C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhContextCleanup @ 0x180061780 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x18004A2A4 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3B90 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpLfhCacheEmpty(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbp

  v3 = 0;
  v5 = 0LL;
  do
  {
    result = RtlpInterlockedFlushSList(a1 + 16 * v5);
    v9 = (_QWORD *)result;
    while ( 1 )
    {
      v10 = (__int64)v9;
      if ( !v9 )
        break;
      v9 = (_QWORD *)*v9;
      if ( *(_BYTE *)(v10 + 45) > 1u )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(a2 + 64) + 24LL),
          -(__int64)((unsigned __int64)((unsigned int)RtlpHpLfhSubsegmentCountEmptyUnits(v10) << *(_BYTE *)(v10 + 44)) >> 12));
      result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a2 ^ RtlpHeapKey ^ *(_QWORD *)(a2 + 16)))(
                 *(_QWORD *)a2,
                 v10,
                 (unsigned int)(1 << (v3 + 12)),
                 a3);
    }
    ++v3;
    ++v5;
  }
  while ( v3 < 7 );
  return result;
}

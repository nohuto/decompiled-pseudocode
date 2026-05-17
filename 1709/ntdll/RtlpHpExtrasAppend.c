/*
 * XREFs of RtlpHpExtrasAppend @ 0x180102C7C
 * Callers:
 *     RtlpHpAllocateHeap @ 0x18006F284 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasSetPresent @ 0x1800493D8 (RtlpHpExtrasSetPresent.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasAppend(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        __int16 a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (a6 & 0x10000000) != 0 )
  {
    *(_QWORD *)(a2 + a3) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a2 + a3 + 8) = 0xABABABABABABABABuLL;
  }
  v7 = 0LL;
  if ( (a6 & 0x20000F08) != 0 )
  {
    v8 = a2 + a3 + 16;
    if ( (a6 & 0x10000000) == 0 )
      v8 = a2 + a3;
    v7 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_BYTE *)(v7 + 2) &= 0xFu;
    *(_BYTE *)(v7 + 2) |= 16 * (BYTE1(a6) & 0xFE);
    *(_BYTE *)(v7 + 3) = a5 >> 4;
    *(_WORD *)v7 = a7;
    _InterlockedOr(v10, 0);
    RtlpHpExtrasSetPresent(a1, a2, a6);
  }
  return v7;
}

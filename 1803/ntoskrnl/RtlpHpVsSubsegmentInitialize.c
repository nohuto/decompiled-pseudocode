/*
 * XREFs of RtlpHpVsSubsegmentInitialize @ 0x1400AC7D8
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x1400AB17C (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentInitialize(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 result; // rax

  v2 = (unsigned __int64)(a2 - 48) >> 4;
  memset((void *)a1, 0, 0x28uLL);
  *(_QWORD *)(a1 + 16) = 1LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_WORD *)(a1 + 32) = v2;
  *(_WORD *)(a1 + 34) = v2 ^ 0xABED;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 50) = (unsigned __int16)v2;
  result = (a1 + 48) ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = result;
  return result;
}

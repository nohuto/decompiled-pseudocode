/*
 * XREFs of PpmUpdateTimeAccumulation @ 0x14008A9C4
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x14008A990 (PpmContinueActiveTimeAccumulation.c)
 * Callees:
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmUpdateTimeAccumulation(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  result = __rdtsc();
  v7 = result;
  if ( (*(_QWORD *)(a1 + 25576) & 0x8000000000LL) != 0 )
  {
    result = __readmsr(0xDB2u);
    v8 = result;
  }
  else
  {
    v8 = 0LL;
  }
  if ( a3 )
  {
    v9 = a2 - *(_QWORD *)(a1 + 24048);
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24064), a2 - *(_QWORD *)(a1 + 24048));
    if ( (*(_QWORD *)(a1 + 25576) & 0x8000000000LL) != 0 )
    {
      result = PpmConvertTime(v9, v7 - *(_QWORD *)(a1 + 24016), v8 - *(_QWORD *)(a1 + 24128));
      *(_QWORD *)(a1 + 24136) += result;
    }
  }
  *(_QWORD *)(a1 + 24048) = a2;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a1 + 24016);
    if ( v7 > v10 )
    {
      result = v7 - v10;
      *(_QWORD *)(a1 + 24024) += v7 - v10;
    }
  }
  *(_QWORD *)(a1 + 24016) = v7;
  if ( (*(_QWORD *)(a1 + 25576) & 0x8000000000LL) != 0 )
    *(_QWORD *)(a1 + 24128) = v8;
  return result;
}

/*
 * XREFs of KiIpiWaitForRequestBarrier @ 0x140040C60
 * Callers:
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     KxFlushMultipleTb @ 0x1400D8FB0 (KxFlushMultipleTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiIpiWaitForRequestBarrier(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // ebx

  result = *(unsigned int *)(a1 + 11648);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a1 + 11648) )
  {
    if ( (++i & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(i);
  }
  return result;
}

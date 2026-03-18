/*
 * XREFs of KiIpiWaitForRequestBarrier @ 0x140038E00
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     KxFlushEntireTb @ 0x140034BE0 (KxFlushEntireTb.c)
 *     KxFlushMultipleTb @ 0x140037C30 (KxFlushMultipleTb.c)
 *     KiIpiSendRequestEx @ 0x140038D54 (KiIpiSendRequestEx.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
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

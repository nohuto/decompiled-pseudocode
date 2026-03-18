/*
 * XREFs of KiIpiSendRequestEx @ 0x140038D54
 * Callers:
 *     KxFlushEntireTb @ 0x140034BE0 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1400394C0 (KxFlushNonGlobalTb.c)
 *     KxFlushSingleTb @ 0x14003B08C (KxFlushSingleTb.c)
 *     KeInvalidateAllCaches @ 0x14016D5F0 (KeInvalidateAllCaches.c)
 *     KeInvalidateRangeAllCaches @ 0x140245E50 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400362B0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140037D50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiWaitForRequestBarrier @ 0x140038E00 (KiIpiWaitForRequestBarrier.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void (__fastcall *__fastcall KiIpiSendRequestEx(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64),
        __int64 a8))(__int64)
{
  unsigned __int16 *v9; // r11
  void (__fastcall *result)(__int64); // rax

  v9 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
    {
LABEL_3:
      KiIpiSendRequest(a1, a2, v9, a4, a5, a6);
      if ( a7 )
        a7(a8);
      return (void (__fastcall *)(__int64))KiIpiWaitForRequestBarrier(a1);
    }
  }
  else if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  result = a7;
  if ( a7 )
    return (void (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64))a7)(a8);
  return result;
}

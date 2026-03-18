/*
 * XREFs of KiIpiSendRequestEx @ 0x14005B510
 * Callers:
 *     KxFlushNonGlobalTb @ 0x14005B3D0 (KxFlushNonGlobalTb.c)
 *     KxFlushSingleTb @ 0x1400CA228 (KxFlushSingleTb.c)
 *     KeInvalidateAllCaches @ 0x140137470 (KeInvalidateAllCaches.c)
 *     KxFlushEntireTb @ 0x140143A74 (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x140208220 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x14005B5C0 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiWaitForRequestBarrier @ 0x14005B790 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x14005B830 (KiIpiSendRequest.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(_QWORD),
        __int64 a8))(_QWORD)
{
  int v9; // edi
  __int64 (__fastcall *result)(_QWORD); // rax

  v9 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
LABEL_3:
      result = a7;
      if ( a7 )
        return (__int64 (__fastcall *)(_QWORD))a7(a8);
      return result;
    }
  }
  else if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  KiIpiSendRequest(a1, a2, v9, a4, a5, a6);
  if ( a7 )
    a7(a8);
  return (__int64 (__fastcall *)(_QWORD))KiIpiWaitForRequestBarrier(a1);
}

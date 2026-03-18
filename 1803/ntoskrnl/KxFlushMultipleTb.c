/*
 * XREFs of KxFlushMultipleTb @ 0x140037C30
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KiIpiSendRequest @ 0x1400362B0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140037D50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiWaitForRequestBarrier @ 0x140038E00 (KiIpiWaitForRequestBarrier.c)
 *     KiFlushRangeWorker @ 0x140117140 (KiFlushRangeWorker.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushMultipleTb(unsigned int a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // si
  unsigned int v5; // ebp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 *v8; // r14
  unsigned int v9; // r11d
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-128h] BYREF
  __int128 v12; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int16 v13[88]; // [rsp+40h] [rbp-E8h] BYREF

  v4 = a1;
  v5 = 4;
  *((_QWORD *)&v12 + 1) = __PAIR64__(a3, a1);
  *(_QWORD *)&v12 = a2;
  if ( a4 == 1 )
    v5 = -2147483644;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a4 )
  {
    v8 = 0LL;
    v9 = 1;
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      goto LABEL_5;
LABEL_7:
    KiIpiSendRequest((__int64)CurrentPrcb, v9, v8, &v12, v4, v5);
    KiFlushRangeWorker(&v12);
    KiIpiWaitForRequestBarrier(CurrentPrcb);
    goto LABEL_6;
  }
  _InterlockedOr(v11, 0);
  KeCopyAffinityEx((__int64)v13, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
  v8 = v13;
  KeRemoveProcessorAffinityEx(v13, CurrentPrcb->Number);
  if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(CurrentPrcb, v13) )
    goto LABEL_7;
LABEL_5:
  KiFlushRangeWorker(&v12);
LABEL_6:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

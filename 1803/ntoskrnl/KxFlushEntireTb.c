/*
 * XREFs of KxFlushEntireTb @ 0x140034BE0
 * Callers:
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x14017D5B0 (KeFlushEntireTb.c)
 * Callees:
 *     KiFlushCurrentTbWorker @ 0x140034D80 (KiFlushCurrentTbWorker.c)
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KiIpiSendRequest @ 0x1400362B0 (KiIpiSendRequest.c)
 *     KiIpiSendRequestEx @ 0x140038D54 (KiIpiSendRequestEx.c)
 *     KiIpiWaitForRequestBarrier @ 0x140038E00 (KiIpiWaitForRequestBarrier.c)
 *     KxSetTimeStampBusy @ 0x1400BAA80 (KxSetTimeStampBusy.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1)
{
  bool v1; // al
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  __int64 result; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-108h] BYREF
  _WORD v9[88]; // [rsp+40h] [rbp-C8h] BYREF

  v1 = 1;
  v2 = 3LL;
  if ( a1 == 1 )
  {
    v2 = 2147483651LL;
  }
  else if ( !a1 )
  {
    v1 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( v1 )
  {
    if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx((unsigned int)KeGetCurrentPrcb(), 1, 0, 0, 0LL, v2, (__int64)KiFlushCurrentTbWorker, 0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v8, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx(v9, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(v9, CurrentPrcb->Number);
    v5 = 0;
    if ( v9[0] )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)&v9[4 * v5 + 4];
        if ( v6 )
        {
          if ( v5 != CurrentPrcb->Group || v6 != CurrentPrcb->GroupSetMember )
            break;
        }
        if ( ++v5 >= v9[0] )
          goto LABEL_8;
      }
      KiIpiSendRequest((_DWORD)CurrentPrcb, 0, (unsigned int)v9, 0, 0, v2);
      KiFlushCurrentTbWorker(0LL);
      KiIpiWaitForRequestBarrier(CurrentPrcb);
    }
    else
    {
LABEL_8:
      KiFlushCurrentTbWorker(0LL);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

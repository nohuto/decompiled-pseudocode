/*
 * XREFs of KeSetTimerEx @ 0x1400E2140
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertTimerTable @ 0x14006FA60 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x1400E2250 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x1400E22F0 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x14020CA7C (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v8; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  BOOLEAN v11; // al
  BOOLEAN v12; // r13
  int v13; // eax
  PKTIMER v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v8 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = KiCancelTimer(Timer, 0LL);
  Timer->Dpc = v8;
  Timer->Period = Period;
  v12 = v11;
  v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
          Timer,
          (LARGE_INTEGER)DueTime.QuadPart,
          0LL,
          &v18);
  v14 = Timer;
  v15 = (__int64)CurrentPrcb;
  if ( !v13 )
    goto LABEL_7;
  v16 = v18;
  Timer->Header.SignalState = 0;
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (__int64)Dpc, v16, 0LL) )
  {
    v14 = Timer;
    v15 = (__int64)CurrentPrcb;
LABEL_7:
    KiTimerWaitTest(v15, (__int64)v14, 0LL);
    goto LABEL_5;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, Dpc, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_5:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v12;
}

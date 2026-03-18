/*
 * XREFs of KeSetTimerEx @ 0x14005AD00
 * Callers:
 *     <none>
 * Callees:
 *     KiComputeDueTime @ 0x14005AE10 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x14005B820 (KiCancelTimer.c)
 *     KiInsertTimerTable @ 0x1400F87E0 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x14024ADF0 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v8; // rsi
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  BOOLEAN v11; // al
  BOOLEAN v12; // r13
  int v13; // eax
  PKTIMER v14; // rdx
  struct _KPRCB *v15; // rcx
  int v16; // r9d
  int v18; // [rsp+70h] [rbp+18h] BYREF

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
  v15 = CurrentPrcb;
  if ( !v13 )
    goto LABEL_7;
  v16 = v18;
  Timer->Header.SignalState = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)Dpc, v16, 0LL) )
  {
    v14 = Timer;
    v15 = CurrentPrcb;
LABEL_7:
    KiTimerWaitTest(v15, v14, 0LL);
    goto LABEL_5;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, Dpc, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_5:
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v12;
}

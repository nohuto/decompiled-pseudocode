/*
 * XREFs of KeSetCoalescableTimer @ 0x1400E3510
 * Callers:
 *     EtwpRequestFlushTimer @ 0x14002AE2C (EtwpRequestFlushTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x14002F8F0 (CcRescheduleLazyWriteScan.c)
 *     ExpTimerResume @ 0x140031708 (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x140037A54 (CmpCompleteLazyWrite.c)
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     PopFxPluginWork @ 0x1400685A0 (PopFxPluginWork.c)
 *     PopFxArmResidentTimer @ 0x140068BAC (PopFxArmResidentTimer.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14006B054 (PopFxScheduleDeviceIdleTimer.c)
 *     CmpArmLazyWriter @ 0x1400A8190 (CmpArmLazyWriter.c)
 *     ExpTimerDpcRoutine @ 0x140135DD0 (ExpTimerDpcRoutine.c)
 *     CcBcbProfiler @ 0x140173A20 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1401EF95C (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x14022E24C (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x14025D0A8 (ExpTimerAdjust.c)
 *     KiInitializeProcessor @ 0x140412130 (KiInitializeProcessor.c)
 *     sub_14041C010 @ 0x14041C010 (sub_14041C010.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1404590A8 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     PiDrvDbUnloadNode @ 0x140489BB8 (PiDrvDbUnloadNode.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405C0ED0 (ExpWorkerThreadBalanceManager.c)
 *     IopErrorLogQueueRequest @ 0x140690160 (IopErrorLogQueueRequest.c)
 *     AnFwProgressIndicatorTransition @ 0x140755324 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140758E44 (AnFwDisplayBackgroundUpdate.c)
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x140036264 (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400EC830 (KiInsertTimerTable.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiTraceSetTimer @ 0x1402064DC (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  PKDPC v5; // r12
  char v6; // si
  LARGE_INTEGER v8; // rbx
  _KDPC *v10; // rbp
  struct _KPRCB *CurrentPrcb; // r15
  BOOLEAN v12; // r13
  __int64 v13; // rcx
  LONGLONG v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // rsi
  unsigned int v18; // esi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r8
  __int64 Size; // rcx
  __int64 Processor; // rax
  volatile signed __int64 *v23; // r12
  ULONG v24; // eax
  int v25; // [rsp+30h] [rbp-A8h] BYREF
  int v26; // [rsp+34h] [rbp-A4h] BYREF
  int v27; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-9Ch]
  __int64 v29; // [rsp+40h] [rbp-98h]
  volatile signed __int64 *v30; // [rsp+48h] [rbp-90h]
  LONG LockNV; // [rsp+50h] [rbp-88h]
  PKDPC v32; // [rsp+68h] [rbp-70h]
  PKTIMER v33; // [rsp+70h] [rbp-68h] BYREF
  __int64 CurrentIrql; // [rsp+78h] [rbp-60h]
  _QWORD v35[2]; // [rsp+80h] [rbp-58h] BYREF

  v5 = Dpc;
  v6 = 0;
  v32 = Dpc;
  v8 = DueTime;
  if ( TolerableDelay )
  {
    v17 = 10000LL * TolerableDelay;
    if ( v17 > 0xFC0000 )
    {
      v19 = v17 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v20 = DueTime.QuadPart + v19;
        if ( (__int64)(DueTime.QuadPart + v19) < DueTime.QuadPart )
          v20 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v20 = DueTime.QuadPart - v19;
        if ( (__int64)(DueTime.QuadPart - v19) > DueTime.QuadPart )
          v20 = 0x8000000000000000uLL;
      }
      if ( Period )
      {
        v24 = -1;
        if ( Period + (int)v19 / 10000 >= Period )
          v24 = Period + (int)v19 / 10000;
        Period = v24;
      }
      LODWORD(v17) = 16515072;
      v8.QuadPart = v20;
    }
    v18 = (unsigned int)v17 >> 18;
    if ( v18 > 0x3F )
      LOBYTE(v18) = 63;
    v6 = 4 * v18;
  }
  v10 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                  (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                  KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( 1 )
  {
    v25 = 0;
    while ( _interlockedbittestandset(&Timer->Header.Lock, 7u) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( (Timer->Header.LockNV & 0x80u) != 0 );
    }
    if ( (Timer->Header.Reserved1 & 0xC0) == 0 )
      break;
    Size = Timer->Header.Size;
    Processor = Timer->Processor;
    v28 = Timer->Header.Size;
    v26 = 0;
    v23 = (volatile signed __int64 *)(KiProcessorBlock[Processor] + 13952 + 32 * (Size + 16));
    v29 = KiProcessorBlock[Processor] + 13952;
    v30 = v23;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *v23 );
    }
    v5 = v32;
    if ( (Timer->Header.Reserved1 & 0x80u) == 0 )
    {
      KiRemoveEntryTimer(v29, (__int64)Timer, v28);
      _InterlockedAnd64(v30, 0LL);
      _InterlockedAnd(&Timer->Header.Lock, 0xBFFFFFFF);
      v12 = 1;
      break;
    }
    _InterlockedAnd64(v30, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v29 + 8LL * (Timer->Header.Reserved1 & 0x3F)), 0LL) )
    {
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFFu);
      v12 = 1;
      break;
    }
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
    v27 = 0;
    while ( (Timer->Header.Reserved1 & 0x80u) != 0 )
      KeYieldProcessorEx(&v27);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v12 )
  {
    v33 = Timer;
    v35[0] = &v33;
    v35[1] = 8LL;
    EtwTraceKernelEvent((int)v35, 1, 0x40020000u, 3925, 1538);
  }
  Timer->Dpc = v10;
  Timer->Period = Period;
  LockNV = Timer->Header.LockNV;
  BYTE1(LockNV) = v6;
  if ( v8.HighPart >= 0 )
  {
    v6 |= 1u;
    BYTE1(LockNV) = v6;
    v8.QuadPart = MEMORY[0xFFFFF78000000014] - v8.QuadPart;
    if ( v8.HighPart >= 0 )
    {
      Timer->Header.LockNV = LockNV;
      Timer->DueTime.QuadPart = 0LL;
LABEL_24:
      KiTimerWaitTest(CurrentPrcb, Timer, 0LL);
      goto LABEL_12;
    }
  }
  v13 = 0LL;
  if ( (v6 & 0xFC) != 0 )
    v13 = (unsigned __int8)(v6 & 0xFC) << 16;
  HIBYTE(LockNV) |= 0x40u;
  v14 = MEMORY[0xFFFFF78000000008] - v8.QuadPart;
  Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - v8.QuadPart;
  v15 = (unsigned __int64)(v13 + v14) >> 18;
  BYTE2(LockNV) = v15;
  Timer->Header.LockNV = LockNV;
  Timer->Header.SignalState = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)v5, (unsigned __int8)v15, 0LL) )
    goto LABEL_24;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, v5, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_12:
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1LL, 0LL, CurrentIrql);
  return v12;
}

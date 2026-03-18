/*
 * XREFs of KiRestoreSetContextState @ 0x140182620
 * Callers:
 *     NtContinue @ 0x140181F30 (NtContinue.c)
 *     NtRaiseException @ 0x1401821D0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x140182930 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401830D0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140183320 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140183570 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401837C0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183A00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140185430 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140185950 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140185EF0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140186420 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401869B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140186F40 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401874D0 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140187A70 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140187EE0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140188ED0 (KxStartUserThread.c)
 *     KiNmiInterruptStart @ 0x14018C080 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14018CB00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018CFC0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14018E8C0 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14018F540 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14018FAC0 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x140191240 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140191EC0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140192180 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeContextToKframes @ 0x1401819C0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiUmsExit @ 0x1401928C0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

__int64 __fastcall KiRestoreSetContextState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  _DWORD *Object; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  __int64 v14; // [rsp+0h] [rbp-138h] BYREF

  __writecr8(1uLL);
  _enable();
  Object = KeGetCurrentThread()[1].WaitBlock[3].Object;
  KeContextToKframes(v5 - 128, (__int64)&v14, (__int64)Object, Object[12], 1LL);
  _disable();
  __writecr8(0LL);
  _interlockedbittestandreset(&KeGetCurrentThread()->Header.Lock, 0x1Bu);
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(CurrentThread) = 1;
      KiUmsExit(CurrentThread);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v8 = *(_QWORD *)(v5 - 48);
  v9 = *(_QWORD *)(v5 - 56);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  if ( _bittestandreset16(MK_FP(__GS__, 632LL), 2u) )
    __writemsr(0x49u, 1uLL);
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v9, v8, a5);
}

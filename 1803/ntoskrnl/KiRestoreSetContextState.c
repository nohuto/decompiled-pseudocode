/*
 * XREFs of KiRestoreSetContextState @ 0x1401ABCF0
 * Callers:
 *     NtContinue @ 0x1401AB600 (NtContinue.c)
 *     NtRaiseException @ 0x1401AB8A0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401AC000 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401AC7A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401AC9F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401ACC40 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401ACE90 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401AD0D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401AEAF0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401AF5C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401AFAF0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401B0080 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401B0610 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401B0BA0 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x1401B1140 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401B15B0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401B2630 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401B35C0 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x1401B5AC0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401B6540 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401B6A00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1401B8F80 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1401B9500 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401B9D00 (KiVirtualizationException.c)
 *     KiSystemCall64 @ 0x1401BB100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401BBD80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401BC040 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeContextToKframes @ 0x1401AB000 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiUmsExit @ 0x1401BC780 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
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

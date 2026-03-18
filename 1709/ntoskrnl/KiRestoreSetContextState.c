/*
 * XREFs of KiRestoreSetContextState @ 0x1401820A0
 * Callers:
 *     NtContinue @ 0x1401819B0 (NtContinue.c)
 *     NtRaiseException @ 0x140181C50 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401823B0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140182B50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140182DA0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140182FF0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140183240 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183480 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140184ED0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140187520 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140187990 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401889D0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140189960 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x14018BDC0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14018C840 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018CD00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14018F280 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14018F800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140190000 (KiVirtualizationException.c)
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140192080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140192340 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeContextToKframes @ 0x1401813C0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiUmsExit @ 0x140192A80 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
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

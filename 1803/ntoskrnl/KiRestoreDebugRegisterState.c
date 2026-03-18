/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1401AB3A0
 * Callers:
 *     NtContinue @ 0x1401AB600 (NtContinue.c)
 *     NtRaiseException @ 0x1401AB8A0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401AC000 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401AC7A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401AC9F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401ACC40 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401ACE90 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401AD0D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x1401AE100 (KiCallUserMode.c)
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
 *     <none>
 */

__int64 __fastcall KiRestoreDebugRegisterState()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx

  __writedr(7u, 0LL);
  v1 = v0[12];
  __writedr(0, v0[11]);
  __writedr(1u, v1);
  v2 = v0[14];
  __writedr(2u, v0[13]);
  __writedr(3u, v2);
  v3 = v0[16];
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v3);
  if ( (__readgsbyte(0x6422u) & 2) != 0 && (v3 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
  {
    if ( (v3 & 0x200) != 0 )
      LODWORD(result) = 2;
    if ( (v3 & 0x100) != 0 )
      LODWORD(result) = result | 1;
    v5 = result;
    v6 = __readmsr(0x1D9u);
    v7 = HIDWORD(v6);
    result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v7, result));
  }
  return result;
}

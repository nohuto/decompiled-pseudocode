/*
 * XREFs of KiRestoreDebugRegisterState @ 0x140181D20
 * Callers:
 *     NtContinue @ 0x140181F30 (NtContinue.c)
 *     NtRaiseException @ 0x1401821D0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140182930 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401830D0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140183320 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140183570 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401837C0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183A00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x140184A30 (KiCallUserMode.c)
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
  if ( (__readgsbyte(0x656Au) & 2) != 0 )
  {
    if ( (v3 & 0x200) != 0 )
      result = 2LL;
    if ( (v3 & 0x100) != 0 )
      result = (unsigned int)result | 1;
    if ( (_DWORD)result )
    {
      v5 = result;
      v6 = __readmsr(0x1D9u);
      v7 = HIDWORD(v6);
      result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v7, result));
    }
  }
  return result;
}

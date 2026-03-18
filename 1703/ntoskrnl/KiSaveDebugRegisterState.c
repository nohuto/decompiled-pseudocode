/*
 * XREFs of KiSaveDebugRegisterState @ 0x140181D90
 * Callers:
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
 *     KyStartUserThread @ 0x140188C40 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x14018B900 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14018BCC0 (KxDebugTrapOrFault.c)
 *     KiNmiInterruptStart @ 0x14018C080 (KiNmiInterruptStart.c)
 *     KiBreakpointTrap @ 0x14018C500 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14018C800 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14018CB00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018CFC0 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14018D440 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14018D700 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14018D9C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14018DC80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14018DF40 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14018E2C0 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14018E5C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14018E8C0 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14018EEC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14018F240 (KiAlignmentFault.c)
 *     KiMcheckAbort @ 0x14018F540 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14018FAC0 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x14018FF40 (KiXmmException.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401902C0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1401905C0 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1401908C0 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x140190DC0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140191240 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x14026DC80 (KiSystemCall32Shadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSaveDebugRegisterState()
{
  __int64 v0; // rbp
  KPCR *Pcr; // r9
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 KernelDr1; // rdx
  unsigned __int64 KernelDr3; // rdx
  unsigned __int64 KernelDr7; // rdx
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx

  Pcr = KeGetPcr();
  v2 = __readdr(0);
  v3 = __readdr(1u);
  *(_QWORD *)(v0 + 88) = v2;
  *(_QWORD *)(v0 + 96) = v3;
  v4 = __readdr(2u);
  v5 = __readdr(3u);
  *(_QWORD *)(v0 + 104) = v4;
  *(_QWORD *)(v0 + 112) = v5;
  v6 = __readdr(6u);
  v7 = __readdr(7u);
  *(_QWORD *)(v0 + 120) = v6;
  *(_QWORD *)(v0 + 128) = v7;
  result = 0LL;
  __writedr(7u, 0LL);
  if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 && (v7 & 0x300) != 0 )
  {
    v9 = KiLastBranchTOSMSR;
    if ( KiLastBranchTOSMSR )
    {
      v10 = __readmsr(KiLastBranchTOSMSR);
      v9 = v10;
    }
    v11 = __readmsr(v9 + KiLastBranchFromBaseMSR);
    *(_DWORD *)(v0 + 152) = v11;
    v12 = KiLastBranchToBaseMSR;
    *(_DWORD *)(v0 + 156) = HIDWORD(v11);
    *(_QWORD *)(v0 + 144) = __readmsr(v9 + v12);
    *(_QWORD *)(v0 + 168) = __readmsr(KiLastExceptionFromBaseMSR);
    *(_QWORD *)(v0 + 160) = __readmsr(KiLastExceptionToBaseMSR);
    v13 = __readmsr(0x1D9u);
    v14 = HIDWORD(v13);
    result = (unsigned int)v13 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v14, result));
  }
  if ( (Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr7 & 0x355) != 0 )
  {
    KernelDr1 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr1;
    __writedr(0, Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr0);
    __writedr(1u, KernelDr1);
    KernelDr3 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr3;
    __writedr(2u, Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr2);
    __writedr(3u, KernelDr3);
    KernelDr7 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr7;
    result = 0LL;
    __writedr(6u, 0LL);
    __writedr(7u, KernelDr7);
    if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 )
    {
      if ( (KernelDr7 & 0x200) != 0 )
        result = 2LL;
      if ( (KernelDr7 & 0x100) != 0 )
        result = (unsigned int)result | 1;
      if ( (_DWORD)result )
      {
        v18 = result;
        v19 = __readmsr(0x1D9u);
        v20 = HIDWORD(v19);
        result = v18 | (unsigned int)v19 & 0xFFFFFFFC;
        __writemsr(0x1D9u, __PAIR64__(v20, result));
      }
    }
  }
  return result;
}

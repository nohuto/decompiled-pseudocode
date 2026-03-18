/*
 * XREFs of KiFloatingErrorFault @ 0x14018EEC0
 * Callers:
 *     KiFloatingErrorFaultShadow @ 0x14026C880 (KiFloatingErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiFloatingErrorFault @ 0x14018EEC0 (KiFloatingErrorFault.c)
 *     KiBugCheckDispatch @ 0x140191B80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

void __fastcall __noreturn KiFloatingErrorFault(__int64 a1, unsigned __int64 Object)
{
  char v2; // fps
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v4; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  ULONG64 v6; // rax
  char v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  char v14; // [rsp+160h] [rbp+E0h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v16; // [rsp+170h] [rbp+F0h]
  __int16 v17; // [rsp+178h] [rbp+F8h]

  if ( (v16 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v4 = *(_QWORD *)&CurrentThread->Process[2].FreezeCount;
    __writegsqword(0x270u, v4);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v4 = 72LL;
      HIDWORD(Object) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(Object) = KeGetPcr()->Prcb.BpbState;
    if ( (Object & 8) != 0 )
    {
      Object = 0LL;
      v4 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (Object & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
        JUMPOUT(0x14018F0D8LL);
      _mm_lfence();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v4 = 3221225730LL;
      v6 = __readmsr(0xC0000102);
      Object = (unsigned __int64)HIDWORD(v6) << 32;
      if ( v6 >= MmUserProbeAddress )
        v6 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v6 )
      {
        Object = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(Object + 128) = v6;
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v4, Object);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v17 & 0x200) != 0 )
    _enable();
  if ( (v16 & 1) != 0 )
  {
    v10 = ~(v14 & 0x3F) & v2;
    v11 = 3221225616LL;
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 0x40) != 0 )
        v11 = 3221225618LL;
LABEL_32:
      KiExceptionDispatch(v11, 1LL, retaddr);
      goto LABEL_33;
    }
    v11 = 3221225614LL;
    if ( (v10 & 4) != 0 )
      goto LABEL_32;
    v11 = 3221225616LL;
    if ( (v10 & 2) != 0 )
      goto LABEL_32;
    v11 = 3221225617LL;
    if ( (v10 & 8) != 0 )
      goto LABEL_32;
    v11 = 3221225619LL;
    if ( (v10 & 0x10) != 0 )
      goto LABEL_32;
    v11 = 3221225615LL;
    if ( (v10 & 0x20) != 0 )
      goto LABEL_32;
  }
LABEL_33:
  v12 = __readcr4();
  v13 = __readcr0();
  KiBugCheckDispatch(127LL, 16LL, v13, v12);
}

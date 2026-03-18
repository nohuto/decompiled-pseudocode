/*
 * XREFs of KiSegmentNotPresentFault @ 0x1401B7980
 * Callers:
 *     KiSegmentNotPresentFaultShadow @ 0x1402CF680 (KiSegmentNotPresentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiSegmentNotPresentFault @ 0x1401B7980 (KiSegmentNotPresentFault.c)
 *     KiBugCheckDispatch @ 0x1401BBA40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

void __fastcall __noreturn KiSegmentNotPresentFault(__int64 a1, unsigned __int64 Object)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v3; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  ULONG64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+E0h]
  __int64 v10; // [rsp+168h] [rbp+E8h]
  char v11; // [rsp+170h] [rbp+F0h]
  __int16 v12; // [rsp+178h] [rbp+F8h]

  if ( (v11 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v3 = *(_QWORD *)&CurrentThread->Process[2].Spare2[7];
    __writegsqword(0x270u, v3);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v3 = 72LL;
      HIDWORD(Object) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(Object) = KeGetPcr()->Prcb.BpbState;
    if ( (Object & 8) != 0 )
    {
      Object = 0LL;
      v3 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (Object & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
        JUMPOUT(0x1401B7B94LL);
      _mm_lfence();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v3 = 3221225730LL;
      v5 = __readmsr(0xC0000102);
      Object = (unsigned __int64)HIDWORD(v5) << 32;
      if ( v5 >= MmUserProbeAddress )
        v5 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v5 )
      {
        Object = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(Object + 128) = v5;
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v3, Object);
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
  LOBYTE(v6) = (_BYTE)retaddr;
  if ( ((unsigned __int8)retaddr & 4) != 0 )
    _InterlockedExchange64(MK_FP(__GS__, 26344LL), 0LL);
  if ( (v12 & 0x200) != 0 )
    _enable();
  if ( (v6 & 4) != 0 )
    KiExceptionDispatch(268435462LL, 2LL, v10);
  if ( (v11 & 1) != 0 )
    KiExceptionDispatch(268435463LL, 2LL, v10);
  v7 = (unsigned int)retaddr;
  v8 = __readcr0();
  KiBugCheckDispatch(127LL, 11LL, v8, v7);
}

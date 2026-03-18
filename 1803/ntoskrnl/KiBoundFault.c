/*
 * XREFs of KiBoundFault @ 0x1401B6540
 * Callers:
 *     KiBoundFaultShadow @ 0x1402CF380 (KiBoundFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1401B6540 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1401BBA40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401BBD80 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x1401BC300 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401BC780 (KiUmsExit.c)
 *     KiHandleBound @ 0x1402410F0 (KiHandleBound.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

__int64 __fastcall KiBoundFault(int a1, unsigned __int64 Object, int a3, int a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v6; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  ULONG64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // rcx
  struct _KTHREAD *v14; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  char v19; // [rsp+20h] [rbp-60h]
  unsigned int v20; // [rsp+2Ch] [rbp-54h]
  int v22; // [rsp+40h] [rbp-40h]
  __int16 v25; // [rsp+100h] [rbp+80h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v27; // [rsp+170h] [rbp+F0h]
  __int16 v28; // [rsp+178h] [rbp+F8h]

  v22 = Object;
  if ( (v27 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)&CurrentThread->Process[2].Spare2[7];
    __writegsqword(0x270u, v6);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v6 = 72LL;
      HIDWORD(Object) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(Object) = KeGetPcr()->Prcb.BpbState;
    if ( (Object & 8) != 0 )
    {
      Object = 0LL;
      v6 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (Object & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
      {
        a4 = 1075537581;
        a3 = 1075537572;
        v22 = 1075537563;
        a1 = 1075537554;
        v19 = 119;
      }
      _mm_lfence();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v6 = 3221225730LL;
      v8 = __readmsr(0xC0000102);
      Object = (unsigned __int64)HIDWORD(v8) << 32;
      if ( v8 >= MmUserProbeAddress )
        v8 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v8 )
      {
        Object = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(Object + 128) = v8;
      }
    }
    v25 = 0;
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v6, Object);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v20 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v28 & 0x200) != 0 )
    _enable();
  if ( (v27 & 1) != 0 )
  {
    if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) )
      KiUmsTrapEntry();
    v9 = KiHandleBound();
    if ( v9 )
    {
      if ( v9 == 1 )
        goto LABEL_33;
      if ( v9 != 2 )
        KiBugCheckDispatch(127LL, 5LL, v11, v12);
      KiFastFailDispatch(3221226505LL, 1LL, retaddr, 28LL);
    }
  }
  KiExceptionDispatch(3221225612LL, 0LL, retaddr);
LABEL_33:
  _disable();
  if ( (v27 & 1) == 0 )
  {
    _mm_setcsr(v20);
    __asm { iretq }
  }
  if ( KeGetCurrentThread()->ApcState.UserApcPending )
  {
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
  }
  v13 = KeGetCurrentThread();
  if ( (v13->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v13, v10, v11, v12, v19);
  v14 = KeGetCurrentThread();
  if ( (v14->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v14->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v14 = KeGetCurrentThread();
    }
    if ( (v14->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v14) = 1;
      KiUmsExit(v14);
    }
  }
  _mm_setcsr(v20);
  if ( v25 )
    KiRestoreDebugRegisterState(v14);
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
  return KiKernelExit(a1, v22, a3, a4, a5);
}

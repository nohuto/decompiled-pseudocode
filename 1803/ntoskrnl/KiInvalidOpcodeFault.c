/*
 * XREFs of KiInvalidOpcodeFault @ 0x1401B6A00
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x1402CF400 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x1401B6A00 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401BC300 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401BC780 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

__int64 __fastcall KiInvalidOpcodeFault(int a1, unsigned __int64 Object, int a3, int a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v6; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  ULONG64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *v12; // rcx
  struct _KTHREAD *v13; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  char v18; // [rsp+20h] [rbp-60h]
  unsigned int v19; // [rsp+2Ch] [rbp-54h]
  int v21; // [rsp+40h] [rbp-40h]
  __int16 v24; // [rsp+100h] [rbp+80h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v26; // [rsp+170h] [rbp+F0h]
  __int16 v27; // [rsp+178h] [rbp+F8h]

  v21 = Object;
  if ( (v26 & 1) != 0 )
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
        a4 = 1075538797;
        a3 = 1075538788;
        v21 = 1075538779;
        a1 = 1075538770;
        v18 = 55;
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
    v24 = 0;
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
  v19 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v27 & 0x200) != 0 )
    _enable();
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (v26 & 1) != 0 )
    KiUmsTrapEntry();
  KiExceptionDispatch(268435458LL, 0LL, retaddr);
  _disable();
  if ( (v26 & 1) == 0 )
  {
    _mm_setcsr(v19);
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
  v12 = KeGetCurrentThread();
  if ( (v12->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v12, v9, v10, v11, v18);
  v13 = KeGetCurrentThread();
  if ( (v13->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v13->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v13 = KeGetCurrentThread();
    }
    if ( (v13->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v13) = 1;
      KiUmsExit(v13);
    }
  }
  _mm_setcsr(v19);
  if ( v24 )
    KiRestoreDebugRegisterState(v13);
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
  return KiKernelExit(a1, v21, a3, a4, a5);
}

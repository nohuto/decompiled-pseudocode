/*
 * XREFs of KiVirtualizationException @ 0x140190000
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140297B00 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x140190000 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x140191D40 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x140192A80 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x14020CF30 (KiEpfHandleNotification.c)
 */

__int64 __fastcall KiVirtualizationException(int a1, __int64 a2, int a3, int a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v6; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  _DWORD *VirtualApicAssist; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // rcx
  struct _KTHREAD *v14; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  unsigned int CurrentIrql; // [rsp+20h] [rbp-60h]
  unsigned int v20; // [rsp+2Ch] [rbp-54h]
  int v22; // [rsp+40h] [rbp-40h]
  __int16 v25; // [rsp+100h] [rbp+80h]
  char v26; // [rsp+170h] [rbp+F0h]
  __int16 v27; // [rsp+178h] [rbp+F8h]

  v22 = a2;
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
      HIDWORD(a2) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(a2) = KeGetPcr()->Prcb.BpbState;
    if ( (a2 & 8) != 0 )
    {
      a2 = 0LL;
      v6 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (a2 & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
      {
        a4 = 1075380589;
        a3 = 1075380580;
        v22 = 1075380571;
        a1 = 1075380562;
        LOBYTE(CurrentIrql) = 55;
      }
      _mm_lfence();
    }
    v25 = 0;
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v6, a2);
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
  VirtualApicAssist = KeGetPcr()->Prcb.VirtualApicAssist;
  if ( !VirtualApicAssist
    || VirtualApicAssist[17] != 1
    || (v27 & 0x200) == 0
    || (CurrentIrql = KeGetCurrentIrql(), (char)CurrentIrql >= 2) )
  {
    KiBugCheckDispatch(127LL, 32LL, (unsigned __int8)CurrentIrql, KeGetPcr()->Prcb.VirtualApicAssist);
  }
  __writecr8(2uLL);
  _enable();
  v9 = *((_QWORD *)VirtualApicAssist + 9);
  VirtualApicAssist[17] = 0;
  KiEpfHandleNotification(v9);
  _disable();
  __writecr8(CurrentIrql);
  if ( (v26 & 1) == 0 )
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
    KiRestoreSetContextState((__int64)v13, v10, v11, v12, CurrentIrql);
  v14 = KeGetCurrentThread();
  if ( (v14->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v14->Header.Size & 1) != 0 )
    {
      KiCopyCounters(v14, v10);
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

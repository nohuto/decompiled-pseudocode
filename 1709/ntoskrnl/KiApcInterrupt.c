/*
 * XREFs of KiApcInterrupt @ 0x140184ED0
 * Callers:
 *     KiApcInterruptShadow @ 0x140297B80 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140184ED0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140192A80 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

__int64 __fastcall KiApcInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v15; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  bool v17; // zf
  unsigned __int8 CurrentIrql; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *v22; // rcx
  struct _KTHREAD *v23; // rcx
  int v24; // r9d
  int v25; // r8d
  unsigned __int8 BpbUserSpecCtrl; // al
  _BYTE v30[360]; // [rsp+0h] [rbp-80h] BYREF
  char v31; // [rsp+170h] [rbp+F0h]

  v30[43] = 0;
  *(_QWORD *)&v30[48] = v5;
  *(_QWORD *)&v30[56] = a1;
  *(_QWORD *)&v30[64] = a2;
  *(_QWORD *)&v30[72] = a3;
  *(_QWORD *)&v30[80] = a4;
  *(_QWORD *)&v30[88] = v6;
  *(_QWORD *)&v30[96] = v7;
  if ( (v31 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)&CurrentThread->Process[2].Spare2[7];
    __writegsqword(0x270u, v15);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v15 = 72LL;
      HIDWORD(a2) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(a2) = KeGetPcr()->Prcb.BpbState;
    if ( (a2 & 8) != 0 )
    {
      a2 = 0LL;
      v15 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (a2 & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
      {
        *(_QWORD *)&v30[240] = 0x1401850F2LL;
        *(_QWORD *)&v30[232] = 0x1401850E9LL;
        *(_QWORD *)&v30[224] = 0x1401850E0LL;
        *(_QWORD *)&v30[216] = 0x1401850D7LL;
        *(_QWORD *)&v30[208] = 0x1401850CELL;
        *(_QWORD *)&v30[200] = 0x1401850C5LL;
        *(_QWORD *)&v30[192] = 0x1401850BCLL;
        *(_QWORD *)&v30[184] = 0x1401850B3LL;
        *(_QWORD *)&v30[176] = 0x1401850AALL;
        *(_QWORD *)&v30[168] = 0x1401850A1LL;
        *(_QWORD *)&v30[160] = 0x140185098LL;
        *(_QWORD *)&v30[152] = 0x14018508FLL;
        *(_QWORD *)&v30[144] = 0x140185086LL;
        *(_QWORD *)&v30[136] = 0x14018507DLL;
        *(_QWORD *)&v30[128] = 0x140185074LL;
        *(_QWORD *)&v30[120] = 0x14018506BLL;
        *(_QWORD *)&v30[112] = 0x140185062LL;
        *(_QWORD *)&v30[104] = 0x140185059LL;
        *(_QWORD *)&v30[96] = 0x140185050LL;
        *(_QWORD *)&v30[88] = 0x140185047LL;
        *(_QWORD *)&v30[80] = 0x14018503ELL;
        *(_QWORD *)&v30[72] = 0x140185035LL;
        *(_QWORD *)&v30[64] = 0x14018502CLL;
        *(_QWORD *)&v30[56] = 0x140185023LL;
        *(_QWORD *)&v30[48] = 0x14018501ALL;
        *(_QWORD *)&v30[40] = 0x140185011LL;
        *(_QWORD *)&v30[32] = 0x140185008LL;
        *(_QWORD *)&v30[24] = 0x140184FFFLL;
        *(_QWORD *)&v30[16] = 0x140184FF6LL;
        *(_QWORD *)&v30[8] = 0x140184FEDLL;
        *(_QWORD *)v30 = 0x140184FE4LL;
      }
      _mm_lfence();
    }
    v17 = (CurrentThread->Header.Reserved1 & 3) == 0;
    *(_WORD *)&v30[256] = 0;
    if ( !v17 )
      *(double *)&v8 = KiSaveDebugRegisterState(v15, a2);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  *(_DWORD *)&v30[44] = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  *(_OWORD *)&v30[112] = v8;
  *(_OWORD *)&v30[128] = v9;
  *(_OWORD *)&v30[144] = v10;
  *(_OWORD *)&v30[160] = v11;
  *(_OWORD *)&v30[176] = v12;
  *(_OWORD *)&v30[192] = v13;
  __incgsdword(0x5D00u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v30[41] = CurrentIrql;
  HalPerformEndOfInterrupt_0();
  _enable();
  if ( !KeGetPcr()->Prcb.IdleHalt )
    KiDeliverApc(0, 0, (_KTRAP_FRAME *)v30);
  _disable();
  __writecr8(v30[41]);
  _disable();
  if ( (v31 & 1) == 0 )
  {
    _mm_setcsr(*(unsigned int *)&v30[44]);
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
  v22 = KeGetCurrentThread();
  if ( (v22->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v22, v19, v20, v21, v30[32]);
  v23 = KeGetCurrentThread();
  if ( (v23->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v23->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v23 = KeGetCurrentThread();
    }
    if ( (v23->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v23) = 1;
      KiUmsExit(v23);
    }
  }
  _mm_setcsr(*(unsigned int *)&v30[44]);
  if ( *(_WORD *)&v30[256] )
    KiRestoreDebugRegisterState();
  v24 = *(_DWORD *)&v30[80];
  v25 = *(_DWORD *)&v30[72];
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
  return KiKernelExit(*(_DWORD *)&v30[56], *(_DWORD *)&v30[64], v25, v24, a5);
}

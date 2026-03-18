/*
 * XREFs of KiApcInterrupt @ 0x1401AEAF0
 * Callers:
 *     KiApcInterruptShadow @ 0x1402CFB80 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1401AEAF0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x1401BC780 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
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
  _QWORD v30[4]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v31; // [rsp+20h] [rbp-60h]
  __int64 v32; // [rsp+28h] [rbp-58h]
  __int64 v33; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+38h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  __int64 v38; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+68h] [rbp-18h]
  __int128 v41; // [rsp+70h] [rbp-10h]
  __int128 v42; // [rsp+80h] [rbp+0h]
  __int128 v43; // [rsp+90h] [rbp+10h]
  __int128 v44; // [rsp+A0h] [rbp+20h]
  __int128 v45; // [rsp+B0h] [rbp+30h]
  __int128 v46; // [rsp+C0h] [rbp+40h]
  __int64 v47; // [rsp+D0h] [rbp+50h]
  __int64 v48; // [rsp+D8h] [rbp+58h]
  __int64 v49; // [rsp+E0h] [rbp+60h]
  __int64 v50; // [rsp+E8h] [rbp+68h]
  __int64 v51; // [rsp+F0h] [rbp+70h]
  __int16 v52; // [rsp+100h] [rbp+80h]
  char v53; // [rsp+170h] [rbp+F0h]

  BYTE3(v32) = 0;
  v33 = v5;
  v34 = a1;
  v35 = a2;
  v36 = a3;
  v37 = a4;
  v38 = v6;
  v39 = v7;
  if ( (v53 & 1) != 0 )
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
        v51 = 0x1401AED12LL;
        v50 = 0x1401AED09LL;
        v49 = 0x1401AED00LL;
        v48 = 0x1401AECF7LL;
        v47 = 0x1401AECEELL;
        *((_QWORD *)&v46 + 1) = 0x1401AECE5LL;
        *(_QWORD *)&v46 = 0x1401AECDCLL;
        *((_QWORD *)&v45 + 1) = 0x1401AECD3LL;
        *(_QWORD *)&v45 = 0x1401AECCALL;
        *((_QWORD *)&v44 + 1) = 0x1401AECC1LL;
        *(_QWORD *)&v44 = 0x1401AECB8LL;
        *((_QWORD *)&v43 + 1) = 0x1401AECAFLL;
        *(_QWORD *)&v43 = 0x1401AECA6LL;
        *((_QWORD *)&v42 + 1) = 0x1401AEC9DLL;
        *(_QWORD *)&v42 = 0x1401AEC94LL;
        *((_QWORD *)&v41 + 1) = 0x1401AEC8BLL;
        *(_QWORD *)&v41 = 0x1401AEC82LL;
        v40 = 0x1401AEC79LL;
        v39 = 0x1401AEC70LL;
        v38 = 0x1401AEC67LL;
        v37 = 0x1401AEC5ELL;
        v36 = 0x1401AEC55LL;
        v35 = 0x1401AEC4CLL;
        v34 = 0x1401AEC43LL;
        v33 = 0x1401AEC3ALL;
        v32 = 0x1401AEC31LL;
        v31 = 0x1401AEC28LL;
        v30[3] = 0x1401AEC1FLL;
        v30[2] = 0x1401AEC16LL;
        v30[1] = 0x1401AEC0DLL;
        v30[0] = 0x1401AEC04LL;
      }
      _mm_lfence();
    }
    v17 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v52 = 0;
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
  HIDWORD(v32) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v41 = v8;
  v42 = v9;
  v43 = v10;
  v44 = v11;
  v45 = v12;
  v46 = v13;
  __incgsdword(0x5D00u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  BYTE1(v32) = CurrentIrql;
  HalPerformEndOfInterrupt_0();
  _enable();
  if ( !KeGetPcr()->Prcb.IdleHalt )
    KiDeliverApc(0, 0LL, (__int64)v30);
  _disable();
  __writecr8(BYTE1(v32));
  _disable();
  if ( (v53 & 1) == 0 )
  {
    _mm_setcsr(HIDWORD(v32));
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
    KiRestoreSetContextState((__int64)v22, v19, v20, v21, v31);
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
  _mm_setcsr(HIDWORD(v32));
  if ( v52 )
    KiRestoreDebugRegisterState();
  v24 = v37;
  v25 = v36;
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
  return KiKernelExit(v34, v35, v25, v24, a5);
}

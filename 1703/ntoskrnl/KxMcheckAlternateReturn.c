/*
 * XREFs of KxMcheckAlternateReturn @ 0x14018FAC0
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x14026CA00 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x14018FAC0 (KxMcheckAlternateReturn.c)
 *     KiUmsTrapEntry @ 0x140192440 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401928C0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x140207EF0 (KiMcheckAlternateReturn.c)
 */

__int64 __fastcall KxMcheckAlternateReturn(__int64 a1, unsigned __int64 Object, __int64 a3, __int64 a4, char a5)
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
  ULONG64 v17; // rax
  bool v18; // zf
  struct _KTHREAD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *v23; // rcx
  struct _KTHREAD *v24; // rcx
  int v25; // r9d
  int v26; // r8d
  unsigned __int8 BpbUserSpecCtrl; // al
  char v31[8]; // [rsp+0h] [rbp-90h] BYREF
  __int64 v32; // [rsp+8h] [rbp-88h]
  __int64 v33; // [rsp+10h] [rbp-80h]
  __int64 v34; // [rsp+18h] [rbp-78h]
  __int64 v35; // [rsp+20h] [rbp-70h]
  __int64 v36; // [rsp+28h] [rbp-68h]
  __int64 v37; // [rsp+30h] [rbp-60h]
  __int64 v38; // [rsp+38h] [rbp-58h]
  __int64 v39; // [rsp+40h] [rbp-50h]
  __int64 v40; // [rsp+48h] [rbp-48h]
  __int64 v41; // [rsp+50h] [rbp-40h]
  __int64 v42; // [rsp+58h] [rbp-38h]
  __int64 v43; // [rsp+60h] [rbp-30h]
  __int64 v44; // [rsp+68h] [rbp-28h]
  __int64 v45; // [rsp+70h] [rbp-20h]
  __int64 v46; // [rsp+78h] [rbp-18h]
  __int128 v47; // [rsp+80h] [rbp-10h]
  __int128 v48; // [rsp+90h] [rbp+0h]
  __int128 v49; // [rsp+A0h] [rbp+10h]
  __int128 v50; // [rsp+B0h] [rbp+20h]
  __int128 v51; // [rsp+C0h] [rbp+30h]
  __int128 v52; // [rsp+D0h] [rbp+40h]
  __int64 v53; // [rsp+E0h] [rbp+50h]
  __int64 v54; // [rsp+E8h] [rbp+58h]
  __int64 v55; // [rsp+F0h] [rbp+60h]
  __int64 v56; // [rsp+F8h] [rbp+68h]
  __int64 v57; // [rsp+100h] [rbp+70h]
  __int16 v58; // [rsp+110h] [rbp+80h]
  char v59; // [rsp+180h] [rbp+F0h]

  BYTE3(v38) = 1;
  v39 = v5;
  v40 = a1;
  v41 = Object;
  v42 = a3;
  v43 = a4;
  v44 = v6;
  v45 = v7;
  if ( (v59 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)&CurrentThread->Process[2].FreezeCount;
    __writegsqword(0x270u, v15);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v15 = 72LL;
      HIDWORD(Object) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(Object) = KeGetPcr()->Prcb.BpbState;
    if ( (Object & 8) != 0 )
    {
      Object = 0LL;
      v15 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (Object & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
      {
        v32 = 0x14018FBCALL;
        v57 = 0x14018FCE1LL;
        v56 = 0x14018FCD8LL;
        v55 = 0x14018FCCFLL;
        v54 = 0x14018FCC6LL;
        v53 = 0x14018FCBDLL;
        *((_QWORD *)&v52 + 1) = 0x14018FCB4LL;
        *(_QWORD *)&v52 = 0x14018FCABLL;
        *((_QWORD *)&v51 + 1) = 0x14018FCA2LL;
        *(_QWORD *)&v51 = 0x14018FC99LL;
        *((_QWORD *)&v50 + 1) = 0x14018FC90LL;
        *(_QWORD *)&v50 = 0x14018FC87LL;
        *((_QWORD *)&v49 + 1) = 0x14018FC7ELL;
        *(_QWORD *)&v49 = 0x14018FC75LL;
        *((_QWORD *)&v48 + 1) = 0x14018FC6CLL;
        *(_QWORD *)&v48 = 0x14018FC63LL;
        *((_QWORD *)&v47 + 1) = 0x14018FC5ALL;
        *(_QWORD *)&v47 = 0x14018FC51LL;
        v46 = 0x14018FC48LL;
        v45 = 0x14018FC3FLL;
        v44 = 0x14018FC36LL;
        v43 = 0x14018FC2DLL;
        v42 = 0x14018FC24LL;
        v41 = 0x14018FC1BLL;
        v40 = 0x14018FC12LL;
        v39 = 0x14018FC09LL;
        v38 = 0x14018FC00LL;
        v37 = 0x14018FBF7LL;
        v36 = 0x14018FBEELL;
        v35 = 0x14018FBE5LL;
        v34 = 0x14018FBDCLL;
        v33 = 0x14018FBD3LL;
      }
      _mm_lfence();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v15 = 3221225730LL;
      v17 = __readmsr(0xC0000102);
      Object = (unsigned __int64)HIDWORD(v17) << 32;
      if ( v17 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v17 )
      {
        Object = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(Object + 128) = v17;
      }
    }
    v18 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v58 = 0;
    if ( !v18 )
      *(double *)&v8 = KiSaveDebugRegisterState(v15, Object);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      Object = 0LL;
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    }
    else
    {
      _mm_lfence();
    }
  }
  HIDWORD(v38) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v47 = v8;
  v48 = v9;
  v49 = v10;
  v50 = v11;
  v51 = v12;
  v52 = v13;
  _enable();
  v19 = KeGetCurrentThread();
  if ( _bittest((const signed __int32 *)&v19->116, 8u) )
  {
    KiUmsTrapEntry();
    v19 = KeGetCurrentThread();
  }
  KiMcheckAlternateReturn(v31, Object, a3, v19);
  _disable();
  if ( (v59 & 1) == 0 )
  {
    _mm_setcsr(HIDWORD(v38));
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
  v23 = KeGetCurrentThread();
  if ( (v23->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v23, v20, v21, v22, v31[0]);
  v24 = KeGetCurrentThread();
  if ( (v24->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v24->Header.Size & 1) != 0 )
    {
      KiCopyCounters(v24, v20);
      v24 = KeGetCurrentThread();
    }
    if ( (v24->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v24) = 1;
      KiUmsExit(v24);
    }
  }
  _mm_setcsr(HIDWORD(v38));
  if ( v58 )
    KiRestoreDebugRegisterState(v24);
  v25 = v43;
  v26 = v42;
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
  return KiKernelExit(v40, v41, v26, v25, a5);
}

/*
 * XREFs of KiExceptionDispatch @ 0x1401BBAC0
 * Callers:
 *     KiDivideErrorFault @ 0x1401B5300 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401B56C0 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1401B5F40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1401B6240 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1401B6540 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401B6A00 (KiInvalidOpcodeFault.c)
 *     KiSegmentNotPresentFault @ 0x1401B7980 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1401B7D00 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1401B8000 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401B8900 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1401B8C80 (KiAlignmentFault.c)
 *     KiXmmException @ 0x1401B9980 (KiXmmException.c)
 *     KiRaiseAssertion @ 0x1401BA480 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1401BA780 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1401BAC80 (KiSystemCall32.c)
 *     KiSystemCall32Shadow @ 0x1402D0D00 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiUmsExceptionEntry @ 0x1401BC6C0 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x1401BC780 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

__int64 __fastcall KiExceptionDispatch(int a1, unsigned int a2, void *a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int128 v17; // xmm9
  __int128 v18; // xmm10
  __int128 v19; // xmm11
  __int128 v20; // xmm12
  __int128 v21; // xmm13
  __int128 v22; // xmm14
  __int128 v23; // xmm15
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  __int64 v35; // [rsp+0h] [rbp-1D8h] BYREF
  int v36; // [rsp+20h] [rbp-1B8h]
  int v37; // [rsp+28h] [rbp-1B0h]
  __int128 v38; // [rsp+30h] [rbp-1A8h]
  __int128 v39; // [rsp+40h] [rbp-198h]
  __int128 v40; // [rsp+50h] [rbp-188h]
  __int128 v41; // [rsp+60h] [rbp-178h]
  __int128 v42; // [rsp+70h] [rbp-168h]
  __int128 v43; // [rsp+80h] [rbp-158h]
  __int128 v44; // [rsp+90h] [rbp-148h]
  __int128 v45; // [rsp+A0h] [rbp-138h]
  __int128 v46; // [rsp+B0h] [rbp-128h]
  __int128 v47; // [rsp+C0h] [rbp-118h]
  int v48; // [rsp+D0h] [rbp-108h]
  int v49; // [rsp+D8h] [rbp-100h]
  int v50; // [rsp+E0h] [rbp-F8h]
  int v51; // [rsp+E8h] [rbp-F0h]
  int v52; // [rsp+F0h] [rbp-E8h]
  int v53; // [rsp+F8h] [rbp-E0h]
  __int64 v54; // [rsp+100h] [rbp-D8h]
  __int64 v55; // [rsp+108h] [rbp-D0h]
  __int64 v56; // [rsp+110h] [rbp-C8h]
  __int64 v57; // [rsp+118h] [rbp-C0h]
  __int64 v58; // [rsp+120h] [rbp-B8h]
  __int64 v59; // [rsp+128h] [rbp-B0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+138h] [rbp-A0h] BYREF

  v38 = v14;
  v39 = v15;
  v40 = v16;
  v41 = v17;
  v42 = v18;
  v43 = v19;
  v44 = v20;
  v45 = v21;
  v46 = v22;
  v47 = v23;
  v54 = v5;
  v55 = v7;
  v56 = v8;
  v57 = v11;
  v58 = v12;
  v59 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      (_DWORD)a3,
      a4,
      v36,
      v37,
      v38,
      DWORD2(v38),
      v39,
      DWORD2(v39),
      v40,
      DWORD2(v40),
      v41,
      DWORD2(v41),
      v42,
      DWORD2(v42),
      v43,
      DWORD2(v43),
      v44,
      DWORD2(v44),
      v45,
      DWORD2(v45),
      v46,
      DWORD2(v46),
      v47,
      DWORD2(v47),
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  ExceptionRecord.ExceptionCode = a1;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = a3;
  ExceptionRecord.NumberParameters = a2;
  ExceptionRecord.ExceptionInformation[0] = a4;
  ExceptionRecord.ExceptionInformation[1] = v9;
  ExceptionRecord.ExceptionInformation[2] = v10;
  KiDispatchException(&ExceptionRecord, (__int64)&v35, v6 - 128, *(_BYTE *)(v6 + 240) & 1, 1);
  _disable();
  if ( (*(_BYTE *)(v6 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v6 - 84));
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
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)CurrentThread, v24, v25, v26, v36);
  v28 = KeGetCurrentThread();
  if ( (v28->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v28->Header.Size & 1) != 0 )
    {
      KiCopyCounters(v28, v24);
      v28 = KeGetCurrentThread();
    }
    if ( (v28->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v28) = 1;
      KiUmsExit(v28);
    }
  }
  _mm_setcsr(*(_DWORD *)(v6 - 84));
  if ( *(_WORD *)(v6 + 128) )
    KiRestoreDebugRegisterState(v28);
  v29 = *(_QWORD *)(v6 - 48);
  v30 = *(_QWORD *)(v6 - 56);
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
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v30, v29, a5);
}

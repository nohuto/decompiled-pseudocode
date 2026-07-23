/*
 * XREFs of KiFastFailDispatch @ 0x140192080
 * Callers:
 *     KiBoundFault @ 0x14018C840 (KiBoundFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140190480 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140191D40 (KiBugCheckDispatch.c)
 *     KiUmsExceptionEntry @ 0x1401929C0 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140192A80 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

__int64 __fastcall KiFastFailDispatch(int a1, unsigned int a2, void *a3, unsigned __int64 a4, char a5)
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
  char v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  __int64 v36; // [rsp+0h] [rbp-1D8h] BYREF
  int v37; // [rsp+20h] [rbp-1B8h]
  int v38; // [rsp+28h] [rbp-1B0h]
  __int128 v39; // [rsp+30h] [rbp-1A8h]
  __int128 v40; // [rsp+40h] [rbp-198h]
  __int128 v41; // [rsp+50h] [rbp-188h]
  __int128 v42; // [rsp+60h] [rbp-178h]
  __int128 v43; // [rsp+70h] [rbp-168h]
  __int128 v44; // [rsp+80h] [rbp-158h]
  __int128 v45; // [rsp+90h] [rbp-148h]
  __int128 v46; // [rsp+A0h] [rbp-138h]
  __int128 v47; // [rsp+B0h] [rbp-128h]
  __int128 v48; // [rsp+C0h] [rbp-118h]
  int v49; // [rsp+D0h] [rbp-108h]
  int v50; // [rsp+D8h] [rbp-100h]
  int v51; // [rsp+E0h] [rbp-F8h]
  int v52; // [rsp+E8h] [rbp-F0h]
  int v53; // [rsp+F0h] [rbp-E8h]
  int v54; // [rsp+F8h] [rbp-E0h]
  __int64 v55; // [rsp+100h] [rbp-D8h]
  __int64 v56; // [rsp+108h] [rbp-D0h]
  __int64 v57; // [rsp+110h] [rbp-C8h]
  __int64 v58; // [rsp+118h] [rbp-C0h]
  __int64 v59; // [rsp+120h] [rbp-B8h]
  __int64 v60; // [rsp+128h] [rbp-B0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+138h] [rbp-A0h] BYREF

  v39 = v14;
  v40 = v15;
  v41 = v16;
  v42 = v17;
  v43 = v18;
  v44 = v19;
  v45 = v20;
  v46 = v21;
  v47 = v22;
  v48 = v23;
  v55 = v5;
  v56 = v7;
  v57 = v8;
  v58 = v11;
  v59 = v12;
  v60 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      (_DWORD)a3,
      a4,
      v37,
      v38,
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
      DWORD2(v48),
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
      v59,
      v60);
  ExceptionRecord.ExceptionCode = a1;
  ExceptionRecord.ExceptionFlags = 1;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = a3;
  ExceptionRecord.NumberParameters = a2;
  ExceptionRecord.ExceptionInformation[0] = a4;
  ExceptionRecord.ExceptionInformation[1] = v9;
  ExceptionRecord.ExceptionInformation[2] = v10;
  v24 = *(_BYTE *)(v6 + 240) & 1;
  if ( !v24 )
    KiBugCheckDispatch(0x139u, ExceptionRecord.ExceptionInformation[0], v6 - 128, (ULONG_PTR)&ExceptionRecord);
  KiDispatchException(&ExceptionRecord, (__int64)&v36, v6 - 128, v24, 0);
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
    KiRestoreSetContextState((__int64)CurrentThread, v25, v26, v27, v37);
  v29 = KeGetCurrentThread();
  if ( (v29->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v29->Header.Size & 1) != 0 )
    {
      KiCopyCounters(v29, v25);
      v29 = KeGetCurrentThread();
    }
    if ( (v29->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v29) = 1;
      KiUmsExit(v29);
    }
  }
  _mm_setcsr(*(_DWORD *)(v6 - 84));
  if ( *(_WORD *)(v6 + 128) )
    KiRestoreDebugRegisterState(v29);
  v30 = *(_QWORD *)(v6 - 48);
  v31 = *(_QWORD *)(v6 - 56);
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
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v31, v30, a5);
}

/*
 * XREFs of KiSystemCall64 @ 0x140191240
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140185040 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140191240 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x140191B80 (KiBugCheckDispatch.c)
 *     KiUmsCallEntry @ 0x140192640 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x1401928C0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x140255410 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x140255490 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     PsPicoSystemCallDispatch @ 0x1406E34C0 (PsPicoSystemCallDispatch.c)
 */

__int64 __fastcall KiSystemCall64(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49)
{
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // r10
  __int64 v52; // r11
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  __int128 v56; // xmm3
  __int128 v57; // xmm4
  __int128 v58; // xmm5
  unsigned __int64 v59; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  struct _KTHREAD *CurrentThread; // rbx
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  ULONG64 v67; // rax
  _QWORD *Object; // rdx
  unsigned int v69; // eax
  void *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rax
  __int128 *v74; // r10
  __int128 *v75; // r11
  __int64 v76; // r10
  __int64 v77; // rax
  __int64 (__fastcall *v78)(_QWORD, _QWORD); // r10
  __int64 v79; // rbx
  __int64 v80; // rdi
  __int64 (__fastcall *v81)(_QWORD, _QWORD); // rsi
  __int64 result; // rax
  struct _KTHREAD *v84; // r11
  struct _KTHREAD *v85; // rcx
  struct _KTHREAD *v86; // rcx
  void *InstrumentationCallback; // rax
  unsigned __int8 v88; // al
  unsigned __int8 v89; // cf
  struct _KTHREAD *v91; // rcx
  struct _KTHREAD *v92; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  __int64 v95; // rsi
  __int64 v96; // rcx
  __int64 CombinedApcDisable; // r9
  __int64 CurrentIrql; // r8
  void *v99; // [rsp+28h] [rbp-1C0h]
  __int64 v100; // [rsp+30h] [rbp-1B8h]
  __int64 v101; // [rsp+38h] [rbp-1B0h]
  __int64 v102; // [rsp+40h] [rbp-1A8h]
  __int64 (__fastcall *v103)(void *, __int64, __int64, __int64); // [rsp+48h] [rbp-1A0h]
  __int64 v104; // [rsp+58h] [rbp-190h] BYREF
  __int64 v105; // [rsp+60h] [rbp-188h]
  __int64 v106; // [rsp+68h] [rbp-180h]
  __int64 v107; // [rsp+70h] [rbp-178h]
  __int64 v108; // [rsp+78h] [rbp-170h]
  __int64 v109; // [rsp+80h] [rbp-168h]
  __int64 v110; // [rsp+88h] [rbp-160h]
  __int64 v111; // [rsp+90h] [rbp-158h]
  __int64 v112; // [rsp+98h] [rbp-150h]
  __int64 v113; // [rsp+A0h] [rbp-148h]
  __int64 v114; // [rsp+A8h] [rbp-140h]
  __int64 v115; // [rsp+B0h] [rbp-138h]
  __int64 v116; // [rsp+B8h] [rbp-130h]
  __int64 v117; // [rsp+C0h] [rbp-128h]
  __int128 v118; // [rsp+C8h] [rbp-120h]
  __int128 v119; // [rsp+D8h] [rbp-110h]
  __int128 v120; // [rsp+E8h] [rbp-100h]
  __int128 v121; // [rsp+F8h] [rbp-F0h]
  __int128 v122; // [rsp+108h] [rbp-E0h]
  __int128 v123; // [rsp+118h] [rbp-D0h]
  __int64 v124; // [rsp+128h] [rbp-C0h]
  __int64 v125; // [rsp+130h] [rbp-B8h]
  __int64 v126; // [rsp+138h] [rbp-B0h]
  __int64 v127; // [rsp+140h] [rbp-A8h]
  __int64 v128; // [rsp+148h] [rbp-A0h]
  __int64 v129; // [rsp+158h] [rbp-90h]
  _KTRAP_FRAME *v130; // [rsp+190h] [rbp-58h]
  __int64 v131; // [rsp+1B0h] [rbp-38h]
  void *v132; // [rsp+1C0h] [rbp-28h]
  __int64 v133; // [rsp+1C8h] [rbp-20h]
  __int64 v134; // [rsp+1D0h] [rbp-18h]
  void *StackLimit; // [rsp+1D8h] [rbp-10h]
  __int64 v136; // [rsp+1E0h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+1E8h] [rbp+0h] BYREF

  __asm { swapgs }
  __writegsqword(0x10u, (unsigned __int64)&retaddr);
  v136 = 43LL;
  StackLimit = KeGetPcr()->NtTib.StackLimit;
  v134 = v52;
  v133 = 51LL;
  v132 = a1;
  v131 = v50;
  v110 = v49;
  v111 = v51;
  v112 = a2;
  v59 = *(_QWORD *)&KeGetCurrentThread()->Process[2].FreezeCount;
  __writegsqword(0x270u, v59);
  BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbKernelSpecCtrl);
    v59 = 72LL;
    HIDWORD(a2) = 0;
    __writemsr(0x48u, BpbKernelSpecCtrl);
  }
  LODWORD(a2) = KeGetPcr()->Prcb.BpbState;
  if ( (a2 & 8) != 0 )
  {
    a2 = 0LL;
    v59 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  else
  {
    if ( (a2 & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
    {
      v128 = 0x14019143BLL;
      v127 = 0x140191432LL;
      v126 = 0x140191429LL;
      v125 = 0x140191420LL;
      v124 = 0x140191417LL;
      *((_QWORD *)&v123 + 1) = 0x14019140ELL;
      *(_QWORD *)&v123 = 0x140191405LL;
      *((_QWORD *)&v122 + 1) = 0x1401913FCLL;
      *(_QWORD *)&v122 = 0x1401913F3LL;
      *((_QWORD *)&v121 + 1) = 0x1401913EALL;
      *(_QWORD *)&v121 = 0x1401913E1LL;
      *((_QWORD *)&v120 + 1) = 0x1401913D8LL;
      *(_QWORD *)&v120 = 0x1401913CFLL;
      *((_QWORD *)&v119 + 1) = 0x1401913C6LL;
      *(_QWORD *)&v119 = 0x1401913BDLL;
      *((_QWORD *)&v118 + 1) = 0x1401913B4LL;
      *(_QWORD *)&v118 = 0x1401913ABLL;
      v117 = 0x1401913A2LL;
      v116 = 0x140191399LL;
      v115 = 0x140191390LL;
      v114 = 0x140191387LL;
      v113 = 0x14019137ELL;
      v112 = 0x140191375LL;
      v111 = 0x14019136CLL;
      v110 = 0x140191363LL;
      v109 = 0x14019135ALL;
      v108 = 0x140191351LL;
      v107 = 0x140191348LL;
      v106 = 0x14019133FLL;
      v105 = 0x140191336LL;
      v104 = 0x14019132DLL;
    }
    _mm_lfence();
  }
  BYTE3(v109) = 2;
  CurrentThread = KeGetCurrentThread();
  _m_prefetchw(&CurrentThread->TrapFrame);
  HIDWORD(v109) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v62 = CurrentThread->Header.Reserved1 == 0;
  LOWORD(v129) = 0;
  if ( !v62 )
  {
    v62 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v113 = a3;
    v114 = a4;
    if ( !v62 )
      *(double *)&v53 = KiSaveDebugRegisterState(v59, a2);
    if ( (CurrentThread->Header.Reserved1 & 4) != 0 )
    {
      v116 = v51;
      v115 = v51;
      v118 = v53;
      v119 = v54;
      v120 = v55;
      v121 = v56;
      v122 = v57;
      v123 = v58;
      _enable();
      v63 = PsPicoSystemCallDispatch(&v104, a2);
      v84 = KeGetCurrentThread();
      if ( !(v84->WaitBlock[3].SpareLong | (unsigned __int8)(v84->ApcStateIndex | KeGetCurrentIrql())) )
      {
        _disable();
        v110 = v63;
        if ( KeGetCurrentThread()->ApcState.UserApcPending )
        {
          __writecr8(1uLL);
          _enable();
          KiInitiateUserApc();
          __writecr8(0LL);
          _disable();
        }
        v91 = KeGetCurrentThread();
        if ( (v91->Header.LockNV & 0x8000000) != 0 )
          KiRestoreSetContextState((__int64)v91, v64, v65, v66, v108);
        v92 = KeGetCurrentThread();
        if ( (v92->Header.Size & 1) != 0 )
        {
          KiCopyCounters(v92, v64);
          v92 = KeGetCurrentThread();
        }
        if ( (_WORD)v129 )
          KiRestoreDebugRegisterState(v92);
        BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
        if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
        {
          __writegsbyte(0x27Au, BpbUserSpecCtrl);
          __writemsr(0x48u, BpbUserSpecCtrl);
        }
        v89 = _bittestandreset16(MK_FP(__GS__, 632LL), 2u);
        if ( v89 )
          __writemsr(0x49u, 1uLL);
        _mm_setcsr(HIDWORD(v109));
        if ( (KiKvaShadow & 1) == 0 )
        {
          __asm
          {
            swapgs
            iretq
          }
        }
        return KiKernelExit(v111, v112, v113, v114, a5);
      }
LABEL_81:
      v96 = 74LL;
      CombinedApcDisable = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( !(_DWORD)CurrentIrql )
      {
        v96 = 1LL;
        CurrentIrql = v84->ApcStateIndex;
        CombinedApcDisable = v84->CombinedApcDisable;
      }
      KiBugCheckDispatch(v96, v132, CurrentIrql, CombinedApcDisable);
    }
    if ( (CurrentThread->Header.Reserved1 & 0x80u) == 0 )
      goto LABEL_19;
    v67 = __readmsr(0xC0000102);
    if ( v67 >= MmUserProbeAddress )
      v67 = MmUserProbeAddress;
    if ( CurrentThread->Teb == (void *)v67 )
    {
LABEL_19:
      if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
        CurrentThread->MiscFlags |= 0x10000u;
    }
    else
    {
      Object = CurrentThread->WaitBlock[3].Object;
      CurrentThread->MiscFlags |= 0x100u;
      --CurrentThread->SpecialApcDisable;
      Object[16] = v67;
      _enable();
      KiUmsCallEntry(3221225730LL);
    }
    a3 = v113;
    a4 = v114;
  }
  v69 = v110;
  v70 = (void *)v111;
  v71 = v112;
  _enable();
  CurrentThread->FirstArgument = v70;
  CurrentThread->SystemCallNumber = v69;
  CurrentThread->TrapFrame = (_KTRAP_FRAME *)&v104;
  v72 = (v69 >> 7) & 0x20;
  v73 = v69 & 0xFFF;
  do
  {
    v74 = &KeServiceDescriptorTable;
    v75 = &KeServiceDescriptorTableShadow;
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0 )
    {
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x100000) != 0 )
        v75 = &KeServiceDescriptorTableFilter;
      v74 = v75;
    }
    if ( (unsigned int)v73 < *(_DWORD *)((char *)v74 + v72 + 16) )
    {
      v76 = *(_QWORD *)((char *)v74 + v72);
      v77 = *(int *)(v76 + 4 * v73);
      v78 = (__int64 (__fastcall *)(_QWORD, _QWORD))((v77 >> 4) + v76);
      if ( (_DWORD)v72 == 32 && *((_DWORD *)CurrentThread->Teb + 1488) )
      {
        v110 = v77;
        v111 = (__int64)v70;
        v112 = v71;
        v79 = a3;
        v80 = a4;
        v81 = v78;
        PsInvokeWin32Callout(7LL, 0LL, 0LL);
        LOBYTE(v77) = v110;
        v70 = (void *)v111;
        v71 = v112;
        a3 = v79;
        a4 = v80;
        v78 = v81;
      }
      if ( v77 & 0xF )
        __asm { jmp     r11 }
      if ( (BYTE8(PerfGlobalGroupMask) & 0x40) != 0 )
      {
        v99 = v70;
        v100 = v71;
        v101 = a3;
        v102 = a4;
        v103 = (__int64 (__fastcall *)(void *, __int64, __int64, __int64))v78;
        PerfInfoLogSysCallEntry(v78);
        v110 = v103(v99, v100, v101, v102);
        PerfInfoLogSysCallExit(v110);
        result = v110;
      }
      else
      {
        result = v78(v70, v71);
      }
      __incgsdword(0x2EB8u);
      goto KiSystemServiceExit;
    }
    if ( (_DWORD)v72 != 32 )
      goto LABEL_80;
    v108 = a4;
    v62 = (unsigned int)KiConvertToGuiThread() == 0;
    v73 = (unsigned int)v104;
    v70 = (void *)v105;
    v71 = v106;
    a3 = v107;
    a4 = v108;
    CurrentThread->TrapFrame = (_KTRAP_FRAME *)&v104;
  }
  while ( v62 );
  v95 = *((unsigned int *)&xmmword_1403E4560 + 4);
  if ( (unsigned int)v73 >= (unsigned int)v95
    || (result = (unsigned int)*(char *)(v73 + xmmword_1403E4560 + 4 * v95), (int)result > 0) )
  {
LABEL_80:
    result = 3221225500LL;
  }
KiSystemServiceExit:
  v84 = KeGetCurrentThread();
  if ( (v133 & 1) == 0 )
  {
    v84->TrapFrame = v130;
    v84->PreviousMode = v109;
    _disable();
    _enable();
    return result;
  }
  if ( v84->WaitBlock[3].SpareLong | (unsigned __int8)(v84->ApcStateIndex | KeGetCurrentIrql()) )
    goto LABEL_81;
  _disable();
  if ( KeGetCurrentThread()->ApcState.UserApcPending )
  {
    v110 = result;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v118 = 0LL;
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v122 = 0LL;
    v123 = 0LL;
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
    result = v110;
  }
  v85 = KeGetCurrentThread();
  if ( (v85->Header.LockNV & 0x8000000) != 0 )
  {
    v110 = result;
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v118 = 0LL;
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v122 = 0LL;
    v123 = 0LL;
    result = KiRestoreSetContextState((__int64)v85, v71, a3, a4, v108);
  }
  v86 = KeGetCurrentThread();
  if ( (v86->Header.LockNV & 0x40010000) != 0 )
  {
    v110 = result;
    if ( (v86->Header.Size & 1) != 0 )
    {
      KiCopyCounters(v86, v71);
      v86 = KeGetCurrentThread();
    }
    if ( (v86->Header.Reserved1 & 0x40) != 0 )
      KiUmsExit(0LL);
    result = v110;
  }
  _mm_setcsr(HIDWORD(v109));
  if ( (_WORD)v129 )
  {
    v110 = result;
    KiRestoreDebugRegisterState(v86);
    InstrumentationCallback = KeGetCurrentThread()->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback && (_WORD)v133 == 51 )
      v132 = InstrumentationCallback;
    result = v110;
  }
  v110 = result;
  v88 = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != v88 )
  {
    __writegsbyte(0x27Au, v88);
    __writemsr(0x48u, v88);
  }
  v89 = _bittestandreset16(MK_FP(__GS__, 632LL), 2u);
  if ( v89 )
    __writemsr(0x49u, 1uLL);
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      sysret
    }
  }
  return KiKernelSysretExit(
           v132,
           0LL,
           StackLimit,
           v131,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49);
}

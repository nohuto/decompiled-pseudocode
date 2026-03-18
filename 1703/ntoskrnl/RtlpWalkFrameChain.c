/*
 * XREFs of RtlpWalkFrameChain @ 0x1400E4C20
 * Callers:
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     PspGetBaseTrapFrame @ 0x140028F98 (PspGetBaseTrapFrame.c)
 *     RtlpUnwindEpilogue @ 0x140039938 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x140039B28 (RtlpUnwindOpSlots.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400E6B30 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpGetStackLimits @ 0x1400E77D0 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformation @ 0x1400E7800 (KeQueryCurrentStackInformation.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     KeGetNextKernelStackSegment @ 0x14010F074 (KeGetNextKernelStackSegment.c)
 *     RtlpSameFunction @ 0x14015DB14 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x140189570 (RtlpCaptureContext.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpWalkWowStack @ 0x14023DCC0 (RtlpWalkWowStack.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // di
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rsi
  unsigned __int64 v10; // rax
  int v11; // ebx
  int v12; // ebx
  int v13; // ett
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r15
  int v16; // ebx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  _DWORD *v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r13
  unsigned int *v23; // r11
  int v24; // ebx
  __int64 v25; // rdi
  unsigned int v26; // r14d
  unsigned int v27; // esi
  unsigned __int8 v28; // dl
  unsigned __int64 v29; // r14
  __int64 v30; // rbx
  char v31; // r13
  unsigned int v32; // esi
  __int64 v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rdx
  char *v36; // rcx
  unsigned __int64 v37; // rcx
  int v38; // eax
  bool v39; // zf
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // edx
  char v47; // cl
  int v48; // eax
  __int64 k; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  int v52; // ebx
  unsigned __int16 v53; // ax
  unsigned int v54; // r11d
  int v55; // r10d
  int v56; // edx
  unsigned int m; // r8d
  unsigned __int16 v58; // ax
  int v59; // edx
  int v60; // edx
  _BYTE *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rax
  _QWORD *v64; // rdx
  _BYTE *v65; // rcx
  __int64 v66; // r14
  char v67; // r8
  char v68; // dl
  _BYTE *v69; // r8
  unsigned int v70; // r10d
  unsigned __int8 *v71; // r9
  unsigned __int64 v72; // rax
  char **v73; // rax
  _KTHREAD *v74; // r10
  unsigned int v75; // r9d
  char v76; // cl
  unsigned __int64 v77; // rax
  char NextKernelStackSegment; // dl
  char v79; // dl
  int v80; // eax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rdx
  __int16 v83; // cx
  char *v85; // rcx
  __int64 v86; // rax
  __int64 v87; // r15
  unsigned __int16 v88; // cx
  unsigned int v89; // ecx
  char v90; // dl
  int v91; // eax
  unsigned __int64 v92; // rsi
  unsigned __int64 v93; // rcx
  _DWORD *v94; // rax
  _BYTE *v95; // rdx
  char v96; // al
  __int64 v97; // rax
  int v98; // ecx
  int v99; // eax
  char v100; // al
  char v101; // cl
  __int64 v102; // r8
  char *v103; // rcx
  char v104; // r9
  __int64 v105; // r8
  char *v106; // rcx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // r8
  __int16 v109; // cx
  _BYTE v110[32]; // [rsp+0h] [rbp-708h] BYREF
  char v111; // [rsp+40h] [rbp-6C8h] BYREF
  char v112; // [rsp+41h] [rbp-6C7h]
  bool v113; // [rsp+42h] [rbp-6C6h]
  int v114; // [rsp+44h] [rbp-6C4h]
  char v115; // [rsp+48h] [rbp-6C0h]
  unsigned __int8 v116; // [rsp+49h] [rbp-6BFh]
  unsigned int v117; // [rsp+4Ch] [rbp-6BCh] BYREF
  char *v118; // [rsp+50h] [rbp-6B8h] BYREF
  unsigned int v119; // [rsp+58h] [rbp-6B0h]
  char *v120; // [rsp+60h] [rbp-6A8h] BYREF
  char v121; // [rsp+68h] [rbp-6A0h]
  char v122; // [rsp+69h] [rbp-69Fh]
  unsigned __int8 CurrentIrql; // [rsp+6Ah] [rbp-69Eh]
  char v124; // [rsp+6Bh] [rbp-69Dh]
  int v125; // [rsp+6Ch] [rbp-69Ch]
  _BYTE *v126; // [rsp+70h] [rbp-698h]
  unsigned __int16 v127; // [rsp+78h] [rbp-690h]
  int v128; // [rsp+7Ch] [rbp-68Ch]
  unsigned int j; // [rsp+80h] [rbp-688h]
  int v130; // [rsp+84h] [rbp-684h]
  unsigned __int64 BaseTrapFrame; // [rsp+88h] [rbp-680h]
  unsigned int *v132; // [rsp+90h] [rbp-678h]
  int v133; // [rsp+98h] [rbp-670h]
  unsigned int v134; // [rsp+9Ch] [rbp-66Ch] BYREF
  int v135; // [rsp+A0h] [rbp-668h]
  int v136; // [rsp+A4h] [rbp-664h]
  _QWORD *i; // [rsp+A8h] [rbp-660h]
  void *Teb; // [rsp+B0h] [rbp-658h]
  int v139; // [rsp+B8h] [rbp-650h]
  int v140; // [rsp+BCh] [rbp-64Ch]
  int v141; // [rsp+C0h] [rbp-648h]
  unsigned int v142; // [rsp+C4h] [rbp-644h]
  _QWORD *v143; // [rsp+C8h] [rbp-640h]
  struct _KTHREAD *v144; // [rsp+D0h] [rbp-638h]
  unsigned __int64 v145; // [rsp+D8h] [rbp-630h]
  __int64 v146; // [rsp+E0h] [rbp-628h]
  unsigned __int64 v147; // [rsp+E8h] [rbp-620h]
  unsigned __int64 v148; // [rsp+F0h] [rbp-618h]
  int v149; // [rsp+F8h] [rbp-610h]
  int v150; // [rsp+FCh] [rbp-60Ch]
  unsigned int v151; // [rsp+100h] [rbp-608h]
  int v152; // [rsp+104h] [rbp-604h]
  int v153; // [rsp+108h] [rbp-600h]
  int v154; // [rsp+10Ch] [rbp-5FCh]
  int v155; // [rsp+110h] [rbp-5F8h]
  int v156; // [rsp+114h] [rbp-5F4h]
  _DWORD *v157; // [rsp+118h] [rbp-5F0h]
  _BYTE *v158; // [rsp+120h] [rbp-5E8h]
  struct _KPROCESS *v159; // [rsp+128h] [rbp-5E0h]
  __int64 v160; // [rsp+130h] [rbp-5D8h]
  __int64 v161; // [rsp+138h] [rbp-5D0h]
  __int128 v162; // [rsp+140h] [rbp-5C8h] BYREF
  __int64 v163; // [rsp+150h] [rbp-5B8h]
  _QWORD *v164; // [rsp+160h] [rbp-5A8h]
  __int64 v165; // [rsp+168h] [rbp-5A0h] BYREF
  unsigned __int64 v166; // [rsp+170h] [rbp-598h] BYREF
  unsigned __int64 v167; // [rsp+178h] [rbp-590h]
  unsigned __int64 v168; // [rsp+180h] [rbp-588h]
  _BYTE *v169; // [rsp+188h] [rbp-580h]
  __int64 v170; // [rsp+190h] [rbp-578h]
  _QWORD v171[4]; // [rsp+198h] [rbp-570h] BYREF
  struct _KTHREAD *v172; // [rsp+1B8h] [rbp-550h]
  struct _KTHREAD *v173; // [rsp+1C0h] [rbp-548h]
  _KPROCESS *v174; // [rsp+1C8h] [rbp-540h]
  __int64 v175; // [rsp+1D0h] [rbp-538h]
  char *v176; // [rsp+1D8h] [rbp-530h]
  _BYTE v177[144]; // [rsp+1F0h] [rbp-518h] BYREF
  __int64 v178; // [rsp+280h] [rbp-488h]
  unsigned __int64 *v179; // [rsp+288h] [rbp-480h]
  __int64 v180; // [rsp+290h] [rbp-478h]
  __int64 v181; // [rsp+298h] [rbp-470h]
  __int64 v182; // [rsp+2A0h] [rbp-468h]
  __int64 v183; // [rsp+2C8h] [rbp-440h]
  __int64 v184; // [rsp+2D0h] [rbp-438h]
  __int64 v185; // [rsp+2D8h] [rbp-430h]
  __int64 v186; // [rsp+2E0h] [rbp-428h]
  unsigned __int64 v187; // [rsp+2E8h] [rbp-420h]
  _QWORD v188[102]; // [rsp+390h] [rbp-378h] BYREF
  void *retaddr; // [rsp+708h] [rbp+0h]

  v4 = a4;
  v141 = a4;
  v5 = a3;
  v142 = a2;
  v7 = a1;
  v161 = a1;
  v135 = 0;
  i = 0LL;
  v143 = 0LL;
  v160 = 0LL;
  v116 = 1;
  CurrentThread = KeGetCurrentThread();
  v144 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v159 = Process;
  Teb = 0LL;
  BaseTrapFrame = 0LL;
  v130 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v120, &v118) )
    return 0LL;
  RtlpCaptureContext(v177);
  v111 = 0;
  v117 = 0;
  v113 = (v5 & 2) != 0;
  if ( (v5 & 1) == 0 && (dword_1403E3104 & 1) == 0 )
    v135 = 0x80000000;
  v147 = 0LL;
  v148 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v172 = KeGetCurrentThread();
    if ( (v172->MiscFlags & 0x400) != 0 || (unsigned __int8)KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
    if ( !Teb || (*((_WORD *)Teb + 3063) & 0x100) != 0 )
      return 0LL;
    v81 = Process[1].ActiveProcessors.Bitmap[7];
    if ( v81 && ((v83 = *(_WORD *)(v81 + 8), v83 == 332) || v83 == 452) )
    {
      v121 = 1;
      if ( *(_BYTE *)(BaseTrapFrame + 43) != 2 && *(_WORD *)(BaseTrapFrame + 368) == 35 )
      {
        v117 = 1;
        if ( (unsigned __int8)RtlpWalkWowStack(
                                v7,
                                (int)BaseTrapFrame + 360,
                                (_DWORD)Teb,
                                (unsigned int)&v117,
                                a2,
                                v4,
                                *(_DWORD *)(BaseTrapFrame + 344),
                                *(_DWORD *)(BaseTrapFrame + 384)) )
          goto LABEL_430;
      }
    }
    else
    {
      v121 = 0;
    }
    v147 = *(_QWORD *)(BaseTrapFrame + 384);
    v82 = *((_QWORD *)Teb + 1);
    v148 = v82;
    if ( v82 <= v147 )
      return 0LL;
    if ( v82 > 0x7FFFFFFF0000LL && v82 != v147 )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v143 = (_QWORD *)i[4];
    v116 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  }
  memset(v171, 0, sizeof(v171));
  v162 = *(_OWORD *)&xmmword_1403F7020;
  v163 = qword_1403F7030;
  v15 = (unsigned __int64)v179;
LABEL_88:
  v17 = 0xFFFF800000000000uLL;
  while ( 1 )
  {
    v40 = 0x140000000uLL;
    v16 = 161;
    if ( v130 != 1 )
    {
      if ( v187 < 0xFFFF800000000000uLL )
      {
        v149 = 0;
      }
      else
      {
        v41 = v187;
        v149 = (unsigned __int8)byte_14036D700[((v187 >> 39) & 0x1FF) - 256];
        if ( v149 == 1 )
        {
          v10 = v159[1].ActiveProcessors.Bitmap[2];
          if ( !v10
            || v159 == PsInitialSystemProcess
            || (v11 = *(_DWORD *)(v10 + 8), v11 == -1)
            || (v173 = KeGetCurrentThread(), v173->ApcStateIndex == 1)
            && (v174 = CurrentThread->Process, v11 != (unsigned int)MmGetSessionIdEx(v174))
            || (CurrentThread->MiscFlags & 0x800) != 0
            || CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
          {
            v133 = 0;
            goto LABEL_430;
          }
          v12 = 1;
          v153 = 1;
          if ( v187 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql < 0xFu )
            {
              KeGetCurrentIrql();
              __writecr8(0xFuLL);
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              LOBYTE(v40) = -1;
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&PsLoadedModuleSpinLock, v40);
            }
            else
            {
              _m_prefetchw(&PsLoadedModuleSpinLock);
              v13 = PsLoadedModuleSpinLock & 0x7FFFFFFF;
              if ( v13 == _InterlockedCompareExchange(
                            &PsLoadedModuleSpinLock,
                            (PsLoadedModuleSpinLock & 0x7FFFFFFF) + 1,
                            PsLoadedModuleSpinLock & 0x7FFFFFFF) )
              {
                v122 = 1;
              }
              else
              {
                v122 = 0;
                ExpWaitForSpinLockSharedAndAcquire(&PsLoadedModuleSpinLock, 0xFFu);
              }
            }
            v14 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 104);
            while ( v14 )
            {
              if ( v41 > v14[6] )
              {
                v14 = (_QWORD *)v14[1];
              }
              else
              {
                if ( v41 >= (v14[5] & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  v164 = v14;
                  goto LABEL_24;
                }
                v14 = (_QWORD *)*v14;
              }
            }
            v164 = 0LL;
            v12 = 0;
            v153 = 0;
LABEL_24:
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr);
            }
            else
            {
              _InterlockedAnd(&PsLoadedModuleSpinLock, 0xBFFFFFFF);
              _InterlockedDecrement(&PsLoadedModuleSpinLock);
            }
            __writecr8(CurrentIrql);
          }
          v133 = v12;
          if ( !v12 )
            goto LABEL_430;
          v15 = (unsigned __int64)v179;
          v16 = 161;
          v17 = 0xFFFF800000000000uLL;
        }
      }
    }
    if ( (v15 & 7) != 0 )
    {
LABEL_429:
      v112 = 0;
      goto LABEL_430;
    }
    if ( v15 < (unsigned __int64)v120 || v15 >= (unsigned __int64)v118 )
    {
      if ( (unsigned __int64)v120 < 0xFFFF800000000000uLL )
        goto LABEL_429;
      KeQueryCurrentStackInformation(&v134, &v165, &v166);
      if ( v134 <= 7 )
      {
        if ( _bittest(&v16, v134) )
          goto LABEL_429;
      }
      v74 = KeGetCurrentThread();
      v75 = v134;
      if ( v134 != 1 )
      {
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && v74 != KeGetCurrentPrcb()->IdleThread )
        {
          v85 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
          if ( (unsigned __int64)&v85[-(unsigned int)KeKernelStackSize] <= v15 && v15 < (unsigned __int64)v85 )
          {
            v118 = v85;
            v120 = &v85[-(unsigned int)KeKernelStackSize];
            goto LABEL_32;
          }
        }
        v75 = v134;
      }
      v76 = 0;
      v77 = v171[0];
      if ( !v171[0] )
      {
        LOBYTE(v17) = 1;
        KeGetNextKernelStackSegment(v74, v171, v17);
        v76 = v17;
        v77 = v171[0];
      }
      NextKernelStackSegment = 1;
      if ( v75 != 1 && v75 != 6 || !v76 )
      {
        NextKernelStackSegment = KeGetNextKernelStackSegment(v74, v171, 0LL);
        v77 = v171[0];
      }
      if ( !NextKernelStackSegment )
        goto LABEL_429;
      v165 = v171[1];
      v166 = v77;
      if ( v15 < v171[1] || v15 >= v77 )
        goto LABEL_429;
      v120 = (char *)v171[1];
      v118 = (char *)v77;
    }
LABEL_32:
    v112 = 1;
    v18 = RtlpLookupFunctionEntryForStackWalks(v187, &v162, v17);
    v19 = (_DWORD *)v18;
    v157 = (_DWORD *)v18;
    if ( v18 )
      break;
    if ( !*((_QWORD *)&v162 + 1) )
      goto LABEL_430;
    if ( v187 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v179 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v187 = *v179;
    v15 = (unsigned __int64)++v179;
LABEL_76:
    if ( !v187 )
    {
      if ( (v5 & 1) != 0 )
      {
        v72 = v159[1].ActiveProcessors.Bitmap[7];
        if ( v72 && ((v109 = *(_WORD *)(v72 + 8), v109 == 332) || v109 == 452) )
        {
          v124 = 1;
          if ( *(_BYTE *)(BaseTrapFrame + 43) == 2 )
          {
            v170 = *((_QWORD *)Teb + 657) + 4LL;
            if ( (v170 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            RtlpWalkWowStack(
              v161,
              0,
              (_DWORD)Teb,
              (unsigned int)&v117,
              v142,
              v4,
              *(_DWORD *)(v170 + 180),
              *(_DWORD *)(v170 + 196) - 4);
          }
        }
        else
        {
          v124 = 0;
        }
      }
      goto LABEL_430;
    }
    if ( v130 )
    {
      if ( v130 == 1 )
      {
        if ( v187 > 0x7FFFFFFEFFFFLL )
          goto LABEL_430;
        v64 = v143;
        if ( v143 && v187 == *(_QWORD *)(BaseTrapFrame + 360) )
        {
          v130 = 2;
          v187 = v143[39];
          v15 = (unsigned __int64)(v143 + 40);
          v179 = v143 + 40;
          v180 = v143[31];
          v178 = v143[32];
          v182 = v143[33];
          v181 = v143[34];
          v183 = v143[35];
          v184 = v143[36];
          v185 = v143[37];
          v186 = v143[38];
          v176 = (char *)(i + 2);
          v143 = (_QWORD *)i[4];
          v73 = (char **)i[5];
          if ( !v73 )
            goto LABEL_430;
          i = (_QWORD *)i[5];
          v120 = (char *)(v64 + 40);
          v118 = *v73;
        }
      }
      else
      {
        if ( v130 != 2 )
          goto LABEL_430;
        if ( v187 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v187 != *(_QWORD *)(BaseTrapFrame + 360) )
            goto LABEL_430;
          v160 = *(_QWORD *)(BaseTrapFrame + 384);
          if ( (v160 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v130 = 1;
          v15 = *(_QWORD *)(v160 + 72);
          v179 = (unsigned __int64 *)v15;
          v120 = (char *)v147;
          v118 = (char *)v148;
          if ( v143 )
            BaseTrapFrame = v143[26];
        }
      }
      goto LABEL_83;
    }
    v17 = 0xFFFF800000000000uLL;
    if ( (v5 & 1) == 0 && v187 < 0xFFFF800000000000uLL )
      goto LABEL_430;
    if ( (v5 & 1) != 0 )
    {
      if ( v187 < 0xFFFF800000000000uLL )
      {
        if ( v187 > 0x7FFFFFFEFFFFLL )
          goto LABEL_430;
        if ( v187 != *(_QWORD *)(BaseTrapFrame + 360) )
          goto LABEL_430;
        v130 = 1;
        if ( v143 )
        {
          BaseTrapFrame = v143[26];
          if ( BaseTrapFrame < 0xFFFF800000000000uLL )
            goto LABEL_430;
        }
        v120 = (char *)v147;
        v118 = (char *)v148;
LABEL_83:
        if ( v117 >= v4 )
        {
          *(_QWORD *)(v161 + 8LL * (v117 - v4)) = v187;
          v15 = (unsigned __int64)v179;
        }
        if ( ++v117 >= v142 )
          goto LABEL_430;
        goto LABEL_88;
      }
      v39 = v117 == 0;
    }
    else
    {
      v39 = !v113;
    }
    if ( v39 )
      goto LABEL_83;
  }
  v154 = 0;
  v20 = v187;
  v21 = *((_QWORD *)&v162 + 1);
  v22 = *((_QWORD *)&v162 + 1);
  v146 = *((_QWORD *)&v162 + 1);
  v23 = (unsigned int *)v18;
  v132 = (unsigned int *)v18;
  v169 = (_BYTE *)v18;
  v24 = 0;
  v139 = 0;
  v25 = *((_QWORD *)&v162 + 1) + *(unsigned int *)(v18 + 8);
  if ( v187 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v25 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = *((_QWORD *)&v162 + 1);
    v19 = v157;
  }
  v26 = *(_BYTE *)v25 & 7;
  if ( v111 )
  {
    if ( v26 < 2 )
    {
      v69 = (_BYTE *)(*((_QWORD *)&v162 + 1) + *(unsigned int *)(v18 + 8));
      v70 = 0;
      v151 = 0;
      v71 = (unsigned __int8 *)(v25 + 2);
      if ( *(_BYTE *)(v25 + 2) )
      {
LABEL_192:
        v150 = 0;
        if ( v135 < 0 )
        {
          v38 = -1073741784;
          v15 = (unsigned __int64)v179;
          goto LABEL_72;
        }
      }
      else
      {
        while ( (*v69 & 0x20) != 0 )
        {
          v86 = *v71;
          v152 = v86;
          if ( (v86 & 1) != 0 )
          {
            v86 = (unsigned int)(v86 + 1);
            v152 = v86;
          }
          v151 = ++v70;
          if ( v70 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v69 = (_BYTE *)(v21 + *(unsigned int *)&v69[2 * v86 + 12]);
          if ( v187 <= 0x7FFFFFFEFFFFLL )
          {
            if ( ((unsigned __int8)v69 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v21 = *((_QWORD *)&v162 + 1);
            v19 = v157;
          }
          v71 = v69 + 2;
          if ( v69[2] )
          {
            v23 = v132;
            v22 = v146;
            goto LABEL_192;
          }
        }
        v150 = 1;
        v24 = 1;
        v139 = 1;
        v23 = v132;
        v22 = v146;
      }
    }
  }
  else
  {
    v24 = 1;
    v139 = 1;
  }
  v155 = v135 & 0x7FFFFFFF;
  v27 = v187 - *v19 - DWORD2(v162);
  v28 = *(_BYTE *)(v25 + 3);
  if ( (v28 & 0xF) == 0 )
  {
    v15 = (unsigned __int64)v179;
    goto LABEL_38;
  }
  if ( v27 >= *(unsigned __int8 *)(v25 + 1) || (*(_BYTE *)v25 & 0x20) != 0 )
  {
    v47 = *(_BYTE *)(v25 + 3);
    v48 = v28;
    v15 = (unsigned __int64)v179;
    goto LABEL_106;
  }
  v87 = 0LL;
  for ( j = 0; (unsigned int)v87 < *(unsigned __int8 *)(v25 + 2); j = v87 )
  {
    v88 = *(_WORD *)(v25 + 2 * v87 + 4);
    v127 = v88;
    if ( (HIBYTE(v88) & 0xF) == 3 )
      break;
    v87 = (unsigned int)RtlpUnwindOpSlots(v88) + (unsigned int)v87;
  }
  v89 = *(unsigned __int8 *)(v25 + 2 * v87 + 4);
  v15 = (unsigned __int64)v179;
  v23 = v132;
  if ( v27 < v89 )
  {
LABEL_38:
    v145 = v15;
  }
  else
  {
    v48 = *(unsigned __int8 *)(v25 + 3);
    v47 = *(_BYTE *)(v25 + 3);
LABEL_106:
    v145 = *(_QWORD *)&v177[8 * (v47 & 0xF) + 120] - (int)(v48 & 0xFFFFFFF0);
  }
  if ( v24 )
  {
LABEL_40:
    v29 = v145;
    v140 = 0;
    while ( 1 )
    {
      v30 = 0LL;
      v114 = 0;
      v31 = 0;
      v115 = 0;
      v32 = v20 - v146 - *v23;
      v33 = v146 + v23[2];
      if ( v20 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v33 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int64)v179;
      }
      while ( (unsigned int)v30 < *(unsigned __int8 *)(v33 + 2) )
      {
        v34 = *(unsigned __int8 *)(v33 + 2 * v30 + 5) >> 4;
        v35 = v33 + 2 * v30;
        if ( v32 < *(unsigned __int8 *)(v35 + 4) )
        {
          v30 = (unsigned int)RtlpUnwindOpSlots(*(_WORD *)(v35 + 4)) + (unsigned int)v30;
          v15 = (unsigned __int64)v179;
        }
        else
        {
          if ( (*(_BYTE *)(v33 + 2 * v30 + 5) & 0xF) != 0 )
          {
            if ( (*(_BYTE *)(v33 + 2 * v30 + 5) & 0xF) != 4 )
            {
              switch ( *(_BYTE *)(v33 + 2 * v30 + 5) & 0xF )
              {
                case 1:
                  v30 = (unsigned int)(v30 + 1);
                  v114 = v30;
                  v45 = *(unsigned __int16 *)(v33 + 2 * v30 + 4);
                  v119 = v45;
                  if ( (_DWORD)v34 )
                  {
                    v30 = (unsigned int)(v30 + 1);
                    v114 = v30;
                    v46 = (*(unsigned __int16 *)(v33 + 2 * v30 + 4) << 16) + v45;
                  }
                  else
                  {
                    v46 = 8 * v45;
                  }
                  v119 = v46;
                  v15 += v46;
                  goto LABEL_53;
                case 2:
                  v15 += (unsigned int)(8 * v34 + 8);
                  goto LABEL_53;
                case 3:
                  v179 = *(unsigned __int64 **)&v177[8 * (*(_BYTE *)(v33 + 3) & 0xF) + 120];
                  v15 = (unsigned __int64)v179 - (*(_BYTE *)(v33 + 3) & 0xF0);
                  goto LABEL_53;
                case 5:
                  v30 = (unsigned int)(v30 + 2);
                  v114 = v30;
                  v119 = *(unsigned __int16 *)(v33 + 2LL * (unsigned int)(v30 - 1) + 4);
                  v119 += *(unsigned __int16 *)(v33 + 2 * v30 + 4) << 16;
                  v107 = v29 + v119;
                  if ( v20 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v107 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v15 = (unsigned __int64)v179;
                  }
                  if ( v110 != (_BYTE *)-96LL && (v107 < (unsigned __int64)v120 || v107 > (unsigned __int64)(v118 - 8)) )
                    goto LABEL_404;
                  *(_QWORD *)&v177[8 * v34 + 120] = *(_QWORD *)v107;
                  v15 = (unsigned __int64)v179;
                  goto LABEL_54;
                case 6:
                  LODWORD(v30) = v30 + 1;
                  v114 = v30;
                  goto LABEL_54;
                case 7:
                  LODWORD(v30) = v30 + 2;
                  v114 = v30;
                  goto LABEL_54;
                case 8:
                  v30 = (unsigned int)(v30 + 1);
                  v114 = v30;
                  v119 = 16 * *(unsigned __int16 *)(v33 + 2 * v30 + 4);
                  v42 = v29 + v119;
                  if ( v20 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v42 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v15 = (unsigned __int64)v179;
                  }
                  if ( v110 != (_BYTE *)-96LL && (v42 < (unsigned __int64)v120 || v42 > (unsigned __int64)(v118 - 16)) )
                    goto LABEL_404;
                  v43 = 2LL * (unsigned int)v34;
                  v188[v43] = *(_QWORD *)v42;
                  v44 = *(_QWORD *)(v42 + 8);
                  goto LABEL_98;
                case 9:
                  v30 = (unsigned int)(v30 + 2);
                  v114 = v30;
                  v119 = *(unsigned __int16 *)(v33 + 2LL * (unsigned int)(v30 - 1) + 4);
                  v119 += *(unsigned __int16 *)(v33 + 2 * v30 + 4) << 16;
                  v108 = v29 + v119;
                  if ( v20 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v108 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v15 = (unsigned __int64)v179;
                  }
                  if ( v110 != (_BYTE *)-96LL && (v108 < (unsigned __int64)v120 || v108 > (unsigned __int64)(v118 - 16)) )
                    goto LABEL_404;
                  v43 = 2LL * (unsigned int)v34;
                  v188[v43] = *(_QWORD *)v108;
                  v44 = *(_QWORD *)(v108 + 8);
LABEL_98:
                  v188[v43 + 1] = v44;
                  v15 = (unsigned __int64)v179;
                  goto LABEL_54;
                case 0xA:
                  v31 = 1;
                  v115 = 1;
                  v50 = v15;
                  v167 = v15;
                  v51 = v15 + 24;
                  v168 = v15 + 24;
                  if ( (_DWORD)v34 )
                  {
                    v50 = v15 + 8;
                    v167 = v15 + 8;
                    v51 = v15 + 32;
                    v168 = v15 + 32;
                  }
                  if ( v20 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v50 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v15 = (unsigned __int64)v179;
                  }
                  if ( v110 != (_BYTE *)-96LL && (v50 < (unsigned __int64)v120 || v50 > (unsigned __int64)(v118 - 8)) )
                    goto LABEL_404;
                  if ( v20 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v51 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v15 = (unsigned __int64)v179;
                  }
                  if ( &v120 && (v51 < (unsigned __int64)v120 || v51 > (unsigned __int64)(v118 - 8)) )
                    goto LABEL_404;
                  v187 = *(_QWORD *)v50;
                  v15 = *(_QWORD *)v51;
                  goto LABEL_53;
                default:
                  RtlRaiseStatus(-1073741569);
              }
            }
            v30 = (unsigned int)(v30 + 1);
            v114 = v30;
            v119 = 8 * *(unsigned __int16 *)(v33 + 2 * v30 + 4);
            v37 = v29 + v119;
            if ( v20 <= 0x7FFFFFFEFFFFLL )
            {
              if ( (v37 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v15 = (unsigned __int64)v179;
            }
            if ( v110 != (_BYTE *)-96LL && (v37 < (unsigned __int64)v120 || v37 > (unsigned __int64)(v118 - 8)) )
              goto LABEL_404;
            *(_QWORD *)&v177[8 * v34 + 120] = *(_QWORD *)v37;
            v15 = (unsigned __int64)v179;
          }
          else
          {
            v36 = (char *)v15;
            if ( v20 <= 0x7FFFFFFEFFFFLL )
            {
              if ( (v15 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v15 = (unsigned __int64)v179;
            }
            if ( v110 != (_BYTE *)-96LL && (v36 < v120 || v36 > v118 - 8) )
              goto LABEL_404;
            *(_QWORD *)&v177[8 * v34 + 120] = *(_QWORD *)v36;
            v15 = (unsigned __int64)(v179 + 1);
LABEL_53:
            v179 = (unsigned __int64 *)v15;
          }
LABEL_54:
          v30 = (unsigned int)(v30 + 1);
        }
        v114 = v30;
      }
      if ( (*(_BYTE *)v33 & 0x20) == 0 )
        break;
      v63 = *(unsigned __int8 *)(v33 + 2);
      v114 = v63;
      if ( (v63 & 1) != 0 )
      {
        v63 = (unsigned int)(v63 + 1);
        v114 = v63;
      }
      v23 = (unsigned int *)(v33 + 2 * (v63 + 2));
      v132 = v23;
      if ( v20 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v23 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int64)v179;
      }
      if ( (unsigned int)++v140 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( v31 )
    {
      if ( v110 != (_BYTE *)-64LL )
      {
        for ( k = 0LL; ; k = (unsigned int)(k + 1) )
        {
          v114 = k;
          if ( (unsigned int)k >= 3 )
            break;
          if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v33 == *(&RtlpSafeMachineFrameEntries
                                                                                          + k) )
          {
            v31 = 0;
            v115 = 0;
            goto LABEL_68;
          }
        }
        goto LABEL_68;
      }
    }
    else
    {
      if ( v20 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int64)v179;
      }
      if ( v110 != (_BYTE *)-96LL && (v15 < (unsigned __int64)v120 || v15 > (unsigned __int64)(v118 - 8)) )
      {
LABEL_404:
        v38 = -1073741784;
        goto LABEL_72;
      }
      v187 = *(_QWORD *)v15;
      v15 += 8LL;
      v179 = (unsigned __int64 *)v15;
LABEL_68:
      if ( &v111 )
        v111 = v31;
    }
    v169 = v132;
    if ( v155 )
    {
      v61 = (_BYTE *)(v146 + v132[2]);
      if ( v20 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v61 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int64)v179;
      }
      if ( (_DWORD)v20 - (_DWORD)v146 - *v132 >= (unsigned __int8)v61[1] && ((*v61 >> 3) & (unsigned __int8)v155) != 0 )
      {
        v62 = (unsigned __int8)v61[2];
        j = v62;
        if ( (v62 & 1) != 0 )
          j = ++v62;
        v175 = (__int64)&v61[2 * v62 + 8];
      }
    }
    goto LABEL_71;
  }
  v52 = 0;
  v125 = 0;
  if ( v26 >= 2 )
  {
    if ( !*(_BYTE *)(v25 + 2) )
      goto LABEL_40;
    v53 = *(_WORD *)(v25 + 4);
    v127 = v53;
    if ( (HIBYTE(v53) & 0xF) != 6 )
    {
LABEL_137:
      v15 = (unsigned __int64)v179;
      goto LABEL_40;
    }
    v54 = (unsigned __int8)v53;
    v55 = v20 - v22;
    if ( (v53 & 0x1000) != 0 )
    {
      v56 = v132[1] - (unsigned __int8)v53;
      v136 = v56;
      if ( v55 - v56 < (unsigned int)(unsigned __int8)v53 )
      {
        v125 = 1;
      }
      else
      {
LABEL_132:
        for ( m = 1; ; ++m )
        {
          j = m;
          if ( m >= *(unsigned __int8 *)(v25 + 2)
            || (v58 = *(_WORD *)(v25 + 2LL * m + 4), v127 = v58, (HIBYTE(v58) & 0xF) != 6)
            || (v59 = HIBYTE(v58) >> 4 << 8,
                v39 = (unsigned __int8)v58 + v59 == 0,
                v60 = (unsigned __int8)v58 + v59,
                v136 = v60,
                v39) )
          {
            v23 = v132;
            goto LABEL_137;
          }
          v56 = v132[1] - v60;
          v136 = v56;
          if ( v55 - v56 < v54 )
            break;
        }
        v125 = 1;
      }
      RtlpUnwindEpilogue(
        v22,
        v20,
        (unsigned int)(v55 - v56),
        v132,
        (__int64)v177,
        0LL,
        (unsigned __int64 *)&v120,
        &v118);
      if ( v110 != (_BYTE *)-64LL )
        v111 = 0;
      v15 = (unsigned __int64)v179;
      goto LABEL_71;
    }
    v136 = 0;
    goto LABEL_132;
  }
  v65 = (_BYTE *)v20;
  v126 = (_BYTE *)v20;
  v66 = 0LL;
  v156 = 0;
  v67 = *(_BYTE *)v20;
  if ( *(_BYTE *)v20 == 72 )
  {
    if ( *(_BYTE *)(v20 + 1) == 0x83 && *(_BYTE *)(v20 + 2) == 0xC4 )
    {
      v65 = (_BYTE *)(v20 + 4);
LABEL_310:
      v126 = v65;
      goto LABEL_163;
    }
    if ( *(_BYTE *)(v20 + 1) != 0x81 || *(_BYTE *)(v20 + 2) != 0xC4 )
      goto LABEL_162;
LABEL_309:
    v65 = (_BYTE *)(v20 + 7);
    goto LABEL_310;
  }
LABEL_162:
  if ( (v67 & 0xFE) == 0x48 && *(_BYTE *)(v20 + 1) == 0x8D )
  {
    v79 = *(_BYTE *)(v20 + 2);
    v80 = v79 & 7;
    v66 = v80 | (8 * (v67 & 1u));
    v156 = v80 | (8 * (v67 & 1));
    if ( v156 )
    {
      if ( (_DWORD)v66 == (*(_BYTE *)(v25 + 3) & 0xF) )
      {
        v90 = v79 & 0xF8;
        if ( v90 == 96 )
        {
          v65 = (_BYTE *)(v20 + 4);
          goto LABEL_310;
        }
        if ( v90 != -96 )
          goto LABEL_163;
        goto LABEL_309;
      }
    }
  }
LABEL_163:
  while ( 2 )
  {
    if ( (*v65 & 0xF8) == 0x58 )
    {
      ++v65;
      goto LABEL_312;
    }
    if ( (*v65 & 0xF0) == 0x40 && (v65[1] & 0xF8) == 0x58 )
    {
      v65 += 2;
LABEL_312:
      v126 = v65;
      continue;
    }
    break;
  }
  if ( *v65 == 0xF2 )
    v126 = ++v65;
  v68 = *v65;
  if ( (unsigned __int8)(*v65 + 62) <= 1u || v68 == -13 && v65[1] == 0xC3 )
    goto LABEL_331;
  if ( ((v68 + 23) & 0xFD) != 0 )
  {
    if ( v68 != -1 || v65[1] != 37 )
    {
      if ( (v68 & 0xF8) == 0x48 && v65[1] == 0xFF && (v65[2] & 0x38) == 0x20 )
      {
        v52 = 1;
        v125 = 1;
      }
      goto LABEL_172;
    }
LABEL_331:
    v125 = 1;
    goto LABEL_332;
  }
  v158 = &v65[-v22];
  if ( v68 == -21 )
    v91 = (char)v65[1] + 2;
  else
    v91 = *(_DWORD *)(v65 + 1) + 5;
  v92 = (unsigned __int64)&v65[v91 - v22];
  v158 = (_BYTE *)v92;
  v93 = *v23;
  if ( v92 < v93 || v92 >= v23[1] )
  {
    v94 = (_DWORD *)RtlpSameFunction(v23, v22, v92 + v22);
    if ( v94 && v92 != *v94 )
    {
      v15 = (unsigned __int64)v179;
      v23 = v132;
      goto LABEL_172;
    }
    v15 = (unsigned __int64)v179;
    goto LABEL_331;
  }
  if ( v92 == v93 && (*(_BYTE *)v25 & 0x20) == 0 )
  {
    v52 = 1;
    v125 = 1;
  }
LABEL_172:
  if ( !v52 )
    goto LABEL_40;
LABEL_332:
  v95 = (_BYTE *)v20;
  v126 = (_BYTE *)v20;
  if ( (*(_BYTE *)v20 & 0xF8) != 0x48 )
    goto LABEL_344;
  v96 = *(_BYTE *)(v20 + 1);
  if ( v96 == -125 )
  {
    v97 = *(char *)(v20 + 3);
    v95 = (_BYTE *)(v20 + 4);
    goto LABEL_343;
  }
  if ( v96 == -127 )
  {
    v98 = *(unsigned __int8 *)(v20 + 4) | (*(unsigned __int16 *)(v20 + 5) << 8);
    v99 = *(unsigned __int8 *)(v20 + 3);
    goto LABEL_342;
  }
  if ( v96 != -115 )
    goto LABEL_344;
  v100 = *(_BYTE *)(v20 + 2) & 0xF8;
  if ( v100 == 96 )
  {
    v15 = *(_QWORD *)&v177[8 * v66 + 120];
    v179 = (unsigned __int64 *)v15;
    v97 = *(char *)(v20 + 3);
    v95 = (_BYTE *)(v20 + 4);
  }
  else
  {
    if ( v100 != -96 )
      goto LABEL_344;
    v98 = *(unsigned __int8 *)(v20 + 4) | (*(unsigned __int16 *)(v20 + 5) << 8);
    v99 = *(unsigned __int8 *)(v20 + 3);
    v15 = *(_QWORD *)&v177[8 * v66 + 120];
    v179 = (unsigned __int64 *)v15;
LABEL_342:
    v95 = (_BYTE *)(v20 + 7);
    v97 = v99 | (v98 << 8);
  }
LABEL_343:
  v15 += v97;
  v126 = v95;
  v179 = (unsigned __int64 *)v15;
LABEL_344:
  while ( 2 )
  {
    v101 = *v95;
    if ( (*v95 & 0xF8) == 0x58 )
    {
      v102 = v101 & 7;
      v103 = (char *)v15;
      if ( v20 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int64)v179;
      }
      if ( &v120 && (v103 < v120 || v103 > v118 - 8) )
        goto LABEL_352;
      *(_QWORD *)&v177[8 * v102 + 120] = *(_QWORD *)v103;
      v15 = (unsigned __int64)(v179 + 1);
      ++v95;
LABEL_364:
      v126 = v95;
      v179 = (unsigned __int64 *)v15;
      continue;
    }
    break;
  }
  if ( (v101 & 0xF0) == 0x40 )
  {
    v104 = v95[1];
    if ( (v104 & 0xF8) == 0x58 )
    {
      v105 = v104 & 7 | (8 * (v101 & 1u));
      v106 = (char *)v15;
      if ( v20 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int64)v179;
      }
      if ( &v120 && (v106 < v120 || v106 > v118 - 8) )
        goto LABEL_352;
      *(_QWORD *)&v177[8 * v105 + 120] = *(_QWORD *)v106;
      v15 = (unsigned __int64)(v179 + 1);
      v95 += 2;
      goto LABEL_364;
    }
  }
  if ( v20 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (unsigned __int64)v179;
  }
  if ( &v120 && (v15 < (unsigned __int64)v120 || v15 > (unsigned __int64)(v118 - 8)) )
  {
LABEL_352:
    v38 = -1073741784;
    goto LABEL_72;
  }
  v187 = *(_QWORD *)v15;
  v15 += 8LL;
  v179 = (unsigned __int64 *)v15;
  if ( v110 != (_BYTE *)-64LL )
    v111 = 0;
LABEL_71:
  v38 = 0;
LABEL_72:
  v128 = v38;
  v154 = v38;
  if ( v38 >= 0 )
  {
    v4 = v141;
    CurrentThread = v144;
    if ( v111 )
      v113 = 0;
    v5 = a3;
    goto LABEL_76;
  }
  v5 = a3;
  CurrentThread = v144;
LABEL_430:
  if ( (v5 & 1) != 0 && !v116 )
    CurrentThread->MiscFlags &= ~0x20u;
  return v117;
}

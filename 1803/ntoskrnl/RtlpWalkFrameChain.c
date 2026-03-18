/*
 * XREFs of RtlpWalkFrameChain @ 0x14012B860
 * Callers:
 *     RtlWalkFrameChain @ 0x1401309E0 (RtlWalkFrameChain.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x1400B2D38 (KeGetNextKernelStackSegment.c)
 *     RtlpUnwindEpilogue @ 0x1400D07CC (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400D0974 (RtlpUnwindOpSlots.c)
 *     MmIsSessionExecutionValid @ 0x14012B698 (MmIsSessionExecutionValid.c)
 *     PspGetBaseTrapFrame @ 0x14012B834 (PspGetBaseTrapFrame.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14012D2E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpGetStackLimits @ 0x1401307E0 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformation @ 0x140130810 (KeQueryCurrentStackInformation.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlpSameFunction @ 0x14017C248 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x1401B2CD0 (RtlpCaptureContext.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpWalkWowStack @ 0x1402890E0 (RtlpWalkWowStack.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140564318 (RtlWow64GetCpuAreaInfo.c)
 *     PsWow64GetProcessMachine @ 0x1405B8AE0 (PsWow64GetProcessMachine.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // di
  unsigned int v6; // r15d
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // r12
  __int64 Process; // rbx
  int v10; // esi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned __int64 v16; // r12
  __int64 v17; // r15
  unsigned int *v18; // r11
  int v19; // edi
  __int64 v20; // rbx
  char v21; // al
  unsigned int v22; // r14d
  unsigned int v23; // esi
  unsigned __int64 v24; // r15
  unsigned int v25; // r13d
  __int64 v26; // rbx
  char v27; // r14
  unsigned int v28; // esi
  __int64 v29; // rdi
  unsigned int v30; // ecx
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  int v33; // eax
  bool v34; // zf
  __int64 v35; // rcx
  unsigned int v36; // edx
  int v37; // edi
  unsigned __int16 v38; // ax
  unsigned int v39; // r9d
  int v40; // r10d
  int v41; // ecx
  unsigned int k; // r8d
  unsigned __int16 v43; // ax
  int v44; // edx
  char v45; // cl
  int v46; // eax
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  char **v49; // rcx
  unsigned __int8 *v50; // rcx
  __int64 v51; // r14
  char v52; // r8
  _BYTE *v53; // r9
  unsigned int v54; // r10d
  unsigned __int8 *v55; // r8
  __int64 v56; // rdx
  int v57; // ebx
  _KTHREAD *v58; // r10
  unsigned int v59; // r9d
  char v60; // dl
  char *v61; // rax
  char NextKernelStackSegment; // cl
  char v63; // dl
  int v64; // eax
  char v65; // dl
  __int64 v66; // rdx
  __int64 BaseTrapFrame; // rbx
  _WORD *v68; // rbx
  unsigned __int64 v69; // rdx
  int v70; // edx
  int v72; // ecx
  char *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // r15
  unsigned __int16 v76; // cx
  unsigned int v77; // eax
  int v78; // eax
  unsigned __int64 v79; // rsi
  unsigned __int64 v80; // rcx
  _DWORD *v81; // rax
  char v82; // al
  char v83; // al
  char v84; // cl
  char v85; // r9
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // r9
  __int64 v88; // rcx
  int v89; // [rsp+30h] [rbp-6C8h]
  int v90; // [rsp+38h] [rbp-6C0h]
  char v91; // [rsp+40h] [rbp-6B8h]
  bool v92; // [rsp+41h] [rbp-6B7h]
  int v93; // [rsp+44h] [rbp-6B4h]
  unsigned __int8 v94; // [rsp+4Dh] [rbp-6ABh]
  unsigned int v95; // [rsp+50h] [rbp-6A8h] BYREF
  char *v96; // [rsp+58h] [rbp-6A0h] BYREF
  char *v97; // [rsp+60h] [rbp-698h] BYREF
  unsigned int v98; // [rsp+68h] [rbp-690h]
  int v99; // [rsp+6Ch] [rbp-68Ch]
  unsigned __int8 *v100; // [rsp+70h] [rbp-688h]
  unsigned __int16 v101; // [rsp+78h] [rbp-680h]
  int v102; // [rsp+7Ch] [rbp-67Ch]
  int v103; // [rsp+80h] [rbp-678h]
  unsigned __int64 v104; // [rsp+88h] [rbp-670h]
  unsigned int v105; // [rsp+90h] [rbp-668h] BYREF
  int v106; // [rsp+94h] [rbp-664h]
  unsigned int j; // [rsp+98h] [rbp-660h]
  _QWORD *i; // [rsp+A0h] [rbp-658h]
  unsigned int *v109; // [rsp+A8h] [rbp-650h]
  __int64 v110; // [rsp+B0h] [rbp-648h]
  int v111; // [rsp+B8h] [rbp-640h]
  unsigned int v112; // [rsp+BCh] [rbp-63Ch]
  int v113; // [rsp+C0h] [rbp-638h]
  int v114; // [rsp+C4h] [rbp-634h]
  unsigned int v115; // [rsp+C8h] [rbp-630h]
  _WORD *Teb; // [rsp+D0h] [rbp-628h]
  _QWORD *v117; // [rsp+D8h] [rbp-620h]
  __int64 v118; // [rsp+E0h] [rbp-618h]
  unsigned __int64 v119; // [rsp+E8h] [rbp-610h]
  unsigned __int64 v120; // [rsp+F0h] [rbp-608h]
  unsigned __int64 v121; // [rsp+F8h] [rbp-600h]
  struct _KTHREAD *v122; // [rsp+100h] [rbp-5F8h]
  int v123; // [rsp+108h] [rbp-5F0h]
  unsigned int v124; // [rsp+10Ch] [rbp-5ECh]
  int v125; // [rsp+110h] [rbp-5E8h]
  int v126; // [rsp+114h] [rbp-5E4h]
  unsigned int v127; // [rsp+118h] [rbp-5E0h]
  _DWORD *v128; // [rsp+120h] [rbp-5D8h]
  unsigned __int8 *v129; // [rsp+128h] [rbp-5D0h]
  __int64 v130; // [rsp+130h] [rbp-5C8h]
  __int128 v131; // [rsp+138h] [rbp-5C0h] BYREF
  __int64 v132; // [rsp+148h] [rbp-5B0h]
  __int64 v133; // [rsp+158h] [rbp-5A0h] BYREF
  char *v134; // [rsp+160h] [rbp-598h] BYREF
  unsigned __int64 v135; // [rsp+168h] [rbp-590h]
  unsigned __int64 v136; // [rsp+170h] [rbp-588h]
  __int64 v137; // [rsp+178h] [rbp-580h]
  __int64 v138; // [rsp+180h] [rbp-578h]
  _QWORD v139[7]; // [rsp+188h] [rbp-570h] BYREF
  __int64 v140[6]; // [rsp+1C0h] [rbp-538h] BYREF
  _BYTE v141[144]; // [rsp+1F0h] [rbp-508h] BYREF
  __int64 v142; // [rsp+280h] [rbp-478h]
  unsigned __int64 v143; // [rsp+288h] [rbp-470h]
  __int64 v144; // [rsp+290h] [rbp-468h]
  __int64 v145; // [rsp+298h] [rbp-460h]
  __int64 v146; // [rsp+2A0h] [rbp-458h]
  __int64 v147; // [rsp+2C8h] [rbp-430h]
  __int64 v148; // [rsp+2D0h] [rbp-428h]
  __int64 v149; // [rsp+2D8h] [rbp-420h]
  __int64 v150; // [rsp+2E0h] [rbp-418h]
  unsigned __int64 v151; // [rsp+2E8h] [rbp-410h]
  _QWORD v152[102]; // [rsp+390h] [rbp-368h]

  v4 = a4;
  v114 = a4;
  v5 = a3;
  v113 = a3;
  v6 = a2;
  v115 = a2;
  v7 = a1;
  v130 = a1;
  v112 = 0;
  i = 0LL;
  v117 = 0LL;
  v94 = 1;
  CurrentThread = KeGetCurrentThread();
  v122 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v110 = Process;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  v104 = 0LL;
  v103 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v96, &v97) )
    return 0LL;
  RtlpCaptureContext(v141);
  v91 = 0;
  v95 = 0;
  v92 = (v5 & 2) != 0;
  v10 = v5 & 1;
  v93 = v10;
  v126 = v10;
  if ( (v5 & 1) == 0 && (dword_14044B164 & 1) == 0 )
    v112 = 0x80000000;
  v120 = 0LL;
  v121 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
    v104 = BaseTrapFrame;
    if ( !Teb || (Teb[3063] & 0x100) != 0 )
      return 0LL;
    if ( (unsigned __int16)PsWow64GetProcessMachine(v110, v66) == 332
      && *(_BYTE *)(BaseTrapFrame + 43) != 2
      && *(_WORD *)(BaseTrapFrame + 368) == 35 )
    {
      v95 = 1;
      v70 = BaseTrapFrame + 360;
      v90 = *(_DWORD *)(BaseTrapFrame + 384);
      v89 = *(_DWORD *)(BaseTrapFrame + 344);
      v68 = Teb;
      if ( (unsigned __int8)RtlpWalkWowStack(v7, v70, (_DWORD)Teb, (unsigned int)&v95, v6, v4, v89, v90) )
        goto LABEL_349;
    }
    else
    {
      v68 = Teb;
    }
    v120 = *(_QWORD *)(v104 + 384);
    v69 = *((_QWORD *)v68 + 1);
    v121 = v69;
    if ( v69 <= v120 )
      return 0LL;
    if ( v69 > 0x7FFFFFFF0000LL && v69 != v120 )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v117 = (_QWORD *)i[4];
    v94 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    Process = v110;
  }
  memset(v139, 0, 0x20uLL);
  v131 = *(_OWORD *)&xmmword_140463020;
  v132 = qword_140463030;
  while ( 1 )
  {
    v11 = 0x140000000uLL;
    if ( v103 != 1
      && v151 >= 0xFFFF800000000000uLL
      && byte_1403CCF90[((v151 >> 39) & 0x1FF) - 256] == 1
      && !MmIsSessionExecutionValid((__int64)CurrentThread, Process, v151) )
    {
      v10 = v93;
      goto LABEL_349;
    }
    v12 = v143;
    if ( (v143 & 7) != 0 )
    {
LABEL_348:
      v10 = v93;
      goto LABEL_349;
    }
    if ( v143 < (unsigned __int64)v96 || v143 >= (unsigned __int64)v97 )
    {
      if ( (unsigned __int64)v96 < 0xFFFF800000000000uLL )
        goto LABEL_348;
      KeQueryCurrentStackInformation(&v105, &v133, &v134);
      if ( v105 <= 7 )
      {
        v72 = 161;
        if ( _bittest(&v72, v105) )
          goto LABEL_348;
      }
      v58 = KeGetCurrentThread();
      v59 = v105;
      if ( v105 != 1 )
      {
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && v58 != KeGetCurrentPrcb()->IdleThread )
        {
          v73 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
          if ( (unsigned __int64)&v73[-(unsigned int)KeKernelStackSize] <= v12 && v12 < (unsigned __int64)v73 )
          {
            v97 = v73;
            v96 = &v73[-(unsigned int)KeKernelStackSize];
            goto LABEL_16;
          }
        }
        v59 = v105;
      }
      v60 = 0;
      v61 = (char *)v139[0];
      if ( !v139[0] )
      {
        KeGetNextKernelStackSegment(v58, v139, 1);
        v60 = v11;
        v61 = (char *)v139[0];
      }
      NextKernelStackSegment = 1;
      if ( v59 != 1 && v59 != 6 || !v60 )
      {
        NextKernelStackSegment = KeGetNextKernelStackSegment(v58, v139, 0);
        v61 = (char *)v139[0];
      }
      if ( !NextKernelStackSegment )
        goto LABEL_348;
      v133 = v139[1];
      v134 = v61;
      if ( v12 < v139[1] || v12 >= (unsigned __int64)v61 )
        goto LABEL_348;
      v96 = (char *)v139[1];
      v97 = v61;
    }
LABEL_16:
    v13 = RtlpLookupFunctionEntryForStackWalks(v151, &v131, v11);
    v15 = (_DWORD *)v13;
    v128 = (_DWORD *)v13;
    if ( v13 )
      break;
    if ( !*((_QWORD *)&v131 + 1) )
    {
      v10 = v93;
      goto LABEL_349;
    }
    if ( v151 <= 0x7FFFFFFEFFFFLL && (v143 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v151 = *(_QWORD *)v143;
    v143 += 8LL;
LABEL_51:
    if ( !v151 )
    {
      if ( (v5 & 1) == 0 )
        goto LABEL_147;
      if ( (unsigned __int16)PsWow64GetProcessMachine(v110, v14) != 332 )
        goto LABEL_147;
      if ( *(_BYTE *)(v104 + 43) != 2 )
        goto LABEL_147;
      v57 = (int)Teb;
      if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)Teb + 657), v56, v140) < 0 )
        goto LABEL_147;
      if ( (v140[0] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int8)RtlpWalkWowStack(
                              v130,
                              0,
                              v57,
                              (unsigned int)&v95,
                              v6,
                              v4,
                              *(_DWORD *)(v140[0] + 180),
                              *(_DWORD *)(v140[0] + 196) - 4) )
        v10 = v93;
      else
LABEL_147:
        v10 = v93;
      goto LABEL_349;
    }
    if ( v103 )
    {
      if ( v103 == 1 )
      {
        if ( v151 > 0x7FFFFFFEFFFFLL )
        {
          v10 = v93;
          goto LABEL_349;
        }
        if ( v117 && v151 == *(_QWORD *)(v104 + 360) )
        {
          v103 = 2;
          v151 = v117[39];
          v143 = (unsigned __int64)(v117 + 40);
          v144 = v117[31];
          v142 = v117[32];
          v146 = v117[33];
          v145 = v117[34];
          v147 = v117[35];
          v148 = v117[36];
          v149 = v117[37];
          v150 = v117[38];
          v139[4] = i + 2;
          v117 = (_QWORD *)i[4];
          v49 = (char **)i[5];
          if ( !v49 )
          {
            v10 = v93;
            goto LABEL_349;
          }
          i = (_QWORD *)i[5];
          v96 = (char *)v143;
          v97 = *v49;
        }
      }
      else
      {
        if ( v103 != 2 )
        {
          v10 = v93;
          goto LABEL_349;
        }
        if ( v151 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v151 != *(_QWORD *)(v104 + 360) )
          {
            v10 = v93;
            goto LABEL_349;
          }
          v138 = *(_QWORD *)(v104 + 384);
          if ( (v138 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v103 = 1;
          v143 = *(_QWORD *)(v138 + 72);
          v96 = (char *)v120;
          v97 = (char *)v121;
          if ( v117 )
            v104 = v117[26];
        }
      }
    }
    else
    {
      if ( (v5 & 1) == 0 && v151 < 0xFFFF800000000000uLL )
      {
        v10 = v93;
        goto LABEL_349;
      }
      if ( (v5 & 1) == 0 )
      {
        v34 = !v92;
        goto LABEL_57;
      }
      if ( v151 >= 0xFFFF800000000000uLL )
      {
        v34 = v95 == 0;
LABEL_57:
        if ( !v34 )
          goto LABEL_61;
        goto LABEL_58;
      }
      if ( v151 > 0x7FFFFFFEFFFFLL )
      {
        v10 = v93;
        goto LABEL_349;
      }
      if ( v151 != *(_QWORD *)(v104 + 360) )
      {
        v10 = v93;
        goto LABEL_349;
      }
      v103 = 1;
      if ( v117 )
      {
        v104 = v117[26];
        if ( v104 < 0xFFFF800000000000uLL )
        {
          v10 = v93;
          goto LABEL_349;
        }
      }
      v96 = (char *)v120;
      v97 = (char *)v121;
    }
LABEL_58:
    if ( v95 >= v4 )
      *(_QWORD *)(v130 + 8LL * (v95 - v4)) = v151;
    if ( ++v95 >= v6 )
    {
      v10 = v93;
      goto LABEL_349;
    }
LABEL_61:
    Process = v110;
  }
  v16 = v151;
  v14 = *((_QWORD *)&v131 + 1);
  v17 = *((_QWORD *)&v131 + 1);
  v118 = *((_QWORD *)&v131 + 1);
  v18 = (unsigned int *)v13;
  v109 = (unsigned int *)v13;
  v137 = v13;
  v19 = 0;
  v111 = 0;
  v20 = *((_QWORD *)&v131 + 1) + *(unsigned int *)(v13 + 8);
  if ( v151 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v20 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = *((_QWORD *)&v131 + 1);
    v15 = v128;
  }
  v21 = *(_BYTE *)v20;
  v22 = *(_BYTE *)v20 & 7;
  if ( v91 )
  {
    if ( v22 < 2 )
    {
      v53 = (_BYTE *)v20;
      v54 = 0;
      v127 = 0;
      v55 = (unsigned __int8 *)(v20 + 2);
      if ( !*(_BYTE *)(v20 + 2) )
      {
        while ( 1 )
        {
          if ( (v21 & 0x20) == 0 )
          {
            v19 = 1;
            v111 = 1;
            v18 = v109;
            v17 = v118;
            goto LABEL_20;
          }
          v74 = *v55;
          v123 = v74;
          if ( (v74 & 1) != 0 )
          {
            v74 = (unsigned int)(v74 + 1);
            v123 = v74;
          }
          v127 = ++v54;
          if ( v54 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v53 = (_BYTE *)(*(unsigned int *)&v53[2 * v74 + 12] + v14);
          if ( v151 <= 0x7FFFFFFEFFFFLL )
          {
            if ( ((unsigned __int8)v53 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v14 = *((_QWORD *)&v131 + 1);
            v15 = v128;
          }
          v55 = v53 + 2;
          if ( v53[2] )
            break;
          v21 = *v53;
        }
        v18 = v109;
        v17 = v118;
      }
      if ( v112 )
      {
        v33 = -1073741784;
        goto LABEL_48;
      }
    }
  }
  else
  {
    v19 = 1;
    v111 = 1;
  }
LABEL_20:
  v23 = v151 - *v15 - DWORD2(v131);
  v14 = *(unsigned __int8 *)(v20 + 3);
  if ( (v14 & 0xF) != 0 )
  {
    if ( v23 >= *(unsigned __int8 *)(v20 + 1) || (*(_BYTE *)v20 & 0x20) != 0 )
    {
      v45 = *(_BYTE *)(v20 + 3);
      v46 = (unsigned __int8)v14;
    }
    else
    {
      v75 = 0LL;
      for ( j = 0; ; j = v75 )
      {
        v14 = (unsigned int)v75;
        if ( (unsigned int)v75 >= *(unsigned __int8 *)(v20 + 2) )
          break;
        v76 = *(_WORD *)(v20 + 2 * v75 + 4);
        v101 = v76;
        if ( (HIBYTE(v76) & 0xF) == 3 )
          break;
        v75 = (unsigned int)RtlpUnwindOpSlots(v76) + (unsigned int)v75;
      }
      v77 = *(unsigned __int8 *)(v20 + 2 * v75 + 4);
      v18 = v109;
      v17 = v118;
      if ( v23 < v77 )
        goto LABEL_21;
      v46 = *(unsigned __int8 *)(v20 + 3);
      v45 = *(_BYTE *)(v20 + 3);
    }
    v119 = *(_QWORD *)&v141[8 * (v45 & 0xF) + 120] - (v46 & 0xFFFFFFF0);
  }
  else
  {
LABEL_21:
    v119 = v143;
  }
  if ( v19 )
  {
LABEL_23:
    v24 = v119;
    v25 = 0;
    v124 = 0;
    while ( 1 )
    {
      v26 = 0LL;
      v27 = 0;
      v28 = v16 - v118 - *v18;
      v29 = v118 + v18[2];
      if ( v16 <= 0x7FFFFFFEFFFFLL && (v29 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      while ( 1 )
      {
        v30 = *(unsigned __int8 *)(v29 + 2);
        if ( (unsigned int)v26 >= v30 )
          break;
        v31 = *(unsigned __int8 *)(v29 + 2 * v26 + 5) >> 4;
        v14 = v29 + 2 * v26;
        if ( v28 < *(unsigned __int8 *)(v14 + 4) )
        {
          v26 = (unsigned int)RtlpUnwindOpSlots(*(_WORD *)(v14 + 4)) + (unsigned int)v26;
        }
        else
        {
          if ( (*(_BYTE *)(v29 + 2 * v26 + 5) & 0xF) != 0 )
          {
            if ( (*(_BYTE *)(v29 + 2 * v26 + 5) & 0xF) == 4 )
            {
              v26 = (unsigned int)(v26 + 1);
              v98 = 8 * *(unsigned __int16 *)(v29 + 2 * v26 + 4);
              v32 = v24 + v98;
              if ( v16 <= 0x7FFFFFFEFFFFLL )
              {
                if ( (v32 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v14 = 0x7FFFFFFF0000LL;
              }
              if ( v32 < (unsigned __int64)v96 || v32 > (unsigned __int64)(v97 - 8) )
                goto LABEL_330;
              *(_QWORD *)&v141[8 * v31 + 120] = *(_QWORD *)v32;
            }
            else
            {
              v14 = 0x140000000uLL;
              switch ( *(_BYTE *)(v29 + 2 * v26 + 5) & 0xF )
              {
                case 1:
                  v26 = (unsigned int)(v26 + 1);
                  v36 = *(unsigned __int16 *)(v29 + 2 * v26 + 4);
                  v98 = v36;
                  if ( (_DWORD)v31 )
                  {
                    v26 = (unsigned int)(v26 + 1);
                    v14 = (*(unsigned __int16 *)(v29 + 2 * v26 + 4) << 16) + v36;
                  }
                  else
                  {
                    v14 = 8 * v36;
                  }
                  v98 = v14;
                  v143 += (unsigned int)v14;
                  break;
                case 2:
                  v143 += (unsigned int)(8 * v31 + 8);
                  break;
                case 3:
                  v143 = *(_QWORD *)&v141[8 * (*(_BYTE *)(v29 + 3) & 0xF) + 120];
                  v143 -= *(_BYTE *)(v29 + 3) & 0xF0;
                  break;
                case 5:
                  v26 = (unsigned int)(v26 + 2);
                  v98 = *(unsigned __int16 *)(v29 + 2LL * (unsigned int)(v26 - 1) + 4);
                  v14 = (*(unsigned __int16 *)(v29 + 2 * v26 + 4) << 16) + v98;
                  v98 = v14;
                  v86 = v24 + (unsigned int)v14;
                  if ( v16 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v86 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v14 = 0x7FFFFFFF0000LL;
                  }
                  if ( v86 < (unsigned __int64)v96 || v86 > (unsigned __int64)(v97 - 8) )
                    goto LABEL_330;
                  *(_QWORD *)&v141[8 * v31 + 120] = *(_QWORD *)v86;
                  break;
                case 6:
                  LODWORD(v26) = v26 + 1;
                  break;
                case 7:
                  LODWORD(v26) = v26 + 2;
                  break;
                case 8:
                  v26 = (unsigned int)(v26 + 1);
                  v98 = 16 * *(unsigned __int16 *)(v29 + 2 * v26 + 4);
                  v14 = v24 + v98;
                  if ( v16 <= 0x7FFFFFFEFFFFLL && (v14 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v14 < (unsigned __int64)v96 || v14 > (unsigned __int64)(v97 - 16) )
                    goto LABEL_330;
                  v35 = 2LL * (unsigned int)v31;
                  v152[v35] = *(_QWORD *)v14;
                  v152[v35 + 1] = *(_QWORD *)(v14 + 8);
                  break;
                case 9:
                  v26 = (unsigned int)(v26 + 2);
                  v98 = *(unsigned __int16 *)(v29 + 2LL * (unsigned int)(v26 - 1) + 4);
                  v14 = (*(unsigned __int16 *)(v29 + 2 * v26 + 4) << 16) + v98;
                  v98 = v14;
                  v87 = v24 + (unsigned int)v14;
                  if ( v16 <= 0x7FFFFFFEFFFFLL && (v87 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v87 < (unsigned __int64)v96 || v87 > (unsigned __int64)(v97 - 16) )
                    goto LABEL_330;
                  v88 = 2LL * (unsigned int)v31;
                  v152[v88] = *(_QWORD *)v87;
                  v152[v88 + 1] = *(_QWORD *)(v87 + 8);
                  break;
                case 0xA:
                  v27 = 1;
                  v48 = v143;
                  v135 = v143;
                  v14 = v143 + 24;
                  v136 = v143 + 24;
                  if ( (_DWORD)v31 )
                  {
                    v48 = v143 + 8;
                    v135 = v143 + 8;
                    v14 = v143 + 32;
                    v136 = v143 + 32;
                  }
                  if ( v16 <= 0x7FFFFFFEFFFFLL && (v48 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v48 < (unsigned __int64)v96 || v48 > (unsigned __int64)(v97 - 8) )
                    goto LABEL_330;
                  if ( v16 <= 0x7FFFFFFEFFFFLL && (v14 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v14 < (unsigned __int64)v96 || v14 > (unsigned __int64)(v97 - 8) )
                    goto LABEL_330;
                  v151 = *(_QWORD *)v48;
                  v143 = *(_QWORD *)v14;
                  break;
                default:
                  RtlRaiseStatus(-1073741569);
              }
            }
          }
          else
          {
            if ( v16 <= 0x7FFFFFFEFFFFLL )
            {
              if ( (v143 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v14 = 0x7FFFFFFF0000LL;
            }
            if ( v143 < (unsigned __int64)v96 || v143 > (unsigned __int64)(v97 - 8) )
              goto LABEL_330;
            *(_QWORD *)&v141[8 * v31 + 120] = *(_QWORD *)v143;
            v143 += 8LL;
          }
          v26 = (unsigned int)(v26 + 1);
        }
      }
      if ( (*(_BYTE *)v29 & 0x20) == 0 )
        break;
      if ( (v30 & 1) != 0 )
        ++v30;
      v18 = (unsigned int *)(v29 + 2 * (v30 + 2LL));
      v109 = v18;
      if ( v16 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v18 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v124 = ++v25;
      if ( v25 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( v27 )
    {
      v47 = 0LL;
      v14 = 0x140000000uLL;
      while ( (unsigned int)v47 < 3 )
      {
        if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v29 == *(&RtlpSafeMachineFrameEntries
                                                                                        + v47) )
        {
          v27 = 0;
          break;
        }
        v47 = (unsigned int)(v47 + 1);
      }
    }
    else
    {
      if ( v16 <= 0x7FFFFFFEFFFFLL && (v143 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v143 < (unsigned __int64)v96 || v143 > (unsigned __int64)(v97 - 8) )
      {
LABEL_330:
        v33 = -1073741784;
        goto LABEL_48;
      }
      v151 = *(_QWORD *)v143;
      v143 += 8LL;
    }
    v91 = v27;
    v137 = (__int64)v109;
    goto LABEL_47;
  }
  v37 = 0;
  v99 = 0;
  if ( v22 >= 2 )
  {
    if ( *(_BYTE *)(v20 + 2) )
    {
      v38 = *(_WORD *)(v20 + 4);
      v101 = v38;
      v14 = v38;
      LOWORD(v14) = HIBYTE(v38);
      if ( (HIBYTE(v38) & 0xF) == 6 )
      {
        v39 = (unsigned __int8)v38;
        v40 = v16 - v17;
        if ( (v38 & 0x1000) != 0 )
        {
          v41 = v18[1] - (unsigned __int8)v38;
          v106 = v41;
          if ( v40 - v41 < (unsigned int)(unsigned __int8)v38 )
          {
LABEL_167:
            v99 = 1;
            RtlpUnwindEpilogue(v17, v16, v40 - v41, v18, (__int64)v141, 0LL, (unsigned __int64 *)&v96, &v97);
            v91 = 0;
            goto LABEL_47;
          }
        }
        else
        {
          v106 = 0;
        }
        for ( k = 1; ; ++k )
        {
          j = k;
          if ( k >= *(unsigned __int8 *)(v20 + 2) )
            break;
          v43 = *(_WORD *)(v20 + 2LL * k + 4);
          v101 = v43;
          v14 = v43;
          LOWORD(v14) = HIBYTE(v43);
          if ( (HIBYTE(v43) & 0xF) != 6 )
            break;
          v44 = HIBYTE(v43) >> 4 << 8;
          v34 = (unsigned __int8)v43 + v44 == 0;
          v14 = (unsigned int)(unsigned __int8)v43 + v44;
          v106 = v14;
          if ( v34 )
            break;
          v41 = v18[1] - v14;
          v106 = v41;
          if ( v40 - v41 < v39 )
            goto LABEL_167;
        }
      }
    }
    goto LABEL_23;
  }
  v50 = (unsigned __int8 *)v16;
  v100 = (unsigned __int8 *)v16;
  v51 = 0LL;
  v125 = 0;
  v52 = *(_BYTE *)v16;
  if ( *(_BYTE *)v16 == 72 )
  {
    if ( *(_BYTE *)(v16 + 1) == 0x83 && *(_BYTE *)(v16 + 2) == 0xC4 )
    {
      v50 = (unsigned __int8 *)(v16 + 4);
      goto LABEL_250;
    }
    if ( *(_BYTE *)(v16 + 1) != 0x81 || *(_BYTE *)(v16 + 2) != 0xC4 )
      goto LABEL_116;
LABEL_249:
    v50 = (unsigned __int8 *)(v16 + 7);
    goto LABEL_250;
  }
LABEL_116:
  if ( (v52 & 0xFE) == 0x48 && *(_BYTE *)(v16 + 1) == 0x8D )
  {
    v63 = *(_BYTE *)(v16 + 2);
    v64 = v63 & 7;
    v51 = v64 | (8 * (v52 & 1u));
    v125 = v64 | (8 * (v52 & 1));
    if ( v125 )
    {
      if ( (_DWORD)v51 == (*(_BYTE *)(v20 + 3) & 0xF) )
      {
        v65 = v63 & 0xF8;
        if ( v65 == 96 )
        {
          v50 = (unsigned __int8 *)(v16 + 4);
LABEL_250:
          v100 = v50;
          goto LABEL_117;
        }
        if ( v65 != -96 )
          goto LABEL_117;
        goto LABEL_249;
      }
    }
  }
LABEL_117:
  while ( 2 )
  {
    v14 = *v50;
    if ( (v14 & 0xF8) == 0x58 )
    {
      ++v50;
      goto LABEL_198;
    }
    if ( (v14 & 0xF0) == 0x40 && (v50[1] & 0xF8) == 0x58 )
    {
      v50 += 2;
LABEL_198:
      v100 = v50;
      continue;
    }
    break;
  }
  if ( (_BYTE)v14 == 0xF2 )
  {
    v100 = ++v50;
    v14 = *v50;
  }
  if ( (unsigned __int8)(v14 + 62) <= 1u || (_BYTE)v14 == 0xF3 && v50[1] == 0xC3 )
    goto LABEL_267;
  if ( (((_BYTE)v14 + 23) & 0xFD) != 0 )
  {
    if ( (_BYTE)v14 != 0xFF || v50[1] != 37 )
    {
      LOBYTE(v14) = v14 & 0xF8;
      if ( (_BYTE)v14 == 72 && v50[1] == 0xFF && (v50[2] & 0x38) == 0x20 )
      {
        v37 = 1;
        v99 = 1;
      }
      goto LABEL_126;
    }
LABEL_267:
    v99 = 1;
    goto LABEL_268;
  }
  v129 = &v50[-v17];
  if ( (_BYTE)v14 == 0xEB )
    v78 = (char)v50[1] + 2;
  else
    v78 = *(_DWORD *)(v50 + 1) + 5;
  v79 = (unsigned __int64)&v50[v78 - v17];
  v129 = (unsigned __int8 *)v79;
  v80 = *v18;
  if ( v79 < v80 || v79 >= v18[1] )
  {
    v81 = (_DWORD *)RtlpSameFunction(v18, v17, v79 + v17);
    if ( v81 && v79 != *v81 )
    {
      v18 = v109;
      goto LABEL_126;
    }
    goto LABEL_267;
  }
  if ( v79 == v80 && (*(_BYTE *)v20 & 0x20) == 0 )
  {
    v37 = 1;
    v99 = 1;
  }
LABEL_126:
  if ( !v37 )
    goto LABEL_23;
LABEL_268:
  v14 = v16;
  v100 = (unsigned __int8 *)v16;
  if ( (*(_BYTE *)v16 & 0xF8) != 0x48 )
    goto LABEL_280;
  v82 = *(_BYTE *)(v16 + 1);
  if ( v82 == -125 )
  {
    v143 += *(char *)(v16 + 3);
    v14 = v16 + 4;
    goto LABEL_279;
  }
  if ( v82 == -127 )
  {
    v143 += *(unsigned __int8 *)(v16 + 3) | ((*(unsigned __int8 *)(v16 + 4) | (*(unsigned __int16 *)(v16 + 5) << 8)) << 8);
    goto LABEL_278;
  }
  if ( v82 != -115 )
    goto LABEL_280;
  v83 = *(_BYTE *)(v16 + 2) & 0xF8;
  if ( v83 == 96 )
  {
    v143 = *(_QWORD *)&v141[8 * v51 + 120];
    v143 += *(char *)(v16 + 3);
    v14 = v16 + 4;
  }
  else
  {
    if ( v83 != -96 )
      goto LABEL_280;
    v143 = *(_QWORD *)&v141[8 * v51 + 120]
         + (((*(unsigned __int8 *)(v16 + 4) | (*(unsigned __int16 *)(v16 + 5) << 8)) << 8) | *(unsigned __int8 *)(v16 + 3));
LABEL_278:
    v14 = v16 + 7;
  }
LABEL_279:
  v100 = (unsigned __int8 *)v14;
LABEL_280:
  while ( 2 )
  {
    v84 = *(_BYTE *)v14;
    if ( (*(_BYTE *)v14 & 0xF8) == 0x58 )
    {
      if ( v16 <= 0x7FFFFFFEFFFFLL && (v143 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v143 < (unsigned __int64)v96 || v143 > (unsigned __int64)(v97 - 8) )
        goto LABEL_287;
      *(_QWORD *)&v141[8 * (v84 & 7) + 120] = *(_QWORD *)v143;
      v143 += 8LL;
      ++v14;
LABEL_296:
      v100 = (unsigned __int8 *)v14;
      continue;
    }
    break;
  }
  if ( (v84 & 0xF0) == 0x40 )
  {
    v85 = *(_BYTE *)(v14 + 1);
    if ( (v85 & 0xF8) == 0x58 )
    {
      if ( v16 <= 0x7FFFFFFEFFFFLL && (v143 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v143 < (unsigned __int64)v96 || v143 > (unsigned __int64)(v97 - 8) )
        goto LABEL_287;
      *(_QWORD *)&v141[8 * (v85 & 7 | (8 * (v84 & 1))) + 120] = *(_QWORD *)v143;
      v143 += 8LL;
      v14 += 2LL;
      goto LABEL_296;
    }
  }
  if ( v16 <= 0x7FFFFFFEFFFFLL && (v143 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v143 < (unsigned __int64)v96 || v143 > (unsigned __int64)(v97 - 8) )
  {
LABEL_287:
    v33 = -1073741784;
    goto LABEL_48;
  }
  v151 = *(_QWORD *)v143;
  v143 += 8LL;
  v91 = 0;
LABEL_47:
  v33 = 0;
LABEL_48:
  v102 = v33;
  if ( v33 >= 0 )
  {
    v5 = v113;
    v4 = v114;
    v6 = v115;
    CurrentThread = v122;
    if ( v91 )
      v92 = 0;
    goto LABEL_51;
  }
  v10 = v93;
  CurrentThread = v122;
LABEL_349:
  if ( v10 && !v94 )
    CurrentThread->MiscFlags &= ~0x20u;
  return v95;
}

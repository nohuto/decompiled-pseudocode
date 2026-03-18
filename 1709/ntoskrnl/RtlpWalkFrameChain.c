/*
 * XREFs of RtlpWalkFrameChain @ 0x1400D68B0
 * Callers:
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 * Callees:
 *     MmIsSessionExecutionValid @ 0x1400D5564 (MmIsSessionExecutionValid.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400D83C0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400D85C0 (RtlpIsFrameInBoundsEx.c)
 *     RtlpGetStackLimits @ 0x1400D9050 (RtlpGetStackLimits.c)
 *     PspGetBaseTrapFrame @ 0x1400D9BC4 (PspGetBaseTrapFrame.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x14013011C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1401302CC (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x140149A60 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x140189070 (RtlpCaptureContext.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpWalkWowStack @ 0x140253A70 (RtlpWalkWowStack.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1405162E0 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // edi
  char v5; // si
  unsigned int v6; // r14d
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // rbx
  unsigned __int64 *Teb; // r12
  unsigned __int64 *v11; // r10
  __int64 v12; // rax
  _DWORD *v13; // rcx
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned int *v17; // r11
  int v18; // ebx
  __int64 v19; // rdi
  unsigned int v20; // r14d
  unsigned int v21; // esi
  unsigned __int64 *v22; // r15
  __int64 v23; // rbx
  unsigned int v24; // r13d
  char v25; // r14
  unsigned int v26; // esi
  __int64 v27; // rdi
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  _QWORD *v32; // rcx
  int v33; // eax
  bool v34; // zf
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned __int64 *v40; // rcx
  int v41; // ebx
  __int16 v42; // ax
  unsigned int v43; // r11d
  int v44; // r10d
  int v45; // edx
  unsigned int m; // r8d
  __int16 v47; // ax
  int v48; // edx
  int v49; // edx
  unsigned int k; // ecx
  unsigned __int64 *v51; // rdx
  unsigned __int64 **v52; // rcx
  _QWORD *v53; // rdx
  _BYTE *v54; // rcx
  int v55; // r14d
  char v56; // r8
  char v57; // dl
  _BYTE *v58; // r8
  unsigned int v59; // r10d
  unsigned __int8 *v60; // r9
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 *v63; // rax
  char v64; // dl
  __int64 BaseTrapFrame; // rbx
  unsigned __int64 v66; // rdx
  __int64 v68; // rax
  unsigned int v69; // r15d
  __int64 v70; // rcx
  char v71; // dl
  int v72; // eax
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rcx
  _DWORD *v75; // rax
  _BYTE *v76; // rdx
  char v77; // al
  __int64 v78; // rax
  int v79; // ecx
  char v80; // al
  char v81; // cl
  __int64 v82; // r8
  _QWORD *v83; // rcx
  char v84; // r9
  __int64 v85; // r8
  _QWORD *v86; // rcx
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // r9
  int v89; // ebx
  char v90; // [rsp+40h] [rbp-6A8h]
  bool v91; // [rsp+41h] [rbp-6A7h]
  unsigned __int8 v92; // [rsp+49h] [rbp-69Fh]
  unsigned int v93; // [rsp+4Ch] [rbp-69Ch] BYREF
  unsigned int v94; // [rsp+50h] [rbp-698h]
  unsigned __int64 v95; // [rsp+58h] [rbp-690h] BYREF
  unsigned __int64 v96; // [rsp+60h] [rbp-688h] BYREF
  int v97; // [rsp+68h] [rbp-680h]
  _BYTE *v98; // [rsp+70h] [rbp-678h]
  __int16 v99; // [rsp+78h] [rbp-670h]
  unsigned int j; // [rsp+7Ch] [rbp-66Ch]
  int v101; // [rsp+80h] [rbp-668h]
  int v102; // [rsp+84h] [rbp-664h]
  unsigned int *v103; // [rsp+88h] [rbp-660h]
  __int64 v104; // [rsp+90h] [rbp-658h]
  unsigned __int64 v105; // [rsp+98h] [rbp-650h]
  int v106; // [rsp+A0h] [rbp-648h]
  struct _KTHREAD *v107; // [rsp+A8h] [rbp-640h]
  _QWORD *i; // [rsp+B0h] [rbp-638h]
  __int64 v109; // [rsp+B8h] [rbp-630h]
  unsigned int v110; // [rsp+C0h] [rbp-628h]
  int v111; // [rsp+C4h] [rbp-624h]
  unsigned int v112; // [rsp+C8h] [rbp-620h]
  _QWORD *v113; // [rsp+D0h] [rbp-618h]
  int v114; // [rsp+D8h] [rbp-610h]
  unsigned __int64 *v115; // [rsp+E0h] [rbp-608h]
  unsigned __int64 v116; // [rsp+E8h] [rbp-600h]
  unsigned __int64 v117; // [rsp+F0h] [rbp-5F8h]
  unsigned int v118; // [rsp+F8h] [rbp-5F0h]
  unsigned int v119; // [rsp+FCh] [rbp-5ECh]
  int v120; // [rsp+100h] [rbp-5E8h]
  int v121; // [rsp+104h] [rbp-5E4h]
  _DWORD *v122; // [rsp+108h] [rbp-5E0h]
  _BYTE *v123; // [rsp+110h] [rbp-5D8h]
  unsigned __int64 *v124; // [rsp+118h] [rbp-5D0h]
  __int64 v125; // [rsp+120h] [rbp-5C8h]
  __int128 v126; // [rsp+128h] [rbp-5C0h] BYREF
  __int64 v127; // [rsp+138h] [rbp-5B0h]
  unsigned __int64 *v128; // [rsp+148h] [rbp-5A0h]
  unsigned __int64 *v129; // [rsp+150h] [rbp-598h]
  __int64 v130; // [rsp+158h] [rbp-590h]
  __int64 v131; // [rsp+160h] [rbp-588h]
  char *v132; // [rsp+168h] [rbp-580h]
  __int64 v133[5]; // [rsp+180h] [rbp-568h] BYREF
  _BYTE v134[40]; // [rsp+1A8h] [rbp-540h] BYREF
  _BYTE v135[144]; // [rsp+1D0h] [rbp-518h] BYREF
  __int64 v136; // [rsp+260h] [rbp-488h]
  unsigned __int64 *v137; // [rsp+268h] [rbp-480h]
  __int64 v138; // [rsp+270h] [rbp-478h]
  __int64 v139; // [rsp+278h] [rbp-470h]
  __int64 v140; // [rsp+280h] [rbp-468h]
  __int64 v141; // [rsp+2A8h] [rbp-440h]
  __int64 v142; // [rsp+2B0h] [rbp-438h]
  __int64 v143; // [rsp+2B8h] [rbp-430h]
  __int64 v144; // [rsp+2C0h] [rbp-428h]
  unsigned __int64 v145; // [rsp+2C8h] [rbp-420h]
  _QWORD v146[102]; // [rsp+370h] [rbp-378h]

  v4 = a4;
  v111 = a4;
  v5 = a3;
  v6 = a2;
  v112 = a2;
  v7 = a1;
  v125 = a1;
  v110 = 0;
  i = 0LL;
  v113 = 0LL;
  v92 = 1;
  CurrentThread = KeGetCurrentThread();
  v107 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v109 = Process;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = (unsigned __int64 *)KeGetCurrentThread()->Teb;
  v124 = Teb;
  v105 = 0LL;
  v102 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v95, &v96) )
    return 0LL;
  RtlpCaptureContext(v135);
  v90 = 0;
  v93 = 0;
  v91 = (v5 & 2) != 0;
  if ( (v5 & 1) == 0 && (dword_140400104 & 1) == 0 )
    v110 = 0x80000000;
  v116 = 0LL;
  v117 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    BaseTrapFrame = PspGetBaseTrapFrame(CurrentThread);
    v105 = BaseTrapFrame;
    if ( !Teb || (*((_WORD *)Teb + 3063) & 0x100) != 0 )
      return 0LL;
    if ( (unsigned __int16)PsWow64GetProcessMachine(v109) == 332
      && *(_BYTE *)(BaseTrapFrame + 43) != 2
      && *(_WORD *)(BaseTrapFrame + 368) == 35 )
    {
      v93 = 1;
      if ( (unsigned __int8)RtlpWalkWowStack(
                              v7,
                              (int)BaseTrapFrame + 360,
                              (_DWORD)Teb,
                              (unsigned int)&v93,
                              v6,
                              v4,
                              *(_DWORD *)(BaseTrapFrame + 344),
                              *(_DWORD *)(BaseTrapFrame + 384)) )
        goto LABEL_339;
    }
    v116 = *(_QWORD *)(v105 + 384);
    v66 = Teb[1];
    v117 = v66;
    if ( v66 <= v116 )
      return 0LL;
    if ( v66 > 0x7FFFFFFF0000LL && v66 != v116 )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v113 = (_QWORD *)i[4];
    v92 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    Process = v109;
  }
  memset(v134, 0, 0x20uLL);
  v126 = *(_OWORD *)&xmmword_140418020;
  v127 = qword_140418030;
  v11 = v137;
  while ( 1 )
  {
    if ( v102 != 1 && v145 >= 0xFFFF800000000000uLL && byte_1403899D0[((v145 >> 39) & 0x1FF) - 256] == 1 )
    {
      if ( !(unsigned int)MmIsSessionExecutionValid((__int64)CurrentThread, Process, v145) )
        goto LABEL_339;
      v11 = v137;
    }
    if ( !(unsigned __int8)RtlpIsFrameInBoundsEx(&v95, v11, &v96, v134) )
      goto LABEL_339;
    v12 = RtlpLookupFunctionEntryForStackWalks(v145, &v126);
    v13 = (_DWORD *)v12;
    v122 = (_DWORD *)v12;
    if ( v12 )
      break;
    if ( !*((_QWORD *)&v126 + 1) )
      goto LABEL_339;
    if ( v145 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v137 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v145 = *v137;
    v11 = ++v137;
LABEL_50:
    if ( !v145 )
    {
      if ( (v5 & 1) != 0 && (unsigned __int16)PsWow64GetProcessMachine(v109) == 332 && *(_BYTE *)(v105 + 43) == 2 )
      {
        v89 = (int)v124;
        if ( (int)RtlWow64GetCpuAreaInfo(v124[657], v62, v133) >= 0 )
        {
          if ( (v133[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          RtlpWalkWowStack(
            v125,
            0,
            v89,
            (unsigned int)&v93,
            v6,
            v4,
            *(_DWORD *)(v133[0] + 180),
            *(_DWORD *)(v133[0] + 196) - 4);
        }
      }
      goto LABEL_339;
    }
    if ( v102 )
    {
      if ( v102 == 1 )
      {
        if ( v145 > 0x7FFFFFFEFFFFLL )
          goto LABEL_339;
        v53 = v113;
        if ( v113 && v145 == *(_QWORD *)(v105 + 360) )
        {
          v102 = 2;
          v145 = v113[39];
          v11 = v113 + 40;
          v137 = v113 + 40;
          v138 = v113[31];
          v136 = v113[32];
          v140 = v113[33];
          v139 = v113[34];
          v141 = v113[35];
          v142 = v113[36];
          v143 = v113[37];
          v144 = v113[38];
          v132 = (char *)(i + 2);
          v113 = (_QWORD *)i[4];
          v63 = (unsigned __int64 *)i[5];
          if ( !v63 )
            goto LABEL_339;
          i = (_QWORD *)i[5];
          v95 = (unsigned __int64)(v53 + 40);
          v61 = *v63;
LABEL_159:
          v96 = v61;
        }
      }
      else
      {
        if ( v102 != 2 )
          goto LABEL_339;
        if ( v145 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v145 != *(_QWORD *)(v105 + 360) )
            goto LABEL_339;
          v131 = *(_QWORD *)(v105 + 384);
          if ( (v131 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v102 = 1;
          v11 = *(unsigned __int64 **)(v131 + 72);
          v137 = v11;
          v95 = v116;
          v96 = v117;
          if ( v113 )
            v105 = v113[26];
        }
      }
LABEL_57:
      if ( v93 >= v4 )
      {
        *(_QWORD *)(v125 + 8LL * (v93 - v4)) = v145;
        v11 = v137;
      }
      if ( ++v93 >= v6 )
        goto LABEL_339;
      Process = v109;
    }
    else
    {
      if ( (v5 & 1) == 0 && v145 < 0xFFFF800000000000uLL )
        goto LABEL_339;
      if ( (v5 & 1) == 0 )
      {
        v34 = !v91;
        goto LABEL_56;
      }
      if ( v145 < 0xFFFF800000000000uLL )
      {
        if ( v145 > 0x7FFFFFFEFFFFLL )
          goto LABEL_339;
        if ( v145 != *(_QWORD *)(v105 + 360) )
          goto LABEL_339;
        v102 = 1;
        if ( v113 )
        {
          v105 = v113[26];
          if ( v105 < 0xFFFF800000000000uLL )
            goto LABEL_339;
        }
        v95 = v116;
        v61 = v117;
        goto LABEL_159;
      }
      v34 = v93 == 0;
LABEL_56:
      if ( v34 )
        goto LABEL_57;
      Process = v109;
    }
  }
  v14 = v145;
  v15 = *((_QWORD *)&v126 + 1);
  v16 = *((_QWORD *)&v126 + 1);
  v104 = *((_QWORD *)&v126 + 1);
  v17 = (unsigned int *)v12;
  v103 = (unsigned int *)v12;
  v130 = v12;
  v18 = 0;
  v114 = 0;
  v19 = *((_QWORD *)&v126 + 1) + *(unsigned int *)(v12 + 8);
  if ( v145 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v19 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = *((_QWORD *)&v126 + 1);
    v13 = v122;
  }
  v20 = *(_BYTE *)v19 & 7;
  if ( v90 )
  {
    if ( v20 < 2 )
    {
      v58 = (_BYTE *)(*((_QWORD *)&v126 + 1) + *(unsigned int *)(v12 + 8));
      v59 = 0;
      v119 = 0;
      v60 = (unsigned __int8 *)(v19 + 2);
      if ( !*(_BYTE *)(v19 + 2) )
      {
        do
        {
          if ( (*v58 & 0x20) == 0 )
          {
            v18 = 1;
            v114 = 1;
            v17 = v103;
            goto LABEL_151;
          }
          v68 = *v60;
          v120 = v68;
          if ( (v68 & 1) != 0 )
          {
            v68 = (unsigned int)(v68 + 1);
            v120 = v68;
          }
          v119 = ++v59;
          if ( v59 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v58 = (_BYTE *)(v15 + *(unsigned int *)&v58[2 * v68 + 12]);
          if ( v145 <= 0x7FFFFFFEFFFFLL )
          {
            if ( ((unsigned __int8)v58 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v15 = *((_QWORD *)&v126 + 1);
            v13 = v122;
          }
          v60 = v58 + 2;
        }
        while ( !v58[2] );
        v17 = v103;
        v5 = a3;
        CurrentThread = v107;
      }
      if ( v110 )
      {
        v33 = -1073741784;
        v11 = v137;
        goto LABEL_47;
      }
LABEL_151:
      v16 = v104;
    }
  }
  else
  {
    v18 = 1;
    v114 = 1;
  }
  v21 = v145 - *v13 - DWORD2(v126);
  if ( (*(_BYTE *)(v19 + 3) & 0xF) == 0 )
  {
    v11 = v137;
    v115 = v137;
    goto LABEL_20;
  }
  if ( v21 >= *(unsigned __int8 *)(v19 + 1) || (*(_BYTE *)v19 & 0x20) != 0 )
  {
    v40 = (unsigned __int64 *)(*(_QWORD *)&v135[8 * (*(_BYTE *)(v19 + 3) & 0xF) + 120] - (*(_BYTE *)(v19 + 3) & 0xF0));
    v11 = v137;
    goto LABEL_72;
  }
  v69 = 0;
  for ( j = 0; v69 < *(unsigned __int8 *)(v19 + 2); j = v69 )
  {
    v70 = *(unsigned __int16 *)(v19 + 2LL * v69 + 4);
    v99 = v70;
    if ( (BYTE1(v70) & 0xF) == 3 )
      break;
    v69 += RtlpUnwindOpSlots(v70);
  }
  v11 = v137;
  v17 = v103;
  v16 = v104;
  if ( v21 < *(unsigned __int8 *)(v19 + 2LL * v69 + 4) )
  {
    v115 = v137;
  }
  else
  {
    v40 = (unsigned __int64 *)(*(_QWORD *)&v135[8 * (*(_BYTE *)(v19 + 3) & 0xF) + 120] - (*(_BYTE *)(v19 + 3) & 0xF0));
LABEL_72:
    v115 = v40;
  }
LABEL_20:
  if ( v18 )
  {
LABEL_21:
    v22 = v115;
    LODWORD(v23) = 0;
    v24 = 0;
    v118 = 0;
    while ( 1 )
    {
      v25 = 0;
      v26 = v14 - *v17 - v16;
      v27 = v16 + v17[2];
      if ( v14 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v27 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v137;
      }
      while ( 1 )
      {
        v28 = *(unsigned __int8 *)(v27 + 2);
        if ( (unsigned int)v23 >= v28 )
          break;
        v29 = *(unsigned __int8 *)(v27 + 2LL * (unsigned int)v23 + 5) >> 4;
        v30 = v27 + 2LL * (unsigned int)v23;
        if ( v26 < *(unsigned __int8 *)(v30 + 4) )
        {
          LODWORD(v23) = RtlpUnwindOpSlots(*(unsigned __int16 *)(v30 + 4)) + v23;
          v11 = v137;
        }
        else
        {
          if ( (*(_BYTE *)(v27 + 2LL * (unsigned int)v23 + 5) & 0xF) != 0 )
          {
            switch ( *(_BYTE *)(v27 + 2LL * (unsigned int)v23 + 5) & 0xF )
            {
              case 1:
                v23 = (unsigned int)(v23 + 1);
                v38 = *(unsigned __int16 *)(v27 + 2 * v23 + 4);
                v94 = v38;
                if ( (_DWORD)v29 )
                {
                  v23 = (unsigned int)(v23 + 1);
                  v39 = (*(unsigned __int16 *)(v27 + 2 * v23 + 4) << 16) + v38;
                }
                else
                {
                  v39 = 8 * v38;
                }
                v94 = v39;
                v11 = (unsigned __int64 *)((char *)v11 + v39);
                goto LABEL_35;
              case 2:
                v11 = (unsigned __int64 *)((char *)v11 + (unsigned int)(8 * v29 + 8));
                goto LABEL_35;
              case 3:
                v137 = *(unsigned __int64 **)&v135[8 * (*(_BYTE *)(v27 + 3) & 0xF) + 120];
                v11 = (unsigned __int64 *)((char *)v137 - (*(_BYTE *)(v27 + 3) & 0xF0));
                goto LABEL_35;
              case 4:
                v23 = (unsigned int)(v23 + 1);
                v94 = 8 * *(unsigned __int16 *)(v27 + 2 * v23 + 4);
                v31 = (unsigned __int64)v22 + v94;
                if ( v14 <= 0x7FFFFFFEFFFFLL )
                {
                  if ( (v31 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v11 = v137;
                }
                if ( v31 < v95 || v31 > v96 - 8 )
                  goto LABEL_324;
                *(_QWORD *)&v135[8 * v29 + 120] = *(_QWORD *)v31;
                v11 = v137;
                goto LABEL_36;
              case 5:
                v23 = (unsigned int)(v23 + 2);
                v94 = *(unsigned __int16 *)(v27 + 2LL * (unsigned int)(v23 - 1) + 4);
                v94 += *(unsigned __int16 *)(v27 + 2 * v23 + 4) << 16;
                v87 = (unsigned __int64)v22 + v94;
                if ( v14 <= 0x7FFFFFFEFFFFLL )
                {
                  if ( (v87 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v11 = v137;
                }
                if ( v87 < v95 || v87 > v96 - 8 )
                  goto LABEL_324;
                *(_QWORD *)&v135[8 * v29 + 120] = *(_QWORD *)v87;
                v11 = v137;
                goto LABEL_36;
              case 6:
                LODWORD(v23) = v23 + 1;
                goto LABEL_36;
              case 7:
                LODWORD(v23) = v23 + 2;
                goto LABEL_36;
              case 8:
                v23 = (unsigned int)(v23 + 1);
                v94 = 16 * *(unsigned __int16 *)(v27 + 2 * v23 + 4);
                v35 = (unsigned __int64)v22 + v94;
                if ( v14 <= 0x7FFFFFFEFFFFLL )
                {
                  if ( (v35 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v11 = v137;
                }
                if ( v35 < v95 || v35 > v96 - 16 )
                  goto LABEL_324;
                v36 = 2LL * (unsigned int)v29;
                v146[2 * (unsigned int)v29] = *(_QWORD *)v35;
                v37 = *(_QWORD *)(v35 + 8);
                goto LABEL_65;
              case 9:
                v23 = (unsigned int)(v23 + 2);
                v94 = *(unsigned __int16 *)(v27 + 2LL * (unsigned int)(v23 - 1) + 4);
                v94 += *(unsigned __int16 *)(v27 + 2 * v23 + 4) << 16;
                v88 = (unsigned __int64)v22 + v94;
                if ( v14 <= 0x7FFFFFFEFFFFLL )
                {
                  if ( (v88 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v11 = v137;
                }
                if ( v88 < v95 || v88 > v96 - 16 )
                  goto LABEL_324;
                v36 = 2LL * (unsigned int)v29;
                v146[2 * (unsigned int)v29] = *(_QWORD *)v88;
                v37 = *(_QWORD *)(v88 + 8);
LABEL_65:
                v146[v36 + 1] = v37;
                v11 = v137;
                goto LABEL_36;
              case 0xA:
                v25 = 1;
                v51 = v11;
                v128 = v11;
                v52 = (unsigned __int64 **)(v11 + 3);
                v129 = v11 + 3;
                if ( (_DWORD)v29 )
                {
                  v51 = v11 + 1;
                  v128 = v11 + 1;
                  v52 = (unsigned __int64 **)(v11 + 4);
                  v129 = v11 + 4;
                }
                if ( v14 <= 0x7FFFFFFEFFFFLL )
                {
                  if ( ((unsigned __int8)v51 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v11 = v137;
                }
                if ( (unsigned __int64)v51 < v95 || (unsigned __int64)v51 > v96 - 8 )
                  goto LABEL_324;
                if ( v14 <= 0x7FFFFFFEFFFFLL )
                {
                  if ( ((unsigned __int8)v52 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v11 = v137;
                }
                if ( (unsigned __int64)v52 < v95 || (unsigned __int64)v52 > v96 - 8 )
                  goto LABEL_324;
                v145 = *v51;
                v11 = *v52;
                goto LABEL_35;
              default:
                RtlRaiseStatus(-1073741569);
            }
          }
          v32 = v11;
          if ( v14 <= 0x7FFFFFFEFFFFLL )
          {
            if ( ((unsigned __int8)v11 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v137;
          }
          if ( (unsigned __int64)v32 < v95 || (unsigned __int64)v32 > v96 - 8 )
            goto LABEL_324;
          *(_QWORD *)&v135[8 * v29 + 120] = *v32;
          v11 = v137 + 1;
LABEL_35:
          v137 = v11;
LABEL_36:
          LODWORD(v23) = v23 + 1;
        }
      }
      if ( (*(_BYTE *)v27 & 0x20) == 0 )
        break;
      if ( (v28 & 1) != 0 )
        ++v28;
      v17 = (unsigned int *)(v27 + 2 * (v28 + 2LL));
      v103 = v17;
      if ( v14 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v17 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v137;
      }
      v118 = ++v24;
      v16 = v104;
      LODWORD(v23) = 0;
      if ( v24 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( v25 )
    {
      for ( k = 0; k < 3; ++k )
      {
        if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v27 == *(&RtlpSafeMachineFrameEntries
                                                                                        + k) )
        {
          v25 = 0;
          break;
        }
      }
    }
    else
    {
      if ( v14 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v11 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v137;
      }
      if ( (unsigned __int64)v11 < v95 || (unsigned __int64)v11 > v96 - 8 )
      {
LABEL_324:
        v33 = -1073741784;
        goto LABEL_46;
      }
      v145 = *v11++;
      v137 = v11;
    }
    v90 = v25;
    v130 = (__int64)v103;
    goto LABEL_45;
  }
  v41 = 0;
  v97 = 0;
  if ( v20 >= 2 )
  {
    if ( *(_BYTE *)(v19 + 2) )
    {
      v42 = *(_WORD *)(v19 + 4);
      v99 = v42;
      if ( (HIBYTE(v42) & 0xF) == 6 )
      {
        v43 = (unsigned __int8)v42;
        v44 = v14 - v16;
        if ( (v42 & 0x1000) != 0 )
        {
          v45 = v103[1] - (unsigned __int8)v42;
          v106 = v45;
          if ( v44 - v45 < (unsigned int)(unsigned __int8)v42 )
          {
            v97 = 1;
            goto LABEL_180;
          }
        }
        else
        {
          v106 = 0;
        }
        for ( m = 1; ; ++m )
        {
          j = m;
          if ( m >= *(unsigned __int8 *)(v19 + 2) )
            break;
          v47 = *(_WORD *)(v19 + 2LL * m + 4);
          v99 = v47;
          if ( (HIBYTE(v47) & 0xF) != 6 )
            break;
          v48 = HIBYTE(v47) >> 4 << 8;
          v34 = (unsigned __int8)v47 + v48 == 0;
          v49 = (unsigned __int8)v47 + v48;
          v106 = v49;
          if ( v34 )
            break;
          v45 = v103[1] - v49;
          v106 = v45;
          if ( v44 - v45 < v43 )
          {
            v97 = 1;
LABEL_180:
            RtlpUnwindEpilogue(v104, v14, v44 - v45, (_DWORD)v103, (__int64)v135, 0LL, (__int64)&v95, (__int64)&v96);
            v90 = 0;
            v11 = v137;
LABEL_45:
            v33 = 0;
            goto LABEL_46;
          }
        }
        v17 = v103;
        v16 = v104;
      }
      v11 = v137;
    }
    goto LABEL_21;
  }
  v54 = (_BYTE *)v14;
  v98 = (_BYTE *)v14;
  v55 = 0;
  v121 = 0;
  v56 = *(_BYTE *)v14;
  if ( *(_BYTE *)v14 == 72 )
  {
    if ( *(_BYTE *)(v14 + 1) == 0x83 && *(_BYTE *)(v14 + 2) == 0xC4 )
    {
      v54 = (_BYTE *)(v14 + 4);
LABEL_234:
      v98 = v54;
      goto LABEL_118;
    }
    if ( *(_BYTE *)(v14 + 1) != 0x81 || *(_BYTE *)(v14 + 2) != 0xC4 )
      goto LABEL_117;
LABEL_233:
    v54 = (_BYTE *)(v14 + 7);
    goto LABEL_234;
  }
LABEL_117:
  if ( (v56 & 0xFE) == 0x48 && *(_BYTE *)(v14 + 1) == 0x8D )
  {
    v64 = *(_BYTE *)(v14 + 2);
    v55 = v64 & 7 | (8 * (v56 & 1));
    v121 = v55;
    if ( v55 )
    {
      if ( v55 == (*(_BYTE *)(v19 + 3) & 0xF) )
      {
        v71 = v64 & 0xF8;
        if ( v71 == 96 )
        {
          v54 = (_BYTE *)(v14 + 4);
          goto LABEL_234;
        }
        if ( v71 != -96 )
          goto LABEL_118;
        goto LABEL_233;
      }
    }
  }
LABEL_118:
  while ( 2 )
  {
    if ( (*v54 & 0xF8) == 0x58 )
    {
      ++v54;
      goto LABEL_236;
    }
    if ( (*v54 & 0xF0) == 0x40 && (v54[1] & 0xF8) == 0x58 )
    {
      v54 += 2;
LABEL_236:
      v98 = v54;
      continue;
    }
    break;
  }
  if ( *v54 == 0xF2 )
    v98 = ++v54;
  v57 = *v54;
  if ( (unsigned __int8)(*v54 + 62) <= 1u || v57 == -13 && v54[1] == 0xC3 )
    goto LABEL_255;
  if ( ((v57 + 23) & 0xFD) != 0 )
  {
    if ( v57 != -1 || v54[1] != 37 )
    {
      if ( (v57 & 0xF8) == 0x48 && v54[1] == 0xFF && (v54[2] & 0x38) == 0x20 )
      {
        v41 = 1;
        v97 = 1;
      }
      goto LABEL_127;
    }
LABEL_255:
    v97 = 1;
    goto LABEL_256;
  }
  v123 = &v54[-v16];
  if ( v57 == -21 )
    v72 = (char)v54[1] + 2;
  else
    v72 = *(_DWORD *)(v54 + 1) + 5;
  v73 = (unsigned __int64)&v54[v72 - v16];
  v123 = (_BYTE *)v73;
  v74 = *v17;
  if ( v73 < v74 || v73 >= v17[1] )
  {
    v75 = (_DWORD *)RtlpSameFunction(v17, v16, v73 + v16);
    if ( v75 && v73 != *v75 )
    {
      v11 = v137;
      v17 = v103;
      v16 = v104;
      goto LABEL_127;
    }
    v11 = v137;
    goto LABEL_255;
  }
  if ( v73 == v74 && (*(_BYTE *)v19 & 0x20) == 0 )
  {
    v41 = 1;
    v97 = 1;
  }
LABEL_127:
  if ( !v41 )
    goto LABEL_21;
LABEL_256:
  v76 = (_BYTE *)v14;
  v98 = (_BYTE *)v14;
  if ( (*(_BYTE *)v14 & 0xF8) != 0x48 )
    goto LABEL_268;
  v77 = *(_BYTE *)(v14 + 1);
  if ( v77 == -125 )
  {
    v78 = *(char *)(v14 + 3);
    v76 = (_BYTE *)(v14 + 4);
    goto LABEL_267;
  }
  if ( v77 == -127 )
  {
    v79 = *(unsigned __int8 *)(v14 + 3) | ((*(unsigned __int8 *)(v14 + 4) | (*(unsigned __int16 *)(v14 + 5) << 8)) << 8);
    goto LABEL_266;
  }
  if ( v77 != -115 )
    goto LABEL_268;
  v80 = *(_BYTE *)(v14 + 2) & 0xF8;
  if ( v80 == 96 )
  {
    v11 = *(unsigned __int64 **)&v135[8 * v55 + 120];
    v137 = v11;
    v78 = *(char *)(v14 + 3);
    v76 = (_BYTE *)(v14 + 4);
  }
  else
  {
    if ( v80 != -96 )
      goto LABEL_268;
    v79 = *(unsigned __int8 *)(v14 + 3) | ((*(unsigned __int8 *)(v14 + 4) | (*(unsigned __int16 *)(v14 + 5) << 8)) << 8);
    v11 = *(unsigned __int64 **)&v135[8 * v55 + 120];
    v137 = v11;
LABEL_266:
    v76 = (_BYTE *)(v14 + 7);
    v78 = v79;
  }
LABEL_267:
  v11 = (unsigned __int64 *)((char *)v11 + v78);
  v98 = v76;
  v137 = v11;
LABEL_268:
  while ( 2 )
  {
    v81 = *v76;
    if ( (*v76 & 0xF8) == 0x58 )
    {
      v82 = v81 & 7;
      v83 = v11;
      if ( v14 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v11 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v137;
      }
      if ( (unsigned __int64)v83 < v95 || (unsigned __int64)v83 > v96 - 8 )
        goto LABEL_275;
      *(_QWORD *)&v135[8 * v82 + 120] = *v83;
      v11 = v137 + 1;
      ++v76;
LABEL_287:
      v98 = v76;
      v137 = v11;
      continue;
    }
    break;
  }
  if ( (v81 & 0xF0) == 0x40 )
  {
    v84 = v76[1];
    if ( (v84 & 0xF8) == 0x58 )
    {
      v85 = v84 & 7 | (8 * (v81 & 1u));
      v86 = v11;
      if ( v14 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v11 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v137;
      }
      if ( (unsigned __int64)v86 < v95 )
      {
LABEL_275:
        v33 = -1073741784;
        goto LABEL_46;
      }
      if ( (unsigned __int64)v86 > v96 - 8 )
      {
        v33 = -1073741784;
        goto LABEL_46;
      }
      *(_QWORD *)&v135[8 * v85 + 120] = *v86;
      v11 = v137 + 1;
      v76 += 2;
      goto LABEL_287;
    }
  }
  if ( v14 <= 0x7FFFFFFEFFFFLL )
  {
    if ( ((unsigned __int8)v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = v137;
  }
  if ( (unsigned __int64)v11 >= v95 && (unsigned __int64)v11 <= v96 - 8 )
  {
    v145 = *v11++;
    v137 = v11;
    v90 = 0;
    goto LABEL_45;
  }
  v33 = -1073741784;
LABEL_46:
  v5 = a3;
  CurrentThread = v107;
LABEL_47:
  v101 = v33;
  if ( v33 >= 0 )
  {
    v4 = v111;
    v6 = v112;
    if ( v90 )
      v91 = 0;
    goto LABEL_50;
  }
LABEL_339:
  if ( (v5 & 1) != 0 && !v92 )
    CurrentThread->MiscFlags &= ~0x20u;
  return v93;
}

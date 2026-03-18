/*
 * XREFs of RtlUnwindEx @ 0x1400D5CB0
 * Callers:
 *     __C_specific_handler @ 0x14015D750 (__C_specific_handler.c)
 *     _local_unwind @ 0x14015E3E0 (_local_unwind.c)
 *     __longjmp_internal @ 0x14017D5F0 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x140191280 (KiSystemServiceHandler.c)
 *     RtlUnwind @ 0x140251410 (RtlUnwind.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1400D5980 (RtlLookupFunctionEntry.c)
 *     RtlpCopyContext @ 0x1400D66FC (RtlpCopyContext.c)
 *     RtlpGetStackLimits @ 0x1400D9050 (RtlpGetStackLimits.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x14012C5E0 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x14013011C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1401302CC (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x140149A60 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140180440 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x140189090 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x1401891D0 (RtlRestoreContext.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140189BD0 (RtlpExecuteHandlerForUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402572FC (RtlGuardCheckLongJumpTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        struct _EXCEPTION_RECORD *ExceptionRecord,
        PVOID ReturnValue,
        struct _CONTEXT *ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PVOID v6; // r15
  struct _UNWIND_HISTORY_TABLE *v7; // rbx
  struct _CONTEXT *v9; // r14
  CONTEXT *p_Context; // r13
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  DWORD64 v13; // r12
  unsigned int *p_BeginAddress; // r11
  unsigned __int64 v15; // rbx
  int v16; // r14d
  unsigned int v17; // esi
  unsigned __int8 v18; // dl
  unsigned int v19; // edi
  unsigned int v20; // edx
  _DWORD *v21; // r14
  char v22; // r9
  __int64 v23; // rbx
  unsigned int v24; // esi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r8
  PEXCEPTION_ROUTINE v32; // r9
  struct _CONTEXT *v33; // rax
  int v34; // ebx
  unsigned int v35; // edx
  struct _EXCEPTION_RECORD *v36; // r10
  unsigned __int64 v37; // rcx
  struct _CONTEXT *v38; // r8
  unsigned __int64 v39; // rax
  int v40; // eax
  struct _CONTEXT *v41; // rax
  struct _EXCEPTION_RECORD *v42; // rdi
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // edx
  char v47; // cl
  int v48; // eax
  unsigned __int64 v49; // rcx
  __int16 v50; // ax
  unsigned int v51; // r10d
  int v52; // r8d
  int v53; // ecx
  unsigned int i; // r9d
  __int16 v55; // ax
  int v56; // edx
  unsigned __int64 *v57; // rcx
  unsigned __int64 *v58; // rdx
  int v59; // ecx
  unsigned int v60; // eax
  int v61; // r8d
  unsigned __int8 *v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned int v64; // eax
  struct _CONTEXT *v65; // r9
  PRUNTIME_FUNCTION v66; // r8
  DWORD64 v67; // r10
  unsigned __int64 Rip; // rax
  char v69; // r8
  __int64 v70; // rsi
  _BYTE *v71; // rcx
  char v72; // dl
  char v73; // dl
  unsigned __int64 v74; // rax
  int v75; // eax
  char v76; // al
  unsigned int v77; // ecx
  __int64 v78; // rax
  __int64 v79; // r15
  unsigned int v80; // ecx
  char v81; // dl
  __int64 v82; // rax
  bool v83; // zf
  char *v84; // rdx
  char v85; // al
  _BYTE *v86; // r8
  int v87; // eax
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rdi
  _DWORD *v90; // rax
  char v91; // al
  unsigned __int64 v92; // rcx
  char v93; // cl
  unsigned __int64 *v94; // r8
  __int64 v95; // rax
  unsigned __int64 *v96; // r8
  __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rcx
  unsigned __int64 *v100; // r9
  __int64 v101; // rcx
  unsigned __int64 *Rsp; // rcx
  char v103; // [rsp+40h] [rbp-C0h]
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v105; // [rsp+50h] [rbp-B0h]
  unsigned __int64 ImageBase; // [rsp+58h] [rbp-A8h] BYREF
  EXCEPTION_ROUTINE *v107; // [rsp+60h] [rbp-A0h]
  struct _CONTEXT *v108; // [rsp+68h] [rbp-98h]
  unsigned int v109; // [rsp+70h] [rbp-90h]
  PUNWIND_HISTORY_TABLE v110; // [rsp+78h] [rbp-88h]
  PRUNTIME_FUNCTION v111; // [rsp+80h] [rbp-80h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+88h] [rbp-78h]
  PVOID HandlerData; // [rsp+90h] [rbp-70h] BYREF
  PVOID v114; // [rsp+98h] [rbp-68h]
  unsigned __int64 v115; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v116; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v117; // [rsp+B0h] [rbp-50h]
  PVOID v118; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *v119; // [rsp+C0h] [rbp-40h]
  DWORD64 ControlPc; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v121; // [rsp+D8h] [rbp-28h]
  struct _RUNTIME_FUNCTION *v122; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v123; // [rsp+E8h] [rbp-18h]
  PVOID v124; // [rsp+F0h] [rbp-10h]
  struct _CONTEXT *v125; // [rsp+F8h] [rbp-8h]
  EXCEPTION_ROUTINE *v126; // [rsp+100h] [rbp+0h]
  PVOID v127; // [rsp+108h] [rbp+8h]
  struct _UNWIND_HISTORY_TABLE *v128; // [rsp+110h] [rbp+10h]
  int v129; // [rsp+118h] [rbp+18h]
  int v130; // [rsp+120h] [rbp+20h] BYREF
  __int64 v131; // [rsp+128h] [rbp+28h]
  unsigned __int64 v132; // [rsp+130h] [rbp+30h]
  int v133; // [rsp+138h] [rbp+38h]
  CONTEXT Context; // [rsp+1C0h] [rbp+C0h] BYREF

  v6 = TargetFrame;
  v7 = HistoryTable;
  v118 = TargetIp;
  v114 = TargetFrame;
  v119 = ContextRecord;
  v110 = HistoryTable;
  v117 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v115, &v116) )
    RtlRaiseStatus(-1073741784);
  v108 = ContextRecord;
  v9 = ContextRecord;
  p_Context = &Context;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v130;
    v132 = Rip;
    v130 = -1073741785;
    v131 = 0LL;
    v133 = 0;
  }
  v105 = 2;
  if ( !v6 )
    v105 = 6;
  v11 = v116;
  v12 = v115;
  EstablisherFrame = 0LL;
  while ( 2 )
  {
    v13 = v9->Rip;
    v111 = RtlLookupFunctionEntry(v13, &ImageBase, v7);
    if ( !v111 )
    {
      Rsp = (unsigned __int64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_53;
    }
    RtlpCopyContext(p_Context, v9);
    v15 = ImageBase + p_BeginAddress[2];
    v16 = 0;
    v107 = 0LL;
    if ( v13 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = *(_BYTE *)v15 & 7;
    if ( v17 < 2 )
    {
      v61 = 0;
      v62 = (unsigned __int8 *)(v15 + 2);
      v63 = v15;
      if ( !*(_BYTE *)(v15 + 2) )
      {
        while ( (*(_BYTE *)v63 & 0x20) != 0 )
        {
          v77 = *v62;
          v78 = v77 + 1;
          if ( (v77 & 1) == 0 )
            v78 = v77;
          if ( (unsigned int)++v61 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v63 = ImageBase + *(unsigned int *)(v63 + 2 * v78 + 12);
          if ( v13 <= 0x7FFFFFFEFFFFLL && (v63 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v62 = (unsigned __int8 *)(v63 + 2);
          if ( *(_BYTE *)(v63 + 2) )
            goto LABEL_12;
        }
        v16 = 1;
      }
    }
LABEL_12:
    v18 = *(_BYTE *)(v15 + 3);
    v19 = v13 - ImageBase - *p_BeginAddress;
    if ( (v18 & 0xF) == 0 )
      goto LABEL_13;
    if ( v19 >= *(unsigned __int8 *)(v15 + 1) || (*(_BYTE *)v15 & 0x20) != 0 )
    {
      v47 = *(_BYTE *)(v15 + 3);
      v48 = v18;
LABEL_70:
      EstablisherFrame = *(&p_Context->Rax + (v47 & 0xF)) - (v48 & 0xFFFFFFF0);
      goto LABEL_14;
    }
    v79 = 0LL;
    if ( *(_BYTE *)(v15 + 2) )
    {
      do
      {
        if ( (HIBYTE(*(_WORD *)(v15 + 2 * v79 + 4)) & 0xF) == 3 )
          break;
        v79 = (unsigned int)((__int64 (*)(void))RtlpUnwindOpSlots)() + (unsigned int)v79;
      }
      while ( (unsigned int)v79 < *(unsigned __int8 *)(v15 + 2) );
      p_BeginAddress = &v111->BeginAddress;
    }
    v80 = *(unsigned __int8 *)(v15 + 2 * v79 + 4);
    v6 = v114;
    if ( v19 >= v80 )
    {
      v48 = *(unsigned __int8 *)(v15 + 3);
      v47 = *(_BYTE *)(v15 + 3);
      goto LABEL_70;
    }
LABEL_13:
    EstablisherFrame = p_Context->Rsp;
LABEL_14:
    if ( v16 )
      goto LABEL_15;
    if ( v17 >= 2 )
    {
      if ( *(_BYTE *)(v15 + 2) )
      {
        v50 = *(_WORD *)(v15 + 4);
        if ( (HIBYTE(v50) & 0xF) == 6 )
        {
          v51 = (unsigned __int8)v50;
          v52 = v13 - ImageBase;
          if ( (v50 & 0x1000) != 0 )
          {
            v53 = p_BeginAddress[1] - (unsigned __int8)v50;
            if ( v52 - v53 < (unsigned int)(unsigned __int8)v50 )
            {
LABEL_137:
              RtlpUnwindEpilogue(ImageBase, v13, v52 - v53, (_DWORD)p_BeginAddress, (__int64)p_Context, 0LL, 0LL, 0LL);
              goto LABEL_35;
            }
          }
          for ( i = 1; i < *(unsigned __int8 *)(v15 + 2); ++i )
          {
            v55 = *(_WORD *)(v15 + 2LL * i + 4);
            if ( (HIBYTE(v55) & 0xF) != 6 )
              break;
            v56 = (unsigned __int8)v55 + (HIBYTE(v55) >> 4 << 8);
            if ( !v56 )
              break;
            v53 = p_BeginAddress[1] - v56;
            if ( v52 - v53 < v51 )
              goto LABEL_137;
          }
        }
      }
      goto LABEL_15;
    }
    v69 = *(_BYTE *)v13;
    v70 = 0LL;
    v71 = (_BYTE *)v13;
    if ( *(_BYTE *)v13 == 72 )
    {
      v76 = *(_BYTE *)(v13 + 1);
      if ( v76 == -125 && *(_BYTE *)(v13 + 2) == 0xC4 )
      {
        v71 = (_BYTE *)(v13 + 4);
        goto LABEL_107;
      }
      if ( v76 == -127 && *(_BYTE *)(v13 + 2) == 0xC4 )
        goto LABEL_174;
    }
    if ( (v69 & 0xFE) == 0x48 && *(_BYTE *)(v13 + 1) == 0x8D )
    {
      v75 = *(_BYTE *)(v13 + 2) & 7;
      v70 = v75 | (8 * (v69 & 1u));
      if ( v75 | (8 * (v69 & 1)) )
      {
        if ( (_DWORD)v70 == (*(_BYTE *)(v15 + 3) & 0xF) )
        {
          v81 = *(_BYTE *)(v13 + 2) & 0xF8;
          if ( v81 == 96 )
          {
            v71 = (_BYTE *)(v13 + 4);
            goto LABEL_107;
          }
          if ( v81 == -96 )
LABEL_174:
            v71 = (_BYTE *)(v13 + 7);
        }
      }
    }
LABEL_107:
    while ( 1 )
    {
      v72 = *v71;
      if ( (*v71 & 0xF8) != 0x58 )
        break;
      v82 = 1LL;
LABEL_176:
      v71 += v82;
    }
    if ( (v72 & 0xF0) == 0x40 && (v71[1] & 0xF8) == 0x58 )
    {
      v82 = 2LL;
      goto LABEL_176;
    }
    if ( v72 == -14 )
      ++v71;
    v73 = *v71;
    if ( (unsigned __int8)(*v71 + 62) > 1u )
    {
      if ( v73 == -13 )
      {
        if ( v71[1] != 0xC3 )
          goto LABEL_115;
      }
      else if ( ((v73 + 23) & 0xFD) != 0 )
      {
        if ( v73 != -1 || v71[1] != 37 )
        {
LABEL_115:
          if ( (v73 & 0xF8) == 0x48 && v71[1] == 0xFF )
          {
            v83 = (v71[2] & 0x38) == 32;
            goto LABEL_181;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v86 = &v71[-ImageBase];
        if ( v73 == -21 )
          v87 = (char)v71[1] + 2;
        else
          v87 = *(_DWORD *)(v71 + 1) + 5;
        v88 = *p_BeginAddress;
        v89 = (unsigned __int64)&v86[v87];
        if ( v89 < v88 || v89 >= p_BeginAddress[1] )
        {
          v90 = (_DWORD *)RtlpSameFunction(p_BeginAddress, ImageBase, v89 + ImageBase);
          if ( v90 && v89 != *v90 )
          {
            p_BeginAddress = &v111->BeginAddress;
            goto LABEL_15;
          }
        }
        else
        {
          if ( v89 != v88 )
            goto LABEL_15;
          v83 = (*(_BYTE *)v15 & 0x20) == 0;
LABEL_181:
          if ( !v83 )
          {
LABEL_15:
            v20 = 0;
            v21 = p_BeginAddress;
            v109 = 0;
            while ( 1 )
            {
              v22 = 0;
              v23 = 0LL;
              v24 = v13 - *v21 - ImageBase;
              v103 = 0;
              v25 = ImageBase + (unsigned int)v21[2];
              if ( v13 <= 0x7FFFFFFEFFFFLL && (v25 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( *(_BYTE *)(v25 + 2) )
              {
                do
                {
                  v26 = v25 + 2 * v23;
                  v27 = *(unsigned __int8 *)(v26 + 5) >> 4;
                  if ( v24 < *(unsigned __int8 *)(v26 + 4) )
                  {
                    v23 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v26 + 4)) + (unsigned int)v23;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v25 + 2 * v23 + 5) & 0xF) != 0 )
                    {
                      switch ( *(_BYTE *)(v25 + 2 * v23 + 5) & 0xF )
                      {
                        case 1:
                          v23 = (unsigned int)(v23 + 1);
                          v45 = *(unsigned __int16 *)(v25 + 2 * v23 + 4);
                          if ( (_DWORD)v27 )
                          {
                            v23 = (unsigned int)(v23 + 1);
                            v46 = (*(unsigned __int16 *)(v25 + 2 * v23 + 4) << 16) + v45;
                          }
                          else
                          {
                            v46 = 8 * v45;
                          }
                          p_Context->Rsp += v46;
                          break;
                        case 2:
                          p_Context->Rsp += (unsigned int)(8 * v27 + 8);
                          break;
                        case 3:
                          v49 = *(&p_Context->Rax + (*(_BYTE *)(v25 + 3) & 0xF));
                          p_Context->Rsp = v49;
                          p_Context->Rsp = v49 - (*(_BYTE *)(v25 + 3) & 0xF0);
                          break;
                        case 4:
                          v23 = (unsigned int)(v23 + 1);
                          v28 = EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v25 + 2 * v23 + 4);
                          if ( v13 <= 0x7FFFFFFEFFFFLL && (v28 & 3) != 0 )
                            ExRaiseDatatypeMisalignment();
                          *(&p_Context->Rax + v27) = *(_QWORD *)v28;
                          break;
                        case 5:
                          v23 = (unsigned int)(v23 + 2);
                          if ( v13 <= 0x7FFFFFFEFFFFLL
                            && (((_BYTE)EstablisherFrame
                               + (unsigned __int8)*(_WORD *)(v25 + 2LL * (unsigned int)(v23 - 1) + 4)) & 3) != 0 )
                          {
                            ExRaiseDatatypeMisalignment();
                          }
                          *(&p_Context->Rax + v27) = *(_QWORD *)(EstablisherFrame
                                                               + *(unsigned __int16 *)(v25
                                                                                     + 2LL * (unsigned int)(v23 - 1)
                                                                                     + 4)
                                                               + (*(unsigned __int16 *)(v25 + 2 * v23 + 4) << 16));
                          break;
                        case 6:
                          LODWORD(v23) = v23 + 1;
                          break;
                        case 7:
                          LODWORD(v23) = v23 + 2;
                          break;
                        case 8:
                          v23 = (unsigned int)(v23 + 1);
                          v43 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v25 + 2 * v23 + 4);
                          if ( v13 <= 0x7FFFFFFEFFFFLL && (v43 & 3) != 0 )
                            ExRaiseDatatypeMisalignment();
                          v44 = (unsigned int)v27;
                          p_Context->FltSave.XmmRegisters[v44].Low = *(_QWORD *)v43;
                          p_Context->FltSave.XmmRegisters[v44].High = *(_QWORD *)(v43 + 8);
                          break;
                        case 9:
                          v23 = (unsigned int)(v23 + 2);
                          v100 = (unsigned __int64 *)(EstablisherFrame
                                                    + *(unsigned __int16 *)(v25 + 2LL * (unsigned int)(v23 - 1) + 4)
                                                    + (*(unsigned __int16 *)(v25 + 2 * v23 + 4) << 16));
                          if ( v13 <= 0x7FFFFFFEFFFFLL
                            && (((_BYTE)EstablisherFrame
                               + (unsigned __int8)*(_WORD *)(v25 + 2LL * (unsigned int)(v23 - 1) + 4)) & 3) != 0 )
                          {
                            ExRaiseDatatypeMisalignment();
                          }
                          v101 = (unsigned int)v27;
                          p_Context->FltSave.XmmRegisters[v101].Low = *v100;
                          p_Context->FltSave.XmmRegisters[v101].High = v100[1];
                          break;
                        case 0xA:
                          v57 = (unsigned __int64 *)p_Context->Rsp;
                          v103 = 1;
                          v58 = v57 + 3;
                          if ( (_DWORD)v27 )
                          {
                            ++v57;
                            ++v58;
                          }
                          if ( v13 <= 0x7FFFFFFEFFFFLL )
                          {
                            if ( ((unsigned __int8)v57 & 3) != 0 )
                              ExRaiseDatatypeMisalignment();
                            if ( ((unsigned __int8)v58 & 3) != 0 )
                              ExRaiseDatatypeMisalignment();
                          }
                          p_Context->Rip = *v57;
                          p_Context->Rsp = *v58;
                          break;
                        default:
                          RtlRaiseStatus(-1073741569);
                      }
                    }
                    else
                    {
                      v29 = (unsigned __int64 *)p_Context->Rsp;
                      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v29 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      *(&p_Context->Rax + v27) = *v29;
                      p_Context->Rsp += 8LL;
                    }
                    v23 = (unsigned int)(v23 + 1);
                  }
                }
                while ( (unsigned int)v23 < *(unsigned __int8 *)(v25 + 2) );
                v22 = v103;
                v20 = v109;
              }
              if ( (*(_BYTE *)v25 & 0x20) == 0 )
                break;
              v64 = *(unsigned __int8 *)(v25 + 2);
              if ( (v64 & 1) != 0 )
                ++v64;
              v21 = (_DWORD *)(v25 + 2 * (v64 + 2LL));
              if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v21 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v109 = ++v20;
              if ( v20 > 0x20 )
                RtlRaiseStatus(-1073741569);
            }
            if ( !v22 )
            {
              if ( v13 <= 0x7FFFFFFEFFFFLL )
              {
                v74 = p_Context->Rsp;
                if ( (v74 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
              }
              v30 = *(_QWORD *)p_Context->Rsp;
              p_Context->Rsp += 8LL;
              p_Context->Rip = v30;
            }
            v31 = ImageBase + (unsigned int)v21[2];
            if ( v13 <= 0x7FFFFFFEFFFFLL && (v31 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (int)v13 - *v21 - (int)ImageBase < (unsigned int)*(unsigned __int8 *)(v31 + 1)
              || (*(_BYTE *)v31 & 0x10) == 0 )
            {
              goto LABEL_35;
            }
            v59 = *(unsigned __int8 *)(v31 + 2);
            v60 = v59 + 1;
            if ( (v59 & 1) == 0 )
              v60 = *(unsigned __int8 *)(v31 + 2);
            v32 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v31 + 2LL * v60 + 4));
            HandlerData = (PVOID)(v31 + 2 * (v60 + 2 + 2LL));
            v107 = v32;
            goto LABEL_36;
          }
        }
      }
    }
    v84 = (char *)v13;
    if ( (*(_BYTE *)v13 & 0xF8) != 0x48 )
      goto LABEL_203;
    v85 = *(_BYTE *)(v13 + 1);
    if ( v85 == -125 )
    {
      v84 = (char *)(v13 + 4);
      p_Context->Rsp += *(char *)(v13 + 3);
      goto LABEL_203;
    }
    if ( v85 == -127 )
    {
      p_Context->Rsp += *(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8);
LABEL_202:
      v84 = (char *)(v13 + 7);
      goto LABEL_203;
    }
    if ( v85 != -115 )
      goto LABEL_203;
    v91 = *(_BYTE *)(v13 + 2) & 0xF8;
    if ( v91 == 96 )
    {
      v92 = *(&p_Context->Rax + v70);
      v84 = (char *)(v13 + 4);
      p_Context->Rsp = v92;
      p_Context->Rsp = v92 + *(char *)(v13 + 3);
      goto LABEL_203;
    }
    if ( v91 == -96 )
    {
      p_Context->Rsp = *(&p_Context->Rax + v70)
                     + (*(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8));
      goto LABEL_202;
    }
LABEL_203:
    while ( 2 )
    {
      v93 = *v84;
      if ( (*v84 & 0xF8) == 0x58 )
      {
        v94 = (unsigned __int64 *)p_Context->Rsp;
        if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v94 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + (v93 & 7)) = *v94;
        v95 = 1LL;
LABEL_212:
        p_Context->Rsp += 8LL;
        v84 += v95;
        continue;
      }
      break;
    }
    if ( (v93 & 0xF0) == 0x40 && (v84[1] & 0xF8) == 0x58 )
    {
      v96 = (unsigned __int64 *)p_Context->Rsp;
      v97 = v84[1] & 7 | (8 * (v93 & 1u));
      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v96 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(&p_Context->Rax + v97) = *v96;
      v95 = 2LL;
      goto LABEL_212;
    }
    if ( v13 <= 0x7FFFFFFEFFFFLL )
    {
      v98 = p_Context->Rsp;
      if ( (v98 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v99 = *(_QWORD *)p_Context->Rsp;
    p_Context->Rsp += 8LL;
    p_Context->Rip = v99;
LABEL_35:
    v32 = v107;
LABEL_36:
    if ( (EstablisherFrame & 7) != 0
      || (v12 = v115, EstablisherFrame < v115)
      || (v11 = v116, EstablisherFrame >= v116)
      || v6 && (unsigned __int64)v6 < EstablisherFrame )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v32 )
    {
      v34 = 0;
      v35 = v105;
      v124 = v118;
      do
      {
        if ( v6 == (PVOID)EstablisherFrame )
          v35 |= 0x20u;
        v36 = ExceptionRecorda;
        v9 = v108;
        v37 = EstablisherFrame;
        v38 = v108;
        v39 = (unsigned __int64)v117;
        ExceptionRecorda->ExceptionFlags = v35;
        v38->Rax = v39;
        v121 = ImageBase;
        v122 = v111;
        v127 = HandlerData;
        v105 = v35 & 0xFFFFFF9F;
        v123 = v37;
        v126 = v32;
        v128 = v110;
        ControlPc = v13;
        v125 = v38;
        v129 = v34;
        v40 = RtlpExecuteHandlerForUnwind(v36, v37, v38, &ControlPc) - 1;
        if ( v40 )
        {
          if ( v40 != 2 )
            RtlRaiseStatus(-1073741786);
          v13 = ControlPc;
          ImageBase = v121;
          v111 = v122;
          RtlpCopyContext(v119, v125);
          v108 = v65;
          v9 = v65;
          p_Context = &Context;
          RtlpCopyContext(&Context, v65);
          v32 = RtlVirtualUnwind(2u, v67, v13, v66, &Context, &HandlerData, &EstablisherFrame, 0LL);
          v107 = v32;
          if ( v32 != v126 || EstablisherFrame != v123 || HandlerData != v127 )
            __fastfail(0x27u);
          v35 = v105 | 0x40;
          v34 = v129;
          v105 |= 0x40u;
          v110 = v128;
        }
        else
        {
          v32 = v107;
          v35 = v105;
          if ( (PVOID)EstablisherFrame != v6 )
          {
            v41 = v9;
            v108 = p_Context;
            v9 = p_Context;
            p_Context = v41;
          }
        }
      }
      while ( (v35 & 0x40) != 0 );
    }
    else if ( (PVOID)EstablisherFrame == v6 )
    {
      v9 = v108;
    }
    else
    {
      v33 = v108;
      v9 = p_Context;
      v108 = p_Context;
      p_Context = v33;
    }
    v7 = v110;
LABEL_53:
    if ( (EstablisherFrame & 7) == 0 && EstablisherFrame >= v12 && EstablisherFrame < v11 )
    {
      if ( (PVOID)EstablisherFrame == v6 )
        goto LABEL_57;
      continue;
    }
    break;
  }
  if ( (PVOID)EstablisherFrame == v6 )
  {
LABEL_57:
    v42 = ExceptionRecorda;
    v9->Rax = (unsigned __int64)v117;
    if ( v42->ExceptionCode != -2147483607 )
      v9->Rip = (unsigned __int64)v118;
    if ( v42->ExceptionCode == -2147483610 )
      RtlGuardCheckLongJumpTarget(*(_QWORD *)(v42->ExceptionInformation[0] + 80));
    RtlRestoreContext(v9, v42);
  }
  else
  {
    if ( v13 == v9->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v9, 0);
  }
}

/*
 * XREFs of RtlUnwindEx @ 0x14012DE70
 * Callers:
 *     __C_specific_handler @ 0x140187440 (__C_specific_handler.c)
 *     _local_unwind @ 0x140188100 (_local_unwind.c)
 *     __longjmp_internal @ 0x1401A71F0 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x1401BAF80 (KiSystemServiceHandler.c)
 *     RtlUnwind @ 0x140286EE0 (RtlUnwind.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x1400CFE60 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400D07CC (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400D0974 (RtlpUnwindOpSlots.c)
 *     RtlpCopyContext @ 0x14012E8D8 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14012EA90 (RtlLookupFunctionEntry.c)
 *     RtlpGetStackLimits @ 0x1401307E0 (RtlpGetStackLimits.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlpSameFunction @ 0x14017C248 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401AA080 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x1401B2CF0 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x1401B2E30 (RtlRestoreContext.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1401B3840 (RtlpExecuteHandlerForUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14028F66C (RtlGuardCheckLongJumpTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        struct _EXCEPTION_RECORD *ExceptionRecord,
        PVOID ReturnValue,
        struct _CONTEXT *ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v7; // rsi
  CONTEXT *p_Context; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  struct _CONTEXT *v13; // r10
  DWORD64 v14; // r12
  PRUNTIME_FUNCTION v15; // rax
  char *v16; // rdx
  unsigned __int64 v17; // r8
  _DWORD *v18; // r11
  int v19; // r15d
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned int v22; // edi
  unsigned __int8 v23; // dl
  unsigned int v24; // r14d
  unsigned __int64 v25; // r11
  _DWORD *v26; // r15
  char v27; // r10
  __int64 v28; // rbx
  unsigned int v29; // r14d
  _BYTE *v30; // rdi
  unsigned __int8 v31; // cl
  _BYTE *v32; // rdx
  __int64 v33; // r8
  unsigned __int64 *v34; // rdx
  unsigned __int64 *v35; // rcx
  unsigned int v36; // ecx
  int v37; // ecx
  unsigned int v38; // eax
  PEXCEPTION_ROUTINE v39; // r9
  unsigned __int64 *v40; // rdx
  unsigned __int64 *v41; // rdx
  _M128A *v42; // rcx
  int v43; // edx
  unsigned int v44; // edx
  PVOID v45; // rax
  int v46; // r15d
  unsigned int v47; // ecx
  struct _EXCEPTION_RECORD *v48; // r11
  unsigned __int64 v49; // rax
  int v50; // eax
  struct _CONTEXT *v51; // rax
  struct _EXCEPTION_RECORD *v52; // rdi
  int ExceptionCode; // eax
  struct _CONTEXT *v54; // rax
  __int16 v55; // ax
  int v56; // r8d
  unsigned int v57; // r10d
  int v58; // ecx
  unsigned int v59; // r9d
  __int16 v60; // ax
  int v61; // edx
  char v62; // cl
  int v63; // eax
  unsigned __int64 v64; // rcx
  struct _CONTEXT *v65; // r9
  PRUNTIME_FUNCTION v66; // r8
  unsigned __int64 v67; // rcx
  unsigned __int64 *v68; // r9
  unsigned __int64 *v69; // rdx
  unsigned int v70; // eax
  int v71; // r8d
  unsigned __int8 *v72; // rcx
  _BYTE *v73; // rdx
  char v74; // r8
  __int64 v75; // r14
  _BYTE *v76; // rcx
  char v77; // dl
  unsigned __int64 Rip; // rax
  unsigned __int64 v79; // rax
  char v80; // al
  unsigned int v81; // ecx
  __int64 v82; // rax
  __int64 v83; // r12
  unsigned __int16 v84; // cx
  unsigned int v85; // ecx
  int v86; // eax
  char v87; // dl
  __int64 v88; // rax
  bool v89; // zf
  char v90; // al
  int v91; // eax
  __int64 v92; // rdi
  _BYTE *v93; // rax
  unsigned __int64 v94; // rdi
  unsigned __int64 v95; // rcx
  _DWORD *v96; // rax
  char v97; // al
  unsigned __int64 v98; // rcx
  char v99; // cl
  __int64 v100; // rax
  __int64 v101; // rcx
  unsigned __int64 v102; // rax
  unsigned __int64 *v103; // rcx
  unsigned __int64 *v104; // r9
  _M128A *v105; // rcx
  int v106; // eax
  unsigned __int64 *Rsp; // rcx
  char v108; // [rsp+40h] [rbp-C0h]
  struct _CONTEXT *v109; // [rsp+48h] [rbp-B8h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v111; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v112; // [rsp+60h] [rbp-A0h]
  _BYTE *v113; // [rsp+68h] [rbp-98h]
  EXCEPTION_DISPOSITION (__cdecl *v114)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+70h] [rbp-90h]
  PVOID v115; // [rsp+78h] [rbp-88h]
  DWORD64 v116; // [rsp+80h] [rbp-80h]
  unsigned __int64 EstablisherFrame; // [rsp+88h] [rbp-78h] BYREF
  PUNWIND_HISTORY_TABLE v118; // [rsp+90h] [rbp-70h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+98h] [rbp-68h]
  PVOID HandlerData; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v121; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v122; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v123; // [rsp+B8h] [rbp-48h]
  PVOID v124; // [rsp+C0h] [rbp-40h]
  struct _CONTEXT *v125; // [rsp+C8h] [rbp-38h]
  DWORD64 ControlPc; // [rsp+D0h] [rbp-30h] BYREF
  DWORD64 v127; // [rsp+D8h] [rbp-28h]
  _BYTE *v128; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v129; // [rsp+E8h] [rbp-18h]
  PVOID v130; // [rsp+F0h] [rbp-10h]
  struct _CONTEXT *v131; // [rsp+F8h] [rbp-8h]
  EXCEPTION_DISPOSITION (__cdecl *v132)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+100h] [rbp+0h]
  PVOID v133; // [rsp+108h] [rbp+8h]
  struct _UNWIND_HISTORY_TABLE *v134; // [rsp+110h] [rbp+10h]
  int v135; // [rsp+118h] [rbp+18h]
  int v136; // [rsp+120h] [rbp+20h] BYREF
  __int64 v137; // [rsp+128h] [rbp+28h]
  unsigned __int64 v138; // [rsp+130h] [rbp+30h]
  int v139; // [rsp+138h] [rbp+38h]
  CONTEXT Context; // [rsp+1C0h] [rbp+C0h] BYREF

  v7 = HistoryTable;
  v124 = TargetIp;
  v115 = TargetFrame;
  v125 = ContextRecord;
  v118 = HistoryTable;
  v123 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v121, &v122) )
    RtlRaiseStatus(-1073741784);
  v109 = ContextRecord;
  p_Context = &Context;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v136;
    v138 = Rip;
    v136 = -1073741785;
    v137 = 0LL;
    v139 = 0;
  }
  v111 = 2;
  if ( !TargetFrame )
    v111 = 6;
  v10 = v122;
  v11 = 0LL;
  v12 = v121;
  v13 = ContextRecord;
  while ( 2 )
  {
    v14 = v13->Rip;
    v116 = v14;
    v15 = RtlLookupFunctionEntry(v14, &ImageBase, v7);
    v13 = v109;
    v113 = v15;
    if ( !v15 )
    {
      Rsp = (unsigned __int64 *)v109->Rsp;
      v109->Rip = *Rsp;
      v109->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_74;
    }
    RtlpCopyContext(p_Context, v109);
    v19 = 0;
    v20 = ImageBase;
    v21 = ImageBase + (unsigned int)v18[2];
    v114 = 0LL;
    if ( v14 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (v21 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = ImageBase;
    }
    v22 = *(_BYTE *)v21 & 7;
    if ( v22 < 2 )
    {
      v71 = 0;
      v72 = (unsigned __int8 *)(v21 + 2);
      v73 = (_BYTE *)v21;
      if ( !*(_BYTE *)(v21 + 2) )
      {
        while ( (*v73 & 0x20) != 0 )
        {
          v81 = *v72;
          v82 = v81 + 1;
          if ( (v81 & 1) == 0 )
            v82 = v81;
          if ( (unsigned int)++v71 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v73 = (_BYTE *)(v20 + *(unsigned int *)&v73[2 * v82 + 12]);
          if ( v14 <= 0x7FFFFFFEFFFFLL )
          {
            if ( ((unsigned __int8)v73 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v20 = ImageBase;
          }
          v72 = v73 + 2;
          if ( v73[2] )
            goto LABEL_12;
        }
        v19 = 1;
      }
    }
LABEL_12:
    v23 = *(_BYTE *)(v21 + 3);
    v24 = v14 - v20 - *v18;
    if ( (v23 & 0xF) == 0 )
      goto LABEL_13;
    if ( v24 >= *(unsigned __int8 *)(v21 + 1) || (*(_BYTE *)v21 & 0x20) != 0 )
    {
      v62 = *(_BYTE *)(v21 + 3);
      v63 = v23;
LABEL_89:
      v25 = *(&p_Context->Rax + (v62 & 0xF)) - (v63 & 0xFFFFFFF0);
      goto LABEL_14;
    }
    v83 = 0LL;
    if ( *(_BYTE *)(v21 + 2) )
    {
      do
      {
        v84 = *(_WORD *)(v21 + 2 * v83 + 4);
        if ( (HIBYTE(v84) & 0xF) == 3 )
          break;
        v83 = (unsigned int)RtlpUnwindOpSlots(v84) + (unsigned int)v83;
      }
      while ( (unsigned int)v83 < *(unsigned __int8 *)(v21 + 2) );
      v20 = ImageBase;
      v13 = v109;
    }
    v85 = *(unsigned __int8 *)(v21 + 2 * v83 + 4);
    v14 = v116;
    if ( v24 >= v85 )
    {
      v63 = *(unsigned __int8 *)(v21 + 3);
      v62 = *(_BYTE *)(v21 + 3);
      goto LABEL_89;
    }
LABEL_13:
    v25 = p_Context->Rsp;
LABEL_14:
    v112 = v25;
    EstablisherFrame = v25;
    if ( v19 )
      goto LABEL_15;
    if ( v22 >= 2 )
    {
      if ( !*(_BYTE *)(v21 + 2) )
        goto LABEL_15;
      v55 = *(_WORD *)(v21 + 4);
      if ( (HIBYTE(v55) & 0xF) != 6 )
      {
LABEL_83:
        v20 = ImageBase;
        goto LABEL_15;
      }
      v20 = ImageBase;
      v56 = v14 - ImageBase;
      v57 = (unsigned __int8)v55;
      if ( (v55 & 0x1000) == 0
        || (v58 = *((_DWORD *)v113 + 1) - (unsigned __int8)v55, v56 - v58 >= (unsigned int)(unsigned __int8)v55) )
      {
        v59 = 1;
        if ( *(_BYTE *)(v21 + 2) <= 1u )
          goto LABEL_15;
        while ( 1 )
        {
          v60 = *(_WORD *)(v21 + 2LL * v59 + 4);
          if ( (HIBYTE(v60) & 0xF) != 6 )
            goto LABEL_83;
          v61 = (unsigned __int8)v60 + (HIBYTE(v60) >> 4 << 8);
          if ( !v61 )
            goto LABEL_83;
          v58 = *((_DWORD *)v113 + 1) - v61;
          if ( v56 - v58 < v57 )
          {
            v20 = ImageBase;
            break;
          }
          if ( ++v59 >= *(unsigned __int8 *)(v21 + 2) )
            goto LABEL_83;
        }
      }
      RtlpUnwindEpilogue(v20, v14, v56 - v58, v113, (__int64)p_Context, 0LL, 0LL, 0LL);
      v25 = v112;
LABEL_47:
      v13 = v109;
      goto LABEL_48;
    }
    v74 = *(_BYTE *)v14;
    v75 = 0LL;
    v76 = (_BYTE *)v14;
    if ( *(_BYTE *)v14 != 72 )
      goto LABEL_175;
    v80 = *(_BYTE *)(v14 + 1);
    if ( v80 == -125 && *(_BYTE *)(v14 + 2) == 0xC4 )
    {
      v76 = (_BYTE *)(v14 + 4);
      goto LABEL_113;
    }
    if ( v80 == -127 && *(_BYTE *)(v14 + 2) == 0xC4 )
    {
      v76 = (_BYTE *)(v14 + 7);
    }
    else
    {
LABEL_175:
      if ( (v74 & 0xFE) == 0x48 && *(_BYTE *)(v14 + 1) == 0x8D )
      {
        v86 = *(_BYTE *)(v14 + 2) & 7;
        v75 = v86 | (8 * (v74 & 1u));
        if ( v86 | (8 * (v74 & 1)) )
        {
          if ( (_DWORD)v75 == (*(_BYTE *)(v21 + 3) & 0xF) )
          {
            v87 = *(_BYTE *)(v14 + 2) & 0xF8;
            if ( v87 == 96 )
            {
              v76 = (_BYTE *)(v14 + 4);
            }
            else if ( v87 == -96 )
            {
              v76 = (_BYTE *)(v14 + 7);
            }
          }
        }
      }
    }
LABEL_113:
    while ( 1 )
    {
      v77 = *v76;
      if ( (*v76 & 0xF8) != 0x58 )
        break;
      v88 = 1LL;
LABEL_181:
      v76 += v88;
    }
    v17 = (unsigned __int64)(v76 + 1);
    if ( (v77 & 0xF0) == 0x40 && (*(_BYTE *)v17 & 0xF8) == 0x58 )
    {
      v88 = 2LL;
      goto LABEL_181;
    }
    if ( v77 == -14 )
    {
      v77 = *(_BYTE *)v17;
      ++v76;
    }
    if ( (unsigned __int8)(v77 + 62) <= 1u )
      goto LABEL_187;
    if ( v77 == -13 )
    {
      v77 = -13;
      if ( v76[1] != 0xC3 )
        goto LABEL_120;
      goto LABEL_187;
    }
    if ( ((v77 + 23) & 0xFD) == 0 )
    {
      v17 = (unsigned __int64)&v76[-v20];
      if ( v77 == -21 )
        v91 = (char)v76[1] + 2;
      else
        v91 = *(_DWORD *)(v76 + 1) + 5;
      v92 = v91;
      v93 = v113;
      v94 = v17 + v92;
      v95 = *(unsigned int *)v113;
      if ( v94 >= v95 )
      {
        if ( v94 < *((unsigned int *)v113 + 1) )
        {
          if ( v94 == v95 )
          {
            v89 = (*(_BYTE *)v21 & 0x20) == 0;
LABEL_186:
            if ( v89 )
              goto LABEL_187;
          }
LABEL_15:
          v26 = v113;
          LODWORD(v16) = 0;
          LODWORD(v116) = 0;
          while ( 1 )
          {
            v27 = 0;
            v108 = 0;
            v28 = 0LL;
            v29 = v14 - *v26 - v20;
            v30 = (_BYTE *)(v20 + (unsigned int)v26[2]);
            if ( v14 <= 0x7FFFFFFEFFFFLL )
            {
              if ( ((unsigned __int8)v30 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v20 = ImageBase;
            }
            v31 = v30[2];
            if ( v31 )
            {
              do
              {
                v32 = &v30[2 * v28];
                v33 = (unsigned __int8)v32[5] >> 4;
                if ( v29 < (unsigned __int8)v32[4] )
                {
                  v106 = RtlpUnwindOpSlots(*((_WORD *)v32 + 2));
                  v25 = v112;
                  v28 = (unsigned int)(v106 + v28);
                }
                else
                {
                  if ( (v30[2 * v28 + 5] & 0xF) != 0 )
                  {
                    if ( (v30[2 * v28 + 5] & 0xF) == 4 )
                    {
                      v28 = (unsigned int)(v28 + 1);
                      v40 = (unsigned __int64 *)(v25 + 8 * (unsigned int)*(unsigned __int16 *)&v30[2 * v28 + 4]);
                      if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v40 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      *(&p_Context->Rax + v33) = *v40;
                    }
                    else
                    {
                      switch ( v30[2 * v28 + 5] & 0xF )
                      {
                        case 1:
                          v28 = (unsigned int)(v28 + 1);
                          v43 = *(unsigned __int16 *)&v30[2 * v28 + 4];
                          if ( (_DWORD)v33 )
                          {
                            v28 = (unsigned int)(v28 + 1);
                            v44 = (*(unsigned __int16 *)&v30[2 * v28 + 4] << 16) + v43;
                          }
                          else
                          {
                            v44 = 8 * v43;
                          }
                          p_Context->Rsp += v44;
                          break;
                        case 2:
                          p_Context->Rsp += (unsigned int)(8 * v33 + 8);
                          break;
                        case 3:
                          v64 = *(&p_Context->Rax + (v30[3] & 0xF));
                          p_Context->Rsp = v64;
                          p_Context->Rsp = v64 - (v30[3] & 0xF0);
                          break;
                        case 5:
                          v28 = (unsigned int)(v28 + 2);
                          if ( v14 <= 0x7FFFFFFEFFFFLL
                            && (((_BYTE)v25 + (unsigned __int8)*(_WORD *)&v30[2 * (unsigned int)(v28 - 1) + 4]) & 3) != 0 )
                          {
                            ExRaiseDatatypeMisalignment();
                          }
                          *(&p_Context->Rax + v33) = *(_QWORD *)(v25
                                                               + *(unsigned __int16 *)&v30[2 * (unsigned int)(v28 - 1)
                                                                                         + 4]
                                                               + (*(unsigned __int16 *)&v30[2 * v28 + 4] << 16));
                          break;
                        case 6:
                          LODWORD(v28) = v28 + 1;
                          break;
                        case 7:
                          LODWORD(v28) = v28 + 2;
                          break;
                        case 8:
                          v28 = (unsigned int)(v28 + 1);
                          v41 = (unsigned __int64 *)(v25 + 16 * (unsigned int)*(unsigned __int16 *)&v30[2 * v28 + 4]);
                          if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v41 & 3) != 0 )
                            ExRaiseDatatypeMisalignment();
                          v42 = &p_Context->FltSave.XmmRegisters[(unsigned int)v33];
                          v42->Low = *v41;
                          v42->High = v41[1];
                          break;
                        case 9:
                          v28 = (unsigned int)(v28 + 2);
                          v104 = (unsigned __int64 *)(v25
                                                    + *(unsigned __int16 *)&v30[2 * (unsigned int)(v28 - 1) + 4]
                                                    + (*(unsigned __int16 *)&v30[2 * v28 + 4] << 16));
                          if ( v14 <= 0x7FFFFFFEFFFFLL
                            && (((_BYTE)v25 + (unsigned __int8)*(_WORD *)&v30[2 * (unsigned int)(v28 - 1) + 4]) & 3) != 0 )
                          {
                            ExRaiseDatatypeMisalignment();
                          }
                          v105 = &p_Context->FltSave.XmmRegisters[(unsigned int)v33];
                          v105->Low = *v104;
                          v105->High = v104[1];
                          break;
                        case 0xA:
                          v67 = p_Context->Rsp;
                          v108 = 1;
                          v68 = (unsigned __int64 *)(v67 + 32);
                          if ( !(_DWORD)v33 )
                            v68 = (unsigned __int64 *)(v67 + 24);
                          v69 = (unsigned __int64 *)(v67 + 8);
                          if ( !(_DWORD)v33 )
                            v69 = (unsigned __int64 *)p_Context->Rsp;
                          if ( v14 <= 0x7FFFFFFEFFFFLL )
                          {
                            if ( ((unsigned __int8)v69 & 3) != 0 )
                              ExRaiseDatatypeMisalignment();
                            if ( ((unsigned __int8)v68 & 3) != 0 )
                              ExRaiseDatatypeMisalignment();
                          }
                          p_Context->Rip = *v69;
                          p_Context->Rsp = *v68;
                          break;
                        default:
                          RtlRaiseStatus(-1073741569);
                      }
                    }
                  }
                  else
                  {
                    v34 = (unsigned __int64 *)p_Context->Rsp;
                    if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v34 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    *(&p_Context->Rax + v33) = *v34;
                    p_Context->Rsp += 8LL;
                  }
                  v28 = (unsigned int)(v28 + 1);
                }
                v31 = v30[2];
              }
              while ( (unsigned int)v28 < v31 );
              v20 = ImageBase;
              v27 = v108;
              LODWORD(v16) = v116;
            }
            if ( (*v30 & 0x20) == 0 )
              break;
            v70 = v31;
            if ( (v31 & 1) != 0 )
              v70 = v31 + 1;
            v26 = &v30[2 * v70 + 4];
            if ( v14 <= 0x7FFFFFFEFFFFLL )
            {
              if ( ((unsigned __int8)v26 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v20 = ImageBase;
            }
            LODWORD(v16) = (_DWORD)v16 + 1;
            LODWORD(v116) = (_DWORD)v16;
            if ( (unsigned int)v16 > 0x20 )
              RtlRaiseStatus(-1073741569);
          }
          if ( !v27 )
          {
            if ( v14 <= 0x7FFFFFFEFFFFLL )
            {
              v79 = p_Context->Rsp;
              if ( (v79 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v20 = ImageBase;
            }
            v35 = (unsigned __int64 *)p_Context->Rsp;
            p_Context->Rip = *v35;
            p_Context->Rsp = (unsigned __int64)(v35 + 1);
          }
          v17 = v20 + (unsigned int)v26[2];
          v36 = v14 - *v26 - v20;
          if ( v14 <= 0x7FFFFFFEFFFFLL )
          {
            if ( (v17 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            LODWORD(v16) = -65536;
            v20 = ImageBase;
          }
          if ( v36 >= *(unsigned __int8 *)(v17 + 1) && (*(_BYTE *)v17 & 0x10) != 0 )
          {
            v37 = *(unsigned __int8 *)(v17 + 2);
            v13 = v109;
            v38 = v37 + 1;
            if ( (v37 & 1) == 0 )
              v38 = *(unsigned __int8 *)(v17 + 2);
            LODWORD(v16) = v38;
            v39 = (PEXCEPTION_ROUTINE)(v20 + *(unsigned int *)(v17 + 2LL * v38 + 4));
            HandlerData = (PVOID)(v17 + 2 * (v38 + 2 + 2LL));
            v114 = v39;
            goto LABEL_49;
          }
          goto LABEL_47;
        }
        v93 = v113;
      }
      if ( v14 <= 0x7FFFFFFEFFFFLL )
      {
        v93 = v113;
        v20 = ImageBase;
      }
      v96 = (_DWORD *)RtlpSameFunction(v93, v20, v94 + v20);
      v25 = v112;
      if ( v96 && v94 != *v96 )
        goto LABEL_15;
      v13 = v109;
      goto LABEL_187;
    }
LABEL_120:
    if ( v77 != -1 || (v77 = -1, v76[1] != 37) )
    {
      if ( (v77 & 0xF8) == 0x48 && v76[1] == 0xFF )
      {
        v89 = (v76[2] & 0x38) == 32;
        goto LABEL_186;
      }
      goto LABEL_15;
    }
LABEL_187:
    v16 = (char *)v14;
    if ( (*(_BYTE *)v14 & 0xF8) != 0x48 )
      goto LABEL_211;
    v90 = *(_BYTE *)(v14 + 1);
    if ( v90 == -125 )
    {
      p_Context->Rsp += *(char *)(v14 + 3);
      v16 = (char *)(v14 + 4);
      goto LABEL_211;
    }
    if ( v90 == -127 )
    {
      p_Context->Rsp += *(unsigned __int8 *)(v14 + 3) | ((*(unsigned __int8 *)(v14 + 4) | (*(unsigned __int16 *)(v14 + 5) << 8)) << 8);
LABEL_210:
      v16 = (char *)(v14 + 7);
      goto LABEL_211;
    }
    if ( v90 != -115 )
      goto LABEL_211;
    v97 = *(_BYTE *)(v14 + 2) & 0xF8;
    if ( v97 == 96 )
    {
      v98 = *(&p_Context->Rax + v75);
      p_Context->Rsp = v98;
      p_Context->Rsp = v98 + *(char *)(v14 + 3);
      v16 = (char *)(v14 + 4);
      goto LABEL_211;
    }
    if ( v97 == -96 )
    {
      p_Context->Rsp = *(&p_Context->Rax + v75)
                     + (*(unsigned __int8 *)(v14 + 3) | ((*(unsigned __int8 *)(v14 + 4) | (*(unsigned __int16 *)(v14 + 5) << 8)) << 8));
      goto LABEL_210;
    }
LABEL_211:
    while ( 2 )
    {
      v99 = *v16;
      if ( (*v16 & 0xF8) == 0x58 )
      {
        v17 = p_Context->Rsp;
        if ( v14 <= 0x7FFFFFFEFFFFLL && (v17 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + (v99 & 7)) = *(_QWORD *)v17;
        v100 = 1LL;
LABEL_220:
        p_Context->Rsp += 8LL;
        v16 += v100;
        continue;
      }
      break;
    }
    if ( (v99 & 0xF0) == 0x40 )
    {
      v17 = (unsigned __int8)v16[1];
      if ( (v17 & 0xF8) == 0x58 )
      {
        v17 = p_Context->Rsp;
        v101 = v16[1] & 7 | (8 * (v99 & 1u));
        if ( v14 <= 0x7FFFFFFEFFFFLL && (v17 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + v101) = *(_QWORD *)v17;
        v100 = 2LL;
        goto LABEL_220;
      }
    }
    if ( v14 <= 0x7FFFFFFEFFFFLL )
    {
      v102 = p_Context->Rsp;
      if ( (v102 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v103 = (unsigned __int64 *)p_Context->Rsp;
    v20 = ImageBase;
    p_Context->Rip = *v103;
    p_Context->Rsp = (unsigned __int64)(v103 + 1);
LABEL_48:
    v39 = v114;
LABEL_49:
    if ( (v25 & 7) != 0
      || (v12 = v121, v25 < v121)
      || (v10 = v122, v25 >= v122)
      || (v45 = v115) != 0LL && (unsigned __int64)v115 < v25 )
    {
      RtlRaiseStatus(-1073741784);
    }
    v11 = EstablisherFrame;
    if ( !v39 )
    {
      v7 = v118;
      if ( (PVOID)v25 == v115 )
        goto LABEL_63;
      v54 = v13;
      v109 = p_Context;
      v13 = p_Context;
      p_Context = v54;
LABEL_74:
      v45 = v115;
      goto LABEL_63;
    }
    v46 = 0;
    v130 = v124;
    v47 = v111;
    while ( 2 )
    {
      if ( v45 == (PVOID)v11 )
        v47 |= 0x20u;
      v48 = ExceptionRecorda;
      v49 = (unsigned __int64)v123;
      v132 = v39;
      ControlPc = v14;
      ExceptionRecorda->ExceptionFlags = v47;
      v13->Rax = v49;
      v128 = v113;
      v133 = HandlerData;
      v111 = v47 & 0xFFFFFF9F;
      v134 = v118;
      v127 = v20;
      v129 = v11;
      v131 = v13;
      v135 = v46;
      v50 = RtlpExecuteHandlerForUnwind(v48, v11, v13, &ControlPc) - 1;
      if ( v50 )
      {
        if ( v50 != 2 )
          RtlRaiseStatus(-1073741786);
        v20 = v127;
        v14 = ControlPc;
        ImageBase = v127;
        v113 = v128;
        RtlpCopyContext(v125, v131);
        v109 = v65;
        p_Context = &Context;
        RtlpCopyContext(&Context, v65);
        v39 = RtlVirtualUnwind(2u, v20, v14, v66, &Context, &HandlerData, &EstablisherFrame, 0LL);
        v114 = v39;
        if ( v39 != v132 || (v11 = EstablisherFrame, EstablisherFrame != v129) || HandlerData != v133 )
          __fastfail(0x27u);
        v47 = v111 | 0x40;
        v46 = v135;
        v118 = v134;
        v45 = v115;
        v111 |= 0x40u;
      }
      else
      {
        v45 = v115;
        v39 = v114;
        v47 = v111;
        if ( (PVOID)v11 != v115 )
        {
          v51 = v109;
          v13 = p_Context;
          v109 = p_Context;
          p_Context = v51;
          v45 = v115;
          goto LABEL_61;
        }
      }
      v13 = v109;
LABEL_61:
      if ( (v47 & 0x40) != 0 )
        continue;
      break;
    }
    v7 = v118;
LABEL_63:
    if ( (v11 & 7) == 0 && v11 >= v12 && v11 < v10 )
    {
      if ( (PVOID)v11 == v45 )
        goto LABEL_67;
      continue;
    }
    break;
  }
  if ( (PVOID)v11 == v45 )
  {
LABEL_67:
    v52 = ExceptionRecorda;
    v13->Rax = (unsigned __int64)v123;
    ExceptionCode = v52->ExceptionCode;
    if ( v52->ExceptionCode != -2147483607 )
    {
      v13->Rip = (unsigned __int64)v124;
      ExceptionCode = v52->ExceptionCode;
    }
    if ( ExceptionCode == -2147483610 )
    {
      RtlGuardCheckLongJumpTarget(*(PVOID *)(v52->ExceptionInformation[0] + 80), (BOOL)v16, (PBOOL)v17);
      v13 = v109;
    }
    RtlRestoreContext(v13, v52);
  }
  else
  {
    if ( v14 == v13->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v13, 0);
  }
}

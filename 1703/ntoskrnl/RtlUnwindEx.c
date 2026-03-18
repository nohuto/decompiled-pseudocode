/*
 * XREFs of RtlUnwindEx @ 0x140009D90
 * Callers:
 *     __C_specific_handler @ 0x1401692D0 (__C_specific_handler.c)
 *     _local_unwind @ 0x140169A90 (_local_unwind.c)
 *     __longjmp_internal @ 0x14017DC70 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x1401910C0 (KiSystemServiceHandler.c)
 *     RtlUnwind @ 0x14023BB90 (RtlUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x14000A7BC (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14000A970 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x14000B020 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x140039938 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x140039B28 (RtlpUnwindOpSlots.c)
 *     RtlpGetStackLimits @ 0x1400E77D0 (RtlpGetStackLimits.c)
 *     RtlpSameFunction @ 0x14015DB14 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140180A60 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x140189590 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x1401896D0 (RtlRestoreContext.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140189ED0 (RtlpExecuteHandlerForUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140240FAC (RtlGuardCheckLongJumpTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        struct _EXCEPTION_RECORD *ExceptionRecord,
        PVOID ReturnValue,
        struct _CONTEXT *ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v7; // r15
  PVOID v8; // r14
  struct _CONTEXT *v9; // rsi
  CONTEXT *p_Context; // r13
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  DWORD64 v13; // r12
  PRUNTIME_FUNCTION v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  int v17; // r14d
  unsigned int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // edi
  unsigned int v21; // edx
  struct _RUNTIME_FUNCTION *v22; // r8
  __int64 v23; // rbx
  unsigned int v24; // esi
  char v25; // r14
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned __int64 v32; // r8
  PEXCEPTION_ROUTINE v33; // r9
  struct _CONTEXT *v34; // r8
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // edx
  char v40; // cl
  int v41; // eax
  unsigned __int64 v42; // rcx
  int v43; // esi
  unsigned int v44; // r8d
  struct _CONTEXT *v45; // rdx
  struct _EXCEPTION_RECORD *v46; // r10
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  int v49; // eax
  struct _CONTEXT *v50; // r8
  struct _EXCEPTION_RECORD *v51; // rbx
  unsigned __int64 *v52; // rcx
  unsigned __int64 *v53; // rdx
  __int16 v54; // ax
  unsigned int v55; // r11d
  int v56; // r10d
  int v57; // r8d
  unsigned int j; // r9d
  __int16 v59; // ax
  int v60; // edx
  int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // eax
  struct _CONTEXT *v64; // r9
  DWORD64 v65; // r10
  unsigned __int64 Rip; // rax
  char v67; // r8
  __int64 v68; // rsi
  _BYTE *v69; // rcx
  char v70; // dl
  unsigned __int8 *v71; // rcx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rax
  int v74; // eax
  char v75; // al
  unsigned int v76; // ecx
  __int64 v77; // rax
  __int64 i; // r15
  __int64 v79; // rcx
  unsigned int v80; // ecx
  char v81; // dl
  __int64 v82; // rax
  bool v83; // zf
  _BYTE *v84; // rdx
  char v85; // al
  _BYTE *v86; // r8
  int v87; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v89; // rdi
  _DWORD *v90; // rax
  char v91; // al
  unsigned __int64 v92; // rcx
  unsigned __int64 *v93; // r8
  __int64 v94; // rax
  char v95; // r9
  unsigned __int64 *v96; // r8
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rcx
  unsigned __int64 *v99; // r9
  __int64 v100; // rcx
  unsigned __int64 *Rsp; // rcx
  unsigned __int64 EstablisherFrame; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v103; // [rsp+48h] [rbp-B8h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-B0h] BYREF
  EXCEPTION_ROUTINE *v105; // [rsp+58h] [rbp-A8h]
  struct _CONTEXT *v106; // [rsp+60h] [rbp-A0h]
  PRUNTIME_FUNCTION v107; // [rsp+68h] [rbp-98h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+70h] [rbp-90h]
  PVOID HandlerData; // [rsp+78h] [rbp-88h] BYREF
  PUNWIND_HISTORY_TABLE v110; // [rsp+80h] [rbp-80h]
  PRUNTIME_FUNCTION v111; // [rsp+88h] [rbp-78h]
  unsigned __int64 v112; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v113; // [rsp+98h] [rbp-68h] BYREF
  PVOID v114; // [rsp+A0h] [rbp-60h]
  PVOID v115; // [rsp+A8h] [rbp-58h]
  PVOID v116; // [rsp+B0h] [rbp-50h]
  struct _CONTEXT *v117; // [rsp+B8h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v119; // [rsp+C8h] [rbp-38h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v121; // [rsp+D8h] [rbp-28h]
  PVOID v122; // [rsp+E0h] [rbp-20h]
  struct _CONTEXT *v123; // [rsp+E8h] [rbp-18h]
  EXCEPTION_ROUTINE *v124; // [rsp+F0h] [rbp-10h]
  PVOID v125; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v126; // [rsp+100h] [rbp+0h]
  int v127; // [rsp+108h] [rbp+8h]
  int v128; // [rsp+110h] [rbp+10h] BYREF
  __int64 v129; // [rsp+118h] [rbp+18h]
  unsigned __int64 v130; // [rsp+120h] [rbp+20h]
  int v131; // [rsp+128h] [rbp+28h]
  CONTEXT Context; // [rsp+1B0h] [rbp+B0h] BYREF

  v7 = HistoryTable;
  v8 = TargetFrame;
  v115 = TargetIp;
  v116 = TargetFrame;
  ExceptionRecorda = ExceptionRecord;
  v117 = ContextRecord;
  v110 = HistoryTable;
  v114 = ReturnValue;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v112, &v113) )
    RtlRaiseStatus(-1073741784);
  v106 = ContextRecord;
  v9 = ContextRecord;
  p_Context = &Context;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v128;
    v130 = Rip;
    v128 = -1073741785;
    v129 = 0LL;
    v131 = 0;
  }
  v103 = 2;
  if ( !v8 )
    v103 = 6;
  v11 = v113;
  v12 = v112;
  EstablisherFrame = 0LL;
  while ( 2 )
  {
    v13 = v9->Rip;
    v107 = RtlLookupFunctionEntry(v13, &ImageBase, v7);
    v14 = v107;
    if ( !v107 )
    {
      Rsp = (unsigned __int64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_65;
    }
    RtlpCopyContext(p_Context, v9);
    v16 = ImageBase + v14->UnwindData;
    v17 = 0;
    v105 = 0LL;
    if ( v13 <= 0x7FFFFFFEFFFFLL && (v16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = *(_BYTE *)v16 & 7;
    if ( v18 < 2 )
    {
      v15 = 0LL;
      v71 = (unsigned __int8 *)(v16 + 2);
      v72 = v16;
      if ( !*(_BYTE *)(v16 + 2) )
      {
        while ( (*(_BYTE *)v72 & 0x20) != 0 )
        {
          v76 = *v71;
          v77 = v76 + 1;
          if ( (v76 & 1) == 0 )
            v77 = v76;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v72 = ImageBase + *(unsigned int *)(v72 + 2 * v77 + 12);
          if ( v13 <= 0x7FFFFFFEFFFFLL && (v72 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v71 = (unsigned __int8 *)(v72 + 2);
          if ( *(_BYTE *)(v72 + 2) )
            goto LABEL_12;
        }
        v17 = 1;
      }
    }
LABEL_12:
    v19 = *(unsigned __int8 *)(v16 + 3);
    v20 = v13 - ImageBase - v14->BeginAddress;
    if ( (v19 & 0xF) == 0 )
      goto LABEL_13;
    if ( v20 >= *(unsigned __int8 *)(v16 + 1) || (*(_BYTE *)v16 & 0x20) != 0 )
    {
      v40 = *(_BYTE *)(v16 + 3);
      v41 = (unsigned __int8)v19;
LABEL_54:
      EstablisherFrame = *(&p_Context->Rax + (v40 & 0xF)) - (v41 & 0xFFFFFFF0);
      goto LABEL_14;
    }
    for ( i = 0LL;
          (unsigned int)i < *(unsigned __int8 *)(v16 + 2);
          i = (unsigned int)RtlpUnwindOpSlots(v79, v19, v15) + (unsigned int)i )
    {
      v79 = *(unsigned __int16 *)(v16 + 2 * i + 4);
      if ( (BYTE1(v79) & 0xF) == 3 )
        break;
    }
    v80 = *(unsigned __int8 *)(v16 + 2 * i + 4);
    v14 = v107;
    if ( v20 >= v80 )
    {
      v41 = *(unsigned __int8 *)(v16 + 3);
      v40 = *(_BYTE *)(v16 + 3);
      goto LABEL_54;
    }
LABEL_13:
    EstablisherFrame = p_Context->Rsp;
LABEL_14:
    if ( v17 )
      goto LABEL_15;
    if ( v18 >= 2 )
    {
      if ( *(_BYTE *)(v16 + 2) )
      {
        v54 = *(_WORD *)(v16 + 4);
        if ( (HIBYTE(v54) & 0xF) == 6 )
        {
          v55 = (unsigned __int8)v54;
          v56 = v13 - ImageBase;
          if ( (v54 & 0x1000) != 0 )
          {
            v57 = v14->EndAddress - (unsigned __int8)v54;
            if ( v56 - v57 < (unsigned int)(unsigned __int8)v54 )
            {
LABEL_131:
              RtlpUnwindEpilogue(ImageBase, v13, v56 - v57, (_DWORD)v14, (__int64)p_Context, 0LL, 0LL, 0LL);
              goto LABEL_35;
            }
          }
          for ( j = 1; j < *(unsigned __int8 *)(v16 + 2); ++j )
          {
            v59 = *(_WORD *)(v16 + 2LL * j + 4);
            if ( (HIBYTE(v59) & 0xF) != 6 )
              break;
            v60 = (unsigned __int8)v59 + (HIBYTE(v59) >> 4 << 8);
            if ( !v60 )
              break;
            v57 = v14->EndAddress - v60;
            if ( v56 - v57 < v55 )
              goto LABEL_131;
          }
        }
      }
      goto LABEL_15;
    }
    v67 = *(_BYTE *)v13;
    v68 = 0LL;
    v69 = (_BYTE *)v13;
    if ( *(_BYTE *)v13 == 72 )
    {
      v75 = *(_BYTE *)(v13 + 1);
      if ( v75 == -125 && *(_BYTE *)(v13 + 2) == 0xC4 )
      {
        v69 = (_BYTE *)(v13 + 4);
        goto LABEL_106;
      }
      if ( v75 == -127 && *(_BYTE *)(v13 + 2) == 0xC4 )
        goto LABEL_173;
    }
    if ( (v67 & 0xFE) == 0x48 && *(_BYTE *)(v13 + 1) == 0x8D )
    {
      v74 = *(_BYTE *)(v13 + 2) & 7;
      v68 = v74 | (8 * (v67 & 1u));
      if ( v74 | (8 * (v67 & 1)) )
      {
        if ( (_DWORD)v68 == (*(_BYTE *)(v16 + 3) & 0xF) )
        {
          v81 = *(_BYTE *)(v13 + 2) & 0xF8;
          if ( v81 == 96 )
          {
            v69 = (_BYTE *)(v13 + 4);
            goto LABEL_106;
          }
          if ( v81 == -96 )
LABEL_173:
            v69 = (_BYTE *)(v13 + 7);
        }
      }
    }
LABEL_106:
    while ( (*v69 & 0xF8) == 0x58 )
    {
      v82 = 1LL;
LABEL_175:
      v69 += v82;
    }
    if ( (*v69 & 0xF0) == 0x40 && (v69[1] & 0xF8) == 0x58 )
    {
      v82 = 2LL;
      goto LABEL_175;
    }
    if ( *v69 == 0xF2 )
      ++v69;
    v70 = *v69;
    if ( (unsigned __int8)(*v69 + 62) > 1u && (v70 != -13 || v69[1] != 0xC3) )
    {
      if ( ((v70 + 23) & 0xFD) != 0 )
      {
        if ( v70 != -1 || v69[1] != 37 )
        {
          if ( (v70 & 0xF8) == 0x48 && v69[1] == 0xFF )
          {
            v83 = (v69[2] & 0x38) == 32;
            goto LABEL_180;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v86 = &v69[-ImageBase];
        if ( v70 == -21 )
          v87 = (char)v69[1] + 2;
        else
          v87 = *(_DWORD *)(v69 + 1) + 5;
        BeginAddress = v14->BeginAddress;
        v89 = (unsigned __int64)&v86[v87];
        if ( v89 < BeginAddress || v89 >= v14->EndAddress )
        {
          v90 = (_DWORD *)RtlpSameFunction(v14, ImageBase, v89 + ImageBase);
          if ( v90 && v89 != *v90 )
            goto LABEL_15;
        }
        else
        {
          if ( v89 != BeginAddress )
            goto LABEL_15;
          v83 = (*(_BYTE *)v16 & 0x20) == 0;
LABEL_180:
          if ( !v83 )
          {
LABEL_15:
            v21 = 0;
            v111 = v14;
            LODWORD(v107) = 0;
            v22 = v14;
            while ( 1 )
            {
              v23 = 0LL;
              v24 = v13 - v22->BeginAddress - ImageBase;
              v25 = 0;
              v26 = ImageBase + v22->UnwindData;
              if ( v13 <= 0x7FFFFFFEFFFFLL && (v26 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( *(_BYTE *)(v26 + 2) )
              {
                do
                {
                  v27 = v26 + 2 * v23;
                  v28 = *(unsigned __int8 *)(v27 + 5) >> 4;
                  if ( v24 < *(unsigned __int8 *)(v27 + 4) )
                  {
                    v23 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v27 + 4), v27, v28) + (unsigned int)v23;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v26 + 2 * v23 + 5) & 0xF) != 0 )
                    {
                      if ( (*(_BYTE *)(v26 + 2 * v23 + 5) & 0xF) == 4 )
                      {
                        v23 = (unsigned int)(v23 + 1);
                        v35 = EstablisherFrame + 8LL * *(unsigned __int16 *)(v26 + 2 * v23 + 4);
                        if ( v13 <= 0x7FFFFFFEFFFFLL && (v35 & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                        *(&p_Context->Rax + v28) = *(_QWORD *)v35;
                      }
                      else
                      {
                        switch ( *(_BYTE *)(v26 + 2 * v23 + 5) & 0xF )
                        {
                          case 1:
                            v23 = (unsigned int)(v23 + 1);
                            v38 = *(unsigned __int16 *)(v26 + 2 * v23 + 4);
                            if ( (_DWORD)v28 )
                            {
                              v23 = (unsigned int)(v23 + 1);
                              v39 = (*(unsigned __int16 *)(v26 + 2 * v23 + 4) << 16) + v38;
                            }
                            else
                            {
                              v39 = 8 * v38;
                            }
                            p_Context->Rsp += v39;
                            break;
                          case 2:
                            p_Context->Rsp += (unsigned int)(8 * v28 + 8);
                            break;
                          case 3:
                            v42 = *(&p_Context->Rax + (*(_BYTE *)(v26 + 3) & 0xF));
                            p_Context->Rsp = v42;
                            p_Context->Rsp = v42 - (*(_BYTE *)(v26 + 3) & 0xF0);
                            break;
                          case 5:
                            v23 = (unsigned int)(v23 + 2);
                            if ( v13 <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)EstablisherFrame
                                 + (unsigned __int8)*(_WORD *)(v26 + 2LL * (unsigned int)(v23 - 1) + 4)) & 3) != 0 )
                            {
                              ExRaiseDatatypeMisalignment();
                            }
                            *(&p_Context->Rax + v28) = *(_QWORD *)(((unsigned __int64)*(unsigned __int16 *)(v26 + 2 * v23 + 4) << 16)
                                                                 + EstablisherFrame
                                                                 + *(unsigned __int16 *)(v26
                                                                                       + 2LL * (unsigned int)(v23 - 1)
                                                                                       + 4));
                            break;
                          case 6:
                            LODWORD(v23) = v23 + 1;
                            break;
                          case 7:
                            LODWORD(v23) = v23 + 2;
                            break;
                          case 8:
                            v23 = (unsigned int)(v23 + 1);
                            v36 = EstablisherFrame + 16LL * *(unsigned __int16 *)(v26 + 2 * v23 + 4);
                            if ( v13 <= 0x7FFFFFFEFFFFLL && (v36 & 3) != 0 )
                              ExRaiseDatatypeMisalignment();
                            v37 = (unsigned int)v28;
                            p_Context->FltSave.XmmRegisters[v37].Low = *(_QWORD *)v36;
                            p_Context->FltSave.XmmRegisters[v37].High = *(_QWORD *)(v36 + 8);
                            break;
                          case 9:
                            v23 = (unsigned int)(v23 + 2);
                            v99 = (unsigned __int64 *)(((unsigned __int64)*(unsigned __int16 *)(v26 + 2 * v23 + 4) << 16)
                                                     + EstablisherFrame
                                                     + *(unsigned __int16 *)(v26 + 2LL * (unsigned int)(v23 - 1) + 4));
                            if ( v13 <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)EstablisherFrame
                                 + (unsigned __int8)*(_WORD *)(v26 + 2LL * (unsigned int)(v23 - 1) + 4)) & 3) != 0 )
                            {
                              ExRaiseDatatypeMisalignment();
                            }
                            v100 = (unsigned int)v28;
                            p_Context->FltSave.XmmRegisters[v100].Low = *v99;
                            p_Context->FltSave.XmmRegisters[v100].High = v99[1];
                            break;
                          case 0xA:
                            v52 = (unsigned __int64 *)p_Context->Rsp;
                            v25 = 1;
                            v53 = v52 + 3;
                            if ( (_DWORD)v28 )
                            {
                              ++v52;
                              ++v53;
                            }
                            if ( v13 <= 0x7FFFFFFEFFFFLL )
                            {
                              if ( ((unsigned __int8)v52 & 3) != 0 )
                                ExRaiseDatatypeMisalignment();
                              if ( ((unsigned __int8)v53 & 3) != 0 )
                                ExRaiseDatatypeMisalignment();
                            }
                            p_Context->Rip = *v52;
                            p_Context->Rsp = *v53;
                            break;
                          default:
                            RtlRaiseStatus(-1073741569);
                        }
                      }
                    }
                    else
                    {
                      v29 = (unsigned __int64 *)p_Context->Rsp;
                      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v29 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      *(&p_Context->Rax + v28) = *v29;
                      p_Context->Rsp += 8LL;
                    }
                    v23 = (unsigned int)(v23 + 1);
                  }
                }
                while ( (unsigned int)v23 < *(unsigned __int8 *)(v26 + 2) );
                v22 = v111;
                v21 = (unsigned int)v107;
              }
              if ( (*(_BYTE *)v26 & 0x20) == 0 )
                break;
              v63 = *(unsigned __int8 *)(v26 + 2);
              if ( (v63 & 1) != 0 )
                ++v63;
              v22 = (struct _RUNTIME_FUNCTION *)(v26 + 2 * (v63 + 2LL));
              v111 = v22;
              if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v22 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              LODWORD(v107) = ++v21;
              if ( v21 > 0x20 )
                RtlRaiseStatus(-1073741569);
            }
            if ( !v25 )
            {
              if ( v13 <= 0x7FFFFFFEFFFFLL )
              {
                v73 = p_Context->Rsp;
                if ( (v73 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
              }
              v30 = *(_QWORD *)p_Context->Rsp;
              p_Context->Rsp += 8LL;
              p_Context->Rip = v30;
            }
            v31 = v13 - v22->BeginAddress - ImageBase;
            v32 = ImageBase + v22->UnwindData;
            if ( v13 <= 0x7FFFFFFEFFFFLL && (v32 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v31 < *(unsigned __int8 *)(v32 + 1) || (*(_BYTE *)v32 & 0x10) == 0 )
              goto LABEL_35;
            v61 = *(unsigned __int8 *)(v32 + 2);
            v62 = v61 + 1;
            if ( (v61 & 1) == 0 )
              v62 = *(unsigned __int8 *)(v32 + 2);
            v33 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v32 + 2LL * v62 + 4));
            HandlerData = (PVOID)(v32 + 2 * (v62 + 2 + 2LL));
            v105 = v33;
            goto LABEL_36;
          }
        }
      }
    }
    v84 = (_BYTE *)v13;
    if ( (*(_BYTE *)v13 & 0xF8) != 0x48 )
      goto LABEL_202;
    v85 = *(_BYTE *)(v13 + 1);
    if ( v85 == -125 )
    {
      v84 = (_BYTE *)(v13 + 4);
      p_Context->Rsp += *(char *)(v13 + 3);
      goto LABEL_202;
    }
    if ( v85 == -127 )
    {
      p_Context->Rsp += *(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8);
LABEL_201:
      v84 = (_BYTE *)(v13 + 7);
      goto LABEL_202;
    }
    if ( v85 != -115 )
      goto LABEL_202;
    v91 = *(_BYTE *)(v13 + 2) & 0xF8;
    if ( v91 == 96 )
    {
      v92 = *(&p_Context->Rax + v68);
      v84 = (_BYTE *)(v13 + 4);
      p_Context->Rsp = v92;
      p_Context->Rsp = v92 + *(char *)(v13 + 3);
      goto LABEL_202;
    }
    if ( v91 == -96 )
    {
      p_Context->Rsp = *(&p_Context->Rax + v68)
                     + (*(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8));
      goto LABEL_201;
    }
LABEL_202:
    while ( 2 )
    {
      if ( (*v84 & 0xF8) == 0x58 )
      {
        v93 = (unsigned __int64 *)p_Context->Rsp;
        if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v93 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + (*v84 & 7)) = *v93;
        v94 = 1LL;
LABEL_211:
        p_Context->Rsp += 8LL;
        v84 += v94;
        continue;
      }
      break;
    }
    if ( (*v84 & 0xF0) == 0x40 )
    {
      v95 = v84[1];
      if ( (v95 & 0xF8) == 0x58 )
      {
        v96 = (unsigned __int64 *)p_Context->Rsp;
        if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v96 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + (v95 & 7 | (8LL * (*v84 & 1)))) = *v96;
        v94 = 2LL;
        goto LABEL_211;
      }
    }
    if ( v13 <= 0x7FFFFFFEFFFFLL )
    {
      v97 = p_Context->Rsp;
      if ( (v97 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v98 = *(_QWORD *)p_Context->Rsp;
    p_Context->Rsp += 8LL;
    p_Context->Rip = v98;
LABEL_35:
    v33 = v105;
LABEL_36:
    if ( (EstablisherFrame & 7) != 0
      || (v12 = v112, EstablisherFrame < v112)
      || (v11 = v113, EstablisherFrame >= v113)
      || (v8 = v116) != 0LL && (unsigned __int64)v116 < EstablisherFrame )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v33 )
    {
      v43 = 0;
      v44 = v103;
      v122 = v115;
      do
      {
        if ( v8 == (PVOID)EstablisherFrame )
          v44 |= 0x20u;
        v45 = v106;
        v46 = ExceptionRecorda;
        v47 = EstablisherFrame;
        v48 = (unsigned __int64)v114;
        v123 = v106;
        ExceptionRecorda->ExceptionFlags = v44;
        v45->Rax = v48;
        v119 = ImageBase;
        v103 = v44 & 0xFFFFFF9F;
        v125 = HandlerData;
        v121 = v47;
        v124 = v33;
        v126 = v110;
        ControlPc = v13;
        FunctionEntry = v14;
        v127 = v43;
        v49 = RtlpExecuteHandlerForUnwind(v46, v47, v45, &ControlPc) - 1;
        if ( v49 )
        {
          if ( v49 != 2 )
            RtlRaiseStatus(-1073741786);
          v13 = ControlPc;
          v14 = FunctionEntry;
          ImageBase = v119;
          RtlpCopyContext(v117, v123);
          v106 = v64;
          p_Context = &Context;
          RtlpCopyContext(&Context, v64);
          v33 = RtlVirtualUnwind(2u, v65, v13, v14, &Context, &HandlerData, &EstablisherFrame, 0LL);
          v105 = v33;
          if ( v33 != v124 || EstablisherFrame != v121 || HandlerData != v125 )
            __fastfail(0x27u);
          v44 = v103 | 0x40;
          v43 = v127;
          v103 |= 0x40u;
          v110 = v126;
        }
        else
        {
          v33 = v105;
          if ( (PVOID)EstablisherFrame != v8 )
          {
            v50 = v106;
            v106 = p_Context;
            p_Context = v50;
          }
          v44 = v103;
        }
      }
      while ( (v44 & 0x40) != 0 );
      goto LABEL_64;
    }
    if ( (PVOID)EstablisherFrame == v116 )
    {
LABEL_64:
      v9 = v106;
      goto LABEL_65;
    }
    v34 = v106;
    v9 = p_Context;
    v106 = p_Context;
    p_Context = v34;
LABEL_65:
    if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v12 || EstablisherFrame >= v11 )
    {
      if ( (PVOID)EstablisherFrame == v8 )
        goto LABEL_70;
      if ( v13 == v9->Rip )
        RtlRaiseStatus(-1073741569);
      ZwRaiseException(ExceptionRecorda, v9, 0);
    }
    else
    {
      if ( (PVOID)EstablisherFrame != v8 )
      {
        v7 = v110;
        continue;
      }
LABEL_70:
      v51 = ExceptionRecorda;
      v9->Rax = (unsigned __int64)v114;
      if ( v51->ExceptionCode != -2147483607 )
        v9->Rip = (unsigned __int64)v115;
      if ( v51->ExceptionCode == -2147483610 )
        RtlGuardCheckLongJumpTarget(*(_QWORD *)(v51->ExceptionInformation[0] + 80));
      RtlRestoreContext(v9, v51);
    }
    break;
  }
}

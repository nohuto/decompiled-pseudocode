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
  unsigned __int8 *v13; // r12
  unsigned __int8 *v14; // rdx
  unsigned __int64 v15; // r8
  unsigned int *p_BeginAddress; // r11
  unsigned __int64 v17; // rbx
  int v18; // r14d
  unsigned int v19; // esi
  unsigned __int8 v20; // dl
  unsigned int v21; // edi
  unsigned int v22; // edx
  _DWORD *v23; // r14
  char v24; // r9
  __int64 v25; // rbx
  unsigned int v26; // esi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rcx
  PEXCEPTION_ROUTINE v33; // r9
  struct _CONTEXT *v34; // rax
  int v35; // ebx
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
  __int64 v69; // rsi
  unsigned __int8 *v70; // rcx
  unsigned __int8 v71; // dl
  unsigned __int8 v72; // dl
  unsigned __int64 v73; // rax
  int v74; // eax
  unsigned __int8 v75; // al
  unsigned int v76; // ecx
  __int64 v77; // rax
  __int64 v78; // r15
  unsigned int v79; // ecx
  char v80; // dl
  __int64 v81; // rax
  bool v82; // zf
  unsigned __int8 v83; // al
  int v84; // eax
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rdi
  _DWORD *v87; // rax
  char v88; // al
  unsigned __int64 v89; // rcx
  char v90; // cl
  __int64 v91; // rax
  __int64 v92; // rcx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rcx
  unsigned __int64 *v95; // r9
  __int64 v96; // rcx
  unsigned __int64 *Rsp; // rcx
  char v98; // [rsp+40h] [rbp-C0h]
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  BOOL IsFastFail; // [rsp+50h] [rbp-B0h]
  unsigned __int64 ImageBase; // [rsp+58h] [rbp-A8h] BYREF
  EXCEPTION_DISPOSITION (__cdecl *v102)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-A0h]
  struct _CONTEXT *v103; // [rsp+68h] [rbp-98h]
  unsigned int v104; // [rsp+70h] [rbp-90h]
  PUNWIND_HISTORY_TABLE v105; // [rsp+78h] [rbp-88h]
  PRUNTIME_FUNCTION v106; // [rsp+80h] [rbp-80h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+88h] [rbp-78h]
  PVOID HandlerData; // [rsp+90h] [rbp-70h] BYREF
  PVOID v109; // [rsp+98h] [rbp-68h]
  unsigned __int64 v110; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v111; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v112; // [rsp+B0h] [rbp-50h]
  PVOID v113; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *v114; // [rsp+C0h] [rbp-40h]
  DWORD64 ControlPc; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v116; // [rsp+D8h] [rbp-28h]
  struct _RUNTIME_FUNCTION *v117; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v118; // [rsp+E8h] [rbp-18h]
  PVOID v119; // [rsp+F0h] [rbp-10h]
  struct _CONTEXT *v120; // [rsp+F8h] [rbp-8h]
  EXCEPTION_DISPOSITION (__cdecl *v121)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+100h] [rbp+0h]
  PVOID v122; // [rsp+108h] [rbp+8h]
  struct _UNWIND_HISTORY_TABLE *v123; // [rsp+110h] [rbp+10h]
  int v124; // [rsp+118h] [rbp+18h]
  int v125; // [rsp+120h] [rbp+20h] BYREF
  __int64 v126; // [rsp+128h] [rbp+28h]
  unsigned __int64 v127; // [rsp+130h] [rbp+30h]
  int v128; // [rsp+138h] [rbp+38h]
  CONTEXT Context; // [rsp+1C0h] [rbp+C0h] BYREF

  v6 = TargetFrame;
  v7 = HistoryTable;
  v113 = TargetIp;
  v109 = TargetFrame;
  v114 = ContextRecord;
  v105 = HistoryTable;
  v112 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v110, &v111) )
    RtlRaiseStatus(-1073741784);
  v103 = ContextRecord;
  v9 = ContextRecord;
  p_Context = &Context;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v125;
    v127 = Rip;
    v125 = -1073741785;
    v126 = 0LL;
    v128 = 0;
  }
  IsFastFail = 2;
  if ( !v6 )
    IsFastFail = 6;
  v11 = v111;
  v12 = v110;
  EstablisherFrame = 0LL;
  while ( 2 )
  {
    v13 = (unsigned __int8 *)v9->Rip;
    v106 = RtlLookupFunctionEntry((DWORD64)v13, &ImageBase, v7);
    if ( !v106 )
    {
      Rsp = (unsigned __int64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_53;
    }
    RtlpCopyContext(p_Context, v9);
    v17 = ImageBase + p_BeginAddress[2];
    v18 = 0;
    v102 = 0LL;
    if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v17 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = *(_BYTE *)v17 & 7;
    if ( v19 < 2 )
    {
      v61 = 0;
      v62 = (unsigned __int8 *)(v17 + 2);
      v63 = v17;
      if ( !*(_BYTE *)(v17 + 2) )
      {
        while ( (*(_BYTE *)v63 & 0x20) != 0 )
        {
          v76 = *v62;
          v77 = v76 + 1;
          if ( (v76 & 1) == 0 )
            v77 = v76;
          if ( (unsigned int)++v61 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v63 = ImageBase + *(unsigned int *)(v63 + 2 * v77 + 12);
          if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v63 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v62 = (unsigned __int8 *)(v63 + 2);
          if ( *(_BYTE *)(v63 + 2) )
            goto LABEL_12;
        }
        v18 = 1;
      }
    }
LABEL_12:
    v20 = *(_BYTE *)(v17 + 3);
    v21 = (_DWORD)v13 - ImageBase - *p_BeginAddress;
    if ( (v20 & 0xF) == 0 )
      goto LABEL_13;
    if ( v21 >= *(unsigned __int8 *)(v17 + 1) || (*(_BYTE *)v17 & 0x20) != 0 )
    {
      v47 = *(_BYTE *)(v17 + 3);
      v48 = v20;
LABEL_70:
      EstablisherFrame = *(&p_Context->Rax + (v47 & 0xF)) - (v48 & 0xFFFFFFF0);
      goto LABEL_14;
    }
    v78 = 0LL;
    if ( *(_BYTE *)(v17 + 2) )
    {
      do
      {
        if ( (HIBYTE(*(_WORD *)(v17 + 2 * v78 + 4)) & 0xF) == 3 )
          break;
        v78 = (unsigned int)((__int64 (*)(void))RtlpUnwindOpSlots)() + (unsigned int)v78;
      }
      while ( (unsigned int)v78 < *(unsigned __int8 *)(v17 + 2) );
      p_BeginAddress = &v106->BeginAddress;
    }
    v79 = *(unsigned __int8 *)(v17 + 2 * v78 + 4);
    v6 = v109;
    if ( v21 >= v79 )
    {
      v48 = *(unsigned __int8 *)(v17 + 3);
      v47 = *(_BYTE *)(v17 + 3);
      goto LABEL_70;
    }
LABEL_13:
    EstablisherFrame = p_Context->Rsp;
LABEL_14:
    if ( v18 )
      goto LABEL_15;
    if ( v19 >= 2 )
    {
      if ( *(_BYTE *)(v17 + 2) )
      {
        v50 = *(_WORD *)(v17 + 4);
        if ( (HIBYTE(v50) & 0xF) == 6 )
        {
          v51 = (unsigned __int8)v50;
          v52 = (_DWORD)v13 - ImageBase;
          if ( (v50 & 0x1000) != 0 )
          {
            v53 = p_BeginAddress[1] - (unsigned __int8)v50;
            if ( v52 - v53 < (unsigned int)(unsigned __int8)v50 )
            {
LABEL_137:
              RtlpUnwindEpilogue(
                ImageBase,
                (_DWORD)v13,
                v52 - v53,
                (_DWORD)p_BeginAddress,
                (__int64)p_Context,
                0LL,
                0LL,
                0LL);
              goto LABEL_35;
            }
          }
          for ( i = 1; i < *(unsigned __int8 *)(v17 + 2); ++i )
          {
            v55 = *(_WORD *)(v17 + 2LL * i + 4);
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
    v15 = *v13;
    v69 = 0LL;
    v70 = v13;
    if ( (_BYTE)v15 == 72 )
    {
      v75 = v13[1];
      if ( v75 == 0x83 && v13[2] == 0xC4 )
      {
        v70 = v13 + 4;
        goto LABEL_107;
      }
      if ( v75 == 0x81 && v13[2] == 0xC4 )
        goto LABEL_174;
    }
    if ( (v15 & 0xFE) == 0x48 && v13[1] == 0x8D )
    {
      v74 = v13[2] & 7;
      v69 = v74 | (8 * (unsigned int)(v15 & 1));
      if ( v74 | (8 * (v15 & 1)) )
      {
        if ( (_DWORD)v69 == (*(_BYTE *)(v17 + 3) & 0xF) )
        {
          v80 = v13[2] & 0xF8;
          if ( v80 == 96 )
          {
            v70 = v13 + 4;
            goto LABEL_107;
          }
          if ( v80 == -96 )
LABEL_174:
            v70 = v13 + 7;
        }
      }
    }
LABEL_107:
    while ( 1 )
    {
      v71 = *v70;
      if ( (*v70 & 0xF8) != 0x58 )
        break;
      v81 = 1LL;
LABEL_176:
      v70 += v81;
    }
    if ( (v71 & 0xF0) == 0x40 && (v70[1] & 0xF8) == 0x58 )
    {
      v81 = 2LL;
      goto LABEL_176;
    }
    if ( v71 == 0xF2 )
      ++v70;
    v72 = *v70;
    if ( (unsigned __int8)(*v70 + 62) > 1u )
    {
      if ( v72 == 0xF3 )
      {
        if ( v70[1] != 0xC3 )
          goto LABEL_115;
      }
      else if ( ((v72 + 23) & 0xFD) != 0 )
      {
        if ( v72 != 0xFF || v70[1] != 37 )
        {
LABEL_115:
          if ( (v72 & 0xF8) == 0x48 && v70[1] == 0xFF )
          {
            v82 = (v70[2] & 0x38) == 32;
            goto LABEL_181;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v15 = (unsigned __int64)&v70[-ImageBase];
        if ( v72 == 0xEB )
          v84 = (char)v70[1] + 2;
        else
          v84 = *(_DWORD *)(v70 + 1) + 5;
        v85 = *p_BeginAddress;
        v86 = v15 + v84;
        if ( v86 < v85 || v86 >= p_BeginAddress[1] )
        {
          v87 = (_DWORD *)RtlpSameFunction(p_BeginAddress, ImageBase, v86 + ImageBase);
          if ( v87 && v86 != *v87 )
          {
            p_BeginAddress = &v106->BeginAddress;
            goto LABEL_15;
          }
        }
        else
        {
          if ( v86 != v85 )
            goto LABEL_15;
          v82 = (*(_BYTE *)v17 & 0x20) == 0;
LABEL_181:
          if ( !v82 )
          {
LABEL_15:
            v22 = 0;
            v23 = p_BeginAddress;
            v104 = 0;
            while ( 1 )
            {
              v24 = 0;
              v25 = 0LL;
              v26 = (_DWORD)v13 - *v23 - ImageBase;
              v98 = 0;
              v27 = ImageBase + (unsigned int)v23[2];
              if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v27 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( *(_BYTE *)(v27 + 2) )
              {
                do
                {
                  v28 = v27 + 2 * v25;
                  v29 = *(unsigned __int8 *)(v28 + 5) >> 4;
                  if ( v26 < *(unsigned __int8 *)(v28 + 4) )
                  {
                    v25 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v28 + 4)) + (unsigned int)v25;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v27 + 2 * v25 + 5) & 0xF) != 0 )
                    {
                      switch ( *(_BYTE *)(v27 + 2 * v25 + 5) & 0xF )
                      {
                        case 1:
                          v25 = (unsigned int)(v25 + 1);
                          v45 = *(unsigned __int16 *)(v27 + 2 * v25 + 4);
                          if ( (_DWORD)v29 )
                          {
                            v25 = (unsigned int)(v25 + 1);
                            v46 = (*(unsigned __int16 *)(v27 + 2 * v25 + 4) << 16) + v45;
                          }
                          else
                          {
                            v46 = 8 * v45;
                          }
                          p_Context->Rsp += v46;
                          break;
                        case 2:
                          p_Context->Rsp += (unsigned int)(8 * v29 + 8);
                          break;
                        case 3:
                          v49 = *(&p_Context->Rax + (*(_BYTE *)(v27 + 3) & 0xF));
                          p_Context->Rsp = v49;
                          p_Context->Rsp = v49 - (*(_BYTE *)(v27 + 3) & 0xF0);
                          break;
                        case 4:
                          v25 = (unsigned int)(v25 + 1);
                          v30 = EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v27 + 2 * v25 + 4);
                          if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v30 & 3) != 0 )
                            ExRaiseDatatypeMisalignment();
                          *(&p_Context->Rax + v29) = *(_QWORD *)v30;
                          break;
                        case 5:
                          v25 = (unsigned int)(v25 + 2);
                          if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL
                            && (((_BYTE)EstablisherFrame
                               + (unsigned __int8)*(_WORD *)(v27 + 2LL * (unsigned int)(v25 - 1) + 4)) & 3) != 0 )
                          {
                            ExRaiseDatatypeMisalignment();
                          }
                          *(&p_Context->Rax + v29) = *(_QWORD *)(EstablisherFrame
                                                               + *(unsigned __int16 *)(v27
                                                                                     + 2LL * (unsigned int)(v25 - 1)
                                                                                     + 4)
                                                               + (*(unsigned __int16 *)(v27 + 2 * v25 + 4) << 16));
                          break;
                        case 6:
                          LODWORD(v25) = v25 + 1;
                          break;
                        case 7:
                          LODWORD(v25) = v25 + 2;
                          break;
                        case 8:
                          v25 = (unsigned int)(v25 + 1);
                          v43 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v27 + 2 * v25 + 4);
                          if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v43 & 3) != 0 )
                            ExRaiseDatatypeMisalignment();
                          v44 = (unsigned int)v29;
                          p_Context->FltSave.XmmRegisters[v44].Low = *(_QWORD *)v43;
                          p_Context->FltSave.XmmRegisters[v44].High = *(_QWORD *)(v43 + 8);
                          break;
                        case 9:
                          v25 = (unsigned int)(v25 + 2);
                          v95 = (unsigned __int64 *)(EstablisherFrame
                                                   + *(unsigned __int16 *)(v27 + 2LL * (unsigned int)(v25 - 1) + 4)
                                                   + (*(unsigned __int16 *)(v27 + 2 * v25 + 4) << 16));
                          if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL
                            && (((_BYTE)EstablisherFrame
                               + (unsigned __int8)*(_WORD *)(v27 + 2LL * (unsigned int)(v25 - 1) + 4)) & 3) != 0 )
                          {
                            ExRaiseDatatypeMisalignment();
                          }
                          v96 = (unsigned int)v29;
                          p_Context->FltSave.XmmRegisters[v96].Low = *v95;
                          p_Context->FltSave.XmmRegisters[v96].High = v95[1];
                          break;
                        case 0xA:
                          v57 = (unsigned __int64 *)p_Context->Rsp;
                          v98 = 1;
                          v58 = v57 + 3;
                          if ( (_DWORD)v29 )
                          {
                            ++v57;
                            ++v58;
                          }
                          if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL )
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
                      v31 = (unsigned __int64 *)p_Context->Rsp;
                      if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v31 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      *(&p_Context->Rax + v29) = *v31;
                      p_Context->Rsp += 8LL;
                    }
                    v25 = (unsigned int)(v25 + 1);
                  }
                }
                while ( (unsigned int)v25 < *(unsigned __int8 *)(v27 + 2) );
                v24 = v98;
                v22 = v104;
              }
              if ( (*(_BYTE *)v27 & 0x20) == 0 )
                break;
              v64 = *(unsigned __int8 *)(v27 + 2);
              if ( (v64 & 1) != 0 )
                ++v64;
              v23 = (_DWORD *)(v27 + 2 * (v64 + 2LL));
              if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v104 = ++v22;
              if ( v22 > 0x20 )
                RtlRaiseStatus(-1073741569);
            }
            if ( !v24 )
            {
              if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL )
              {
                v73 = p_Context->Rsp;
                if ( (v73 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
              }
              v32 = *(_QWORD *)p_Context->Rsp;
              p_Context->Rsp += 8LL;
              p_Context->Rip = v32;
            }
            LODWORD(v14) = (_DWORD)v13 - *v23 - ImageBase;
            v15 = ImageBase + (unsigned int)v23[2];
            if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned int)v14 < *(unsigned __int8 *)(v15 + 1) || (*(_BYTE *)v15 & 0x10) == 0 )
              goto LABEL_35;
            v59 = *(unsigned __int8 *)(v15 + 2);
            v60 = v59 + 1;
            if ( (v59 & 1) == 0 )
              v60 = *(unsigned __int8 *)(v15 + 2);
            LODWORD(v14) = v60;
            v33 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v15 + 2LL * v60 + 4));
            HandlerData = (PVOID)(v15 + 2 * (v60 + 2 + 2LL));
            v102 = v33;
            goto LABEL_36;
          }
        }
      }
    }
    v14 = v13;
    if ( (*v13 & 0xF8) != 0x48 )
      goto LABEL_203;
    v83 = v13[1];
    if ( v83 == 0x83 )
    {
      v14 = v13 + 4;
      p_Context->Rsp += (char)v13[3];
      goto LABEL_203;
    }
    if ( v83 == 0x81 )
    {
      p_Context->Rsp += v13[3] | ((v13[4] | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8);
LABEL_202:
      v14 = v13 + 7;
      goto LABEL_203;
    }
    if ( v83 != 0x8D )
      goto LABEL_203;
    v88 = v13[2] & 0xF8;
    if ( v88 == 96 )
    {
      v89 = *(&p_Context->Rax + v69);
      v14 = v13 + 4;
      p_Context->Rsp = v89;
      p_Context->Rsp = v89 + (char)v13[3];
      goto LABEL_203;
    }
    if ( v88 == -96 )
    {
      p_Context->Rsp = *(&p_Context->Rax + v69) + (v13[3] | ((v13[4] | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8));
      goto LABEL_202;
    }
LABEL_203:
    while ( 2 )
    {
      v90 = *v14;
      if ( (*v14 & 0xF8) == 0x58 )
      {
        v15 = p_Context->Rsp;
        if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + (v90 & 7)) = *(_QWORD *)v15;
        v91 = 1LL;
LABEL_212:
        p_Context->Rsp += 8LL;
        v14 += v91;
        continue;
      }
      break;
    }
    if ( (v90 & 0xF0) == 0x40 )
    {
      v15 = v14[1];
      if ( (v15 & 0xF8) == 0x58 )
      {
        v15 = p_Context->Rsp;
        v92 = v14[1] & 7 | (8 * (v90 & 1u));
        if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + v92) = *(_QWORD *)v15;
        v91 = 2LL;
        goto LABEL_212;
      }
    }
    if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL )
    {
      v93 = p_Context->Rsp;
      if ( (v93 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v94 = *(_QWORD *)p_Context->Rsp;
    p_Context->Rsp += 8LL;
    p_Context->Rip = v94;
LABEL_35:
    v33 = v102;
LABEL_36:
    if ( (EstablisherFrame & 7) != 0
      || (v12 = v110, EstablisherFrame < v110)
      || (v11 = v111, EstablisherFrame >= v111)
      || v6 && (unsigned __int64)v6 < EstablisherFrame )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v33 )
    {
      v35 = 0;
      LODWORD(v14) = IsFastFail;
      v119 = v113;
      do
      {
        if ( v6 == (PVOID)EstablisherFrame )
          LODWORD(v14) = (unsigned int)v14 | 0x20;
        v36 = ExceptionRecorda;
        v9 = v103;
        v37 = EstablisherFrame;
        v38 = v103;
        v39 = (unsigned __int64)v112;
        ExceptionRecorda->ExceptionFlags = (unsigned int)v14;
        v38->Rax = v39;
        v116 = ImageBase;
        v117 = v106;
        v122 = HandlerData;
        IsFastFail = (unsigned int)v14 & 0xFFFFFF9F;
        v118 = v37;
        v121 = v33;
        v123 = v105;
        ControlPc = (DWORD64)v13;
        v120 = v38;
        v124 = v35;
        v40 = RtlpExecuteHandlerForUnwind(v36, v37, v38, &ControlPc) - 1;
        if ( v40 )
        {
          if ( v40 != 2 )
            RtlRaiseStatus(-1073741786);
          v13 = (unsigned __int8 *)ControlPc;
          ImageBase = v116;
          v106 = v117;
          RtlpCopyContext(v114, v120);
          v103 = v65;
          v9 = v65;
          p_Context = &Context;
          RtlpCopyContext(&Context, v65);
          v33 = RtlVirtualUnwind(2u, v67, (DWORD64)v13, v66, &Context, &HandlerData, &EstablisherFrame, 0LL);
          v102 = v33;
          if ( v33 != v121 || EstablisherFrame != v118 || HandlerData != v122 )
            __fastfail(0x27u);
          LODWORD(v14) = IsFastFail | 0x40;
          v35 = v124;
          IsFastFail |= 0x40u;
          v105 = v123;
        }
        else
        {
          v33 = v102;
          LODWORD(v14) = IsFastFail;
          if ( (PVOID)EstablisherFrame != v6 )
          {
            v41 = v9;
            v103 = p_Context;
            v9 = p_Context;
            p_Context = v41;
          }
        }
      }
      while ( ((unsigned __int8)v14 & 0x40) != 0 );
    }
    else if ( (PVOID)EstablisherFrame == v6 )
    {
      v9 = v103;
    }
    else
    {
      v34 = v103;
      v9 = p_Context;
      v103 = p_Context;
      p_Context = v34;
    }
    v7 = v105;
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
    v9->Rax = (unsigned __int64)v112;
    if ( v42->ExceptionCode != -2147483607 )
      v9->Rip = (unsigned __int64)v113;
    if ( v42->ExceptionCode == -2147483610 )
      RtlGuardCheckLongJumpTarget(*(PVOID *)(v42->ExceptionInformation[0] + 80), (BOOL)v14, (PBOOL)v15);
    RtlRestoreContext(v9, v42);
  }
  else
  {
    if ( v13 == (unsigned __int8 *)v9->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v9, 0);
  }
}

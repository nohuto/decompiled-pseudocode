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
  unsigned __int8 *v13; // r12
  unsigned __int8 *v14; // rdx
  unsigned __int64 v15; // r8
  PRUNTIME_FUNCTION v16; // r15
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  int v19; // r14d
  unsigned int v20; // esi
  __int64 v21; // rdx
  unsigned int v22; // edi
  unsigned int v23; // edx
  struct _RUNTIME_FUNCTION *v24; // r8
  __int64 v25; // rbx
  unsigned int v26; // esi
  char v27; // r14
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rcx
  PEXCEPTION_ROUTINE v33; // r9
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // edx
  unsigned int v38; // edx
  char v39; // cl
  int v40; // eax
  unsigned __int64 v41; // rcx
  int v42; // esi
  struct _CONTEXT *v43; // rdx
  struct _EXCEPTION_RECORD *v44; // r10
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  int v47; // eax
  struct _CONTEXT *v48; // r8
  struct _EXCEPTION_RECORD *v49; // rbx
  unsigned __int64 *v50; // rcx
  unsigned __int64 *v51; // rdx
  __int16 v52; // ax
  unsigned int v53; // r11d
  int v54; // r10d
  int v55; // r8d
  unsigned int j; // r9d
  __int16 v57; // ax
  int v58; // edx
  int v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // eax
  struct _CONTEXT *v62; // r9
  DWORD64 v63; // r10
  unsigned __int64 Rip; // rax
  __int64 v65; // rsi
  unsigned __int8 *v66; // rcx
  unsigned __int8 v67; // dl
  unsigned __int8 *v68; // rcx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rax
  int v71; // eax
  unsigned __int8 v72; // al
  unsigned int v73; // ecx
  __int64 v74; // rax
  __int64 i; // r15
  __int64 v76; // rcx
  unsigned int v77; // ecx
  char v78; // dl
  __int64 v79; // rax
  bool v80; // zf
  unsigned __int8 v81; // al
  int v82; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v84; // rdi
  _DWORD *v85; // rax
  char v86; // al
  unsigned __int64 v87; // rcx
  __int64 v88; // rax
  unsigned __int8 v89; // r9
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rcx
  unsigned __int64 *v92; // r9
  __int64 v93; // rcx
  unsigned __int64 *Rsp; // rcx
  unsigned __int64 EstablisherFrame; // [rsp+40h] [rbp-C0h] BYREF
  PBOOL IsLongJumpTarget; // [rsp+48h] [rbp-B8h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-B0h] BYREF
  EXCEPTION_DISPOSITION (__cdecl *v98)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+58h] [rbp-A8h]
  struct _CONTEXT *v99; // [rsp+60h] [rbp-A0h]
  PRUNTIME_FUNCTION v100; // [rsp+68h] [rbp-98h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+70h] [rbp-90h]
  PVOID HandlerData; // [rsp+78h] [rbp-88h] BYREF
  PUNWIND_HISTORY_TABLE v103; // [rsp+80h] [rbp-80h]
  PRUNTIME_FUNCTION v104; // [rsp+88h] [rbp-78h]
  unsigned __int64 v105; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v106; // [rsp+98h] [rbp-68h] BYREF
  PVOID v107; // [rsp+A0h] [rbp-60h]
  PVOID v108; // [rsp+A8h] [rbp-58h]
  PVOID v109; // [rsp+B0h] [rbp-50h]
  struct _CONTEXT *v110; // [rsp+B8h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v112; // [rsp+C8h] [rbp-38h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v114; // [rsp+D8h] [rbp-28h]
  PVOID v115; // [rsp+E0h] [rbp-20h]
  struct _CONTEXT *v116; // [rsp+E8h] [rbp-18h]
  EXCEPTION_DISPOSITION (__cdecl *v117)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp-10h]
  PVOID v118; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v119; // [rsp+100h] [rbp+0h]
  int v120; // [rsp+108h] [rbp+8h]
  int v121; // [rsp+110h] [rbp+10h] BYREF
  __int64 v122; // [rsp+118h] [rbp+18h]
  unsigned __int64 v123; // [rsp+120h] [rbp+20h]
  int v124; // [rsp+128h] [rbp+28h]
  CONTEXT Context; // [rsp+1B0h] [rbp+B0h] BYREF

  v7 = HistoryTable;
  v8 = TargetFrame;
  v108 = TargetIp;
  v109 = TargetFrame;
  ExceptionRecorda = ExceptionRecord;
  v110 = ContextRecord;
  v103 = HistoryTable;
  v107 = ReturnValue;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v105, &v106) )
    RtlRaiseStatus(-1073741784);
  v99 = ContextRecord;
  v9 = ContextRecord;
  p_Context = &Context;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v121;
    v123 = Rip;
    v121 = -1073741785;
    v122 = 0LL;
    v124 = 0;
  }
  LODWORD(IsLongJumpTarget) = 2;
  if ( !v8 )
    LODWORD(IsLongJumpTarget) = 6;
  v11 = v106;
  v12 = v105;
  EstablisherFrame = 0LL;
  while ( 2 )
  {
    v13 = (unsigned __int8 *)v9->Rip;
    v100 = RtlLookupFunctionEntry((DWORD64)v13, &ImageBase, v7);
    v16 = v100;
    if ( !v100 )
    {
      Rsp = (unsigned __int64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_65;
    }
    RtlpCopyContext(p_Context, v9);
    v18 = ImageBase + v16->UnwindData;
    v19 = 0;
    v98 = 0LL;
    if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v18 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = *(_BYTE *)v18 & 7;
    if ( v20 < 2 )
    {
      v17 = 0LL;
      v68 = (unsigned __int8 *)(v18 + 2);
      v69 = v18;
      if ( !*(_BYTE *)(v18 + 2) )
      {
        while ( (*(_BYTE *)v69 & 0x20) != 0 )
        {
          v73 = *v68;
          v74 = v73 + 1;
          if ( (v73 & 1) == 0 )
            v74 = v73;
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v69 = ImageBase + *(unsigned int *)(v69 + 2 * v74 + 12);
          if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v69 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v68 = (unsigned __int8 *)(v69 + 2);
          if ( *(_BYTE *)(v69 + 2) )
            goto LABEL_12;
        }
        v19 = 1;
      }
    }
LABEL_12:
    v21 = *(unsigned __int8 *)(v18 + 3);
    v22 = (_DWORD)v13 - ImageBase - v16->BeginAddress;
    if ( (v21 & 0xF) == 0 )
      goto LABEL_13;
    if ( v22 >= *(unsigned __int8 *)(v18 + 1) || (*(_BYTE *)v18 & 0x20) != 0 )
    {
      v39 = *(_BYTE *)(v18 + 3);
      v40 = (unsigned __int8)v21;
LABEL_54:
      EstablisherFrame = *(&p_Context->Rax + (v39 & 0xF)) - (v40 & 0xFFFFFFF0);
      goto LABEL_14;
    }
    for ( i = 0LL;
          (unsigned int)i < *(unsigned __int8 *)(v18 + 2);
          i = (unsigned int)RtlpUnwindOpSlots(v76, v21, v17) + (unsigned int)i )
    {
      v76 = *(unsigned __int16 *)(v18 + 2 * i + 4);
      if ( (BYTE1(v76) & 0xF) == 3 )
        break;
    }
    v77 = *(unsigned __int8 *)(v18 + 2 * i + 4);
    v16 = v100;
    if ( v22 >= v77 )
    {
      v40 = *(unsigned __int8 *)(v18 + 3);
      v39 = *(_BYTE *)(v18 + 3);
      goto LABEL_54;
    }
LABEL_13:
    EstablisherFrame = p_Context->Rsp;
LABEL_14:
    if ( v19 )
      goto LABEL_15;
    if ( v20 >= 2 )
    {
      if ( *(_BYTE *)(v18 + 2) )
      {
        v52 = *(_WORD *)(v18 + 4);
        if ( (HIBYTE(v52) & 0xF) == 6 )
        {
          v53 = (unsigned __int8)v52;
          v54 = (_DWORD)v13 - ImageBase;
          if ( (v52 & 0x1000) != 0 )
          {
            v55 = v16->EndAddress - (unsigned __int8)v52;
            if ( v54 - v55 < (unsigned int)(unsigned __int8)v52 )
            {
LABEL_131:
              RtlpUnwindEpilogue(ImageBase, (_DWORD)v13, v54 - v55, (_DWORD)v16, (__int64)p_Context, 0LL, 0LL, 0LL);
              goto LABEL_35;
            }
          }
          for ( j = 1; j < *(unsigned __int8 *)(v18 + 2); ++j )
          {
            v57 = *(_WORD *)(v18 + 2LL * j + 4);
            if ( (HIBYTE(v57) & 0xF) != 6 )
              break;
            v58 = (unsigned __int8)v57 + (HIBYTE(v57) >> 4 << 8);
            if ( !v58 )
              break;
            v55 = v16->EndAddress - v58;
            if ( v54 - v55 < v53 )
              goto LABEL_131;
          }
        }
      }
      goto LABEL_15;
    }
    v15 = *v13;
    v65 = 0LL;
    v66 = v13;
    if ( (_BYTE)v15 == 72 )
    {
      v72 = v13[1];
      if ( v72 == 0x83 && v13[2] == 0xC4 )
      {
        v66 = v13 + 4;
        goto LABEL_106;
      }
      if ( v72 == 0x81 && v13[2] == 0xC4 )
        goto LABEL_173;
    }
    if ( (v15 & 0xFE) == 0x48 && v13[1] == 0x8D )
    {
      v71 = v13[2] & 7;
      v65 = v71 | (8 * (unsigned int)(v15 & 1));
      if ( v71 | (8 * (v15 & 1)) )
      {
        if ( (_DWORD)v65 == (*(_BYTE *)(v18 + 3) & 0xF) )
        {
          v78 = v13[2] & 0xF8;
          if ( v78 == 96 )
          {
            v66 = v13 + 4;
            goto LABEL_106;
          }
          if ( v78 == -96 )
LABEL_173:
            v66 = v13 + 7;
        }
      }
    }
LABEL_106:
    while ( (*v66 & 0xF8) == 0x58 )
    {
      v79 = 1LL;
LABEL_175:
      v66 += v79;
    }
    if ( (*v66 & 0xF0) == 0x40 && (v66[1] & 0xF8) == 0x58 )
    {
      v79 = 2LL;
      goto LABEL_175;
    }
    if ( *v66 == 0xF2 )
      ++v66;
    v67 = *v66;
    if ( (unsigned __int8)(*v66 + 62) > 1u && (v67 != 0xF3 || v66[1] != 0xC3) )
    {
      if ( ((v67 + 23) & 0xFD) != 0 )
      {
        if ( v67 != 0xFF || v66[1] != 37 )
        {
          if ( (v67 & 0xF8) == 0x48 && v66[1] == 0xFF )
          {
            v80 = (v66[2] & 0x38) == 32;
            goto LABEL_180;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v15 = (unsigned __int64)&v66[-ImageBase];
        if ( v67 == 0xEB )
          v82 = (char)v66[1] + 2;
        else
          v82 = *(_DWORD *)(v66 + 1) + 5;
        BeginAddress = v16->BeginAddress;
        v84 = v15 + v82;
        if ( v84 < BeginAddress || v84 >= v16->EndAddress )
        {
          v85 = (_DWORD *)RtlpSameFunction(v16, ImageBase, v84 + ImageBase);
          if ( v85 && v84 != *v85 )
            goto LABEL_15;
        }
        else
        {
          if ( v84 != BeginAddress )
            goto LABEL_15;
          v80 = (*(_BYTE *)v18 & 0x20) == 0;
LABEL_180:
          if ( !v80 )
          {
LABEL_15:
            v23 = 0;
            v104 = v16;
            LODWORD(v100) = 0;
            v24 = v16;
            while ( 1 )
            {
              v25 = 0LL;
              v26 = (_DWORD)v13 - v24->BeginAddress - ImageBase;
              v27 = 0;
              v28 = ImageBase + v24->UnwindData;
              if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v28 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( *(_BYTE *)(v28 + 2) )
              {
                do
                {
                  v29 = v28 + 2 * v25;
                  v30 = *(unsigned __int8 *)(v29 + 5) >> 4;
                  if ( v26 < *(unsigned __int8 *)(v29 + 4) )
                  {
                    v25 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v29 + 4), v29, v30) + (unsigned int)v25;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v28 + 2 * v25 + 5) & 0xF) != 0 )
                    {
                      if ( (*(_BYTE *)(v28 + 2 * v25 + 5) & 0xF) == 4 )
                      {
                        v25 = (unsigned int)(v25 + 1);
                        v34 = EstablisherFrame + 8LL * *(unsigned __int16 *)(v28 + 2 * v25 + 4);
                        if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v34 & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                        *(&p_Context->Rax + v30) = *(_QWORD *)v34;
                      }
                      else
                      {
                        switch ( *(_BYTE *)(v28 + 2 * v25 + 5) & 0xF )
                        {
                          case 1:
                            v25 = (unsigned int)(v25 + 1);
                            v37 = *(unsigned __int16 *)(v28 + 2 * v25 + 4);
                            if ( (_DWORD)v30 )
                            {
                              v25 = (unsigned int)(v25 + 1);
                              v38 = (*(unsigned __int16 *)(v28 + 2 * v25 + 4) << 16) + v37;
                            }
                            else
                            {
                              v38 = 8 * v37;
                            }
                            p_Context->Rsp += v38;
                            break;
                          case 2:
                            p_Context->Rsp += (unsigned int)(8 * v30 + 8);
                            break;
                          case 3:
                            v41 = *(&p_Context->Rax + (*(_BYTE *)(v28 + 3) & 0xF));
                            p_Context->Rsp = v41;
                            p_Context->Rsp = v41 - (*(_BYTE *)(v28 + 3) & 0xF0);
                            break;
                          case 5:
                            v25 = (unsigned int)(v25 + 2);
                            if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)EstablisherFrame
                                 + (unsigned __int8)*(_WORD *)(v28 + 2LL * (unsigned int)(v25 - 1) + 4)) & 3) != 0 )
                            {
                              ExRaiseDatatypeMisalignment();
                            }
                            *(&p_Context->Rax + v30) = *(_QWORD *)(((unsigned __int64)*(unsigned __int16 *)(v28 + 2 * v25 + 4) << 16)
                                                                 + EstablisherFrame
                                                                 + *(unsigned __int16 *)(v28
                                                                                       + 2LL * (unsigned int)(v25 - 1)
                                                                                       + 4));
                            break;
                          case 6:
                            LODWORD(v25) = v25 + 1;
                            break;
                          case 7:
                            LODWORD(v25) = v25 + 2;
                            break;
                          case 8:
                            v25 = (unsigned int)(v25 + 1);
                            v35 = EstablisherFrame + 16LL * *(unsigned __int16 *)(v28 + 2 * v25 + 4);
                            if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v35 & 3) != 0 )
                              ExRaiseDatatypeMisalignment();
                            v36 = (unsigned int)v30;
                            p_Context->FltSave.XmmRegisters[v36].Low = *(_QWORD *)v35;
                            p_Context->FltSave.XmmRegisters[v36].High = *(_QWORD *)(v35 + 8);
                            break;
                          case 9:
                            v25 = (unsigned int)(v25 + 2);
                            v92 = (unsigned __int64 *)(((unsigned __int64)*(unsigned __int16 *)(v28 + 2 * v25 + 4) << 16)
                                                     + EstablisherFrame
                                                     + *(unsigned __int16 *)(v28 + 2LL * (unsigned int)(v25 - 1) + 4));
                            if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)EstablisherFrame
                                 + (unsigned __int8)*(_WORD *)(v28 + 2LL * (unsigned int)(v25 - 1) + 4)) & 3) != 0 )
                            {
                              ExRaiseDatatypeMisalignment();
                            }
                            v93 = (unsigned int)v30;
                            p_Context->FltSave.XmmRegisters[v93].Low = *v92;
                            p_Context->FltSave.XmmRegisters[v93].High = v92[1];
                            break;
                          case 0xA:
                            v50 = (unsigned __int64 *)p_Context->Rsp;
                            v27 = 1;
                            v51 = v50 + 3;
                            if ( (_DWORD)v30 )
                            {
                              ++v50;
                              ++v51;
                            }
                            if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL )
                            {
                              if ( ((unsigned __int8)v50 & 3) != 0 )
                                ExRaiseDatatypeMisalignment();
                              if ( ((unsigned __int8)v51 & 3) != 0 )
                                ExRaiseDatatypeMisalignment();
                            }
                            p_Context->Rip = *v50;
                            p_Context->Rsp = *v51;
                            break;
                          default:
                            RtlRaiseStatus(-1073741569);
                        }
                      }
                    }
                    else
                    {
                      v31 = (unsigned __int64 *)p_Context->Rsp;
                      if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v31 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      *(&p_Context->Rax + v30) = *v31;
                      p_Context->Rsp += 8LL;
                    }
                    v25 = (unsigned int)(v25 + 1);
                  }
                }
                while ( (unsigned int)v25 < *(unsigned __int8 *)(v28 + 2) );
                v24 = v104;
                v23 = (unsigned int)v100;
              }
              if ( (*(_BYTE *)v28 & 0x20) == 0 )
                break;
              v61 = *(unsigned __int8 *)(v28 + 2);
              if ( (v61 & 1) != 0 )
                ++v61;
              v24 = (struct _RUNTIME_FUNCTION *)(v28 + 2 * (v61 + 2LL));
              v104 = v24;
              if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v24 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              LODWORD(v100) = ++v23;
              if ( v23 > 0x20 )
                RtlRaiseStatus(-1073741569);
            }
            if ( !v27 )
            {
              if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL )
              {
                v70 = p_Context->Rsp;
                if ( (v70 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
              }
              v32 = *(_QWORD *)p_Context->Rsp;
              p_Context->Rsp += 8LL;
              p_Context->Rip = v32;
            }
            LODWORD(v14) = (_DWORD)v13 - v24->BeginAddress - ImageBase;
            v15 = ImageBase + v24->UnwindData;
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
            v98 = v33;
            goto LABEL_36;
          }
        }
      }
    }
    v14 = v13;
    if ( (*v13 & 0xF8) != 0x48 )
      goto LABEL_202;
    v81 = v13[1];
    if ( v81 == 0x83 )
    {
      v14 = v13 + 4;
      p_Context->Rsp += (char)v13[3];
      goto LABEL_202;
    }
    if ( v81 == 0x81 )
    {
      p_Context->Rsp += v13[3] | ((v13[4] | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8);
LABEL_201:
      v14 = v13 + 7;
      goto LABEL_202;
    }
    if ( v81 != 0x8D )
      goto LABEL_202;
    v86 = v13[2] & 0xF8;
    if ( v86 == 96 )
    {
      v87 = *(&p_Context->Rax + v65);
      v14 = v13 + 4;
      p_Context->Rsp = v87;
      p_Context->Rsp = v87 + (char)v13[3];
      goto LABEL_202;
    }
    if ( v86 == -96 )
    {
      p_Context->Rsp = *(&p_Context->Rax + v65) + (v13[3] | ((v13[4] | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8));
      goto LABEL_201;
    }
LABEL_202:
    while ( 2 )
    {
      if ( (*v14 & 0xF8) == 0x58 )
      {
        v15 = p_Context->Rsp;
        if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + (*v14 & 7)) = *(_QWORD *)v15;
        v88 = 1LL;
LABEL_211:
        p_Context->Rsp += 8LL;
        v14 += v88;
        continue;
      }
      break;
    }
    if ( (*v14 & 0xF0) == 0x40 )
    {
      v89 = v14[1];
      if ( (v89 & 0xF8) == 0x58 )
      {
        v15 = p_Context->Rsp;
        if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&p_Context->Rax + (v89 & 7 | (8LL * (*v14 & 1)))) = *(_QWORD *)v15;
        v88 = 2LL;
        goto LABEL_211;
      }
    }
    if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL )
    {
      v90 = p_Context->Rsp;
      if ( (v90 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v91 = *(_QWORD *)p_Context->Rsp;
    p_Context->Rsp += 8LL;
    p_Context->Rip = v91;
LABEL_35:
    v33 = v98;
LABEL_36:
    if ( (EstablisherFrame & 7) != 0
      || (v12 = v105, EstablisherFrame < v105)
      || (v11 = v106, EstablisherFrame >= v106)
      || (v8 = v109) != 0LL && (unsigned __int64)v109 < EstablisherFrame )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v33 )
    {
      v42 = 0;
      LODWORD(v15) = (_DWORD)IsLongJumpTarget;
      v115 = v108;
      do
      {
        if ( v8 == (PVOID)EstablisherFrame )
          LODWORD(v15) = v15 | 0x20;
        v43 = v99;
        v44 = ExceptionRecorda;
        v45 = EstablisherFrame;
        v46 = (unsigned __int64)v107;
        v116 = v99;
        ExceptionRecorda->ExceptionFlags = v15;
        v43->Rax = v46;
        v112 = ImageBase;
        LODWORD(IsLongJumpTarget) = v15 & 0xFFFFFF9F;
        v118 = HandlerData;
        v114 = v45;
        v117 = v33;
        v119 = v103;
        ControlPc = (DWORD64)v13;
        FunctionEntry = v16;
        v120 = v42;
        v47 = RtlpExecuteHandlerForUnwind(v44, v45, v43, &ControlPc) - 1;
        if ( v47 )
        {
          if ( v47 != 2 )
            RtlRaiseStatus(-1073741786);
          v13 = (unsigned __int8 *)ControlPc;
          v16 = FunctionEntry;
          ImageBase = v112;
          RtlpCopyContext(v110, v116);
          v99 = v62;
          p_Context = &Context;
          RtlpCopyContext(&Context, v62);
          v33 = RtlVirtualUnwind(2u, v63, (DWORD64)v13, v16, &Context, &HandlerData, &EstablisherFrame, 0LL);
          v98 = v33;
          if ( v33 != v117 || EstablisherFrame != v114 || HandlerData != v118 )
            __fastfail(0x27u);
          v15 = (unsigned int)IsLongJumpTarget | 0x40;
          v42 = v120;
          LODWORD(IsLongJumpTarget) = (unsigned int)IsLongJumpTarget | 0x40;
          v103 = v119;
        }
        else
        {
          v33 = v98;
          if ( (PVOID)EstablisherFrame != v8 )
          {
            v48 = v99;
            v99 = p_Context;
            p_Context = v48;
          }
          v15 = (unsigned int)IsLongJumpTarget;
        }
      }
      while ( (v15 & 0x40) != 0 );
      goto LABEL_64;
    }
    if ( (PVOID)EstablisherFrame == v109 )
    {
LABEL_64:
      v9 = v99;
      goto LABEL_65;
    }
    v15 = (unsigned __int64)v99;
    v9 = p_Context;
    v99 = p_Context;
    p_Context = (CONTEXT *)v15;
LABEL_65:
    if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v12 || EstablisherFrame >= v11 )
    {
      if ( (PVOID)EstablisherFrame == v8 )
        goto LABEL_70;
      if ( v13 == (unsigned __int8 *)v9->Rip )
        RtlRaiseStatus(-1073741569);
      ZwRaiseException(ExceptionRecorda, v9, 0);
    }
    else
    {
      if ( (PVOID)EstablisherFrame != v8 )
      {
        v7 = v103;
        continue;
      }
LABEL_70:
      v49 = ExceptionRecorda;
      v9->Rax = (unsigned __int64)v107;
      if ( v49->ExceptionCode != -2147483607 )
        v9->Rip = (unsigned __int64)v108;
      if ( v49->ExceptionCode == -2147483610 )
        RtlGuardCheckLongJumpTarget(*(PVOID *)(v49->ExceptionInformation[0] + 80), (BOOL)v14, (PBOOL)v15);
      RtlRestoreContext(v9, v49);
    }
    break;
  }
}

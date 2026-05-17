/*
 * XREFs of RtlUnwindEx @ 0x180026F90
 * Callers:
 *     __C_specific_handler @ 0x180091100 (__C_specific_handler.c)
 *     _local_unwind @ 0x180091A40 (_local_unwind.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A3D10 (KiUserCallbackDispatcherHandler.c)
 *     __longjmp_internal @ 0x1800A6830 (__longjmp_internal.c)
 *     RtlUnwind @ 0x1800FAA40 (RtlUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180020260 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpGetStackLimits @ 0x180024B7C (RtlpGetStackLimits.c)
 *     RtlpCopyContext @ 0x180027AC0 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180027C80 (RtlLookupFunctionEntry.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlVirtualUnwind @ 0x18002A090 (RtlVirtualUnwind.c)
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardIsValidStackPointer @ 0x180078858 (RtlGuardIsValidStackPointer.c)
 *     RtlpSameFunction @ 0x18007C774 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088B08 (RtlpUnwindOpSlots.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpValidateUserCallTarget @ 0x180090FB0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180091000 (LdrpValidateUserCallTargetES.c)
 *     RtlpUnwindEpilogue @ 0x18009F9C0 (RtlpUnwindEpilogue.c)
 *     ZwRaiseException @ 0x1800A2C30 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x1800A4090 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x1800A4150 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A4620 (RtlpGuardSynchronizeRestorePc.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1800A4F60 (RtlpExecuteHandlerForUnwind.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PVOID v6; // rsi
  struct _UNWIND_HISTORY_TABLE *v7; // rbx
  PCONTEXT v9; // rdi
  struct _CONTEXT *v10; // r13
  unsigned __int64 v11; // r15
  ULONG64 v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  ULONG64 v15; // r12
  int v16; // r14d
  unsigned __int64 v17; // rdi
  unsigned int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rsi
  _BYTE *v22; // rdx
  char v23; // cl
  char v24; // cl
  char v25; // cl
  unsigned int v26; // edx
  unsigned __int64 v27; // rcx
  _DWORD *p_BeginAddress; // r14
  int v29; // r12d
  _BYTE *v30; // rdi
  __int64 v31; // rbx
  unsigned int v32; // esi
  _BYTE *v33; // rdx
  __int64 v34; // r9
  _BYTE *v35; // r8
  unsigned int v36; // ecx
  int v37; // ecx
  int v38; // eax
  unsigned __int64 v39; // rcx
  int v40; // ebx
  unsigned int v41; // edx
  DWORD64 v42; // rax
  PCONTEXT v43; // r8
  struct _EXCEPTION_RECORD *v44; // rcx
  int v45; // eax
  struct _CONTEXT *v46; // rax
  unsigned __int8 *v47; // rax
  _BYTE *v48; // rdx
  DWORD64 v49; // rcx
  int v50; // edx
  unsigned int v51; // edx
  PCONTEXT v52; // rax
  __int64 v53; // rax
  char *v54; // r8
  char v55; // al
  char v56; // cl
  DWORD64 v57; // rcx
  int v58; // eax
  char v59; // r8
  char v60; // al
  struct _EXCEPTION_RECORD *v61; // r14
  DWORD64 v62; // rcx
  char v63; // cl
  int v64; // eax
  int v65; // eax
  __int64 v66; // rbx
  PRUNTIME_FUNCTION v67; // rax
  unsigned __int64 v68; // rbx
  unsigned __int64 BeginAddress; // rcx
  unsigned __int16 v70; // ax
  int v71; // edx
  int v72; // r10d
  unsigned int v73; // r9d
  int v74; // ecx
  unsigned int v75; // ebx
  __int16 v76; // ax
  __int64 v77; // rdx
  __int64 v78; // rcx
  DWORD64 Rip; // rax
  int v80; // eax
  unsigned __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned __int64 v85; // rbx
  _DWORD *v86; // rax
  DWORD64 *v87; // rax
  DWORD64 *v88; // rcx
  bool v89; // zf
  __int64 v90; // rax
  struct _CONTEXT *v91; // r9
  PRUNTIME_FUNCTION v92; // r8
  PEXCEPTION_ROUTINE v93; // rax
  char v94; // r9
  __int64 i; // r15
  __int64 v96; // rcx
  char v97; // al
  DWORD64 v98; // rcx
  __int64 v99; // rcx
  DWORD64 *Rsp; // rcx
  unsigned __int8 v101; // [rsp+40h] [rbp-C0h]
  unsigned int v102; // [rsp+44h] [rbp-BCh]
  ULONG64 v103; // [rsp+48h] [rbp-B8h]
  PRUNTIME_FUNCTION v104; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v105; // [rsp+58h] [rbp-A8h]
  unsigned __int64 EstablisherFrame; // [rsp+60h] [rbp-A0h] BYREF
  PCONTEXT v107; // [rsp+68h] [rbp-98h]
  unsigned int v108; // [rsp+70h] [rbp-90h]
  unsigned __int64 ImageBase; // [rsp+78h] [rbp-88h] BYREF
  PVOID HandlerData; // [rsp+80h] [rbp-80h] BYREF
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+88h] [rbp-78h]
  PUNWIND_HISTORY_TABLE v112; // [rsp+90h] [rbp-70h]
  unsigned __int64 v113; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v114; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v115; // [rsp+A8h] [rbp-58h]
  PVOID v116; // [rsp+B0h] [rbp-50h]
  ULONG64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  ULONG64 v118; // [rsp+C8h] [rbp-38h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v119; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v120; // [rsp+D8h] [rbp-28h]
  PVOID v121; // [rsp+E0h] [rbp-20h]
  PCONTEXT v122; // [rsp+E8h] [rbp-18h]
  EXCEPTION_ROUTINE *v123; // [rsp+F0h] [rbp-10h]
  PVOID v124; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v125; // [rsp+100h] [rbp+0h]
  int v126; // [rsp+108h] [rbp+8h]
  PVOID v127; // [rsp+110h] [rbp+10h]
  PCONTEXT v128; // [rsp+118h] [rbp+18h]
  int v129; // [rsp+120h] [rbp+20h] BYREF
  __int64 v130; // [rsp+128h] [rbp+28h]
  DWORD64 v131; // [rsp+130h] [rbp+30h]
  int v132; // [rsp+138h] [rbp+38h]
  struct _CONTEXT v133; // [rsp+1C0h] [rbp+C0h] BYREF

  v6 = TargetFrame;
  v7 = HistoryTable;
  v116 = TargetIp;
  v127 = TargetFrame;
  v128 = ContextRecord;
  v112 = HistoryTable;
  v115 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !RtlpGetStackLimits(&v113, (void **)&v114) )
    RtlRaiseStatus(-1073741784);
  v107 = ContextRecord;
  v9 = ContextRecord;
  v10 = &v133;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v129;
    v131 = Rip;
    v129 = -1073741785;
    v130 = 0LL;
    v132 = 0;
  }
  v102 = 2;
  if ( !v6 )
    v102 = 6;
  v11 = 0LL;
  while ( 2 )
  {
    v12 = v9->Rip;
    v103 = v12;
    v104 = RtlLookupFunctionEntry(v12, &ImageBase, v7);
    if ( !v104 )
    {
      Rsp = (DWORD64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (DWORD64)(Rsp + 1);
      goto LABEL_55;
    }
    RtlpCopyContext(v10, v9);
    v15 = ImageBase;
    v16 = 0;
    v17 = ImageBase + v104->UnwindInfoAddress;
    v105 = 0LL;
    v18 = *(_BYTE *)v17 & 7;
    if ( v18 < 2 )
    {
      v13 = 0LL;
      v47 = (unsigned __int8 *)(v17 + 2);
      v48 = (_BYTE *)(ImageBase + v104->UnwindInfoAddress);
      if ( !*(_BYTE *)(v17 + 2) )
      {
        while ( (*v48 & 0x20) != 0 )
        {
          v14 = *v47;
          if ( (v14 & 1) != 0 )
            v14 = (unsigned int)(v14 + 1);
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v48 = (_BYTE *)(ImageBase + *(unsigned int *)&v48[2 * v14 + 12]);
          v47 = v48 + 2;
          if ( v48[2] )
            goto LABEL_11;
        }
        v16 = 1;
      }
    }
LABEL_11:
    v19 = *(unsigned __int8 *)(v17 + 3);
    v20 = v103 - ImageBase - v104->BeginAddress;
    if ( (v19 & 0xF) == 0 )
      goto LABEL_12;
    if ( v20 >= *(unsigned __int8 *)(v17 + 1) || (*(_BYTE *)v17 & 0x20) != 0 )
    {
      v63 = *(_BYTE *)(v17 + 3);
      v64 = (unsigned __int8)v19;
    }
    else
    {
      for ( i = 0LL;
            (unsigned int)i < *(unsigned __int8 *)(v17 + 2);
            i = (unsigned int)RtlpUnwindOpSlots(v96, v19, v13, v14) + (unsigned int)i )
      {
        v96 = *(unsigned __int16 *)(v17 + 2 * i + 4);
        if ( (BYTE1(v96) & 0xF) == 3 )
          break;
      }
      if ( v20 < *(unsigned __int8 *)(v17 + 2 * i + 4) )
      {
LABEL_12:
        v11 = v10->Rsp;
        goto LABEL_13;
      }
      v64 = *(unsigned __int8 *)(v17 + 3);
      v63 = *(_BYTE *)(v17 + 3);
    }
    v11 = *(&v10->Rax + (v63 & 0xF)) - (v64 & 0xFFFFFFF0);
LABEL_13:
    EstablisherFrame = v11;
    if ( v16 )
      goto LABEL_26;
    if ( v18 >= 2 )
    {
      v13 = *(unsigned __int8 *)(v17 + 2);
      if ( !(_BYTE)v13 )
        goto LABEL_26;
      v70 = *(_WORD *)(v17 + 4);
      v71 = v70;
      LOWORD(v71) = HIBYTE(v70);
      if ( (HIBYTE(v70) & 0xF) != 6 )
        goto LABEL_26;
      v12 = v103;
      v72 = v103 - v15;
      v73 = (unsigned __int8)v70;
      if ( (v70 & 0x1000) == 0
        || (v74 = v104->EndAddress - (unsigned __int8)v70, v72 - v74 >= (unsigned int)(unsigned __int8)v70) )
      {
        v75 = 1;
        if ( (unsigned __int8)v13 <= 1u )
          goto LABEL_26;
        while ( 1 )
        {
          v76 = *(_WORD *)(v17 + 2LL * v75 + 4);
          if ( (HIBYTE(v76) & 0xF) != 6 )
            goto LABEL_26;
          v71 = (unsigned __int8)v76 + (HIBYTE(v76) >> 4 << 8);
          if ( !v71 )
            goto LABEL_26;
          v74 = v104->EndAddress - v71;
          if ( v72 - v74 < v73 )
            break;
          if ( ++v75 >= (unsigned __int8)v13 )
            goto LABEL_26;
        }
      }
      RtlpUnwindEpilogue(v15, v71, v72 - v74, (_DWORD)v104, (__int64)v10, 0LL, 0LL, 0LL);
LABEL_86:
      v39 = 0LL;
      goto LABEL_42;
    }
    v12 = v103;
    v21 = 0LL;
    v22 = (_BYTE *)v103;
    v23 = *(_BYTE *)v103;
    if ( *(_BYTE *)v103 == 72 )
    {
      v60 = *(_BYTE *)(v103 + 1);
      if ( v60 == -125 && *(_BYTE *)(v103 + 2) == 0xC4 )
      {
        v22 = (_BYTE *)(v103 + 4);
        goto LABEL_17;
      }
      if ( v60 == -127 && *(_BYTE *)(v103 + 2) == 0xC4 )
        goto LABEL_96;
    }
    if ( (v23 & 0xFE) == 0x48 && *(_BYTE *)(v103 + 1) == 0x8D )
    {
      v13 = *(unsigned __int8 *)(v103 + 2);
      v58 = *(_BYTE *)(v103 + 2) & 7;
      v21 = v58 | (8 * (v23 & 1u));
      if ( v58 | (8 * (v23 & 1)) )
      {
        if ( (_DWORD)v21 == (*(_BYTE *)(v17 + 3) & 0xF) )
        {
          v59 = v13 & 0xF8;
          if ( v59 == 96 )
          {
            v22 = (_BYTE *)(v103 + 4);
            goto LABEL_17;
          }
          if ( v59 != -96 )
            goto LABEL_17;
LABEL_96:
          v22 = (_BYTE *)(v103 + 7);
        }
      }
    }
LABEL_17:
    while ( 1 )
    {
      v24 = *v22;
      if ( (*v22 & 0xF8) != 0x58 )
        break;
      v53 = 1LL;
LABEL_154:
      v22 += v53;
    }
    if ( (v24 & 0xF0) == 0x40 && (v22[1] & 0xF8) == 0x58 )
    {
      v53 = 2LL;
      goto LABEL_154;
    }
    if ( v24 == -14 )
      ++v22;
    v25 = *v22;
    if ( (unsigned __int8)(*v22 + 62) <= 1u )
    {
LABEL_80:
      v54 = (char *)v103;
      if ( (*(_BYTE *)v103 & 0xF8) != 0x48 )
        goto LABEL_83;
      v55 = *(_BYTE *)(v103 + 1);
      switch ( v55 )
      {
        case -125:
          v54 = (char *)(v103 + 4);
          v10->Rsp += *(char *)(v103 + 3);
          goto LABEL_83;
        case -127:
          v10->Rsp += *(unsigned __int8 *)(v103 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v103 + 4) | (*(unsigned __int16 *)(v103 + 5) << 8)) << 8);
          break;
        case -115:
          v97 = *(_BYTE *)(v103 + 2) & 0xF8;
          if ( v97 == 96 )
          {
            v98 = *(&v10->Rax + v21);
            v54 = (char *)(v103 + 4);
            v10->Rsp = v98;
            v10->Rsp = v98 + *(char *)(v103 + 3);
            goto LABEL_83;
          }
          if ( v97 != -96 )
          {
            while ( 1 )
            {
LABEL_83:
              v56 = *v54;
              if ( (*v54 & 0xF8) == 0x58 )
              {
                *(&v10->Rax + (*v54 & 7)) = *(_QWORD *)v10->Rsp;
                v90 = 1LL;
              }
              else
              {
                if ( (v56 & 0xF0) != 0x40 || (v94 = v54[1], (v94 & 0xF8) != 0x58) )
                {
                  v57 = *(_QWORD *)v10->Rsp;
                  v10->Rsp += 8LL;
                  v10->Rip = v57;
                  goto LABEL_86;
                }
                *(&v10->Rax + (v94 & 7 | (unsigned __int64)(8 * (v56 & 1u)))) = *(_QWORD *)v10->Rsp;
                v90 = 2LL;
              }
              v10->Rsp += 8LL;
              v54 += v90;
            }
          }
          v10->Rsp = *(&v10->Rax + v21)
                   + (*(unsigned __int8 *)(v103 + 3) | ((*(unsigned __int8 *)(v103 + 4) | (*(unsigned __int16 *)(v103 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_83;
      }
      v54 = (char *)(v103 + 7);
      goto LABEL_83;
    }
    if ( v25 == -13 )
    {
      v89 = v22[1] == 0xC3;
LABEL_151:
      if ( !v89 )
        goto LABEL_25;
      goto LABEL_80;
    }
    if ( ((v25 + 23) & 0xFD) == 0 )
    {
      v13 = (unsigned __int64)&v22[-v15];
      if ( v25 == -21 )
        v65 = (char)v22[1] + 2;
      else
        v65 = *(_DWORD *)(v22 + 1) + 5;
      v66 = v65;
      v67 = v104;
      v68 = v13 + v66;
      BeginAddress = v104->BeginAddress;
      if ( v68 >= BeginAddress )
      {
        if ( v68 < v104->EndAddress )
        {
          if ( v68 != BeginAddress || (*(_BYTE *)v17 & 0x20) != 0 )
            goto LABEL_26;
          goto LABEL_80;
        }
        v67 = v104;
      }
      v86 = (_DWORD *)RtlpSameFunction(v67, v15, v68 + v15);
      if ( v86 && v68 != *v86 )
        goto LABEL_26;
      goto LABEL_80;
    }
    if ( v25 == -1 )
    {
      v89 = v22[1] == 37;
      goto LABEL_151;
    }
LABEL_25:
    if ( (v25 & 0xF8) == 0x48 && v22[1] == 0xFF && (v22[2] & 0x38) == 0x20 )
      goto LABEL_80;
LABEL_26:
    v26 = 0;
    v27 = ImageBase;
    p_BeginAddress = &v104->BeginAddress;
    v29 = v103 - ImageBase;
    v108 = 0;
    while ( 1 )
    {
      LOBYTE(v13) = 0;
      v30 = (_BYTE *)(v27 + (unsigned int)p_BeginAddress[2]);
      v101 = 0;
      v31 = 0LL;
      v32 = v29 - *p_BeginAddress;
      if ( v30[2] )
      {
        do
        {
          v33 = &v30[2 * v31];
          v34 = (unsigned __int8)v33[5] >> 4;
          if ( v32 < (unsigned __int8)v33[4] )
          {
            v31 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v33 + 2), v33, v13, v34) + (unsigned int)v31;
          }
          else
          {
            if ( (v30[2 * v31 + 5] & 0xF) != 0 )
            {
              if ( (v30[2 * v31 + 5] & 0xF) == 4 )
              {
                v31 = (unsigned int)(v31 + 1);
                *(&v10->Rax + v34) = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v30[2 * v31 + 4] + v11);
              }
              else
              {
                switch ( v30[2 * v31 + 5] & 0xF )
                {
                  case 1:
                    v31 = (unsigned int)(v31 + 1);
                    v50 = *(unsigned __int16 *)&v30[2 * v31 + 4];
                    if ( (_DWORD)v34 )
                    {
                      v31 = (unsigned int)(v31 + 1);
                      v51 = (*(unsigned __int16 *)&v30[2 * v31 + 4] << 16) + v50;
                    }
                    else
                    {
                      v51 = 8 * v50;
                    }
                    v10->Rsp += v51;
                    break;
                  case 2:
                    v10->Rsp += (unsigned int)(8 * v34 + 8);
                    break;
                  case 3:
                    v62 = *(&v10->Rax + (v30[3] & 0xF));
                    v10->Rsp = v62;
                    v10->Rsp = v62 - (v30[3] & 0xF0);
                    break;
                  case 5:
                    v31 = (unsigned int)(v31 + 2);
                    *(&v10->Rax + v34) = *(_QWORD *)(*(unsigned __int16 *)&v30[2 * (unsigned int)(v31 - 1) + 4]
                                                   + (*(unsigned __int16 *)&v30[2 * v31 + 4] << 16)
                                                   + v11);
                    break;
                  case 6:
                    LODWORD(v31) = v31 + 1;
                    break;
                  case 7:
                    LODWORD(v31) = v31 + 2;
                    break;
                  case 8:
                    v31 = (unsigned int)(v31 + 1);
                    v77 = 16 * (unsigned int)*(unsigned __int16 *)&v30[2 * v31 + 4];
                    v78 = (unsigned int)v34;
                    v10->FltSave.XmmRegisters[v78].Low = *(_QWORD *)(v77 + v11);
                    v10->FltSave.XmmRegisters[v78].High = *(_QWORD *)(v77 + v11 + 8);
                    break;
                  case 9:
                    v31 = (unsigned int)(v31 + 2);
                    v13 = v11
                        + *(unsigned __int16 *)&v30[2 * (unsigned int)(v31 - 1) + 4]
                        + (*(unsigned __int16 *)&v30[2 * v31 + 4] << 16);
                    v99 = (unsigned int)v34;
                    v10->FltSave.XmmRegisters[v99].Low = *(_QWORD *)v13;
                    v10->FltSave.XmmRegisters[v99].High = *(_QWORD *)(v13 + 8);
                    break;
                  case 0xA:
                    v87 = (DWORD64 *)v10->Rsp;
                    v101 = 1;
                    v88 = v87 + 3;
                    if ( (_DWORD)v34 )
                    {
                      ++v87;
                      ++v88;
                    }
                    v10->Rip = *v87;
                    v10->Rsp = *v88;
                    break;
                  default:
                    RtlRaiseStatus(-1073741569);
                }
              }
            }
            else
            {
              *(&v10->Rax + v34) = *(_QWORD *)v10->Rsp;
              v10->Rsp += 8LL;
            }
            v31 = (unsigned int)(v31 + 1);
          }
        }
        while ( (unsigned int)v31 < (unsigned __int8)v30[2] );
        v27 = ImageBase;
        v13 = v101;
        v26 = v108;
      }
      if ( (*v30 & 0x20) == 0 )
        break;
      v80 = (unsigned __int8)v30[2];
      if ( (v80 & 1) != 0 )
        ++v80;
      v108 = ++v26;
      p_BeginAddress = &v30[2 * v80 + 4];
      if ( v26 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !(_BYTE)v13 )
    {
      v49 = *(_QWORD *)v10->Rsp;
      v10->Rsp += 8LL;
      v10->Rip = v49;
    }
    v15 = ImageBase;
    v35 = (_BYTE *)(ImageBase + (unsigned int)p_BeginAddress[2]);
    v36 = v103 - ImageBase - *p_BeginAddress;
    v12 = v103;
    if ( v36 < (unsigned __int8)v35[1] || (*v35 & 0x10) == 0 )
      goto LABEL_86;
    v37 = (unsigned __int8)v35[2];
    v38 = v37 + 1;
    if ( (v37 & 1) == 0 )
      v38 = (unsigned __int8)v35[2];
    v39 = ImageBase + *(unsigned int *)&v35[2 * v38 + 4];
    HandlerData = &v35[2 * (v38 + 2) + 4];
    v105 = v39;
LABEL_42:
    if ( (v11 & 7) != 0 || v11 < v113 || v11 >= v114 || (v6 = v127) != 0LL && (unsigned __int64)v127 < v11 )
      RtlRaiseStatus(-1073741784);
    if ( v39 )
    {
      v40 = 0;
      v41 = v102;
      v121 = v116;
      do
      {
        if ( v6 == (PVOID)v11 )
          v41 |= 0x20u;
        v9 = v107;
        v42 = (DWORD64)v115;
        v43 = v107;
        v123 = (EXCEPTION_ROUTINE *)v39;
        v44 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v41;
        v43->Rax = v42;
        v119 = v104;
        v124 = HandlerData;
        v102 = v41 & 0xFFFFFF9F;
        v125 = v112;
        ControlPc = v12;
        v118 = v15;
        v120 = v11;
        v122 = v43;
        v126 = v40;
        v45 = RtlpExecuteHandlerForUnwind(v44, v11, v43, &ControlPc) - 1;
        if ( v45 )
        {
          if ( v45 != 2 )
            RtlRaiseStatus(-1073741786);
          v15 = v118;
          v12 = ControlPc;
          ImageBase = v118;
          v104 = v119;
          RtlpCopyContext(v128, v122);
          v107 = v91;
          v9 = v91;
          v10 = &v133;
          RtlpCopyContext(&v133, v91);
          v93 = RtlVirtualUnwind(2u, v15, v12, v92, &v133, &HandlerData, &EstablisherFrame, 0LL);
          v105 = (unsigned __int64)v93;
          if ( ((*((_QWORD *)&xmmword_18016F360 + 1) >> 12) & 3) == 1 )
          {
            if ( v93 != v123 || (v11 = EstablisherFrame, EstablisherFrame != v120) || HandlerData != v124 )
              __fastfail(0x27u);
          }
          else
          {
            v11 = v120;
            v105 = (unsigned __int64)v123;
            HandlerData = v124;
            EstablisherFrame = v120;
          }
          v41 = v102 | 0x40;
          v40 = v126;
          v102 |= 0x40u;
          v112 = v125;
        }
        else
        {
          v41 = v102;
          if ( (PVOID)v11 != v6 )
          {
            v46 = v9;
            v107 = v10;
            v9 = v10;
            v10 = v46;
          }
        }
        v39 = v105;
      }
      while ( (v41 & 0x40) != 0 );
    }
    else if ( (PVOID)v11 == v127 )
    {
      v9 = v107;
    }
    else
    {
      v52 = v107;
      v9 = v10;
      v107 = v10;
      v10 = v52;
    }
LABEL_55:
    if ( (v11 & 7) != 0 || v11 < v113 || v11 >= v114 )
    {
      if ( (PVOID)v11 == v6 )
        goto LABEL_97;
      if ( v12 == v9->Rip )
        RtlRaiseStatus(-1073741569);
      ZwRaiseException(ExceptionRecorda, v9, 0LL);
    }
    else
    {
      if ( (PVOID)v11 != v6 )
      {
        v7 = v112;
        continue;
      }
LABEL_97:
      v61 = ExceptionRecorda;
      v9->Rax = (DWORD64)v115;
      if ( v61->ExceptionCode != -2147483607 )
        v9->Rip = (DWORD64)v116;
      RtlpGuardSynchronizeRestorePc(&v9->Rip);
      if ( v61->ExceptionCode == -2147483610 )
      {
        v85 = v61->ExceptionInformation[0];
        if ( (unsigned int)LdrControlFlowGuardEnforced()
          && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v85 + 16)) )
        {
          __fastfail(0xDu);
        }
        RtlGuardCheckLongJumpTarget(*(_QWORD *)(v85 + 80), 0, 0LL);
      }
      else
      {
        if ( v61->ExceptionCode == -2147483607 )
        {
          if ( v61->NumberParameters )
          {
            v81 = v61->ExceptionInformation[0];
            if ( (unsigned int)LdrControlFlowGuardEnforced() )
            {
              if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v83, v82, v84) )
                LdrpValidateUserCallTargetES(v81);
              else
                LdrpValidateUserCallTarget(v81);
            }
          }
        }
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          if ( !(unsigned int)RtlGuardIsValidStackPointer(v9->Rsp) )
            __fastfail(0xDu);
        }
      }
      RtlRestoreContext(v9, v61);
    }
    break;
  }
}

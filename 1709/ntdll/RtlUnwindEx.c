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
  int v62; // eax
  DWORD64 v63; // rcx
  char v64; // cl
  int v65; // eax
  int v66; // eax
  __int64 v67; // rbx
  PRUNTIME_FUNCTION v68; // rax
  unsigned __int64 v69; // rbx
  unsigned __int64 BeginAddress; // rcx
  unsigned __int16 v71; // ax
  int v72; // edx
  int v73; // r10d
  unsigned int v74; // r9d
  int v75; // ecx
  unsigned int v76; // ebx
  __int16 v77; // ax
  __int64 v78; // rdx
  __int64 v79; // rcx
  DWORD64 Rip; // rax
  int v81; // eax
  unsigned __int64 v82; // rbx
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned __int64 v87; // rbx
  int v88; // eax
  _DWORD *v89; // rax
  DWORD64 *v90; // rax
  DWORD64 *v91; // rcx
  bool v92; // zf
  __int64 v93; // rax
  struct _CONTEXT *v94; // r9
  PRUNTIME_FUNCTION v95; // r8
  PEXCEPTION_ROUTINE v96; // rax
  char v97; // r9
  __int64 i; // r15
  __int64 v99; // rcx
  char v100; // al
  DWORD64 v101; // rcx
  __int64 v102; // rcx
  DWORD64 *Rsp; // rcx
  unsigned __int8 v104; // [rsp+40h] [rbp-C0h]
  unsigned int v105; // [rsp+44h] [rbp-BCh]
  ULONG64 v106; // [rsp+48h] [rbp-B8h]
  PRUNTIME_FUNCTION v107; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v108; // [rsp+58h] [rbp-A8h]
  unsigned __int64 EstablisherFrame; // [rsp+60h] [rbp-A0h] BYREF
  PCONTEXT v110; // [rsp+68h] [rbp-98h]
  unsigned int v111; // [rsp+70h] [rbp-90h]
  unsigned __int64 ImageBase; // [rsp+78h] [rbp-88h] BYREF
  PVOID HandlerData; // [rsp+80h] [rbp-80h] BYREF
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+88h] [rbp-78h]
  PUNWIND_HISTORY_TABLE v115; // [rsp+90h] [rbp-70h]
  unsigned __int64 v116; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v117; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v118; // [rsp+A8h] [rbp-58h]
  PVOID v119; // [rsp+B0h] [rbp-50h]
  ULONG64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  ULONG64 v121; // [rsp+C8h] [rbp-38h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v122; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v123; // [rsp+D8h] [rbp-28h]
  PVOID v124; // [rsp+E0h] [rbp-20h]
  PCONTEXT v125; // [rsp+E8h] [rbp-18h]
  EXCEPTION_DISPOSITION (__cdecl *v126)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp-10h]
  PVOID v127; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v128; // [rsp+100h] [rbp+0h]
  int v129; // [rsp+108h] [rbp+8h]
  PVOID v130; // [rsp+110h] [rbp+10h]
  PCONTEXT v131; // [rsp+118h] [rbp+18h]
  int v132; // [rsp+120h] [rbp+20h] BYREF
  __int64 v133; // [rsp+128h] [rbp+28h]
  DWORD64 v134; // [rsp+130h] [rbp+30h]
  int v135; // [rsp+138h] [rbp+38h]
  struct _CONTEXT v136; // [rsp+1C0h] [rbp+C0h] BYREF

  v6 = TargetFrame;
  v7 = HistoryTable;
  v119 = TargetIp;
  v130 = TargetFrame;
  v131 = ContextRecord;
  v115 = HistoryTable;
  v118 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !RtlpGetStackLimits(&v116, (void **)&v117) )
    RtlRaiseStatus(-1073741784);
  v110 = ContextRecord;
  v9 = ContextRecord;
  v10 = &v136;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v132;
    v134 = Rip;
    v132 = -1073741785;
    v133 = 0LL;
    v135 = 0;
  }
  v105 = 2;
  if ( !v6 )
    v105 = 6;
  v11 = 0LL;
  while ( 2 )
  {
    v12 = v9->Rip;
    v106 = v12;
    v107 = RtlLookupFunctionEntry(v12, &ImageBase, v7);
    if ( !v107 )
    {
      Rsp = (DWORD64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (DWORD64)(Rsp + 1);
      goto LABEL_55;
    }
    RtlpCopyContext(v10, v9);
    v15 = ImageBase;
    v16 = 0;
    v17 = ImageBase + v107->UnwindInfoAddress;
    v108 = 0LL;
    v18 = *(_BYTE *)v17 & 7;
    if ( v18 < 2 )
    {
      v13 = 0LL;
      v47 = (unsigned __int8 *)(v17 + 2);
      v48 = (_BYTE *)(ImageBase + v107->UnwindInfoAddress);
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
    v20 = v106 - ImageBase - v107->BeginAddress;
    if ( (v19 & 0xF) == 0 )
      goto LABEL_12;
    if ( v20 >= *(unsigned __int8 *)(v17 + 1) || (*(_BYTE *)v17 & 0x20) != 0 )
    {
      v64 = *(_BYTE *)(v17 + 3);
      v65 = (unsigned __int8)v19;
    }
    else
    {
      for ( i = 0LL;
            (unsigned int)i < *(unsigned __int8 *)(v17 + 2);
            i = (unsigned int)RtlpUnwindOpSlots(v99, v19, v13, v14) + (unsigned int)i )
      {
        v99 = *(unsigned __int16 *)(v17 + 2 * i + 4);
        if ( (BYTE1(v99) & 0xF) == 3 )
          break;
      }
      if ( v20 < *(unsigned __int8 *)(v17 + 2 * i + 4) )
      {
LABEL_12:
        v11 = v10->Rsp;
        goto LABEL_13;
      }
      v65 = *(unsigned __int8 *)(v17 + 3);
      v64 = *(_BYTE *)(v17 + 3);
    }
    v11 = *(&v10->Rax + (v64 & 0xF)) - (v65 & 0xFFFFFFF0);
LABEL_13:
    EstablisherFrame = v11;
    if ( v16 )
      goto LABEL_26;
    if ( v18 >= 2 )
    {
      v13 = *(unsigned __int8 *)(v17 + 2);
      if ( !(_BYTE)v13 )
        goto LABEL_26;
      v71 = *(_WORD *)(v17 + 4);
      v72 = v71;
      LOWORD(v72) = HIBYTE(v71);
      if ( (HIBYTE(v71) & 0xF) != 6 )
        goto LABEL_26;
      v12 = v106;
      v73 = v106 - v15;
      v74 = (unsigned __int8)v71;
      if ( (v71 & 0x1000) == 0
        || (v75 = v107->EndAddress - (unsigned __int8)v71, v73 - v75 >= (unsigned int)(unsigned __int8)v71) )
      {
        v76 = 1;
        if ( (unsigned __int8)v13 <= 1u )
          goto LABEL_26;
        while ( 1 )
        {
          v77 = *(_WORD *)(v17 + 2LL * v76 + 4);
          if ( (HIBYTE(v77) & 0xF) != 6 )
            goto LABEL_26;
          v72 = (unsigned __int8)v77 + (HIBYTE(v77) >> 4 << 8);
          if ( !v72 )
            goto LABEL_26;
          v75 = v107->EndAddress - v72;
          if ( v73 - v75 < v74 )
            break;
          if ( ++v76 >= (unsigned __int8)v13 )
            goto LABEL_26;
        }
      }
      RtlpUnwindEpilogue(v15, v72, v73 - v75, (_DWORD)v107, (__int64)v10, 0LL, 0LL, 0LL);
LABEL_86:
      v39 = 0LL;
      goto LABEL_42;
    }
    v12 = v106;
    v21 = 0LL;
    v22 = (_BYTE *)v106;
    v23 = *(_BYTE *)v106;
    if ( *(_BYTE *)v106 == 72 )
    {
      v60 = *(_BYTE *)(v106 + 1);
      if ( v60 == -125 && *(_BYTE *)(v106 + 2) == 0xC4 )
      {
        v22 = (_BYTE *)(v106 + 4);
        goto LABEL_17;
      }
      if ( v60 == -127 && *(_BYTE *)(v106 + 2) == 0xC4 )
        goto LABEL_96;
    }
    if ( (v23 & 0xFE) == 0x48 && *(_BYTE *)(v106 + 1) == 0x8D )
    {
      v13 = *(unsigned __int8 *)(v106 + 2);
      v58 = *(_BYTE *)(v106 + 2) & 7;
      v21 = v58 | (8 * (v23 & 1u));
      if ( v58 | (8 * (v23 & 1)) )
      {
        if ( (_DWORD)v21 == (*(_BYTE *)(v17 + 3) & 0xF) )
        {
          v59 = v13 & 0xF8;
          if ( v59 == 96 )
          {
            v22 = (_BYTE *)(v106 + 4);
            goto LABEL_17;
          }
          if ( v59 != -96 )
            goto LABEL_17;
LABEL_96:
          v22 = (_BYTE *)(v106 + 7);
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
      v54 = (char *)v106;
      if ( (*(_BYTE *)v106 & 0xF8) != 0x48 )
        goto LABEL_83;
      v55 = *(_BYTE *)(v106 + 1);
      switch ( v55 )
      {
        case -125:
          v54 = (char *)(v106 + 4);
          v10->Rsp += *(char *)(v106 + 3);
          goto LABEL_83;
        case -127:
          v10->Rsp += *(unsigned __int8 *)(v106 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v106 + 4) | (*(unsigned __int16 *)(v106 + 5) << 8)) << 8);
          break;
        case -115:
          v100 = *(_BYTE *)(v106 + 2) & 0xF8;
          if ( v100 == 96 )
          {
            v101 = *(&v10->Rax + v21);
            v54 = (char *)(v106 + 4);
            v10->Rsp = v101;
            v10->Rsp = v101 + *(char *)(v106 + 3);
            goto LABEL_83;
          }
          if ( v100 != -96 )
          {
            while ( 1 )
            {
LABEL_83:
              v56 = *v54;
              if ( (*v54 & 0xF8) == 0x58 )
              {
                *(&v10->Rax + (*v54 & 7)) = *(_QWORD *)v10->Rsp;
                v93 = 1LL;
              }
              else
              {
                if ( (v56 & 0xF0) != 0x40 || (v97 = v54[1], (v97 & 0xF8) != 0x58) )
                {
                  v57 = *(_QWORD *)v10->Rsp;
                  v10->Rsp += 8LL;
                  v10->Rip = v57;
                  goto LABEL_86;
                }
                *(&v10->Rax + (v97 & 7 | (unsigned __int64)(8 * (v56 & 1u)))) = *(_QWORD *)v10->Rsp;
                v93 = 2LL;
              }
              v10->Rsp += 8LL;
              v54 += v93;
            }
          }
          v10->Rsp = *(&v10->Rax + v21)
                   + (*(unsigned __int8 *)(v106 + 3) | ((*(unsigned __int8 *)(v106 + 4) | (*(unsigned __int16 *)(v106 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_83;
      }
      v54 = (char *)(v106 + 7);
      goto LABEL_83;
    }
    if ( v25 == -13 )
    {
      v92 = v22[1] == 0xC3;
LABEL_151:
      if ( !v92 )
        goto LABEL_25;
      goto LABEL_80;
    }
    if ( ((v25 + 23) & 0xFD) == 0 )
    {
      v13 = (unsigned __int64)&v22[-v15];
      if ( v25 == -21 )
        v66 = (char)v22[1] + 2;
      else
        v66 = *(_DWORD *)(v22 + 1) + 5;
      v67 = v66;
      v68 = v107;
      v69 = v13 + v67;
      BeginAddress = v107->BeginAddress;
      if ( v69 >= BeginAddress )
      {
        if ( v69 < v107->EndAddress )
        {
          if ( v69 != BeginAddress || (*(_BYTE *)v17 & 0x20) != 0 )
            goto LABEL_26;
          goto LABEL_80;
        }
        v68 = v107;
      }
      v89 = (_DWORD *)RtlpSameFunction(v68, v15, v69 + v15);
      if ( v89 && v69 != *v89 )
        goto LABEL_26;
      goto LABEL_80;
    }
    if ( v25 == -1 )
    {
      v92 = v22[1] == 37;
      goto LABEL_151;
    }
LABEL_25:
    if ( (v25 & 0xF8) == 0x48 && v22[1] == 0xFF && (v22[2] & 0x38) == 0x20 )
      goto LABEL_80;
LABEL_26:
    v26 = 0;
    v27 = ImageBase;
    p_BeginAddress = &v107->BeginAddress;
    v29 = v106 - ImageBase;
    v111 = 0;
    while ( 1 )
    {
      LOBYTE(v13) = 0;
      v30 = (_BYTE *)(v27 + (unsigned int)p_BeginAddress[2]);
      v104 = 0;
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
                    v63 = *(&v10->Rax + (v30[3] & 0xF));
                    v10->Rsp = v63;
                    v10->Rsp = v63 - (v30[3] & 0xF0);
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
                    v78 = 16 * (unsigned int)*(unsigned __int16 *)&v30[2 * v31 + 4];
                    v79 = (unsigned int)v34;
                    v10->FltSave.XmmRegisters[v79].Low = *(_QWORD *)(v78 + v11);
                    v10->FltSave.XmmRegisters[v79].High = *(_QWORD *)(v78 + v11 + 8);
                    break;
                  case 9:
                    v31 = (unsigned int)(v31 + 2);
                    v13 = v11
                        + *(unsigned __int16 *)&v30[2 * (unsigned int)(v31 - 1) + 4]
                        + (*(unsigned __int16 *)&v30[2 * v31 + 4] << 16);
                    v102 = (unsigned int)v34;
                    v10->FltSave.XmmRegisters[v102].Low = *(_QWORD *)v13;
                    v10->FltSave.XmmRegisters[v102].High = *(_QWORD *)(v13 + 8);
                    break;
                  case 0xA:
                    v90 = (DWORD64 *)v10->Rsp;
                    v104 = 1;
                    v91 = v90 + 3;
                    if ( (_DWORD)v34 )
                    {
                      ++v90;
                      ++v91;
                    }
                    v10->Rip = *v90;
                    v10->Rsp = *v91;
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
        v13 = v104;
        v26 = v111;
      }
      if ( (*v30 & 0x20) == 0 )
        break;
      v81 = (unsigned __int8)v30[2];
      if ( (v81 & 1) != 0 )
        ++v81;
      v111 = ++v26;
      p_BeginAddress = &v30[2 * v81 + 4];
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
    v36 = v106 - ImageBase - *p_BeginAddress;
    v12 = v106;
    if ( v36 < (unsigned __int8)v35[1] || (*v35 & 0x10) == 0 )
      goto LABEL_86;
    v37 = (unsigned __int8)v35[2];
    v38 = v37 + 1;
    if ( (v37 & 1) == 0 )
      v38 = (unsigned __int8)v35[2];
    v39 = ImageBase + *(unsigned int *)&v35[2 * v38 + 4];
    HandlerData = &v35[2 * (v38 + 2) + 4];
    v108 = v39;
LABEL_42:
    if ( (v11 & 7) != 0 || v11 < v116 || v11 >= v117 || (v6 = v130) != 0LL && (unsigned __int64)v130 < v11 )
      RtlRaiseStatus(-1073741784);
    if ( v39 )
    {
      v40 = 0;
      v41 = v105;
      v124 = v119;
      do
      {
        if ( v6 == (PVOID)v11 )
          v41 |= 0x20u;
        v9 = v110;
        v42 = (DWORD64)v118;
        v43 = v110;
        v126 = (EXCEPTION_DISPOSITION (__cdecl *)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID))v39;
        v44 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v41;
        v43->Rax = v42;
        v122 = v107;
        v127 = HandlerData;
        v105 = v41 & 0xFFFFFF9F;
        v128 = v115;
        ControlPc = v12;
        v121 = v15;
        v123 = v11;
        v125 = v43;
        v129 = v40;
        v45 = RtlpExecuteHandlerForUnwind(v44, v11, v43, &ControlPc) - 1;
        if ( v45 )
        {
          if ( v45 != 2 )
            RtlRaiseStatus(-1073741786);
          v15 = v121;
          v12 = ControlPc;
          ImageBase = v121;
          v107 = v122;
          RtlpCopyContext(v131, v125);
          v110 = v94;
          v9 = v94;
          v10 = &v136;
          RtlpCopyContext(&v136, v94);
          v96 = RtlVirtualUnwind(2u, v15, v12, v95, &v136, &HandlerData, &EstablisherFrame, 0LL);
          v108 = (unsigned __int64)v96;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v96 != v126 || (v11 = EstablisherFrame, EstablisherFrame != v123) || HandlerData != v127 )
              __fastfail(0x27u);
          }
          else
          {
            v11 = v123;
            v108 = (unsigned __int64)v126;
            HandlerData = v127;
            EstablisherFrame = v123;
          }
          v41 = v105 | 0x40;
          v40 = v129;
          v105 |= 0x40u;
          v115 = v128;
        }
        else
        {
          v41 = v105;
          if ( (PVOID)v11 != v6 )
          {
            v46 = v9;
            v110 = v10;
            v9 = v10;
            v10 = v46;
          }
        }
        v39 = v108;
      }
      while ( (v41 & 0x40) != 0 );
    }
    else if ( (PVOID)v11 == v130 )
    {
      v9 = v110;
    }
    else
    {
      v52 = v110;
      v9 = v10;
      v110 = v10;
      v10 = v52;
    }
LABEL_55:
    if ( (v11 & 7) != 0 || v11 < v116 || v11 >= v117 )
    {
      if ( (PVOID)v11 == v6 )
        goto LABEL_97;
      if ( v12 == v9->Rip )
        RtlRaiseStatus(-1073741569);
      ZwRaiseException(ExceptionRecorda, v9, 0);
    }
    else
    {
      if ( (PVOID)v11 != v6 )
      {
        v7 = v115;
        continue;
      }
LABEL_97:
      v61 = ExceptionRecorda;
      v9->Rax = (DWORD64)v118;
      if ( v61->ExceptionCode != -2147483607 )
        v9->Rip = (DWORD64)v119;
      RtlpGuardSynchronizeRestorePc(&v9->Rip);
      if ( v61->ExceptionCode == -2147483610 )
      {
        v87 = v61->ExceptionInformation[0];
        LOBYTE(v88) = LdrControlFlowGuardEnforced();
        if ( v88 && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v87 + 16)) )
          __fastfail(0xDu);
        RtlGuardCheckLongJumpTarget(*(PVOID *)(v87 + 80), 0, 0LL);
      }
      else
      {
        if ( v61->ExceptionCode == -2147483607 )
        {
          if ( v61->NumberParameters )
          {
            v82 = v61->ExceptionInformation[0];
            LOBYTE(v83) = LdrControlFlowGuardEnforced();
            if ( v83 )
            {
              if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v85, v84, v86) )
                LdrpValidateUserCallTargetES(v82);
              else
                LdrpValidateUserCallTarget(v82);
            }
          }
        }
        LOBYTE(v62) = LdrControlFlowGuardEnforced();
        if ( v62 )
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

/*
 * XREFs of RtlRaiseException @ 0x180024290
 * Callers:
 *     TpCheckTerminateWorker @ 0x18000A760 (TpCheckTerminateWorker.c)
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18000E770 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180017F44 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlGetActiveActivationContext @ 0x180020770 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180031110 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     PssNtValidateDescriptor @ 0x18005DD60 (PssNtValidateDescriptor.c)
 *     vDbgPrintExWithPrefixInternal @ 0x18006C604 (vDbgPrintExWithPrefixInternal.c)
 *     RtlDeactivateActivationContext @ 0x180078520 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180078624 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpTpImpersonate @ 0x180088908 (RtlpTpImpersonate.c)
 *     RaiseException @ 0x180099100 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A3E60 (KiRaiseUserExceptionDispatcher.c)
 *     RtlpPossibleDeadlock @ 0x1800E6BDC (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F2B10 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportCriticalFailure @ 0x1800F8394 (RtlReportCriticalFailure.c)
 *     TppRaiseHandleStatus @ 0x18010AE2C (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x180027C80 (RtlLookupFunctionEntry.c)
 *     RtlpSameFunction @ 0x18007C774 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088B08 (RtlpUnwindOpSlots.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x18009F9C0 (RtlpUnwindEpilogue.c)
 *     ZwRaiseException @ 0x1800A2C30 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800A4010 (RtlpCaptureContext.c)
 *     RtlRestoreContext @ 0x1800A4150 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A4620 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A4DD0 (_alloca_probe.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  int v1; // edi
  DWORD64 Rip; // rbx
  PRUNTIME_FUNCTION v3; // rax
  DWORD64 v4; // r8
  unsigned int *p_BeginAddress; // r13
  int v6; // r12d
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdi
  unsigned int v9; // r15d
  unsigned int v10; // esi
  DWORD64 *Rsp; // rdx
  int v12; // r9d
  __int64 v13; // r14
  _BYTE *v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned int v16; // r12d
  int v17; // ebx
  unsigned int v18; // r15d
  _BYTE *v19; // rsi
  __int64 v20; // rdi
  char v21; // r14
  __int64 v22; // r9
  unsigned int v23; // ecx
  DWORD64 v24; // rax
  struct _EXCEPTION_RECORD *v25; // rdi
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rsp
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  DWORD64 v33; // rax
  unsigned int v34; // edx
  _BYTE *v35; // rax
  _BYTE *v36; // rcx
  unsigned int v37; // r9d
  __int64 v38; // rax
  int v39; // r8d
  __int64 v40; // rax
  bool v41; // zf
  char v42; // al
  __int64 v43; // rax
  int v44; // eax
  char v45; // cl
  char v46; // al
  unsigned __int8 v47; // cl
  int v48; // eax
  _BYTE *v49; // r9
  int v50; // eax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rsi
  unsigned int v53; // ecx
  __int16 v54; // cx
  unsigned int v55; // esi
  unsigned int v56; // ecx
  unsigned int v57; // r11d
  unsigned int v58; // r10d
  __int16 v59; // r9
  int v60; // r9d
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  ULONGLONG *v63; // rdx
  __int64 v64; // rcx
  LONGLONG v65; // rax
  int v66; // ecx
  __int64 v67; // r13
  _DWORD *v68; // rax
  unsigned int v69; // ecx
  DWORD64 **v70; // rcx
  int v71; // eax
  __int64 v72; // r14
  char v73; // al
  DWORD64 v74; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+50h] [rbp+10h]
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp+20h] BYREF
  int v78; // [rsp+530h] [rbp+4F0h]
  int v79; // [rsp+534h] [rbp+4F4h]
  int v80; // [rsp+538h] [rbp+4F8h]
  int v81; // [rsp+53Ch] [rbp+4FCh]
  int v82; // [rsp+540h] [rbp+500h]
  int v83; // [rsp+544h] [rbp+504h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+550h] [rbp+510h] BYREF

  ExceptionRecorda = ExceptionRecord;
  v1 = -1073741786;
  RtlpCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, &HistoryTable);
  p_BeginAddress = &v3->BeginAddress;
  if ( !v3 )
LABEL_163:
    RtlRaiseStatus(v1);
  v6 = 0;
  v7 = ImageBase;
  v8 = ImageBase + v3->UnwindInfoAddress;
  v9 = *(_BYTE *)v8 & 7;
  if ( v9 < 2 )
  {
    v34 = 0;
    v35 = (_BYTE *)(v8 + 2);
    v36 = (_BYTE *)v8;
    if ( !*(_BYTE *)(v8 + 2) )
    {
      while ( (*v36 & 0x20) != 0 )
      {
        v37 = (unsigned __int8)*v35;
        ++v34;
        v4 = *v35 & 1;
        if ( v34 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v38 = v37 + 1;
        if ( !(_DWORD)v4 )
          v38 = v37;
        v36 = (_BYTE *)(ImageBase + *(unsigned int *)&v36[2 * v38 + 12]);
        v35 = v36 + 2;
        if ( v36[2] )
          goto LABEL_3;
      }
      v6 = 1;
    }
  }
LABEL_3:
  v10 = Rip - *p_BeginAddress - ImageBase;
  if ( (*(_BYTE *)(v8 + 3) & 0xF) != 0 )
  {
    if ( v10 >= *(unsigned __int8 *)(v8 + 1) || (*(_BYTE *)v8 & 0x20) != 0 )
    {
      v47 = *(_BYTE *)(v8 + 3);
      v48 = v47;
      Rsp = (DWORD64 *)ContextRecord.Rsp;
    }
    else
    {
      v72 = 0LL;
      if ( *(_BYTE *)(v8 + 2) )
      {
        do
        {
          if ( (HIBYTE(*(_WORD *)(v8 + 2 * v72 + 4)) & 0xF) == 3 )
            break;
          v72 = (unsigned int)((__int64 (*)(void))RtlpUnwindOpSlots)() + (unsigned int)v72;
        }
        while ( (unsigned int)v72 < *(unsigned __int8 *)(v8 + 2) );
        v7 = ImageBase;
      }
      Rsp = (DWORD64 *)ContextRecord.Rsp;
      if ( v10 < *(unsigned __int8 *)(v8 + 2 * v72 + 4) )
        goto LABEL_5;
      v48 = *(unsigned __int8 *)(v8 + 3);
      v47 = *(_BYTE *)(v8 + 3);
    }
    v74 = *(&ContextRecord.Rax + (v47 & 0xF)) - (v48 & 0xFFFFFFF0);
    goto LABEL_6;
  }
  Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_5:
  v74 = (DWORD64)Rsp;
LABEL_6:
  if ( v6 )
    goto LABEL_19;
  v12 = 0;
  if ( v9 >= 2 )
  {
    if ( !*(_BYTE *)(v8 + 2) )
      goto LABEL_19;
    v54 = HIBYTE(*(_WORD *)(v8 + 4));
    if ( (v54 & 0xF) != 6 )
      goto LABEL_19;
    v55 = *(unsigned __int8 *)(v8 + 4);
    v4 = (unsigned int)(Rip - v7);
    if ( (v54 & 0x10) != 0 )
    {
      v56 = p_BeginAddress[1] - v55;
      LOBYTE(v12) = (unsigned int)v4 - v56 < v55;
    }
    else
    {
      v56 = 0;
    }
    if ( !v12 )
    {
      v57 = *(unsigned __int8 *)(v8 + 2);
      v58 = 1;
      if ( v57 <= 1 )
        goto LABEL_19;
      while ( 1 )
      {
        v59 = HIBYTE(*(_WORD *)(v8 + 2LL * v58 + 4));
        if ( (v59 & 0xF) != 6 )
          goto LABEL_19;
        v60 = *(unsigned __int8 *)(v8 + 2LL * v58 + 4) + ((unsigned __int8)v59 >> 4 << 8);
        if ( !v60 )
          goto LABEL_19;
        v56 = p_BeginAddress[1] - v60;
        if ( (unsigned int)v4 - v56 < v55 )
          break;
        if ( ++v58 >= v57 )
          goto LABEL_19;
      }
      LODWORD(v7) = ImageBase;
    }
    RtlpUnwindEpilogue(v7, (_DWORD)Rsp, v4 - v56, (_DWORD)p_BeginAddress, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
    goto LABEL_32;
  }
  v13 = 0LL;
  v4 = Rip;
  if ( *(_BYTE *)Rip == 72 )
  {
    v46 = *(_BYTE *)(Rip + 1);
    if ( v46 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
      goto LABEL_115;
    if ( v46 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
LABEL_81:
      v4 = Rip + 7;
      goto LABEL_10;
    }
  }
  if ( (*(_BYTE *)Rip & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
  {
    v44 = *(_BYTE *)(Rip + 2) & 7;
    v13 = v44 | (8 * (*(_BYTE *)Rip & 1u));
    if ( v44 | (8 * (*(_BYTE *)Rip & 1)) )
    {
      if ( (_DWORD)v13 == (*(_BYTE *)(v8 + 3) & 0xF) )
      {
        v45 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v45 != 96 )
        {
          if ( v45 != -96 )
            goto LABEL_10;
          goto LABEL_81;
        }
LABEL_115:
        v4 = Rip + 4;
      }
    }
  }
LABEL_10:
  while ( (*(_BYTE *)v4 & 0xF8) == 0x58 )
  {
    v40 = 1LL;
LABEL_127:
    v4 += v40;
  }
  if ( (*(_BYTE *)v4 & 0xF0) == 0x40 && (*(_BYTE *)(v4 + 1) & 0xF8) == 0x58 )
  {
    v40 = 2LL;
    goto LABEL_127;
  }
  v14 = (_BYTE *)(v4 + 1);
  if ( *(_BYTE *)v4 != 0xF2 )
    v14 = (_BYTE *)v4;
  LOBYTE(v4) = *v14;
  if ( (unsigned __int8)(*v14 + 62) <= 1u || (_BYTE)v4 == 0xF3 && v14[1] == 0xC3 )
  {
LABEL_64:
    if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
      goto LABEL_68;
    v42 = *(_BYTE *)(Rip + 1);
    switch ( v42 )
    {
      case -125:
        goto LABEL_66;
      case -127:
        Rsp = (DWORD64 *)((char *)Rsp
                        + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
        break;
      case -115:
        v73 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v73 == 96 )
        {
          Rsp = (DWORD64 *)*(&ContextRecord.Rax + v13);
          ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_66:
          Rsp = (DWORD64 *)((char *)Rsp + *(char *)(Rip + 3));
          for ( Rip += 4LL; ; Rip += v43 )
          {
LABEL_67:
            ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_68:
            if ( (*(_BYTE *)Rip & 0xF8) == 0x58 )
            {
              *(&ContextRecord.Rax + (*(_BYTE *)Rip & 7)) = *Rsp;
              v43 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)Rip & 0xF0) != 0x40 || (*(_BYTE *)(Rip + 1) & 0xF8) != 0x58 )
                goto LABEL_31;
              *(&ContextRecord.Rax + (*(_BYTE *)(Rip + 1) & 7 | (unsigned __int64)(8 * (*(_BYTE *)Rip & 1u)))) = *Rsp;
              v43 = 2LL;
            }
            Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
          }
        }
        if ( v73 != -96 )
          goto LABEL_68;
        Rsp = (DWORD64 *)(*(&ContextRecord.Rax + v13)
                        + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
        break;
      default:
        goto LABEL_68;
    }
    Rip += 7LL;
    goto LABEL_67;
  }
  if ( (((_BYTE)v4 + 23) & 0xFD) != 0 )
  {
    if ( (_BYTE)v4 == 0xFF && v14[1] == 37 )
      goto LABEL_64;
    LOBYTE(v4) = v4 & 0xF8;
    if ( (_BYTE)v4 == 72 && v14[1] == 0xFF )
    {
      v41 = (v14[2] & 0x38) == 32;
LABEL_63:
      if ( v41 )
        goto LABEL_64;
    }
  }
  else
  {
    v49 = &v14[-v7];
    if ( (_BYTE)v4 == 0xEB )
      v50 = (char)v14[1] + 2;
    else
      v50 = *(_DWORD *)(v14 + 1) + 5;
    v51 = *p_BeginAddress;
    v52 = (unsigned __int64)&v49[v50];
    if ( v52 < v51 || v52 >= p_BeginAddress[1] )
    {
      v68 = (_DWORD *)RtlpSameFunction(p_BeginAddress, v7, v7 + v52);
      if ( !v68 || v52 == *v68 )
      {
        Rsp = (DWORD64 *)ContextRecord.Rsp;
        goto LABEL_64;
      }
      Rsp = (DWORD64 *)ContextRecord.Rsp;
    }
    else if ( v52 == v51 )
    {
      v41 = (*(_BYTE *)v8 & 0x20) == 0;
      goto LABEL_63;
    }
  }
LABEL_19:
  v15 = ImageBase;
  v16 = 0;
  v17 = Rip - ImageBase;
  while ( 2 )
  {
    v18 = v17 - *p_BeginAddress;
    v19 = (_BYTE *)(v15 + p_BeginAddress[2]);
    v20 = 0LL;
    v21 = 0;
    if ( v19[2] )
    {
      while ( 2 )
      {
        v22 = (unsigned __int8)v19[2 * v20 + 5] >> 4;
        if ( v18 < (unsigned __int8)v19[2 * v20 + 4] )
        {
          v71 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v19[2 * v20 + 4], Rsp, v4, v22);
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          v20 = (unsigned int)(v71 + v20);
          goto LABEL_28;
        }
        v23 = v19[2 * v20 + 5] & 0xF;
        if ( v23 <= 5 )
        {
          if ( v23 == 5 )
          {
            v20 = (unsigned int)(v20 + 2);
            v33 = *(_QWORD *)((*(unsigned __int16 *)&v19[2 * v20 + 4] << 16)
                            + (unsigned int)*(unsigned __int16 *)&v19[2 * (unsigned int)(v20 - 1) + 4]
                            + v74);
            goto LABEL_46;
          }
          if ( (v19[2 * v20 + 5] & 0xF) == 0 )
          {
            *(&ContextRecord.Rax + v22) = *Rsp;
            Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
            goto LABEL_26;
          }
          v30 = v23 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                if ( v32 != 1 )
                  goto LABEL_158;
                v20 = (unsigned int)(v20 + 1);
                v33 = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v19[2 * v20 + 4] + v74);
LABEL_46:
                *(&ContextRecord.Rax + v22) = v33;
LABEL_47:
                Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_27:
                v20 = (unsigned int)(v20 + 1);
LABEL_28:
                if ( (unsigned int)v20 >= (unsigned __int8)v19[2] )
                  goto LABEL_29;
                continue;
              }
              ContextRecord.Rsp = *(&ContextRecord.Rax + (v19[3] & 0xF));
              Rsp = (DWORD64 *)(ContextRecord.Rsp - (v19[3] & 0xF0));
            }
            else
            {
              Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)(8 * v22 + 8));
            }
          }
          else
          {
            v20 = (unsigned int)(v20 + 1);
            v39 = *(unsigned __int16 *)&v19[2 * v20 + 4];
            if ( (_DWORD)v22 )
            {
              v20 = (unsigned int)(v20 + 1);
              v4 = (*(unsigned __int16 *)&v19[2 * v20 + 4] << 16) + v39;
            }
            else
            {
              v4 = (unsigned int)(8 * v39);
            }
            Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)v4);
          }
LABEL_26:
          ContextRecord.Rsp = (DWORD64)Rsp;
          goto LABEL_27;
        }
        break;
      }
      v53 = v23 - 6;
      if ( !v53 )
      {
        LODWORD(v20) = v20 + 1;
        goto LABEL_27;
      }
      v61 = v53 - 1;
      if ( !v61 )
      {
        LODWORD(v20) = v20 + 2;
        goto LABEL_27;
      }
      v62 = v61 - 1;
      if ( v62 )
      {
        v69 = v62 - 1;
        if ( v69 )
        {
          if ( v69 != 1 )
LABEL_158:
            RtlRaiseStatus(-1073741569);
          v21 = 1;
          v70 = (DWORD64 **)(Rsp + 3);
          if ( (_DWORD)v22 )
          {
            ++Rsp;
            ++v70;
          }
          ContextRecord.Rip = *Rsp;
          Rsp = *v70;
          goto LABEL_26;
        }
        v20 = (unsigned int)(v20 + 2);
        v4 = v74
           + *(unsigned __int16 *)&v19[2 * (unsigned int)(v20 - 1) + 4]
           + (*(unsigned __int16 *)&v19[2 * v20 + 4] << 16);
        v64 = 2LL * (unsigned int)v22;
        *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v22) = *(_QWORD *)v4;
        v65 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        v20 = (unsigned int)(v20 + 1);
        v63 = (ULONGLONG *)(v74 + 16 * (unsigned int)*(unsigned __int16 *)&v19[2 * v20 + 4]);
        v64 = 2LL * (unsigned int)v22;
        *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v22) = *v63;
        v65 = v63[1];
      }
      *(&ContextRecord.Xmm0.High + v64) = v65;
      goto LABEL_47;
    }
LABEL_29:
    if ( (*v19 & 0x20) != 0 )
    {
      v66 = (unsigned __int8)v19[2];
      v67 = (unsigned int)(v66 + 1);
      if ( (v66 & 1) == 0 )
        v67 = (unsigned __int8)v19[2];
      ++v16;
      p_BeginAddress = (unsigned int *)&v19[2 * v67 + 4];
      if ( v16 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v15 = ImageBase;
      continue;
    }
    break;
  }
  if ( !v21 )
  {
LABEL_31:
    v24 = *Rsp;
    ContextRecord.Rsp = (DWORD64)(Rsp + 1);
    ContextRecord.Rip = v24;
  }
LABEL_32:
  v25 = ExceptionRecorda;
  ExceptionRecorda->ExceptionAddress = (void *)ContextRecord.Rip;
  RtlpGuardSynchronizeRestorePc(&ContextRecord.Rip);
  if ( NtCurrentPeb()->BeingDebugged )
  {
    LOBYTE(v26) = 1;
    goto LABEL_162;
  }
  if ( MEMORY[0x7FFE03D8] )
  {
    v27 = (unsigned int)(MEMORY[0x7FFE03E8] - 448) - 16LL;
    v28 = v27 + 15;
    if ( v27 + 15 < v27 )
      v28 = 0xFFFFFFFFFFFFFF0LL;
    v29 = alloca(v28 & 0xFFFFFFFFFFFFFFF0uLL);
    v82 = (((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) - ((unsigned int)&v74 + 1264);
    v78 = v82;
    v83 = MEMORY[0x7FFE03E8] - 512;
    v80 = -1232;
    v79 = 24 - v82;
    v81 = 1232;
    memset((void *)(((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    ContextRecord.ContextFlags |= 0x100040u;
  }
  if ( !(unsigned __int8)RtlDispatchException(v25, &ContextRecord) )
  {
    v26 = 0LL;
LABEL_162:
    v1 = ZwRaiseException(v25, &ContextRecord, v26);
    goto LABEL_163;
  }
  RtlRestoreContext(&ContextRecord, v25);
}

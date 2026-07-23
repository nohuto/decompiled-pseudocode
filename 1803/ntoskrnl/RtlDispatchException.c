/*
 * XREFs of RtlDispatchException @ 0x14012EE80
 * Callers:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140286F30 (RtlRaiseException.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x1400CFE60 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400D07CC (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400D0974 (RtlpUnwindOpSlots.c)
 *     RtlpCopyContext @ 0x14012E8D8 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14012EA90 (RtlLookupFunctionEntry.c)
 *     RtlpGetStackLimits @ 0x1401307E0 (RtlpGetStackLimits.c)
 *     RtlpIsFrameInBounds @ 0x140130B80 (RtlpIsFrameInBounds.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlpSameFunction @ 0x14017C248 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpExecuteHandlerForException @ 0x1401B37C0 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x140285DD8 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x140285F78 (RtlpLogExceptionHandler.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

BOOLEAN __stdcall RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context)
{
  BOOLEAN v2; // r14
  PEXCEPTION_RECORD v4; // rdi
  int v5; // r15d
  DWORD64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rsi
  PRUNTIME_FUNCTION v8; // rax
  PRUNTIME_FUNCTION v9; // r13
  PEXCEPTION_ROUTINE v10; // r11
  unsigned __int64 v11; // rbx
  int v12; // r14d
  unsigned int v13; // edi
  unsigned __int8 v14; // dl
  unsigned int v15; // esi
  unsigned __int64 Rsp; // r9
  unsigned int v17; // r8d
  _DWORD *p_BeginAddress; // r14
  __int64 v19; // rbx
  unsigned int v20; // esi
  char v21; // r15
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // cl
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  int v28; // ecx
  unsigned int v29; // eax
  unsigned __int64 *v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // edx
  unsigned int v34; // edx
  int v35; // ecx
  __int64 v36; // rbx
  int v37; // edx
  unsigned __int64 v38; // rbx
  __int16 v39; // ax
  unsigned int v40; // r10d
  int v41; // r8d
  int v42; // ecx
  unsigned int i; // r9d
  __int16 v44; // ax
  int v45; // edx
  char v46; // cl
  int v47; // eax
  unsigned __int64 *v48; // rdx
  unsigned __int64 *v49; // rcx
  unsigned int v50; // eax
  int v51; // r8d
  unsigned __int8 *v52; // rcx
  unsigned __int64 v53; // rdx
  int v54; // edx
  DWORD64 v55; // r10
  char v56; // r8
  __int64 v57; // rsi
  char *v58; // rcx
  char v59; // dl
  char *v60; // r8
  char v61; // al
  unsigned int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // r15
  unsigned __int16 v65; // cx
  unsigned int v66; // ecx
  int v67; // eax
  char v68; // dl
  __int64 v69; // rax
  bool v70; // zf
  char *v71; // rdx
  char v72; // al
  char *v73; // r8
  int v74; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v76; // rdi
  _DWORD *v77; // rax
  char v78; // al
  __int64 v79; // rax
  char v80; // cl
  char v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r9
  __int64 v85; // rcx
  int v86; // eax
  char v88; // [rsp+40h] [rbp-C0h]
  int v89; // [rsp+44h] [rbp-BCh]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v92; // [rsp+58h] [rbp-A8h]
  EXCEPTION_DISPOSITION (__cdecl *v93)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-A0h]
  PVOID HandlerData; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v95; // [rsp+70h] [rbp-90h]
  struct _UNWIND_HISTORY_TABLE *v96; // [rsp+78h] [rbp-88h]
  PEXCEPTION_RECORD v97; // [rsp+80h] [rbp-80h]
  unsigned __int64 v98; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v99; // [rsp+90h] [rbp-70h] BYREF
  PCONTEXT v100; // [rsp+98h] [rbp-68h]
  DWORD64 ControlPc; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v102; // [rsp+A8h] [rbp-58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v104; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *p_ContextRecord; // [rsp+C8h] [rbp-38h]
  EXCEPTION_DISPOSITION (__cdecl *v106)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+D0h] [rbp-30h]
  PVOID v107; // [rsp+D8h] [rbp-28h]
  struct _UNWIND_HISTORY_TABLE *v108; // [rsp+E0h] [rbp-20h]
  int v109; // [rsp+E8h] [rbp-18h]
  struct _CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5C0h] [rbp+4C0h] BYREF

  v2 = 0;
  v100 = Context;
  v4 = ExceptionRecord;
  v97 = ExceptionRecord;
  v88 = 0;
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v88 = 1;
    RtlpLogExceptionDispatch();
  }
  v5 = v4->ExceptionFlags & 1;
  v89 = v5;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v99, &v98) )
  {
    v5 |= 8u;
    goto LABEL_241;
  }
  RtlpCopyContext((__int64)&ContextRecord, (__int64)Context);
  Rip = Context->Rip;
  p_HistoryTable = &HistoryTable;
  v96 = &HistoryTable;
  v95 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v8 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v9 = v8;
    if ( !v8 )
    {
      if ( Rip == *(_QWORD *)ContextRecord.Rsp )
        goto LABEL_240;
      Rsp = ContextRecord.Rsp + 8;
      ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
      ContextRecord.Rsp += 8LL;
      goto LABEL_59;
    }
    v10 = 0LL;
    v11 = ImageBase + v8->UnwindData;
    v12 = 0;
    v93 = 0LL;
    if ( Rip <= 0x7FFFFFFEFFFFLL && (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = *(_BYTE *)v11 & 7;
    if ( v13 < 2 )
    {
      v51 = 0;
      v52 = (unsigned __int8 *)(v11 + 2);
      v53 = v11;
      if ( !*(_BYTE *)(v11 + 2) )
      {
        while ( (*(_BYTE *)v53 & 0x20) != 0 )
        {
          v62 = *v52;
          v63 = v62 + 1;
          if ( (v62 & 1) == 0 )
            v63 = v62;
          if ( (unsigned int)++v51 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v53 = ImageBase + *(unsigned int *)(v53 + 2 * v63 + 12);
          if ( Rip <= 0x7FFFFFFEFFFFLL && (v53 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v52 = (unsigned __int8 *)(v53 + 2);
          if ( *(_BYTE *)(v53 + 2) )
            goto LABEL_8;
        }
        v12 = 1;
      }
    }
LABEL_8:
    v14 = *(_BYTE *)(v11 + 3);
    v15 = Rip - v9->BeginAddress - ImageBase;
    if ( (v14 & 0xF) != 0 )
    {
      if ( v15 >= *(unsigned __int8 *)(v11 + 1) || (*(_BYTE *)v11 & 0x20) != 0 )
      {
        Rsp = ContextRecord.Rsp;
        v46 = *(_BYTE *)(v11 + 3);
        v47 = v14;
      }
      else
      {
        v64 = 0LL;
        if ( *(_BYTE *)(v11 + 2) )
        {
          do
          {
            v65 = *(_WORD *)(v11 + 2 * v64 + 4);
            if ( (HIBYTE(v65) & 0xF) == 3 )
              break;
            v64 = (unsigned int)RtlpUnwindOpSlots(v65) + (unsigned int)v64;
          }
          while ( (unsigned int)v64 < *(unsigned __int8 *)(v11 + 2) );
          v10 = v93;
        }
        v66 = *(unsigned __int8 *)(v11 + 2 * v64 + 4);
        Rsp = ContextRecord.Rsp;
        v5 = v89;
        if ( v15 < v66 )
          goto LABEL_10;
        v47 = *(unsigned __int8 *)(v11 + 3);
        v46 = *(_BYTE *)(v11 + 3);
      }
      EstablisherFrame = *(&ContextRecord.Rax + (v46 & 0xF)) - (v47 & 0xFFFFFFF0);
      goto LABEL_11;
    }
    Rsp = ContextRecord.Rsp;
LABEL_10:
    EstablisherFrame = Rsp;
LABEL_11:
    if ( v12 )
      goto LABEL_12;
    if ( v13 >= 2 )
    {
      if ( !*(_BYTE *)(v11 + 2) )
        goto LABEL_12;
      v39 = *(_WORD *)(v11 + 4);
      if ( (HIBYTE(v39) & 0xF) != 6 )
        goto LABEL_69;
      v40 = (unsigned __int8)v39;
      v41 = Rip - ImageBase;
      if ( (v39 & 0x1000) == 0
        || (v42 = v9->EndAddress - (unsigned __int8)v39, v41 - v42 >= (unsigned int)(unsigned __int8)v39) )
      {
        for ( i = 1; i < *(unsigned __int8 *)(v11 + 2); ++i )
        {
          v44 = *(_WORD *)(v11 + 2LL * i + 4);
          if ( (HIBYTE(v44) & 0xF) != 6 )
            break;
          v45 = (unsigned __int8)v44 + (HIBYTE(v44) >> 4 << 8);
          if ( !v45 )
            break;
          v42 = v9->EndAddress - v45;
          if ( v41 - v42 < v40 )
            goto LABEL_44;
        }
        goto LABEL_69;
      }
LABEL_44:
      RtlpUnwindEpilogue(ImageBase, Rip, v41 - v42, v9, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
      Rsp = ContextRecord.Rsp;
      goto LABEL_45;
    }
    v56 = *(_BYTE *)Rip;
    v57 = 0LL;
    v58 = (char *)Rip;
    if ( *(_BYTE *)Rip != 72 )
      goto LABEL_161;
    v61 = *(_BYTE *)(Rip + 1);
    if ( v61 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v58 = (char *)(Rip + 4);
      goto LABEL_98;
    }
    if ( v61 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v58 = (char *)(Rip + 7);
    }
    else
    {
LABEL_161:
      if ( (v56 & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
      {
        v67 = *(_BYTE *)(Rip + 2) & 7;
        v57 = v67 | (8 * (v56 & 1u));
        if ( v67 | (8 * (v56 & 1)) )
        {
          if ( (_DWORD)v57 == (*(_BYTE *)(v11 + 3) & 0xF) )
          {
            v68 = *(_BYTE *)(Rip + 2) & 0xF8;
            if ( v68 == 96 )
            {
              v58 = (char *)(Rip + 4);
            }
            else if ( v68 == -96 )
            {
              v58 = (char *)(Rip + 7);
            }
          }
        }
      }
    }
LABEL_98:
    while ( 1 )
    {
      v59 = *v58;
      if ( (*v58 & 0xF8) != 0x58 )
        break;
      v69 = 1LL;
LABEL_167:
      v58 += v69;
    }
    v60 = v58 + 1;
    if ( (v59 & 0xF0) == 0x40 && (*v60 & 0xF8) == 0x58 )
    {
      v69 = 2LL;
      goto LABEL_167;
    }
    if ( v59 == -14 )
    {
      v59 = *v60;
      ++v58;
    }
    if ( (unsigned __int8)(v59 + 62) <= 1u )
      goto LABEL_173;
    if ( v59 == -13 )
    {
      v59 = -13;
      if ( v58[1] != -61 )
        goto LABEL_105;
      goto LABEL_173;
    }
    if ( ((v59 + 23) & 0xFD) == 0 )
    {
      v73 = &v58[-ImageBase];
      if ( v59 == -21 )
        v74 = v58[1] + 2;
      else
        v74 = *(_DWORD *)(v58 + 1) + 5;
      BeginAddress = v9->BeginAddress;
      v76 = (unsigned __int64)&v73[v74];
      if ( v76 < BeginAddress || v76 >= v9->EndAddress )
      {
        v77 = (_DWORD *)RtlpSameFunction(v9, ImageBase, v76 + ImageBase);
        if ( !v77 || v76 == *v77 )
        {
          Rsp = ContextRecord.Rsp;
          v10 = v93;
          goto LABEL_173;
        }
LABEL_69:
        Rsp = ContextRecord.Rsp;
        goto LABEL_12;
      }
      if ( v76 == BeginAddress )
      {
        v70 = (*(_BYTE *)v11 & 0x20) == 0;
LABEL_172:
        if ( v70 )
          goto LABEL_173;
      }
LABEL_12:
      v17 = 0;
      p_BeginAddress = &v9->BeginAddress;
      v92 = 0;
      while ( 1 )
      {
        v19 = 0LL;
        v20 = Rip - *p_BeginAddress - ImageBase;
        v21 = 0;
        v22 = ImageBase + (unsigned int)p_BeginAddress[2];
        if ( Rip <= 0x7FFFFFFEFFFFLL )
        {
          if ( (v22 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Rsp = ContextRecord.Rsp;
        }
        v23 = *(_BYTE *)(v22 + 2);
        if ( v23 )
        {
          do
          {
            v24 = v22 + 2 * v19;
            v25 = *(unsigned __int8 *)(v24 + 5) >> 4;
            if ( v20 < *(unsigned __int8 *)(v24 + 4) )
            {
              v86 = RtlpUnwindOpSlots(*(_WORD *)(v24 + 4));
              Rsp = ContextRecord.Rsp;
              v19 = (unsigned int)(v86 + v19);
            }
            else
            {
              if ( (*(_BYTE *)(v22 + 2 * v19 + 5) & 0xF) != 0 )
              {
                if ( (*(_BYTE *)(v22 + 2 * v19 + 5) & 0xF) != 4 )
                {
                  switch ( *(_BYTE *)(v22 + 2 * v19 + 5) & 0xF )
                  {
                    case 1:
                      v19 = (unsigned int)(v19 + 1);
                      v33 = *(unsigned __int16 *)(v22 + 2 * v19 + 4);
                      if ( (_DWORD)v25 )
                      {
                        v19 = (unsigned int)(v19 + 1);
                        v34 = (*(unsigned __int16 *)(v22 + 2 * v19 + 4) << 16) + v33;
                      }
                      else
                      {
                        v34 = 8 * v33;
                      }
                      Rsp += v34;
                      goto LABEL_22;
                    case 2:
                      Rsp += (unsigned int)(8 * v25 + 8);
                      goto LABEL_22;
                    case 3:
                      ContextRecord.Rsp = *(&ContextRecord.Rax + (*(_BYTE *)(v22 + 3) & 0xF));
                      Rsp = ContextRecord.Rsp - (*(_BYTE *)(v22 + 3) & 0xF0);
                      goto LABEL_22;
                    case 5:
                      v19 = (unsigned int)(v19 + 2);
                      if ( Rip <= 0x7FFFFFFEFFFFLL
                        && (((_BYTE)EstablisherFrame
                           + (unsigned __int8)*(_WORD *)(v22 + 2LL * (unsigned int)(v19 - 1) + 4)) & 3) != 0 )
                      {
                        ExRaiseDatatypeMisalignment();
                      }
                      *(&ContextRecord.Rax + v25) = *(_QWORD *)(EstablisherFrame
                                                              + *(unsigned __int16 *)(v22
                                                                                    + 2LL * (unsigned int)(v19 - 1)
                                                                                    + 4)
                                                              + (*(unsigned __int16 *)(v22 + 2 * v19 + 4) << 16));
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_23;
                    case 6:
                      LODWORD(v19) = v19 + 1;
                      goto LABEL_23;
                    case 7:
                      LODWORD(v19) = v19 + 2;
                      goto LABEL_23;
                    case 8:
                      v19 = (unsigned int)(v19 + 1);
                      v31 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v22 + 2 * v19 + 4);
                      if ( Rip <= 0x7FFFFFFEFFFFLL && (v31 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      v32 = (unsigned int)v25;
                      ContextRecord.VectorRegister[v32 - 22].Low = *(_QWORD *)v31;
                      ContextRecord.FltSave.XmmRegisters[v32].High = *(_QWORD *)(v31 + 8);
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_23;
                    case 9:
                      v19 = (unsigned int)(v19 + 2);
                      v84 = EstablisherFrame
                          + *(unsigned __int16 *)(v22 + 2LL * (unsigned int)(v19 - 1) + 4)
                          + (*(unsigned __int16 *)(v22 + 2 * v19 + 4) << 16);
                      if ( Rip <= 0x7FFFFFFEFFFFLL
                        && (((_BYTE)EstablisherFrame
                           + (unsigned __int8)*(_WORD *)(v22 + 2LL * (unsigned int)(v19 - 1) + 4)) & 3) != 0 )
                      {
                        ExRaiseDatatypeMisalignment();
                      }
                      v85 = (unsigned int)v25;
                      ContextRecord.VectorRegister[v85 - 22].Low = *(_QWORD *)v84;
                      ContextRecord.FltSave.XmmRegisters[v85].High = *(_QWORD *)(v84 + 8);
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_23;
                    case 0xA:
                      v48 = (unsigned __int64 *)(Rsp + 32);
                      v21 = 1;
                      v49 = (unsigned __int64 *)(Rsp + 8);
                      if ( !(_DWORD)v25 )
                      {
                        v48 = (unsigned __int64 *)(Rsp + 24);
                        v49 = (unsigned __int64 *)Rsp;
                      }
                      if ( Rip <= 0x7FFFFFFEFFFFLL )
                      {
                        if ( ((unsigned __int8)v49 & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                        if ( ((unsigned __int8)v48 & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                      }
                      ContextRecord.Rip = *v49;
                      Rsp = *v48;
                      goto LABEL_22;
                    default:
                      RtlRaiseStatus(-1073741569);
                  }
                }
                v19 = (unsigned int)(v19 + 1);
                v30 = (unsigned __int64 *)(EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v22 + 2 * v19 + 4));
                if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v30 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&ContextRecord.Rax + v25) = *v30;
                Rsp = ContextRecord.Rsp;
              }
              else
              {
                if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&ContextRecord.Rax + v25) = *(_QWORD *)Rsp;
                Rsp = ContextRecord.Rsp + 8;
LABEL_22:
                ContextRecord.Rsp = Rsp;
              }
LABEL_23:
              v19 = (unsigned int)(v19 + 1);
            }
            v23 = *(_BYTE *)(v22 + 2);
          }
          while ( (unsigned int)v19 < v23 );
          v17 = v92;
        }
        if ( (*(_BYTE *)v22 & 0x20) == 0 )
          break;
        v50 = v23;
        if ( (v23 & 1) != 0 )
          v50 = v23 + 1;
        p_BeginAddress = (_DWORD *)(v22 + 2 * (v50 + 2LL));
        if ( Rip <= 0x7FFFFFFEFFFFLL )
        {
          if ( ((unsigned __int8)p_BeginAddress & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Rsp = ContextRecord.Rsp;
        }
        v92 = ++v17;
        if ( v17 > 0x20 )
          RtlRaiseStatus(-1073741569);
      }
      if ( !v21 )
      {
        if ( Rip <= 0x7FFFFFFEFFFFLL )
        {
          if ( (Rsp & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Rsp = ContextRecord.Rsp;
        }
        v26 = *(_QWORD *)Rsp;
        Rsp += 8LL;
        ContextRecord.Rsp = Rsp;
        ContextRecord.Rip = v26;
      }
      v27 = ImageBase + (unsigned int)p_BeginAddress[2];
      if ( Rip <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v27 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      v5 = v89;
      if ( (int)Rip - *p_BeginAddress - (int)ImageBase >= (unsigned int)*(unsigned __int8 *)(v27 + 1)
        && (*(_BYTE *)v27 & 8) != 0 )
      {
        v28 = *(unsigned __int8 *)(v27 + 2);
        v29 = v28 + 1;
        if ( (v28 & 1) == 0 )
          v29 = *(unsigned __int8 *)(v27 + 2);
        v10 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v27 + 2LL * v29 + 4));
        HandlerData = (PVOID)(v27 + 2 * (v29 + 2 + 2LL));
        goto LABEL_46;
      }
LABEL_45:
      v10 = v93;
      goto LABEL_46;
    }
LABEL_105:
    if ( v59 != -1 || (v59 = -1, v58[1] != 37) )
    {
      if ( (v59 & 0xF8) == 0x48 && v58[1] == -1 )
      {
        v70 = (v58[2] & 0x38) == 32;
        goto LABEL_172;
      }
      goto LABEL_12;
    }
LABEL_173:
    v71 = (char *)Rip;
    if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
      goto LABEL_197;
    v72 = *(_BYTE *)(Rip + 1);
    switch ( v72 )
    {
      case -125:
        Rsp += *(char *)(Rip + 3);
        v71 = (char *)(Rip + 4);
        goto LABEL_196;
      case -127:
        Rsp += *(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
LABEL_193:
        v71 = (char *)(Rip + 7);
        goto LABEL_196;
      case -115:
        v78 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v78 == 96 )
        {
          ContextRecord.Rsp = *(&ContextRecord.Rax + v57);
          Rsp = ContextRecord.Rsp + *(char *)(Rip + 3);
          v71 = (char *)(Rip + 4);
          goto LABEL_196;
        }
        if ( v78 == -96 )
        {
          Rsp = *(&ContextRecord.Rax + v57)
              + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
          goto LABEL_193;
        }
        break;
    }
LABEL_197:
    while ( 2 )
    {
      v80 = *v71;
      if ( (*v71 & 0xF8) == 0x58 )
      {
        if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&ContextRecord.Rax + (v80 & 7)) = *(_QWORD *)Rsp;
        v79 = 1LL;
        goto LABEL_195;
      }
      if ( (v80 & 0xF0) == 0x40 )
      {
        v81 = v71[1];
        if ( (v81 & 0xF8) == 0x58 )
        {
          v82 = v81 & 7 | (8 * (v80 & 1u));
          if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(&ContextRecord.Rax + v82) = *(_QWORD *)Rsp;
          v79 = 2LL;
LABEL_195:
          Rsp = ContextRecord.Rsp + 8;
          v71 += v79;
LABEL_196:
          ContextRecord.Rsp = Rsp;
          continue;
        }
      }
      break;
    }
    if ( Rip <= 0x7FFFFFFEFFFFLL )
    {
      if ( (Rsp & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      Rsp = ContextRecord.Rsp;
    }
    v83 = *(_QWORD *)Rsp;
    Rsp += 8LL;
    ContextRecord.Rsp = Rsp;
    ContextRecord.Rip = v83;
LABEL_46:
    if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v99 || EstablisherFrame >= v98 )
    {
      v4 = v97;
      v5 |= 8u;
LABEL_240:
      v2 = 0;
LABEL_241:
      v4->ExceptionFlags = v5;
      return v2;
    }
    v4 = v97;
    p_HistoryTable = v96;
    if ( v10 )
      break;
LABEL_59:
    Rip = ContextRecord.Rip;
    if ( (unsigned __int8)RtlpIsFrameInBounds(&v99, Rsp, &v98) != 1 )
      goto LABEL_240;
  }
  v35 = 0;
  while ( 1 )
  {
    v36 = 0LL;
    v102 = ImageBase;
    v104 = EstablisherFrame;
    p_ContextRecord = &ContextRecord;
    v107 = HandlerData;
    v4->ExceptionFlags = v5;
    ControlPc = Rip;
    FunctionEntry = v9;
    v106 = v10;
    v108 = p_HistoryTable;
    v109 = v35;
    if ( v88 )
      v36 = RtlpLogExceptionHandler(v4, &ContextRecord, Rip, v10);
    v37 = RtlpExecuteHandlerForException(v4, EstablisherFrame, v100, &ControlPc);
    if ( v36 )
      *(_DWORD *)(v36 + 1396) = v37;
    v38 = v95;
    v5 |= v4->ExceptionFlags & 1;
    v89 = v5;
    if ( v95 == EstablisherFrame )
    {
      v5 &= ~0x10u;
      v38 = 0LL;
      v89 = v5;
      v95 = 0LL;
    }
    if ( v37 == 1 )
      goto LABEL_58;
    if ( !v37 )
      break;
    v54 = v37 - 2;
    if ( !v54 )
    {
      v5 |= 0x10u;
      v89 = v5;
      if ( v104 > v38 )
        v95 = v104;
LABEL_58:
      Rsp = ContextRecord.Rsp;
      goto LABEL_59;
    }
    if ( v54 != 1 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    v9 = FunctionEntry;
    ImageBase = v102;
    RtlpCopyContext((__int64)&ContextRecord, (__int64)p_ContextRecord);
    v10 = RtlVirtualUnwind(1u, v55, Rip, v9, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    if ( v10 != v106 || EstablisherFrame != v104 || HandlerData != v107 )
      __fastfail(0x27u);
    p_HistoryTable = v108;
    v35 = v109;
    v96 = v108;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}

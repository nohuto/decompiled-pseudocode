/*
 * XREFs of RtlDispatchException @ 0x140009410
 * Callers:
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x14023BBE0 (RtlRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x14000A7BC (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14000A970 (RtlLookupFunctionEntry.c)
 *     RtlpIsFrameInBounds @ 0x14000AC6C (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x14000B020 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x140039938 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x140039B28 (RtlpUnwindOpSlots.c)
 *     RtlpGetStackLimits @ 0x1400E77D0 (RtlpGetStackLimits.c)
 *     RtlpSameFunction @ 0x14015DB14 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpExecuteHandlerForException @ 0x140189E50 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x14023AB00 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x14023ACA0 (RtlpLogExceptionHandler.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

BOOLEAN __stdcall RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context)
{
  unsigned int v4; // esi
  DWORD64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rdi
  unsigned int v7; // r15d
  PRUNTIME_FUNCTION v8; // rax
  __int64 v9; // r8
  PRUNTIME_FUNCTION v10; // r13
  unsigned __int64 v11; // rbx
  PEXCEPTION_ROUTINE v12; // r10
  int v13; // r14d
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // edi
  unsigned __int64 Rsp; // r9
  unsigned int v18; // edx
  _DWORD *p_BeginAddress; // r15
  __int64 v20; // rbx
  unsigned int v21; // esi
  char v22; // r14
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // edx
  unsigned int v32; // edx
  unsigned __int64 v33; // rcx
  PEXCEPTION_RECORD v34; // r14
  int v35; // ecx
  __int64 v36; // rbx
  int v37; // edx
  unsigned __int64 v38; // rbx
  unsigned __int64 *v39; // rcx
  __int16 v40; // ax
  unsigned int v41; // r11d
  int v42; // r10d
  int v43; // r8d
  unsigned int v44; // r9d
  __int16 v45; // ax
  int v46; // edx
  int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // edx
  DWORD64 v51; // r10
  unsigned __int8 *v52; // rcx
  unsigned __int64 v53; // rdx
  char v54; // r8
  _BYTE *v55; // rcx
  unsigned int v56; // esi
  char v57; // dl
  char v59; // al
  int v60; // eax
  unsigned int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // rcx
  char v64; // dl
  __int64 v65; // rax
  bool v66; // zf
  _BYTE *v67; // rdx
  char v68; // al
  _BYTE *v69; // r8
  int v70; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v72; // rdi
  _DWORD *v73; // rax
  char v74; // al
  __int64 v75; // rax
  char v76; // r8
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r9
  __int64 v79; // rcx
  char v80; // [rsp+40h] [rbp-C0h]
  unsigned int v81; // [rsp+44h] [rbp-BCh]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v84; // [rsp+58h] [rbp-A8h]
  EXCEPTION_DISPOSITION (__cdecl *v85)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-A0h]
  PVOID HandlerData; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v87; // [rsp+70h] [rbp-90h]
  struct _UNWIND_HISTORY_TABLE *v88; // [rsp+78h] [rbp-88h]
  unsigned __int64 v89; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v90; // [rsp+88h] [rbp-78h] BYREF
  PEXCEPTION_RECORD v91; // [rsp+90h] [rbp-70h]
  PCONTEXT v92; // [rsp+98h] [rbp-68h]
  DWORD64 ControlPc; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v94; // [rsp+A8h] [rbp-58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *p_ContextRecord; // [rsp+C8h] [rbp-38h]
  EXCEPTION_DISPOSITION (__cdecl *v98)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+D0h] [rbp-30h]
  PVOID v99; // [rsp+D8h] [rbp-28h]
  struct _UNWIND_HISTORY_TABLE *v100; // [rsp+E0h] [rbp-20h]
  int v101; // [rsp+E8h] [rbp-18h]
  struct _CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5C0h] [rbp+4C0h] BYREF

  v92 = Context;
  v91 = ExceptionRecord;
  v80 = 0;
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v80 = 1;
    RtlpLogExceptionDispatch();
  }
  v4 = ExceptionRecord->ExceptionFlags & 1;
  v81 = v4;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v90, &v89) )
  {
    ExceptionRecord->ExceptionFlags = v4 | 8;
    return 0;
  }
  RtlpCopyContext(&ContextRecord, Context);
  Rip = Context->Rip;
  p_HistoryTable = &HistoryTable;
  v7 = 0;
  v88 = &HistoryTable;
  v87 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v8 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v10 = v8;
    if ( v8 )
      break;
    if ( Rip != *(_QWORD *)ContextRecord.Rsp )
    {
      Rsp = ContextRecord.Rsp + 8;
      ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
      ContextRecord.Rsp += 8LL;
LABEL_38:
      Rip = ContextRecord.Rip;
      if ( (unsigned __int8)RtlpIsFrameInBounds(&v90, Rsp, &v89) == 1 )
        continue;
    }
    goto LABEL_121;
  }
  v11 = ImageBase + v8->UnwindData;
  v12 = 0LL;
  v85 = 0LL;
  v13 = 0;
  if ( Rip <= 0x7FFFFFFEFFFFLL && (v11 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = *(_BYTE *)v11 & 7;
  if ( v14 < 2 )
  {
    v52 = (unsigned __int8 *)(v11 + 2);
    v53 = v11;
    v9 = 0LL;
    if ( !*(_BYTE *)(v11 + 2) )
    {
      while ( (*(_BYTE *)v53 & 0x20) != 0 )
      {
        v61 = *v52;
        v62 = v61 + 1;
        if ( (v61 & 1) == 0 )
          v62 = v61;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v53 = ImageBase + *(unsigned int *)(v53 + 2 * v62 + 12);
        if ( Rip <= 0x7FFFFFFEFFFFLL && (v53 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v52 = (unsigned __int8 *)(v53 + 2);
        if ( *(_BYTE *)(v53 + 2) )
          goto LABEL_8;
      }
      v13 = 1;
    }
  }
LABEL_8:
  v15 = *(unsigned __int8 *)(v11 + 3);
  v16 = Rip - v10->BeginAddress - ImageBase;
  if ( (v15 & 0xF) != 0 )
  {
    if ( v16 >= *(unsigned __int8 *)(v11 + 1) || (*(_BYTE *)v11 & 0x20) != 0 )
    {
      Rsp = ContextRecord.Rsp;
      v33 = *(&ContextRecord.Rax + (v15 & 0xF)) - ((unsigned __int8)v15 & 0xF0);
    }
    else
    {
      if ( *(_BYTE *)(v11 + 2) )
      {
        do
        {
          v63 = *(unsigned __int16 *)(v11 + 2LL * v7 + 4);
          if ( (BYTE1(v63) & 0xF) == 3 )
            break;
          v7 += RtlpUnwindOpSlots(v63, v15, v9);
        }
        while ( v7 < *(unsigned __int8 *)(v11 + 2) );
        v12 = v85;
      }
      Rsp = ContextRecord.Rsp;
      if ( v16 < *(unsigned __int8 *)(v11 + 2LL * v7 + 4) )
      {
        EstablisherFrame = ContextRecord.Rsp;
        v7 = 0;
        goto LABEL_10;
      }
      v33 = *(&ContextRecord.Rax + (*(_BYTE *)(v11 + 3) & 0xF)) - (*(_BYTE *)(v11 + 3) & 0xF0);
      v7 = 0;
    }
    EstablisherFrame = v33;
  }
  else
  {
    Rsp = ContextRecord.Rsp;
    EstablisherFrame = ContextRecord.Rsp;
  }
LABEL_10:
  if ( v13 )
    goto LABEL_11;
  if ( v14 >= 2 )
  {
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_11;
    v40 = *(_WORD *)(v11 + 4);
    if ( (HIBYTE(v40) & 0xF) == 6 )
    {
      v41 = (unsigned __int8)v40;
      v42 = Rip - ImageBase;
      if ( (v40 & 0x1000) == 0
        || (v43 = v10->EndAddress - (unsigned __int8)v40, v42 - v43 >= (unsigned int)(unsigned __int8)v40) )
      {
        v44 = 1;
        if ( *(_BYTE *)(v11 + 2) > 1u )
        {
          while ( 1 )
          {
            v45 = *(_WORD *)(v11 + 2LL * v44 + 4);
            if ( (HIBYTE(v45) & 0xF) != 6 )
              break;
            v46 = (unsigned __int8)v45 + (HIBYTE(v45) >> 4 << 8);
            if ( !v46 )
              break;
            v43 = v10->EndAddress - v46;
            if ( v42 - v43 < v41 )
              goto LABEL_119;
            if ( ++v44 >= *(unsigned __int8 *)(v11 + 2) )
            {
              Rsp = ContextRecord.Rsp;
              goto LABEL_11;
            }
          }
        }
        goto LABEL_73;
      }
LABEL_119:
      RtlpUnwindEpilogue(ImageBase, Rip, v42 - v43, (_DWORD)v10, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
      Rsp = ContextRecord.Rsp;
LABEL_33:
      v12 = v85;
      goto LABEL_34;
    }
    goto LABEL_73;
  }
  v54 = *(_BYTE *)Rip;
  v55 = (_BYTE *)Rip;
  v56 = 0;
  if ( *(_BYTE *)Rip == 72 )
  {
    v59 = *(_BYTE *)(Rip + 1);
    if ( v59 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v55 = (_BYTE *)(Rip + 4);
      goto LABEL_98;
    }
    if ( v59 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
      goto LABEL_166;
  }
  if ( (v54 & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
  {
    v56 = *(_BYTE *)(Rip + 2) & 7 | (8 * (v54 & 1));
    if ( v56 )
    {
      if ( v56 == (*(_BYTE *)(v11 + 3) & 0xF) )
      {
        v64 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v64 == 96 )
        {
          v55 = (_BYTE *)(Rip + 4);
          goto LABEL_98;
        }
        if ( v64 == -96 )
LABEL_166:
          v55 = (_BYTE *)(Rip + 7);
      }
    }
  }
LABEL_98:
  while ( (*v55 & 0xF8) == 0x58 )
  {
    v65 = 1LL;
LABEL_168:
    v55 += v65;
  }
  if ( (*v55 & 0xF0) == 0x40 && (v55[1] & 0xF8) == 0x58 )
  {
    v65 = 2LL;
    goto LABEL_168;
  }
  if ( *v55 == 0xF2 )
    ++v55;
  v57 = *v55;
  if ( (unsigned __int8)(*v55 + 62) <= 1u || v57 == -13 && v55[1] == 0xC3 )
    goto LABEL_174;
  if ( ((v57 + 23) & 0xFD) == 0 )
  {
    v69 = &v55[-ImageBase];
    if ( v57 == -21 )
      v70 = (char)v55[1] + 2;
    else
      v70 = *(_DWORD *)(v55 + 1) + 5;
    BeginAddress = v10->BeginAddress;
    v72 = (unsigned __int64)&v69[v70];
    if ( v72 >= BeginAddress && v72 < v10->EndAddress )
    {
      if ( v72 == BeginAddress )
      {
        v66 = (*(_BYTE *)v11 & 0x20) == 0;
LABEL_173:
        if ( v66 )
          goto LABEL_174;
      }
LABEL_11:
      v18 = 0;
      p_BeginAddress = &v10->BeginAddress;
      v84 = 0;
      while ( 1 )
      {
        v20 = 0LL;
        v21 = Rip - *p_BeginAddress - ImageBase;
        v22 = 0;
        v23 = ImageBase + (unsigned int)p_BeginAddress[2];
        if ( Rip <= 0x7FFFFFFEFFFFLL )
        {
          if ( (v23 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Rsp = ContextRecord.Rsp;
        }
        if ( *(_BYTE *)(v23 + 2) )
        {
          do
          {
            v24 = v23 + 2 * v20;
            v25 = *(unsigned __int8 *)(v24 + 5) >> 4;
            if ( v21 < *(unsigned __int8 *)(v24 + 4) )
            {
              v60 = RtlpUnwindOpSlots(*(unsigned __int16 *)(v24 + 4), v24, v25);
              Rsp = ContextRecord.Rsp;
              v20 = (unsigned int)(v60 + v20);
            }
            else
            {
              if ( (*(_BYTE *)(v23 + 2 * v20 + 5) & 0xF) != 0 )
              {
                if ( (*(_BYTE *)(v23 + 2 * v20 + 5) & 0xF) != 4 )
                {
                  switch ( *(_BYTE *)(v23 + 2 * v20 + 5) & 0xF )
                  {
                    case 1:
                      v20 = (unsigned int)(v20 + 1);
                      v31 = *(unsigned __int16 *)(v23 + 2 * v20 + 4);
                      if ( (_DWORD)v25 )
                      {
                        v20 = (unsigned int)(v20 + 1);
                        v32 = (*(unsigned __int16 *)(v23 + 2 * v20 + 4) << 16) + v31;
                      }
                      else
                      {
                        v32 = 8 * v31;
                      }
                      Rsp += v32;
                      goto LABEL_21;
                    case 2:
                      Rsp += (unsigned int)(8 * v25 + 8);
                      goto LABEL_21;
                    case 3:
                      ContextRecord.Rsp = *(&ContextRecord.Rax + (*(_BYTE *)(v23 + 3) & 0xF));
                      Rsp = ContextRecord.Rsp - (*(_BYTE *)(v23 + 3) & 0xF0);
                      goto LABEL_21;
                    case 5:
                      v20 = (unsigned int)(v20 + 2);
                      if ( Rip <= 0x7FFFFFFEFFFFLL
                        && (((_BYTE)EstablisherFrame
                           + (unsigned __int8)*(_WORD *)(v23 + 2LL * (unsigned int)(v20 - 1) + 4)) & 3) != 0 )
                      {
                        ExRaiseDatatypeMisalignment();
                      }
                      *(&ContextRecord.Rax + v25) = *(_QWORD *)(((unsigned __int64)*(unsigned __int16 *)(v23 + 2 * v20 + 4) << 16)
                                                              + EstablisherFrame
                                                              + *(unsigned __int16 *)(v23
                                                                                    + 2LL * (unsigned int)(v20 - 1)
                                                                                    + 4));
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_22;
                    case 6:
                      LODWORD(v20) = v20 + 1;
                      goto LABEL_22;
                    case 7:
                      LODWORD(v20) = v20 + 2;
                      goto LABEL_22;
                    case 8:
                      v20 = (unsigned int)(v20 + 1);
                      v29 = EstablisherFrame + 16LL * *(unsigned __int16 *)(v23 + 2 * v20 + 4);
                      if ( Rip <= 0x7FFFFFFEFFFFLL && (v29 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      v30 = (unsigned int)v25;
                      ContextRecord.VectorRegister[v30 - 22].Low = *(_QWORD *)v29;
                      ContextRecord.FltSave.XmmRegisters[v30].High = *(_QWORD *)(v29 + 8);
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_22;
                    case 9:
                      v20 = (unsigned int)(v20 + 2);
                      v78 = ((unsigned __int64)*(unsigned __int16 *)(v23 + 2 * v20 + 4) << 16)
                          + EstablisherFrame
                          + *(unsigned __int16 *)(v23 + 2LL * (unsigned int)(v20 - 1) + 4);
                      if ( Rip <= 0x7FFFFFFEFFFFLL
                        && (((_BYTE)EstablisherFrame
                           + (unsigned __int8)*(_WORD *)(v23 + 2LL * (unsigned int)(v20 - 1) + 4)) & 3) != 0 )
                      {
                        ExRaiseDatatypeMisalignment();
                      }
                      v79 = (unsigned int)v25;
                      ContextRecord.VectorRegister[v79 - 22].Low = *(_QWORD *)v78;
                      ContextRecord.FltSave.XmmRegisters[v79].High = *(_QWORD *)(v78 + 8);
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_22;
                    case 0xA:
                      v39 = (unsigned __int64 *)(Rsp + 24);
                      v22 = 1;
                      if ( (_DWORD)v25 )
                      {
                        Rsp += 8LL;
                        ++v39;
                      }
                      if ( Rip <= 0x7FFFFFFEFFFFLL )
                      {
                        if ( (Rsp & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                        if ( ((unsigned __int8)v39 & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                      }
                      ContextRecord.Rip = *(_QWORD *)Rsp;
                      Rsp = *v39;
                      goto LABEL_21;
                    default:
                      RtlRaiseStatus(-1073741569);
                  }
                }
                v20 = (unsigned int)(v20 + 1);
                v28 = (unsigned __int64 *)(EstablisherFrame + 8LL * *(unsigned __int16 *)(v23 + 2 * v20 + 4));
                if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v28 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&ContextRecord.Rax + v25) = *v28;
                Rsp = ContextRecord.Rsp;
              }
              else
              {
                if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&ContextRecord.Rax + v25) = *(_QWORD *)Rsp;
                Rsp = ContextRecord.Rsp + 8;
LABEL_21:
                ContextRecord.Rsp = Rsp;
              }
LABEL_22:
              v20 = (unsigned int)(v20 + 1);
            }
          }
          while ( (unsigned int)v20 < *(unsigned __int8 *)(v23 + 2) );
          v18 = v84;
        }
        if ( (*(_BYTE *)v23 & 0x20) == 0 )
          break;
        v49 = *(unsigned __int8 *)(v23 + 2);
        if ( (v49 & 1) != 0 )
          ++v49;
        p_BeginAddress = (_DWORD *)(v23 + 2 * (v49 + 2LL));
        if ( Rip <= 0x7FFFFFFEFFFFLL )
        {
          if ( ((unsigned __int8)p_BeginAddress & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Rsp = ContextRecord.Rsp;
        }
        v84 = ++v18;
        if ( v18 > 0x20 )
          RtlRaiseStatus(-1073741569);
      }
      if ( !v22 )
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
      if ( (int)Rip - *p_BeginAddress - (int)ImageBase >= (unsigned int)*(unsigned __int8 *)(v27 + 1)
        && (*(_BYTE *)v27 & 8) != 0 )
      {
        v47 = *(unsigned __int8 *)(v27 + 2);
        v48 = v47 + 1;
        if ( (v47 & 1) == 0 )
          v48 = *(unsigned __int8 *)(v27 + 2);
        v12 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v27 + 2LL * v48 + 4));
        HandlerData = (PVOID)(v27 + 2 * (v48 + 2 + 2LL));
        v7 = 0;
        goto LABEL_34;
      }
      v7 = 0;
      goto LABEL_33;
    }
    v73 = (_DWORD *)RtlpSameFunction(v10, ImageBase, v72 + ImageBase);
    if ( !v73 || v72 == *v73 )
    {
      Rsp = ContextRecord.Rsp;
      v12 = v85;
      goto LABEL_174;
    }
LABEL_73:
    Rsp = ContextRecord.Rsp;
    goto LABEL_11;
  }
  if ( v57 != -1 || v55[1] != 37 )
  {
    if ( (v57 & 0xF8) == 0x48 && v55[1] == 0xFF )
    {
      v66 = (v55[2] & 0x38) == 32;
      goto LABEL_173;
    }
    goto LABEL_11;
  }
LABEL_174:
  v67 = (_BYTE *)Rip;
  if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
    goto LABEL_198;
  v68 = *(_BYTE *)(Rip + 1);
  switch ( v68 )
  {
    case -125:
      v67 = (_BYTE *)(Rip + 4);
      Rsp += *(char *)(Rip + 3);
      goto LABEL_197;
    case -127:
      Rsp += *(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
LABEL_194:
      v67 = (_BYTE *)(Rip + 7);
      goto LABEL_197;
    case -115:
      v74 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v74 == 96 )
      {
        v67 = (_BYTE *)(Rip + 4);
        ContextRecord.Rsp = *(&ContextRecord.Rax + v56);
        Rsp = *(char *)(Rip + 3) + ContextRecord.Rsp;
        goto LABEL_197;
      }
      if ( v74 == -96 )
      {
        Rsp = *(&ContextRecord.Rax + v56)
            + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
        goto LABEL_194;
      }
      break;
  }
LABEL_198:
  while ( 2 )
  {
    if ( (*v67 & 0xF8) == 0x58 )
    {
      if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(&ContextRecord.Rax + (*v67 & 7)) = *(_QWORD *)Rsp;
      v75 = 1LL;
      goto LABEL_196;
    }
    if ( (*v67 & 0xF0) == 0x40 )
    {
      v76 = v67[1];
      if ( (v76 & 0xF8) == 0x58 )
      {
        if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&ContextRecord.Rax + (v76 & 7 | (8LL * (*v67 & 1)))) = *(_QWORD *)Rsp;
        v75 = 2LL;
LABEL_196:
        Rsp = ContextRecord.Rsp + 8;
        v67 += v75;
LABEL_197:
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
  v77 = *(_QWORD *)Rsp;
  Rsp += 8LL;
  ContextRecord.Rsp = Rsp;
  ContextRecord.Rip = v77;
LABEL_34:
  if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v90 || EstablisherFrame >= v89 )
  {
    v4 = v81 | 8;
LABEL_121:
    v91->ExceptionFlags = v4;
    return 0;
  }
  p_HistoryTable = v88;
  v4 = v81;
  if ( !v12 )
    goto LABEL_38;
  v34 = v91;
  v35 = 0;
  while ( 1 )
  {
    v36 = 0LL;
    v94 = ImageBase;
    v96 = EstablisherFrame;
    p_ContextRecord = &ContextRecord;
    v99 = HandlerData;
    v34->ExceptionFlags = v4;
    ControlPc = Rip;
    FunctionEntry = v10;
    v98 = v12;
    v100 = p_HistoryTable;
    v101 = v35;
    if ( v80 )
      v36 = RtlpLogExceptionHandler(v34, &ContextRecord, Rip, v12);
    v37 = RtlpExecuteHandlerForException(v34, EstablisherFrame, v92, &ControlPc);
    if ( v36 )
      *(_DWORD *)(v36 + 1396) = v37;
    v38 = v87;
    v4 |= v34->ExceptionFlags & 1;
    v81 = v4;
    if ( v87 == EstablisherFrame )
    {
      v4 &= ~0x10u;
      v38 = 0LL;
      v81 = v4;
      v87 = 0LL;
    }
    if ( v37 == 1 )
      goto LABEL_60;
    if ( !v37 )
      break;
    v50 = v37 - 2;
    if ( !v50 )
    {
      v4 |= 0x10u;
      v81 = v4;
      if ( v96 > v38 )
        v87 = v96;
LABEL_60:
      Rsp = ContextRecord.Rsp;
      goto LABEL_38;
    }
    if ( v50 != 1 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    v10 = FunctionEntry;
    ImageBase = v94;
    RtlpCopyContext(&ContextRecord, p_ContextRecord);
    v12 = RtlVirtualUnwind(1u, v51, Rip, v10, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    if ( v12 != v98 || EstablisherFrame != v96 || HandlerData != v99 )
      __fastfail(0x27u);
    p_HistoryTable = v100;
    v35 = v101;
    v88 = v100;
  }
  if ( (v4 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}

/*
 * XREFs of RtlDispatchException @ 0x1400D9210
 * Callers:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     RtlRaiseException @ 0x140251460 (RtlRaiseException.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1400D5980 (RtlLookupFunctionEntry.c)
 *     RtlpCopyContext @ 0x1400D66FC (RtlpCopyContext.c)
 *     RtlpGetStackLimits @ 0x1400D9050 (RtlpGetStackLimits.c)
 *     RtlpIsFrameInBounds @ 0x1400D9B68 (RtlpIsFrameInBounds.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x14012C5E0 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x14013011C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1401302CC (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x140149A60 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlpExecuteHandlerForException @ 0x140189B50 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x140250378 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x140250518 (RtlpLogExceptionHandler.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

BOOLEAN __stdcall RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context)
{
  PEXCEPTION_RECORD v3; // rsi
  int v4; // edi
  DWORD64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // r15
  PRUNTIME_FUNCTION v7; // rax
  PRUNTIME_FUNCTION v8; // r13
  PEXCEPTION_ROUTINE v9; // r10
  unsigned __int64 v10; // rbx
  int v11; // r14d
  unsigned int v12; // esi
  unsigned __int8 v13; // dl
  unsigned int v14; // edi
  unsigned __int64 Rsp; // r9
  unsigned int v16; // edx
  _DWORD *p_BeginAddress; // r14
  __int64 v18; // rbx
  unsigned int v19; // esi
  char v20; // r15
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edx
  unsigned int v30; // edx
  char v31; // cl
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
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
  unsigned __int64 *v46; // rcx
  int v47; // r8d
  unsigned __int8 *v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned int v50; // eax
  int v51; // edx
  DWORD64 v52; // r10
  char v53; // r8
  __int64 v54; // rsi
  _BYTE *v55; // rcx
  char v56; // dl
  char v57; // dl
  int v58; // eax
  char v59; // al
  int v60; // eax
  unsigned int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // r15
  __int64 v64; // rcx
  unsigned int v65; // ecx
  char v66; // dl
  __int64 v67; // rax
  bool v68; // zf
  char *v69; // rdx
  char v70; // al
  _BYTE *v71; // r8
  int v72; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v74; // rdi
  _DWORD *v75; // rax
  char v76; // al
  __int64 v77; // rax
  char v78; // cl
  char v79; // r8
  __int64 v80; // rcx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r9
  __int64 v83; // rcx
  BOOLEAN result; // al
  char v85; // [rsp+40h] [rbp-C0h]
  int v86; // [rsp+44h] [rbp-BCh]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNWIND_HISTORY_TABLE *v89; // [rsp+58h] [rbp-A8h]
  unsigned int v90; // [rsp+60h] [rbp-A0h]
  EXCEPTION_DISPOSITION (__cdecl *v91)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+68h] [rbp-98h]
  PVOID HandlerData; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v93; // [rsp+78h] [rbp-88h]
  PEXCEPTION_RECORD v94; // [rsp+80h] [rbp-80h]
  unsigned __int64 v95; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v96; // [rsp+90h] [rbp-70h] BYREF
  PCONTEXT v97; // [rsp+98h] [rbp-68h]
  DWORD64 ControlPc; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v99; // [rsp+A8h] [rbp-58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *p_ContextRecord; // [rsp+C8h] [rbp-38h]
  EXCEPTION_DISPOSITION (__cdecl *v103)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+D0h] [rbp-30h]
  PVOID v104; // [rsp+D8h] [rbp-28h]
  struct _UNWIND_HISTORY_TABLE *v105; // [rsp+E0h] [rbp-20h]
  int v106; // [rsp+E8h] [rbp-18h]
  struct _CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5C0h] [rbp+4C0h] BYREF

  v97 = Context;
  v3 = ExceptionRecord;
  v94 = ExceptionRecord;
  v85 = 0;
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v85 = 1;
    RtlpLogExceptionDispatch();
  }
  v4 = v3->ExceptionFlags & 1;
  v86 = v4;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v96, (__int64)&v95) )
    goto LABEL_238;
  RtlpCopyContext((__int64)&ContextRecord, (__int64)Context);
  Rip = Context->Rip;
  p_HistoryTable = &HistoryTable;
  v89 = &HistoryTable;
  v93 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v7 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v8 = v7;
    if ( v7 )
      break;
    if ( Rip != *(_QWORD *)ContextRecord.Rsp )
    {
      Rsp = ContextRecord.Rsp + 8;
      ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
      ContextRecord.Rsp += 8LL;
LABEL_52:
      Rip = ContextRecord.Rip;
      if ( (unsigned __int8)RtlpIsFrameInBounds(&v96, Rsp, &v95) == 1 )
        continue;
    }
    goto LABEL_239;
  }
  v9 = 0LL;
  v10 = ImageBase + v7->UnwindData;
  v11 = 0;
  v91 = 0LL;
  if ( Rip <= 0x7FFFFFFEFFFFLL && (v10 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = *(_BYTE *)v10 & 7;
  if ( v12 < 2 )
  {
    v47 = 0;
    v48 = (unsigned __int8 *)(v10 + 2);
    v49 = v10;
    if ( !*(_BYTE *)(v10 + 2) )
    {
      while ( (*(_BYTE *)v49 & 0x20) != 0 )
      {
        v61 = *v48;
        v62 = v61 + 1;
        if ( (v61 & 1) == 0 )
          v62 = v61;
        if ( (unsigned int)++v47 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v49 = ImageBase + *(unsigned int *)(v49 + 2 * v62 + 12);
        if ( Rip <= 0x7FFFFFFEFFFFLL && (v49 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v48 = (unsigned __int8 *)(v49 + 2);
        if ( *(_BYTE *)(v49 + 2) )
          goto LABEL_8;
      }
      v11 = 1;
    }
  }
LABEL_8:
  v13 = *(_BYTE *)(v10 + 3);
  v14 = Rip - v8->BeginAddress - ImageBase;
  if ( (v13 & 0xF) != 0 )
  {
    if ( v14 >= *(unsigned __int8 *)(v10 + 1) || (*(_BYTE *)v10 & 0x20) != 0 )
    {
      Rsp = ContextRecord.Rsp;
      v31 = *(_BYTE *)(v10 + 3);
      v32 = v13;
    }
    else
    {
      v63 = 0LL;
      if ( *(_BYTE *)(v10 + 2) )
      {
        do
        {
          v64 = *(unsigned __int16 *)(v10 + 2 * v63 + 4);
          if ( (BYTE1(v64) & 0xF) == 3 )
            break;
          v63 = (unsigned int)RtlpUnwindOpSlots(v64) + (unsigned int)v63;
        }
        while ( (unsigned int)v63 < *(unsigned __int8 *)(v10 + 2) );
        v9 = v91;
      }
      v65 = *(unsigned __int8 *)(v10 + 2 * v63 + 4);
      Rsp = ContextRecord.Rsp;
      p_HistoryTable = v89;
      if ( v14 < v65 )
        goto LABEL_10;
      v32 = *(unsigned __int8 *)(v10 + 3);
      v31 = *(_BYTE *)(v10 + 3);
    }
    EstablisherFrame = *(&ContextRecord.Rax + (v31 & 0xF)) - (v32 & 0xFFFFFFF0);
    goto LABEL_11;
  }
  Rsp = ContextRecord.Rsp;
LABEL_10:
  EstablisherFrame = Rsp;
LABEL_11:
  if ( v11 )
    goto LABEL_12;
  if ( v12 >= 2 )
  {
    if ( !*(_BYTE *)(v10 + 2) )
      goto LABEL_12;
    v39 = *(_WORD *)(v10 + 4);
    if ( (HIBYTE(v39) & 0xF) == 6 )
    {
      v40 = (unsigned __int8)v39;
      v41 = Rip - ImageBase;
      if ( (v39 & 0x1000) != 0 )
      {
        v42 = v8->EndAddress - (unsigned __int8)v39;
        if ( v41 - v42 < (unsigned int)(unsigned __int8)v39 )
        {
LABEL_128:
          RtlpUnwindEpilogue(ImageBase, Rip, v41 - v42, (_DWORD)v8, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
          Rsp = ContextRecord.Rsp;
          v9 = v91;
          goto LABEL_48;
        }
      }
      for ( i = 1; i < *(unsigned __int8 *)(v10 + 2); ++i )
      {
        v44 = *(_WORD *)(v10 + 2LL * i + 4);
        if ( (HIBYTE(v44) & 0xF) != 6 )
          break;
        v45 = (unsigned __int8)v44 + (HIBYTE(v44) >> 4 << 8);
        if ( !v45 )
          break;
        v42 = v8->EndAddress - v45;
        if ( v41 - v42 < v40 )
          goto LABEL_128;
      }
    }
    goto LABEL_71;
  }
  v53 = *(_BYTE *)Rip;
  v54 = 0LL;
  v55 = (_BYTE *)Rip;
  if ( *(_BYTE *)Rip == 72 )
  {
    v59 = *(_BYTE *)(Rip + 1);
    if ( v59 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v55 = (_BYTE *)(Rip + 4);
      goto LABEL_96;
    }
    if ( v59 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
      goto LABEL_156;
  }
  if ( (v53 & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
  {
    v58 = *(_BYTE *)(Rip + 2) & 7;
    v54 = v58 | (8 * (v53 & 1u));
    if ( v58 | (8 * (v53 & 1)) )
    {
      if ( (_DWORD)v54 == (*(_BYTE *)(v10 + 3) & 0xF) )
      {
        v66 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v66 == 96 )
        {
          v55 = (_BYTE *)(Rip + 4);
          goto LABEL_96;
        }
        if ( v66 == -96 )
LABEL_156:
          v55 = (_BYTE *)(Rip + 7);
      }
    }
  }
LABEL_96:
  while ( 1 )
  {
    v56 = *v55;
    if ( (*v55 & 0xF8) != 0x58 )
      break;
    v67 = 1LL;
LABEL_158:
    v55 += v67;
  }
  if ( (v56 & 0xF0) == 0x40 && (v55[1] & 0xF8) == 0x58 )
  {
    v67 = 2LL;
    goto LABEL_158;
  }
  if ( v56 == -14 )
    ++v55;
  v57 = *v55;
  if ( (unsigned __int8)(*v55 + 62) <= 1u )
    goto LABEL_164;
  if ( v57 == -13 )
  {
    if ( v55[1] != 0xC3 )
      goto LABEL_104;
    goto LABEL_164;
  }
  if ( ((v57 + 23) & 0xFD) != 0 )
  {
    if ( v57 != -1 || v55[1] != 37 )
    {
LABEL_104:
      if ( (v57 & 0xF8) == 0x48 && v55[1] == 0xFF )
      {
        v68 = (v55[2] & 0x38) == 32;
        goto LABEL_163;
      }
      goto LABEL_12;
    }
    goto LABEL_164;
  }
  v71 = &v55[-ImageBase];
  if ( v57 == -21 )
    v72 = (char)v55[1] + 2;
  else
    v72 = *(_DWORD *)(v55 + 1) + 5;
  BeginAddress = v8->BeginAddress;
  v74 = (unsigned __int64)&v71[v72];
  if ( v74 < BeginAddress || v74 >= v8->EndAddress )
  {
    v75 = (_DWORD *)RtlpSameFunction(v8, ImageBase, v74 + ImageBase);
    if ( !v75 || v74 == *v75 )
    {
      Rsp = ContextRecord.Rsp;
      v9 = v91;
      goto LABEL_164;
    }
LABEL_71:
    Rsp = ContextRecord.Rsp;
    goto LABEL_12;
  }
  if ( v74 != BeginAddress )
    goto LABEL_12;
  v68 = (*(_BYTE *)v10 & 0x20) == 0;
LABEL_163:
  if ( !v68 )
  {
LABEL_12:
    v16 = 0;
    p_BeginAddress = &v8->BeginAddress;
    v90 = 0;
    while ( 1 )
    {
      v18 = 0LL;
      v19 = Rip - *p_BeginAddress - ImageBase;
      v20 = 0;
      v21 = ImageBase + (unsigned int)p_BeginAddress[2];
      if ( Rip <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v21 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      if ( *(_BYTE *)(v21 + 2) )
      {
        do
        {
          v22 = v21 + 2 * v18;
          v23 = *(unsigned __int8 *)(v22 + 5) >> 4;
          if ( v19 < *(unsigned __int8 *)(v22 + 4) )
          {
            v60 = RtlpUnwindOpSlots(*(unsigned __int16 *)(v22 + 4));
            Rsp = ContextRecord.Rsp;
            v18 = (unsigned int)(v60 + v18);
          }
          else
          {
            if ( (*(_BYTE *)(v21 + 2 * v18 + 5) & 0xF) != 0 )
            {
              switch ( *(_BYTE *)(v21 + 2 * v18 + 5) & 0xF )
              {
                case 1:
                  v18 = (unsigned int)(v18 + 1);
                  v29 = *(unsigned __int16 *)(v21 + 2 * v18 + 4);
                  if ( (_DWORD)v23 )
                  {
                    v18 = (unsigned int)(v18 + 1);
                    v30 = (*(unsigned __int16 *)(v21 + 2 * v18 + 4) << 16) + v29;
                  }
                  else
                  {
                    v30 = 8 * v29;
                  }
                  Rsp += v30;
                  goto LABEL_22;
                case 2:
                  Rsp += (unsigned int)(8 * v23 + 8);
                  goto LABEL_22;
                case 3:
                  ContextRecord.Rsp = *(&ContextRecord.Rax + (*(_BYTE *)(v21 + 3) & 0xF));
                  Rsp = ContextRecord.Rsp - (*(_BYTE *)(v21 + 3) & 0xF0);
                  goto LABEL_22;
                case 4:
                  v18 = (unsigned int)(v18 + 1);
                  v24 = (unsigned __int64 *)(EstablisherFrame
                                           + 8 * (unsigned int)*(unsigned __int16 *)(v21 + 2 * v18 + 4));
                  if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v24 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  *(&ContextRecord.Rax + v23) = *v24;
                  Rsp = ContextRecord.Rsp;
                  goto LABEL_23;
                case 5:
                  v18 = (unsigned int)(v18 + 2);
                  if ( Rip <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v21 + 2LL * (unsigned int)(v18 - 1) + 4)) & 3) != 0 )
                  {
                    ExRaiseDatatypeMisalignment();
                  }
                  *(&ContextRecord.Rax + v23) = *(_QWORD *)(EstablisherFrame
                                                          + *(unsigned __int16 *)(v21 + 2LL * (unsigned int)(v18 - 1) + 4)
                                                          + (*(unsigned __int16 *)(v21 + 2 * v18 + 4) << 16));
                  Rsp = ContextRecord.Rsp;
                  goto LABEL_23;
                case 6:
                  LODWORD(v18) = v18 + 1;
                  goto LABEL_23;
                case 7:
                  LODWORD(v18) = v18 + 2;
                  goto LABEL_23;
                case 8:
                  v18 = (unsigned int)(v18 + 1);
                  v27 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v21 + 2 * v18 + 4);
                  if ( Rip <= 0x7FFFFFFEFFFFLL && (v27 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v28 = (unsigned int)v23;
                  ContextRecord.VectorRegister[v28 - 22].Low = *(_QWORD *)v27;
                  ContextRecord.FltSave.XmmRegisters[v28].High = *(_QWORD *)(v27 + 8);
                  Rsp = ContextRecord.Rsp;
                  goto LABEL_23;
                case 9:
                  v18 = (unsigned int)(v18 + 2);
                  v82 = EstablisherFrame
                      + *(unsigned __int16 *)(v21 + 2LL * (unsigned int)(v18 - 1) + 4)
                      + (*(unsigned __int16 *)(v21 + 2 * v18 + 4) << 16);
                  if ( Rip <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v21 + 2LL * (unsigned int)(v18 - 1) + 4)) & 3) != 0 )
                  {
                    ExRaiseDatatypeMisalignment();
                  }
                  v83 = (unsigned int)v23;
                  ContextRecord.VectorRegister[v83 - 22].Low = *(_QWORD *)v82;
                  ContextRecord.FltSave.XmmRegisters[v83].High = *(_QWORD *)(v82 + 8);
                  Rsp = ContextRecord.Rsp;
                  goto LABEL_23;
                case 0xA:
                  v46 = (unsigned __int64 *)(Rsp + 24);
                  v20 = 1;
                  if ( (_DWORD)v23 )
                  {
                    Rsp += 8LL;
                    ++v46;
                  }
                  if ( Rip <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (Rsp & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( ((unsigned __int8)v46 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                  }
                  ContextRecord.Rip = *(_QWORD *)Rsp;
                  Rsp = *v46;
                  goto LABEL_22;
                default:
                  RtlRaiseStatus(-1073741569);
              }
            }
            if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(&ContextRecord.Rax + v23) = *(_QWORD *)Rsp;
            Rsp = ContextRecord.Rsp + 8;
LABEL_22:
            ContextRecord.Rsp = Rsp;
LABEL_23:
            v18 = (unsigned int)(v18 + 1);
          }
        }
        while ( (unsigned int)v18 < *(unsigned __int8 *)(v21 + 2) );
        v16 = v90;
      }
      if ( (*(_BYTE *)v21 & 0x20) == 0 )
        break;
      v50 = *(unsigned __int8 *)(v21 + 2);
      if ( (v50 & 1) != 0 )
        ++v50;
      p_BeginAddress = (_DWORD *)(v21 + 2 * (v50 + 2LL));
      if ( Rip <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)p_BeginAddress & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      v90 = ++v16;
      if ( v16 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !v20 )
    {
      if ( Rip <= 0x7FFFFFFEFFFFLL )
      {
        if ( (Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      v25 = *(_QWORD *)Rsp;
      Rsp += 8LL;
      ContextRecord.Rsp = Rsp;
      ContextRecord.Rip = v25;
    }
    v26 = ImageBase + (unsigned int)p_BeginAddress[2];
    if ( Rip <= 0x7FFFFFFEFFFFLL )
    {
      if ( (v26 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      Rsp = ContextRecord.Rsp;
    }
    p_HistoryTable = v89;
    if ( (int)Rip - *p_BeginAddress - (int)ImageBase >= (unsigned int)*(unsigned __int8 *)(v26 + 1)
      && (*(_BYTE *)v26 & 8) != 0 )
    {
      v33 = *(unsigned __int8 *)(v26 + 2);
      v34 = v33 + 1;
      if ( (v33 & 1) == 0 )
        v34 = *(unsigned __int8 *)(v26 + 2);
      v9 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v26 + 2LL * v34 + 4));
      HandlerData = (PVOID)(v26 + 2 * (v34 + 2 + 2LL));
    }
    else
    {
      v9 = v91;
    }
    goto LABEL_48;
  }
LABEL_164:
  v69 = (char *)Rip;
  if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
    goto LABEL_188;
  v70 = *(_BYTE *)(Rip + 1);
  switch ( v70 )
  {
    case -125:
      v69 = (char *)(Rip + 4);
      Rsp += *(char *)(Rip + 3);
      goto LABEL_187;
    case -127:
      Rsp += *(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
LABEL_184:
      v69 = (char *)(Rip + 7);
      goto LABEL_187;
    case -115:
      v76 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v76 == 96 )
      {
        v69 = (char *)(Rip + 4);
        ContextRecord.Rsp = *(&ContextRecord.Rax + v54);
        Rsp = *(char *)(Rip + 3) + ContextRecord.Rsp;
        goto LABEL_187;
      }
      if ( v76 == -96 )
      {
        Rsp = *(&ContextRecord.Rax + v54)
            + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
        goto LABEL_184;
      }
      break;
  }
LABEL_188:
  while ( 2 )
  {
    v78 = *v69;
    if ( (*v69 & 0xF8) == 0x58 )
    {
      if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(&ContextRecord.Rax + (v78 & 7)) = *(_QWORD *)Rsp;
      v77 = 1LL;
      goto LABEL_186;
    }
    if ( (v78 & 0xF0) == 0x40 )
    {
      v79 = v69[1];
      if ( (v79 & 0xF8) == 0x58 )
      {
        v80 = v79 & 7 | (8 * (v78 & 1u));
        if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&ContextRecord.Rax + v80) = *(_QWORD *)Rsp;
        v77 = 2LL;
LABEL_186:
        Rsp = ContextRecord.Rsp + 8;
        v69 += v77;
LABEL_187:
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
  v81 = *(_QWORD *)Rsp;
  Rsp += 8LL;
  ContextRecord.Rsp = Rsp;
  ContextRecord.Rip = v81;
LABEL_48:
  if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v96 || EstablisherFrame >= v95 )
  {
    v4 = v86;
    v3 = v94;
LABEL_238:
    v4 |= 8u;
LABEL_239:
    result = 0;
    v3->ExceptionFlags = v4;
    return result;
  }
  v4 = v86;
  v3 = v94;
  if ( !v9 )
    goto LABEL_52;
  v35 = 0;
  while ( 1 )
  {
    v36 = 0LL;
    v99 = ImageBase;
    v101 = EstablisherFrame;
    p_ContextRecord = &ContextRecord;
    v104 = HandlerData;
    v3->ExceptionFlags = v4;
    ControlPc = Rip;
    FunctionEntry = v8;
    v103 = v9;
    v105 = p_HistoryTable;
    v106 = v35;
    if ( v85 )
      v36 = RtlpLogExceptionHandler(v3, &ContextRecord, Rip, v9);
    v37 = RtlpExecuteHandlerForException(v3, EstablisherFrame, v97, &ControlPc);
    if ( v36 )
      *(_DWORD *)(v36 + 1396) = v37;
    v38 = v93;
    v4 |= v3->ExceptionFlags & 1;
    v86 = v4;
    if ( v93 == EstablisherFrame )
    {
      v4 &= ~0x10u;
      v38 = 0LL;
      v86 = v4;
      v93 = 0LL;
    }
    if ( v37 == 1 )
      goto LABEL_62;
    if ( !v37 )
      break;
    v51 = v37 - 2;
    if ( !v51 )
    {
      v4 |= 0x10u;
      v86 = v4;
      if ( v101 > v38 )
        v93 = v101;
LABEL_62:
      Rsp = ContextRecord.Rsp;
      goto LABEL_52;
    }
    if ( v51 != 1 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    v8 = FunctionEntry;
    ImageBase = v99;
    RtlpCopyContext((__int64)&ContextRecord, (__int64)p_ContextRecord);
    v9 = RtlVirtualUnwind(1u, v52, Rip, v8, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    if ( v9 != v103 || EstablisherFrame != v101 || HandlerData != v104 )
      __fastfail(0x27u);
    p_HistoryTable = v105;
    v35 = v106;
    v89 = v105;
  }
  if ( (v4 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}

/*
 * XREFs of RtlVirtualUnwind @ 0x18002A090
 * Callers:
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180090CD0 (__report_gsfailure.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlpSameFunction @ 0x18007C774 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088B08 (RtlpUnwindOpSlots.c)
 *     RtlpUnwindEpilogue @ 0x18009F9C0 (RtlpUnwindEpilogue.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v8)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rsi
  ULONG64 v9; // rbp
  PRUNTIME_FUNCTION v10; // r14
  ULONG64 v11; // rdi
  ULONG64 v12; // r11
  int v14; // r13d
  unsigned int v15; // r15d
  unsigned int v16; // ebx
  PCONTEXT v17; // rbx
  PULONG64 v18; // r12
  int v19; // edx
  _BYTE *v20; // rdx
  unsigned int v21; // r15d
  _BYTE *v22; // rcx
  char v23; // dl
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v24; // r8
  unsigned __int64 v25; // r11
  unsigned int v26; // edx
  ULONG64 v27; // r10
  int v28; // r12d
  __int64 v29; // r9
  _BYTE *v30; // r14
  __int64 v31; // rbp
  char v32; // r13
  __int64 v33; // r8
  unsigned int v34; // ecx
  unsigned __int64 *v35; // rdx
  DWORD64 v36; // rcx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned __int64 *v41; // rdx
  _BYTE *v42; // rcx
  _BYTE *v43; // rax
  __int64 v44; // rax
  _BYTE *v45; // r9
  int v46; // ecx
  int v47; // eax
  int v48; // edx
  unsigned int v49; // edx
  __int64 v50; // rax
  bool v51; // zf
  char v52; // al
  DWORD64 v53; // rcx
  char v54; // cl
  char v55; // al
  unsigned __int64 v56; // rcx
  DWORD64 v57; // rcx
  int v58; // eax
  unsigned __int64 v59; // r14
  unsigned __int64 BeginAddress; // rcx
  unsigned int v61; // ecx
  __int16 v62; // cx
  unsigned int v63; // r10d
  int v64; // r8d
  DWORD v65; // ecx
  unsigned int v66; // r11d
  unsigned int v67; // r9d
  __int16 v68; // dx
  unsigned int v69; // ecx
  unsigned int v70; // ecx
  __int64 v71; // rcx
  struct _M128A *v72; // rdx
  int v73; // ecx
  __int64 v74; // r8
  unsigned int *v75; // rax
  unsigned int v76; // ecx
  DWORD64 *v77; // rax
  DWORD64 *v78; // rcx
  unsigned __int64 *Rsp; // r8
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned __int64 *v82; // r8
  unsigned __int64 v83; // rcx
  int v84; // eax
  unsigned int v85; // r14d
  __int64 v86; // rcx
  __int64 v87; // rax
  bool v88; // cf
  char v89; // al
  DWORD64 v90; // rcx
  unsigned __int64 *v91; // rcx
  __int64 v92; // rcx
  struct _M128A *v93; // r9
  unsigned int v94; // [rsp+40h] [rbp-48h]
  DWORD v95; // [rsp+44h] [rbp-44h]
  unsigned __int64 v96; // [rsp+48h] [rbp-40h]
  ULONG v97; // [rsp+90h] [rbp+8h]
  ULONG64 v98; // [rsp+98h] [rbp+10h]
  PRUNTIME_FUNCTION v99; // [rsp+A8h] [rbp+20h]

  v99 = FunctionEntry;
  v98 = ImageBase;
  v8 = 0LL;
  v9 = ImageBase + FunctionEntry->UnwindInfoAddress;
  v10 = FunctionEntry;
  v11 = ControlPc;
  v12 = ImageBase;
  v14 = 0;
  v15 = *(_BYTE *)v9 & 7;
  if ( v15 < 2 )
  {
    v42 = (_BYTE *)(ImageBase + FunctionEntry->UnwindInfoAddress);
    v43 = (_BYTE *)(v9 + 2);
    ImageBase = 0LL;
    while ( !*v43 )
    {
      if ( (*v42 & 0x20) == 0 )
      {
        v14 = 1;
        break;
      }
      FunctionEntry = (PRUNTIME_FUNCTION)(unsigned __int8)*v43;
      ImageBase = (unsigned int)(ImageBase + 1);
      ControlPc = *v43 & 1;
      if ( (unsigned int)ImageBase > 0x20 )
        RtlRaiseStatus(-1073741569);
      v44 = (unsigned int)((_DWORD)FunctionEntry + 1);
      if ( !(_DWORD)ControlPc )
        v44 = (unsigned int)FunctionEntry;
      v42 = (_BYTE *)(v12 + *(unsigned int *)&v42[2 * v44 + 12]);
      v43 = v42 + 2;
    }
  }
  v97 = HandlerType & 0x7FFFFFFF;
  v16 = v11 - v12 - v10->BeginAddress;
  if ( (*(_BYTE *)(v9 + 3) & 0xF) == 0 )
  {
    v17 = ContextRecord;
    v18 = EstablisherFrame;
LABEL_4:
    *v18 = v17->Rsp;
    goto LABEL_5;
  }
  if ( v16 >= *(unsigned __int8 *)(v9 + 1) || (*(_BYTE *)v9 & 0x20) != 0 )
  {
    v17 = ContextRecord;
    v18 = EstablisherFrame;
  }
  else
  {
    v85 = 0;
    if ( *(_BYTE *)(v9 + 2) )
    {
      do
      {
        v86 = *(unsigned __int16 *)(v9 + 2LL * v85 + 4);
        if ( (BYTE1(v86) & 0xF) == 3 )
          break;
        v85 += RtlpUnwindOpSlots(v86, ImageBase, ControlPc, FunctionEntry);
      }
      while ( v85 < *(unsigned __int8 *)(v9 + 2) );
      v12 = v98;
    }
    v18 = EstablisherFrame;
    v87 = v85;
    v10 = v99;
    v88 = v16 < *(unsigned __int8 *)(v9 + 2 * v87 + 4);
    v17 = ContextRecord;
    if ( v88 )
      goto LABEL_4;
  }
  v56 = *(&v17->Rax + (*(_BYTE *)(v9 + 3) & 0xF));
  *v18 = v56;
  *v18 = v56 - (*(_BYTE *)(v9 + 3) & 0xF0);
LABEL_5:
  if ( v14 )
    goto LABEL_18;
  v19 = 0;
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v9 + 2) )
    {
      v62 = HIBYTE(*(_WORD *)(v9 + 4));
      if ( (v62 & 0xF) == 6 )
      {
        v63 = *(unsigned __int8 *)(v9 + 4);
        v64 = v11 - v12;
        if ( (v62 & 0x10) != 0 )
        {
          v65 = v10->EndAddress - v63;
          LOBYTE(v19) = v64 - v65 < v63;
        }
        else
        {
          v65 = 0;
        }
        if ( !v19 )
        {
          v66 = *(unsigned __int8 *)(v9 + 2);
          v67 = 1;
          if ( v66 <= 1 )
            goto LABEL_18;
          while ( 1 )
          {
            v68 = HIBYTE(*(_WORD *)(v9 + 2LL * v67 + 4));
            if ( (v68 & 0xF) != 6 )
              goto LABEL_18;
            v19 = *(unsigned __int8 *)(v9 + 2LL * v67 + 4) + ((unsigned __int8)v68 >> 4 << 8);
            if ( !v19 )
              goto LABEL_18;
            v65 = v10->EndAddress - v19;
            if ( v64 - v65 < v63 )
              break;
            if ( ++v67 >= v66 )
              goto LABEL_18;
          }
          LODWORD(v12) = v98;
        }
        RtlpUnwindEpilogue(v12, v19, v64 - v65, (_DWORD)v10, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
        return v8;
      }
    }
    goto LABEL_18;
  }
  v20 = (_BYTE *)v11;
  v21 = 0;
  if ( *(_BYTE *)v11 == 72 )
  {
    v55 = *(_BYTE *)(v11 + 1);
    if ( v55 == -125 && *(_BYTE *)(v11 + 2) == 0xC4 )
      goto LABEL_113;
    if ( v55 == -127 && *(_BYTE *)(v11 + 2) == 0xC4 )
    {
LABEL_79:
      v20 = (_BYTE *)(v11 + 7);
      goto LABEL_9;
    }
  }
  if ( (*(_BYTE *)v11 & 0xFE) == 0x48 && *(_BYTE *)(v11 + 1) == 0x8D )
  {
    v21 = *(_BYTE *)(v11 + 2) & 7 | (8 * (*(_BYTE *)v11 & 1));
    if ( v21 )
    {
      if ( v21 == (*(_BYTE *)(v9 + 3) & 0xF) )
      {
        v54 = *(_BYTE *)(v11 + 2) & 0xF8;
        if ( v54 != 96 )
        {
          if ( v54 != -96 )
            goto LABEL_9;
          goto LABEL_79;
        }
LABEL_113:
        v20 = (_BYTE *)(v11 + 4);
      }
    }
  }
LABEL_9:
  while ( (*v20 & 0xF8) == 0x58 )
  {
    v50 = 1LL;
LABEL_124:
    v20 += v50;
  }
  if ( (*v20 & 0xF0) == 0x40 && (v20[1] & 0xF8) == 0x58 )
  {
    v50 = 2LL;
    goto LABEL_124;
  }
  v22 = v20 + 1;
  if ( *v20 != 0xF2 )
    v22 = v20;
  v23 = *v22;
  if ( (unsigned __int8)(*v22 + 62) <= 1u || v23 == -13 && v22[1] == 0xC3 )
  {
LABEL_63:
    if ( (*(_BYTE *)v11 & 0xF8) != 0x48 )
      goto LABEL_67;
    v52 = *(_BYTE *)(v11 + 1);
    switch ( v52 )
    {
      case -125:
        v17->Rsp += *(char *)(v11 + 3);
LABEL_66:
        v11 += 4LL;
        goto LABEL_67;
      case -127:
        v17->Rsp += *(unsigned __int8 *)(v11 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v11 + 4) | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8);
        break;
      case -115:
        v89 = *(_BYTE *)(v11 + 2) & 0xF8;
        if ( v89 == 96 )
        {
          v90 = *(&v17->Rax + v21);
          v17->Rsp = v90;
          v17->Rsp = v90 + *(char *)(v11 + 3);
          goto LABEL_66;
        }
        if ( v89 != -96 )
        {
          while ( 1 )
          {
LABEL_67:
            if ( (*(_BYTE *)v11 & 0xF8) == 0x58 )
            {
              Rsp = (unsigned __int64 *)v17->Rsp;
              v80 = *(_BYTE *)v11 & 7;
              *(&v17->Rax + v80) = *Rsp;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v80] = Rsp;
              v81 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)v11 & 0xF0) != 0x40 || (*(_BYTE *)(v11 + 1) & 0xF8) != 0x58 )
              {
                v53 = *(_QWORD *)v17->Rsp;
                v17->Rsp += 8LL;
                v17->Rip = v53;
                return v8;
              }
              v82 = (unsigned __int64 *)v17->Rsp;
              v83 = *(_BYTE *)(v11 + 1) & 7 | (unsigned __int64)(8 * (*(_BYTE *)v11 & 1u));
              *(&v17->Rax + v83) = *v82;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v83] = v82;
              v81 = 2LL;
            }
            v17->Rsp += 8LL;
            v11 += v81;
          }
        }
        v17->Rsp = *(&v17->Rax + v21)
                 + (*(unsigned __int8 *)(v11 + 3) | ((*(unsigned __int8 *)(v11 + 4) | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_67;
    }
    v11 += 7LL;
    goto LABEL_67;
  }
  if ( ((v23 + 23) & 0xFD) != 0 )
  {
    if ( v23 == -1 && v22[1] == 37 )
      goto LABEL_63;
    if ( (v23 & 0xF8) == 0x48 && v22[1] == 0xFF )
    {
      v51 = (v22[2] & 0x38) == 32;
      goto LABEL_62;
    }
    goto LABEL_18;
  }
  if ( v23 == -21 )
    v58 = (char)v22[1] + 2;
  else
    v58 = *(_DWORD *)(v22 + 1) + 5;
  v59 = (unsigned __int64)&v22[v58 - v12];
  v24 = v99;
  BeginAddress = v99->BeginAddress;
  if ( v59 < BeginAddress || v59 >= v99->EndAddress )
  {
    v75 = (unsigned int *)RtlpSameFunction(v99, v12, v59 + v12);
    if ( !v75 )
      goto LABEL_63;
    v51 = v59 == *v75;
LABEL_62:
    if ( v51 )
      goto LABEL_63;
LABEL_18:
    v24 = v99;
    goto LABEL_19;
  }
  if ( v59 == BeginAddress && (*(_BYTE *)v9 & 0x20) == 0 )
    goto LABEL_63;
LABEL_19:
  v25 = *v18;
  v26 = 0;
  v27 = v98;
  v28 = v11 - v98;
  v96 = v25;
  v94 = 0;
  while ( 1 )
  {
    v29 = v28 - v24->BeginAddress;
    v30 = (_BYTE *)(v27 + v24->UnwindInfoAddress);
    LODWORD(v31) = 0;
    v95 = v28 - v24->BeginAddress;
    v32 = 0;
    if ( v30[2] )
    {
      do
      {
        v33 = (unsigned __int8)v30[2 * (unsigned int)v31 + 5] >> 4;
        if ( (unsigned int)v29 < (unsigned __int8)v30[2 * (unsigned int)v31 + 4] )
        {
          v84 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v30[2 * (unsigned int)v31 + 4], (unsigned int)v31, v33, v29);
          v25 = v96;
          LODWORD(v31) = v84 + v31;
        }
        else
        {
          v34 = v30[2 * (unsigned int)v31 + 5] & 0xF;
          if ( v34 > 5 )
          {
            v61 = v34 - 6;
            if ( v61 )
            {
              v69 = v61 - 1;
              if ( v69 )
              {
                v70 = v69 - 1;
                if ( v70 )
                {
                  v76 = v70 - 1;
                  if ( v76 )
                  {
                    if ( v76 != 1 )
LABEL_164:
                      RtlRaiseStatus(-1073741569);
                    v77 = (DWORD64 *)v17->Rsp;
                    v32 = 1;
                    v78 = v77 + 3;
                    if ( (_DWORD)v33 )
                    {
                      ++v77;
                      ++v78;
                    }
                    v17->Rip = *v77;
                    v17->Rsp = *v78;
                  }
                  else
                  {
                    v31 = (unsigned int)(v31 + 2);
                    v92 = (unsigned int)v33;
                    v93 = (struct _M128A *)(v25
                                          + *(unsigned __int16 *)&v30[2 * (unsigned int)(v31 - 1) + 4]
                                          + (*(unsigned __int16 *)&v30[2 * v31 + 4] << 16));
                    v17->FltSave.XmmRegisters[v92].Low = v93->Low;
                    v17->FltSave.XmmRegisters[v92].High = v93->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v33] = v93;
                  }
                }
                else
                {
                  v31 = (unsigned int)(v31 + 1);
                  v71 = (unsigned int)v33;
                  v72 = (struct _M128A *)(v25 + 16 * (unsigned int)*(unsigned __int16 *)&v30[2 * v31 + 4]);
                  v17->FltSave.XmmRegisters[v71].Low = v72->Low;
                  v17->FltSave.XmmRegisters[v71].High = v72->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v33] = v72;
                }
              }
              else
              {
                LODWORD(v31) = v31 + 2;
              }
            }
            else
            {
              LODWORD(v31) = v31 + 1;
            }
          }
          else if ( v34 == 5 )
          {
            v31 = (unsigned int)(v31 + 2);
            v91 = (unsigned __int64 *)(v25
                                     + (*(unsigned __int16 *)&v30[2 * v31 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v30[2 * (unsigned int)(v31 - 1) + 4]);
            *(&v17->Rax + v33) = *v91;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v33] = v91;
          }
          else if ( (v30[2 * (unsigned int)v31 + 5] & 0xF) != 0 )
          {
            v38 = v34 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v39 )
              {
                v40 = v39 - 1;
                if ( v40 )
                {
                  if ( v40 != 1 )
                    goto LABEL_164;
                  v31 = (unsigned int)(v31 + 1);
                  v41 = (unsigned __int64 *)(v25 + 8 * (unsigned int)*(unsigned __int16 *)&v30[2 * v31 + 4]);
                  *(&v17->Rax + v33) = *v41;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v33] = v41;
                }
                else
                {
                  v57 = *(&v17->Rax + (v30[3] & 0xF));
                  v17->Rsp = v57;
                  v17->Rsp = v57 - (v30[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v33 + 8);
              }
            }
            else
            {
              v31 = (unsigned int)(v31 + 1);
              v48 = *(unsigned __int16 *)&v30[2 * v31 + 4];
              if ( (_DWORD)v33 )
              {
                v31 = (unsigned int)(v31 + 1);
                v49 = (*(unsigned __int16 *)&v30[2 * v31 + 4] << 16) + v48;
              }
              else
              {
                v49 = 8 * v48;
              }
              v17->Rsp += v49;
            }
          }
          else
          {
            v35 = (unsigned __int64 *)v17->Rsp;
            *(&v17->Rax + v33) = *v35;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v33] = v35;
            v17->Rsp += 8LL;
          }
          LODWORD(v31) = v31 + 1;
        }
        v29 = v95;
      }
      while ( (unsigned int)v31 < (unsigned __int8)v30[2] );
      v26 = v94;
      v27 = v98;
      v24 = v99;
    }
    if ( (*v30 & 0x20) == 0 )
      break;
    v73 = (unsigned __int8)v30[2];
    v74 = (unsigned int)(v73 + 1);
    if ( (v73 & 1) == 0 )
      v74 = (unsigned __int8)v30[2];
    v94 = ++v26;
    v24 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v30[2 * v74 + 4];
    v99 = v24;
    if ( v26 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !v32 )
  {
    v36 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v36;
  }
  if ( v97 )
  {
    v45 = (_BYTE *)(v27 + v24->UnwindInfoAddress);
    if ( (int)v11 - (int)v27 - v24->BeginAddress >= (unsigned __int8)v45[1] && ((*v45 >> 3) & (unsigned __int8)v97) != 0 )
    {
      v46 = (unsigned __int8)v45[2];
      v47 = v46 + 1;
      if ( (v46 & 1) == 0 )
        v47 = (unsigned __int8)v45[2];
      *HandlerData = &v45[2 * (v47 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v27 + *(unsigned int *)&v45[2 * v47 + 4]);
    }
  }
  return v8;
}

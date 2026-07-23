/*
 * XREFs of RtlVirtualUnwind @ 0x1800377A0
 * Callers:
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     __report_gsfailure @ 0x180095EF0 (__report_gsfailure.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180089A50 @ 0x180089A50 (sub_180089A50.c)
 *     sub_18008DF80 @ 0x18008DF80 (sub_18008DF80.c)
 *     sub_1800A4C00 @ 0x1800A4C00 (sub_1800A4C00.c)
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
  _BYTE *v16; // rcx
  _BYTE *v17; // rax
  unsigned int v18; // ebx
  PCONTEXT v19; // rbx
  PULONG64 v20; // r12
  int v21; // edx
  _BYTE *v22; // rcx
  unsigned int v23; // r15d
  _BYTE *v24; // rdx
  char v25; // cl
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v26; // r8
  unsigned __int64 v27; // r10
  unsigned int v28; // edx
  ULONG64 v29; // r11
  int v30; // r13d
  __int64 v31; // r9
  _BYTE *v32; // r14
  __int64 v33; // rbp
  char v34; // r12
  __int64 v35; // r8
  unsigned int v36; // ecx
  unsigned __int64 *v37; // rcx
  DWORD64 v38; // rcx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned __int64 *v43; // rdx
  _BYTE *v44; // r9
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  unsigned int v48; // edx
  unsigned __int64 v49; // rcx
  DWORD64 v50; // rcx
  int v51; // eax
  unsigned __int64 v52; // r14
  unsigned __int64 BeginAddress; // rcx
  __int64 v54; // rax
  bool v55; // zf
  char v56; // al
  DWORD64 v57; // rcx
  char v58; // dl
  char v59; // al
  unsigned int v60; // ecx
  __int16 v61; // cx
  unsigned int v62; // r10d
  int v63; // r8d
  DWORD v64; // ecx
  unsigned int v65; // r11d
  unsigned int v66; // r9d
  __int16 v67; // dx
  int v68; // ecx
  __int64 v69; // r8
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  __int64 v72; // rcx
  struct _M128A *v73; // rdx
  __int64 v74; // rax
  unsigned int v75; // ecx
  DWORD64 *v76; // rax
  DWORD64 *v77; // rcx
  unsigned __int64 *Rsp; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  unsigned __int64 *v81; // r8
  __int64 v82; // rcx
  unsigned int *v83; // rax
  int v84; // eax
  unsigned int v85; // r14d
  __int64 v86; // rcx
  __int64 v87; // rax
  bool v88; // cf
  char v89; // al
  DWORD64 v90; // rcx
  unsigned __int64 *v91; // r9
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
    v16 = (_BYTE *)(ImageBase + FunctionEntry->UnwindInfoAddress);
    v17 = (_BYTE *)(v9 + 2);
    ImageBase = 0LL;
    while ( !*v17 )
    {
      if ( (*v16 & 0x20) == 0 )
      {
        v14 = 1;
        break;
      }
      FunctionEntry = (PRUNTIME_FUNCTION)(unsigned __int8)*v17;
      ImageBase = (unsigned int)(ImageBase + 1);
      ControlPc = *v17 & 1;
      if ( (unsigned int)ImageBase > 0x20 )
        RtlRaiseStatus(-1073741569);
      v74 = (unsigned int)((_DWORD)FunctionEntry + 1);
      if ( !(_DWORD)ControlPc )
        v74 = (unsigned int)FunctionEntry;
      v16 = (_BYTE *)(v12 + *(unsigned int *)&v16[2 * v74 + 12]);
      v17 = v16 + 2;
    }
  }
  v97 = HandlerType & 0x7FFFFFFF;
  v18 = v11 - v10->BeginAddress - v12;
  if ( (*(_BYTE *)(v9 + 3) & 0xF) == 0 )
  {
    v19 = ContextRecord;
    v20 = EstablisherFrame;
LABEL_6:
    *v20 = v19->Rsp;
    goto LABEL_7;
  }
  if ( v18 >= *(unsigned __int8 *)(v9 + 1) || (*(_BYTE *)v9 & 0x20) != 0 )
  {
    v19 = ContextRecord;
    v20 = EstablisherFrame;
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
        v85 += sub_180089A50(v86, ImageBase, ControlPc, FunctionEntry);
      }
      while ( v85 < *(unsigned __int8 *)(v9 + 2) );
      v12 = v98;
    }
    v20 = EstablisherFrame;
    v87 = v85;
    v10 = v99;
    v88 = v18 < *(unsigned __int8 *)(v9 + 2 * v87 + 4);
    v19 = ContextRecord;
    if ( v88 )
      goto LABEL_6;
  }
  v49 = *(&v19->Rax + (*(_BYTE *)(v9 + 3) & 0xF));
  *v20 = v49;
  *v20 = v49 - (*(_BYTE *)(v9 + 3) & 0xF0);
LABEL_7:
  if ( v14 )
    goto LABEL_20;
  v21 = 0;
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v9 + 2) )
    {
      v61 = HIBYTE(*(_WORD *)(v9 + 4));
      if ( (v61 & 0xF) == 6 )
      {
        v62 = *(unsigned __int8 *)(v9 + 4);
        v63 = v11 - v12;
        if ( (v61 & 0x10) != 0 )
        {
          v64 = v10->EndAddress - v62;
          LOBYTE(v21) = v63 - v64 < v62;
        }
        else
        {
          v64 = 0;
        }
        if ( !v21 )
        {
          v65 = *(unsigned __int8 *)(v9 + 2);
          v66 = 1;
          if ( v65 <= 1 )
            goto LABEL_20;
          while ( 1 )
          {
            v67 = HIBYTE(*(_WORD *)(v9 + 2LL * v66 + 4));
            if ( (v67 & 0xF) != 6 )
              goto LABEL_20;
            v21 = *(unsigned __int8 *)(v9 + 2LL * v66 + 4) + ((unsigned __int8)v67 >> 4 << 8);
            if ( !v21 )
              goto LABEL_20;
            v64 = v10->EndAddress - v21;
            if ( v63 - v64 < v62 )
              break;
            if ( ++v66 >= v65 )
              goto LABEL_20;
          }
          LODWORD(v12) = v98;
        }
        sub_1800A4C00(v12, v21, v63 - v64, (_DWORD)v10, (__int64)v19, (__int64)ContextPointers, 0LL, 0LL);
        return v8;
      }
    }
    goto LABEL_20;
  }
  v22 = (_BYTE *)v11;
  v23 = 0;
  if ( *(_BYTE *)v11 == 72 )
  {
    v59 = *(_BYTE *)(v11 + 1);
    if ( v59 == -125 && *(_BYTE *)(v11 + 2) == 0xC4 )
      goto LABEL_108;
    if ( v59 == -127 && *(_BYTE *)(v11 + 2) == 0xC4 )
    {
LABEL_84:
      v22 = (_BYTE *)(v11 + 7);
      goto LABEL_11;
    }
  }
  if ( (*(_BYTE *)v11 & 0xFE) == 0x48 && *(_BYTE *)(v11 + 1) == 0x8D )
  {
    v23 = *(_BYTE *)(v11 + 2) & 7 | (8 * (*(_BYTE *)v11 & 1));
    if ( v23 )
    {
      if ( v23 == (*(_BYTE *)(v9 + 3) & 0xF) )
      {
        v58 = *(_BYTE *)(v11 + 2) & 0xF8;
        if ( v58 != 96 )
        {
          if ( v58 != -96 )
            goto LABEL_11;
          goto LABEL_84;
        }
LABEL_108:
        v22 = (_BYTE *)(v11 + 4);
      }
    }
  }
LABEL_11:
  while ( (*v22 & 0xF8) == 0x58 )
  {
    v54 = 1LL;
LABEL_120:
    v22 += v54;
  }
  if ( (*v22 & 0xF0) == 0x40 && (v22[1] & 0xF8) == 0x58 )
  {
    v54 = 2LL;
    goto LABEL_120;
  }
  v24 = v22 + 1;
  if ( *v22 != 0xF2 )
    v24 = v22;
  v25 = *v24;
  if ( (unsigned __int8)(*v24 + 62) <= 1u || v25 == -13 && v24[1] == 0xC3 )
  {
LABEL_68:
    if ( (*(_BYTE *)v11 & 0xF8) != 0x48 )
      goto LABEL_72;
    v56 = *(_BYTE *)(v11 + 1);
    switch ( v56 )
    {
      case -125:
        v19->Rsp += *(char *)(v11 + 3);
LABEL_71:
        v11 += 4LL;
        goto LABEL_72;
      case -127:
        v19->Rsp += *(unsigned __int8 *)(v11 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v11 + 4) | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8);
        break;
      case -115:
        v89 = *(_BYTE *)(v11 + 2) & 0xF8;
        if ( v89 == 96 )
        {
          v90 = *(&v19->Rax + v23);
          v19->Rsp = v90;
          v19->Rsp = v90 + *(char *)(v11 + 3);
          goto LABEL_71;
        }
        if ( v89 != -96 )
        {
          while ( 1 )
          {
LABEL_72:
            if ( (*(_BYTE *)v11 & 0xF8) == 0x58 )
            {
              Rsp = (unsigned __int64 *)v19->Rsp;
              v79 = *(_BYTE *)v11 & 7;
              *(&v19->Rax + v79) = *Rsp;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v79] = Rsp;
              v80 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)v11 & 0xF0) != 0x40 || (*(_BYTE *)(v11 + 1) & 0xF8) != 0x58 )
              {
                v57 = *(_QWORD *)v19->Rsp;
                v19->Rsp += 8LL;
                v19->Rip = v57;
                return v8;
              }
              v81 = (unsigned __int64 *)v19->Rsp;
              v82 = *(_BYTE *)(v11 + 1) & 7 | (8 * (*(_BYTE *)v11 & 1u));
              *(&v19->Rax + v82) = *v81;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v82] = v81;
              v80 = 2LL;
            }
            v19->Rsp += 8LL;
            v11 += v80;
          }
        }
        v19->Rsp = *(&v19->Rax + v23)
                 + (*(unsigned __int8 *)(v11 + 3) | ((*(unsigned __int8 *)(v11 + 4) | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_72;
    }
    v11 += 7LL;
    goto LABEL_72;
  }
  if ( ((v25 + 23) & 0xFD) != 0 )
  {
    if ( v25 == -1 && v24[1] == 37 )
      goto LABEL_68;
    if ( (v25 & 0xF8) == 0x48 && v24[1] == 0xFF )
    {
      v55 = (v24[2] & 0x38) == 32;
      goto LABEL_67;
    }
    goto LABEL_20;
  }
  if ( v25 == -21 )
    v51 = (char)v24[1] + 2;
  else
    v51 = *(_DWORD *)(v24 + 1) + 5;
  v52 = (unsigned __int64)&v24[v51 - v12];
  v26 = v99;
  BeginAddress = v99->BeginAddress;
  if ( v52 < BeginAddress || v52 >= v99->EndAddress )
  {
    v83 = (unsigned int *)sub_18008DF80(v99, v12, &v24[v51]);
    if ( !v83 )
      goto LABEL_68;
    v55 = v52 == *v83;
LABEL_67:
    if ( v55 )
      goto LABEL_68;
LABEL_20:
    v26 = v99;
    goto LABEL_21;
  }
  if ( v52 == BeginAddress && (*(_BYTE *)v9 & 0x20) == 0 )
    goto LABEL_68;
LABEL_21:
  v27 = *v20;
  v28 = 0;
  v29 = v98;
  v30 = v11 - v98;
  v96 = *v20;
  v94 = 0;
  while ( 1 )
  {
    v31 = v30 - v26->BeginAddress;
    v32 = (_BYTE *)(v29 + v26->UnwindInfoAddress);
    LODWORD(v33) = 0;
    v95 = v30 - v26->BeginAddress;
    v34 = 0;
    if ( v32[2] )
    {
      do
      {
        v35 = (unsigned __int8)v32[2 * (unsigned int)v33 + 5] >> 4;
        if ( (unsigned int)v31 < (unsigned __int8)v32[2 * (unsigned int)v33 + 4] )
        {
          v84 = sub_180089A50(*(unsigned __int16 *)&v32[2 * (unsigned int)v33 + 4], (unsigned int)v33, v35, v31);
          v27 = v96;
          LODWORD(v33) = v84 + v33;
        }
        else
        {
          v36 = v32[2 * (unsigned int)v33 + 5] & 0xF;
          if ( v36 > 5 )
          {
            v60 = v36 - 6;
            if ( v60 )
            {
              v70 = v60 - 1;
              if ( v70 )
              {
                v71 = v70 - 1;
                if ( v71 )
                {
                  v75 = v71 - 1;
                  if ( v75 )
                  {
                    if ( v75 != 1 )
LABEL_164:
                      RtlRaiseStatus(-1073741569);
                    v76 = (DWORD64 *)v19->Rsp;
                    v34 = 1;
                    v77 = v76 + 3;
                    if ( (_DWORD)v35 )
                    {
                      ++v76;
                      ++v77;
                    }
                    v19->Rip = *v76;
                    v19->Rsp = *v77;
                  }
                  else
                  {
                    v33 = (unsigned int)(v33 + 2);
                    v92 = (unsigned int)v35;
                    v93 = (struct _M128A *)(v27
                                          + ((unsigned __int64)*(unsigned __int16 *)&v32[2 * v33 + 4] << 16)
                                          + *(unsigned __int16 *)&v32[2 * (unsigned int)(v33 - 1) + 4]);
                    v19->FltSave.XmmRegisters[v92].Low = v93->Low;
                    v19->FltSave.XmmRegisters[v92].High = v93->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v35] = v93;
                  }
                }
                else
                {
                  v33 = (unsigned int)(v33 + 1);
                  v72 = (unsigned int)v35;
                  v73 = (struct _M128A *)(v27 + 16LL * *(unsigned __int16 *)&v32[2 * v33 + 4]);
                  v19->FltSave.XmmRegisters[v72].Low = v73->Low;
                  v19->FltSave.XmmRegisters[v72].High = v73->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v35] = v73;
                }
              }
              else
              {
                LODWORD(v33) = v33 + 2;
              }
            }
            else
            {
              LODWORD(v33) = v33 + 1;
            }
          }
          else if ( v36 == 5 )
          {
            v33 = (unsigned int)(v33 + 2);
            v91 = (unsigned __int64 *)(v27
                                     + ((unsigned __int64)*(unsigned __int16 *)&v32[2 * v33 + 4] << 16)
                                     + *(unsigned __int16 *)&v32[2 * (unsigned int)(v33 - 1) + 4]);
            *(&v19->Rax + v35) = *v91;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v35] = v91;
          }
          else if ( (v32[2 * (unsigned int)v33 + 5] & 0xF) != 0 )
          {
            v40 = v36 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                v42 = v41 - 1;
                if ( v42 )
                {
                  if ( v42 != 1 )
                    goto LABEL_164;
                  v33 = (unsigned int)(v33 + 1);
                  v43 = (unsigned __int64 *)(v27 + 8LL * *(unsigned __int16 *)&v32[2 * v33 + 4]);
                  *(&v19->Rax + v35) = *v43;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v35] = v43;
                }
                else
                {
                  v50 = *(&v19->Rax + (v32[3] & 0xF));
                  v19->Rsp = v50;
                  v19->Rsp = v50 - (v32[3] & 0xF0);
                }
              }
              else
              {
                v19->Rsp += (unsigned int)(8 * v35 + 8);
              }
            }
            else
            {
              v33 = (unsigned int)(v33 + 1);
              v47 = *(unsigned __int16 *)&v32[2 * v33 + 4];
              if ( (_DWORD)v35 )
              {
                v33 = (unsigned int)(v33 + 1);
                v48 = (*(unsigned __int16 *)&v32[2 * v33 + 4] << 16) + v47;
              }
              else
              {
                v48 = 8 * v47;
              }
              v19->Rsp += v48;
            }
          }
          else
          {
            v37 = (unsigned __int64 *)v19->Rsp;
            *(&v19->Rax + v35) = *v37;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v35] = v37;
            v19->Rsp += 8LL;
          }
          LODWORD(v33) = v33 + 1;
        }
        v31 = v95;
      }
      while ( (unsigned int)v33 < (unsigned __int8)v32[2] );
      v28 = v94;
      v29 = v98;
      v26 = v99;
    }
    if ( (*v32 & 0x20) == 0 )
      break;
    v68 = (unsigned __int8)v32[2];
    v69 = (unsigned int)(v68 + 1);
    if ( (v68 & 1) == 0 )
      v69 = (unsigned __int8)v32[2];
    v94 = ++v28;
    v26 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v32[2 * v69 + 4];
    v99 = v26;
    if ( v28 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !v34 )
  {
    v38 = *(_QWORD *)v19->Rsp;
    v19->Rsp += 8LL;
    v19->Rip = v38;
  }
  if ( v97 )
  {
    v44 = (_BYTE *)(v29 + v26->UnwindInfoAddress);
    if ( (int)v11 - (int)v29 - v26->BeginAddress >= (unsigned __int8)v44[1] && ((*v44 >> 3) & (unsigned __int8)v97) != 0 )
    {
      v45 = (unsigned __int8)v44[2];
      v46 = v45 + 1;
      if ( (v45 & 1) == 0 )
        v46 = (unsigned __int8)v44[2];
      *HandlerData = &v44[2 * (v46 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v29 + *(unsigned int *)&v44[2 * v46 + 4]);
    }
  }
  return v8;
}

/*
 * XREFs of RtlVirtualUnwind @ 0x14000B020
 * Callers:
 *     RtlDispatchException @ 0x140009410 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140009D90 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14023BBE0 (RtlRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x140039938 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x140039B28 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x14015DB14 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, struct _CONTEXT *ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  PRUNTIME_FUNCTION v8; // r11
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rbp
  DWORD64 v10; // rsi
  DWORD64 v11; // r10
  int v13; // r12d
  DWORD64 v14; // rdi
  unsigned int v15; // r15d
  unsigned int v16; // ebx
  struct _CONTEXT *v17; // rbx
  PDWORD64 v18; // r13
  struct _RUNTIME_FUNCTION *v19; // r9
  unsigned __int64 v20; // r10
  int v21; // r13d
  DWORD64 v22; // r11
  _BYTE *v23; // r14
  unsigned int v24; // r12d
  __int64 v25; // rdi
  unsigned int v26; // ecx
  __int64 v27; // r9
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned __int64 *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  struct _M128A *v38; // rdx
  __int64 v39; // rcx
  int v40; // edx
  unsigned int v41; // edx
  char v42; // al
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned int v45; // ecx
  unsigned __int64 *v46; // rcx
  unsigned __int64 *v47; // rdx
  int v48; // r9d
  __int16 v49; // ax
  unsigned int v50; // r10d
  int v51; // ecx
  unsigned int i; // r9d
  __int16 v53; // ax
  int v54; // edx
  unsigned int v55; // ecx
  _BYTE *v56; // r9
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  __int64 v60; // r9
  char v61; // r8
  _BYTE *v62; // rdx
  unsigned int v63; // r15d
  char v64; // al
  _BYTE *v65; // rcx
  char v66; // dl
  _BYTE *v67; // rcx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rax
  unsigned int v71; // r14d
  __int64 v72; // rcx
  bool v73; // cf
  char v74; // cl
  __int64 v75; // rax
  bool v76; // zf
  int v77; // eax
  DWORD64 v78; // r14
  DWORD64 BeginAddress; // rcx
  unsigned int *v80; // rax
  char *j; // rcx
  char v82; // al
  char v83; // al
  unsigned __int64 v84; // rcx
  char v85; // dl
  unsigned __int64 *Rsp; // rdx
  __int64 v87; // r8
  __int64 v88; // rax
  unsigned __int64 *v89; // r8
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rcx
  __int64 v93; // rcx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // [rsp+40h] [rbp-58h]
  EXCEPTION_DISPOSITION (__cdecl *v96)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+48h] [rbp-50h]
  DWORD v97; // [rsp+A0h] [rbp+8h]
  DWORD64 v98; // [rsp+A8h] [rbp+10h]
  char v99; // [rsp+B0h] [rbp+18h]
  PRUNTIME_FUNCTION v100; // [rsp+B8h] [rbp+20h]

  v100 = FunctionEntry;
  v98 = ImageBase;
  v8 = FunctionEntry;
  v9 = 0LL;
  v10 = ControlPc;
  v11 = ImageBase;
  v13 = 0;
  v14 = ImageBase + v8->UnwindData;
  if ( ControlPc <= 0x7FFFFFFEFFFFLL && (v14 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = *(_BYTE *)v14 & 7;
  if ( v15 < 2 )
  {
    ImageBase += v8->UnwindData;
    v67 = (_BYTE *)(v14 + 2);
    ControlPc = 0LL;
    while ( !*v67 )
    {
      if ( (*(_BYTE *)ImageBase & 0x20) == 0 )
      {
        v13 = 1;
        goto LABEL_3;
      }
      v69 = (unsigned __int8)*v67;
      v70 = v69 + 1;
      if ( (v69 & 1) == 0 )
        v70 = v69;
      ControlPc = (unsigned int)(ControlPc + 1);
      if ( (unsigned int)ControlPc > 0x20 )
        RtlRaiseStatus(-1073741569);
      ImageBase = v11 + *(unsigned int *)(ImageBase + 2 * v70 + 12);
      if ( v10 <= 0x7FFFFFFEFFFFLL && (ImageBase & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v67 = (_BYTE *)(ImageBase + 2);
    }
    if ( (HandlerType & 0x80000000) != 0 )
      return v96;
  }
LABEL_3:
  v97 = HandlerType & 0x7FFFFFFF;
  v16 = v10 - v8->BeginAddress - v11;
  if ( (*(_BYTE *)(v14 + 3) & 0xF) == 0 )
  {
    v17 = ContextRecord;
    v18 = EstablisherFrame;
LABEL_5:
    *v18 = v17->Rsp;
    goto LABEL_6;
  }
  if ( v16 >= *(unsigned __int8 *)(v14 + 1) || (*(_BYTE *)v14 & 0x20) != 0 )
  {
    v17 = ContextRecord;
    v18 = EstablisherFrame;
    v42 = *(_BYTE *)(v14 + 3);
  }
  else
  {
    v71 = 0;
    if ( *(_BYTE *)(v14 + 2) )
    {
      do
      {
        v72 = *(unsigned __int16 *)(v14 + 2LL * v71 + 4);
        if ( (BYTE1(v72) & 0xF) == 3 )
          break;
        v71 += RtlpUnwindOpSlots(v72, ImageBase, ControlPc);
      }
      while ( v71 < *(unsigned __int8 *)(v14 + 2) );
      v8 = v100;
      v11 = v98;
    }
    v18 = EstablisherFrame;
    v73 = v16 < *(unsigned __int8 *)(v14 + 2LL * v71 + 4);
    v17 = ContextRecord;
    if ( v73 )
      goto LABEL_5;
    v42 = *(_BYTE *)(v14 + 3);
  }
  v43 = *(&v17->Rax + (v42 & 0xF));
  *v18 = v43;
  *v18 = v43 - (*(_BYTE *)(v14 + 3) & 0xF0);
LABEL_6:
  if ( v13 )
    goto LABEL_7;
  v48 = 0;
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v14 + 2) )
    {
      v49 = *(_WORD *)(v14 + 4);
      if ( (HIBYTE(v49) & 0xF) == 6 )
      {
        ControlPc = (unsigned int)(v10 - v98);
        v50 = (unsigned __int8)v49;
        if ( (v49 & 0x1000) != 0 )
        {
          v51 = v8->EndAddress - (unsigned __int8)v49;
          LOBYTE(v48) = (int)ControlPc - v51 < (unsigned int)(unsigned __int8)v49;
        }
        else
        {
          v51 = 0;
        }
        if ( v48 )
        {
LABEL_80:
          RtlpUnwindEpilogue(v98, v10, ControlPc - v51, (_DWORD)v8, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
          return v9;
        }
        for ( i = 1; i < *(unsigned __int8 *)(v14 + 2); ++i )
        {
          v53 = *(_WORD *)(v14 + 2LL * i + 4);
          if ( (HIBYTE(v53) & 0xF) != 6 )
            break;
          v54 = (unsigned __int8)v53 + (HIBYTE(v53) >> 4 << 8);
          if ( !v54 )
            break;
          v51 = v8->EndAddress - v54;
          if ( (int)ControlPc - v51 < v50 )
            goto LABEL_80;
        }
      }
    }
    goto LABEL_7;
  }
  v61 = *(_BYTE *)v10;
  v62 = (_BYTE *)v10;
  v63 = 0;
  if ( *(_BYTE *)v10 == 72 )
  {
    v64 = *(_BYTE *)(v10 + 1);
    if ( v64 == -125 && *(_BYTE *)(v10 + 2) == 0xC4 )
      goto LABEL_126;
    if ( v64 == -127 && *(_BYTE *)(v10 + 2) == 0xC4 )
      goto LABEL_128;
  }
  if ( (v61 & 0xFE) == 0x48 && *(_BYTE *)(v10 + 1) == 0x8D )
  {
    v63 = *(_BYTE *)(v10 + 2) & 7 | (8 * (v61 & 1));
    if ( v63 )
    {
      if ( v63 == (*(_BYTE *)(v14 + 3) & 0xF) )
      {
        v74 = *(_BYTE *)(v10 + 2) & 0xF8;
        if ( v74 == 96 )
        {
LABEL_126:
          v62 = (_BYTE *)(v10 + 4);
          goto LABEL_88;
        }
        if ( v74 != -96 )
          goto LABEL_88;
LABEL_128:
        v62 = (_BYTE *)(v10 + 7);
        goto LABEL_88;
      }
    }
  }
  while ( 1 )
  {
LABEL_88:
    if ( (*v62 & 0xF8) == 0x58 )
    {
      v75 = 1LL;
      goto LABEL_134;
    }
    if ( (*v62 & 0xF0) != 0x40 || (v62[1] & 0xF8) != 0x58 )
      break;
    v75 = 2LL;
LABEL_134:
    v62 += v75;
  }
  v65 = v62 + 1;
  if ( *v62 != 0xF2 )
    v65 = v62;
  v66 = *v65;
  if ( (unsigned __int8)(*v65 + 62) <= 1u || v66 == -13 && v65[1] == 0xC3 )
    goto LABEL_150;
  if ( ((v66 + 23) & 0xFD) != 0 )
  {
    if ( v66 != -1 || v65[1] != 37 )
    {
      if ( (v66 & 0xF8) == 0x48 && v65[1] == 0xFF )
      {
        v76 = (v65[2] & 0x38) == 32;
        goto LABEL_149;
      }
      goto LABEL_7;
    }
LABEL_150:
    j = (char *)v10;
    if ( (*(_BYTE *)v10 & 0xF8) != 0x48 )
      goto LABEL_162;
    v82 = *(_BYTE *)(v10 + 1);
    switch ( v82 )
    {
      case -125:
        v17->Rsp += *(char *)(v10 + 3);
LABEL_158:
        j = (char *)(v10 + 4);
        goto LABEL_162;
      case -127:
        v17->Rsp += ((*(unsigned __int8 *)(v10 + 4) | (*(unsigned __int16 *)(v10 + 5) << 8)) << 8) | *(unsigned __int8 *)(v10 + 3);
        break;
      case -115:
        v83 = *(_BYTE *)(v10 + 2) & 0xF8;
        if ( v83 == 96 )
        {
          v84 = *(&v17->Rax + v63);
          v17->Rsp = v84;
          v17->Rsp = v84 + *(char *)(v10 + 3);
          goto LABEL_158;
        }
        if ( v83 != -96 )
          goto LABEL_162;
        v17->Rsp = *(&v17->Rax + v63)
                 + (*(unsigned __int8 *)(v10 + 3) | ((*(unsigned __int8 *)(v10 + 4) | (*(unsigned __int16 *)(v10 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_162;
    }
    for ( j = (char *)(v10 + 7); ; j += v88 )
    {
LABEL_162:
      v85 = *j;
      if ( (*j & 0xF8) == 0x58 )
      {
        Rsp = (unsigned __int64 *)v17->Rsp;
        v87 = *j & 7;
        if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v17->Rax + v87) = *Rsp;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v87] = Rsp;
        v88 = 1LL;
      }
      else
      {
        if ( (v85 & 0xF0) != 0x40 || (j[1] & 0xF8) != 0x58 )
        {
          if ( v10 <= 0x7FFFFFFEFFFFLL )
          {
            v91 = v17->Rsp;
            if ( (v91 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
          }
          v92 = *(_QWORD *)v17->Rsp;
          v17->Rsp += 8LL;
          v17->Rip = v92;
          return v9;
        }
        v89 = (unsigned __int64 *)v17->Rsp;
        v90 = j[1] & 7 | (8 * (v85 & 1u));
        if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v89 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v17->Rax + v90) = *v89;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v90] = v89;
        v88 = 2LL;
      }
      v17->Rsp += 8LL;
    }
  }
  ControlPc = (DWORD64)&v65[-v11];
  if ( v66 == -21 )
    v77 = (char)v65[1] + 2;
  else
    v77 = *(_DWORD *)(v65 + 1) + 5;
  v19 = v100;
  v78 = ControlPc + v77;
  BeginAddress = v100->BeginAddress;
  if ( v78 < BeginAddress || v78 >= v100->EndAddress )
  {
    v80 = (unsigned int *)RtlpSameFunction(v100, v11, v78 + v11);
    if ( !v80 )
      goto LABEL_150;
    v76 = v78 == *v80;
LABEL_149:
    if ( v76 )
      goto LABEL_150;
LABEL_7:
    v19 = v100;
  }
  else if ( v78 == BeginAddress && (*(_BYTE *)v14 & 0x20) == 0 )
  {
    goto LABEL_150;
  }
  v20 = *v18;
  v21 = 0;
  v22 = v98;
  v95 = v20;
  while ( 1 )
  {
    v23 = (_BYTE *)(v22 + v19->UnwindData);
    v24 = v10 - v19->BeginAddress - v22;
    v99 = 0;
    LODWORD(v25) = 0;
    LOBYTE(ControlPc) = 0;
    if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v23[2] )
    {
      do
      {
        v26 = v23[2 * (unsigned int)v25 + 5] & 0xF;
        v27 = (unsigned __int8)v23[2 * (unsigned int)v25 + 5] >> 4;
        if ( v24 < (unsigned __int8)v23[2 * (unsigned int)v25 + 4] )
        {
          v68 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v23[2 * (unsigned int)v25 + 4], (unsigned int)v25, ControlPc);
          v20 = v95;
          LODWORD(v25) = v68 + v25;
        }
        else
        {
          if ( v26 > 5 )
          {
            v35 = v26 - 6;
            if ( v35 )
            {
              v36 = v35 - 1;
              if ( v36 )
              {
                v37 = v36 - 1;
                if ( v37 )
                {
                  v45 = v37 - 1;
                  if ( v45 )
                  {
                    if ( v45 != 1 )
LABEL_211:
                      RtlRaiseStatus(-1073741569);
                    v99 = 1;
                    v46 = (unsigned __int64 *)v17->Rsp;
                    v47 = v46 + 3;
                    if ( (_DWORD)v27 )
                    {
                      ++v46;
                      ++v47;
                    }
                    if ( v10 <= 0x7FFFFFFEFFFFLL )
                    {
                      if ( ((unsigned __int8)v46 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      ControlPc = 0x7FFFFFFF0000LL;
                      if ( ((unsigned __int8)v47 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    v17->Rip = *v46;
                    v17->Rsp = *v47;
                  }
                  else
                  {
                    v25 = (unsigned int)(v25 + 2);
                    ControlPc = v20
                              + ((unsigned __int64)*(unsigned __int16 *)&v23[2 * v25 + 4] << 16)
                              + *(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4];
                    if ( v10 <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    v93 = (unsigned int)v27;
                    v17->FltSave.XmmRegisters[v93].Low = *(_QWORD *)ControlPc;
                    v17->FltSave.XmmRegisters[v93].High = *(_QWORD *)(ControlPc + 8);
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v27] = (PM128A)ControlPc;
                  }
                }
                else
                {
                  v25 = (unsigned int)(v25 + 1);
                  v38 = (struct _M128A *)(v20 + 16LL * *(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v38 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v39 = (unsigned int)v27;
                  ControlPc = (unsigned int)v27;
                  v17->FltSave.XmmRegisters[v39].Low = v38->Low;
                  v17->FltSave.XmmRegisters[v39].High = v38->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v27] = v38;
                }
              }
              else
              {
                LODWORD(v25) = v25 + 2;
              }
            }
            else
            {
              LODWORD(v25) = v25 + 1;
            }
          }
          else if ( v26 == 5 )
          {
            v25 = (unsigned int)(v25 + 2);
            ControlPc = v20
                      + ((unsigned __int64)*(unsigned __int16 *)&v23[2 * v25 + 4] << 16)
                      + *(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4];
            if ( v10 <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
            *(&v17->Rax + v27) = *(_QWORD *)ControlPc;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v27] = (PULONG64)ControlPc;
          }
          else if ( (v23[2 * (unsigned int)v25 + 5] & 0xF) != 0 )
          {
            v31 = v26 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                v33 = v32 - 1;
                if ( v33 )
                {
                  if ( v33 != 1 )
                    goto LABEL_211;
                  v25 = (unsigned int)(v25 + 1);
                  v34 = (unsigned __int64 *)(v20 + 8LL * *(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v34 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  *(&v17->Rax + v27) = *v34;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v27] = v34;
                }
                else
                {
                  v44 = *(&v17->Rax + (v23[3] & 0xF));
                  v17->Rsp = v44;
                  v17->Rsp = v44 - (v23[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v27 + 8);
              }
            }
            else
            {
              v25 = (unsigned int)(v25 + 1);
              v40 = *(unsigned __int16 *)&v23[2 * v25 + 4];
              if ( (_DWORD)v27 )
              {
                v25 = (unsigned int)(v25 + 1);
                v41 = (*(unsigned __int16 *)&v23[2 * v25 + 4] << 16) + v40;
              }
              else
              {
                v41 = 8 * v40;
              }
              v17->Rsp += v41;
            }
          }
          else
          {
            v28 = (unsigned __int64 *)v17->Rsp;
            if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v28 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(&v17->Rax + v27) = *v28;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v27] = v28;
            v17->Rsp += 8LL;
          }
          LODWORD(v25) = v25 + 1;
        }
      }
      while ( (unsigned int)v25 < (unsigned __int8)v23[2] );
      LOBYTE(ControlPc) = v99;
      v19 = v100;
      v22 = v98;
    }
    if ( (*v23 & 0x20) == 0 )
      break;
    v59 = (unsigned __int8)v23[2];
    v60 = (unsigned int)(v59 + 1);
    if ( (v59 & 1) == 0 )
      v60 = (unsigned __int8)v23[2];
    v19 = (struct _RUNTIME_FUNCTION *)&v23[2 * v60 + 4];
    v100 = v19;
    if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v19 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned int)++v21 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !(_BYTE)ControlPc )
  {
    if ( v10 <= 0x7FFFFFFEFFFFLL )
    {
      v94 = v17->Rsp;
      if ( (v94 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v29 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v29;
  }
  if ( v97 )
  {
    v55 = v10 - v19->BeginAddress - v22;
    v56 = (_BYTE *)(v22 + v19->UnwindData);
    if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v56 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v55 >= (unsigned __int8)v56[1] && ((*v56 >> 3) & (unsigned __int8)v97) != 0 )
    {
      v57 = (unsigned __int8)v56[2];
      v58 = v57 + 1;
      if ( (v57 & 1) == 0 )
        v58 = (unsigned __int8)v56[2];
      *HandlerData = &v56[2 * (v58 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v22 + *(unsigned int *)&v56[2 * v58 + 4]);
    }
  }
  return v9;
}

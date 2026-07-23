/*
 * XREFs of RtlVirtualUnwind @ 0x1400CFE60
 * Callers:
 *     RtlUnwindEx @ 0x14012DE70 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14012EE80 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x140286F30 (RtlRaiseException.c)
 * Callees:
 *     RtlpUnwindEpilogue @ 0x1400D07CC (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400D0974 (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlpSameFunction @ 0x14017C248 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, struct _CONTEXT *ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  PRUNTIME_FUNCTION v8; // r11
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rbp
  DWORD64 v11; // r10
  int v13; // r12d
  DWORD64 v14; // rsi
  char v15; // cl
  unsigned int v16; // r15d
  struct _CONTEXT *v17; // rbx
  unsigned __int64 Rsp; // rcx
  struct _RUNTIME_FUNCTION *v19; // r9
  unsigned __int64 v20; // r11
  int v21; // r13d
  DWORD64 v22; // rdx
  _BYTE *v23; // r14
  unsigned int v24; // r12d
  __int64 v25; // rsi
  char v26; // r10
  unsigned __int8 v27; // cl
  unsigned int v28; // ecx
  __int64 v29; // r9
  unsigned __int64 *v30; // rcx
  unsigned __int64 *v31; // rcx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned __int64 *v36; // rdx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  struct _M128A *v40; // rdx
  __int64 v41; // rcx
  int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // ecx
  _BYTE *v45; // r9
  int v46; // ecx
  int v47; // eax
  int v48; // r9d
  __int16 v49; // ax
  int v50; // r8d
  unsigned int v51; // r10d
  int v52; // ecx
  unsigned int i; // r9d
  __int16 v54; // ax
  int v55; // edx
  unsigned int v56; // ebx
  char v57; // al
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned int v60; // ecx
  unsigned __int64 v61; // rcx
  unsigned __int64 *v62; // r8
  unsigned __int64 *v63; // rdx
  __int64 v64; // rax
  unsigned __int8 *v65; // rax
  DWORD64 v66; // rdx
  int v67; // r8d
  char v68; // r8
  char *v69; // rdx
  unsigned int v70; // r15d
  char v71; // al
  char v72; // r9
  char v73; // cl
  char *v74; // r8
  unsigned int v75; // ecx
  __int64 v76; // rax
  unsigned int v77; // r14d
  bool v78; // cf
  char v79; // cl
  __int64 v80; // rax
  char *j; // rcx
  char v82; // al
  int v83; // eax
  unsigned __int64 v84; // r14
  unsigned __int64 BeginAddress; // rcx
  _DWORD *v86; // rax
  char v87; // al
  unsigned __int64 v88; // rcx
  char v89; // dl
  unsigned __int64 *v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rax
  unsigned __int64 *v93; // r8
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  unsigned __int64 *v96; // rcx
  unsigned __int64 *v97; // rcx
  struct _M128A *v98; // r8
  __int64 v99; // rcx
  int v100; // eax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // [rsp+40h] [rbp-58h]
  EXCEPTION_DISPOSITION (__cdecl *v103)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+48h] [rbp-50h]
  DWORD v104; // [rsp+A0h] [rbp+8h]
  char v106; // [rsp+B0h] [rbp+18h]
  PRUNTIME_FUNCTION v107; // [rsp+B8h] [rbp+20h]

  v107 = FunctionEntry;
  v8 = FunctionEntry;
  v9 = 0LL;
  v11 = ImageBase;
  v13 = 0;
  v14 = ImageBase + v8->UnwindData;
  if ( ControlPc <= 0x7FFFFFFEFFFFLL && (v14 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = *(_BYTE *)v14;
  v16 = *(_BYTE *)v14 & 7;
  if ( v16 < 2 )
  {
    v65 = (unsigned __int8 *)(v14 + 2);
    v66 = ImageBase + v8->UnwindData;
    v67 = 0;
    if ( *(_BYTE *)(v14 + 2) )
    {
LABEL_105:
      if ( (HandlerType & 0x80000000) != 0 )
        return v103;
    }
    else
    {
      while ( (v15 & 0x20) != 0 )
      {
        v75 = *v65;
        v76 = v75 + 1;
        if ( (v75 & 1) == 0 )
          v76 = v75;
        if ( (unsigned int)++v67 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v66 = v11 + *(unsigned int *)(v66 + 2 * v76 + 12);
        if ( ControlPc <= 0x7FFFFFFEFFFFLL && (v66 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v65 = (unsigned __int8 *)(v66 + 2);
        if ( *(_BYTE *)(v66 + 2) )
          goto LABEL_105;
        v15 = *(_BYTE *)v66;
      }
      v13 = 1;
    }
  }
  v104 = HandlerType & 0x7FFFFFFF;
  if ( (*(_BYTE *)(v14 + 3) & 0xF) != 0 )
  {
    v56 = ControlPc - v8->BeginAddress - v11;
    if ( v56 >= *(unsigned __int8 *)(v14 + 1) || (*(_BYTE *)v14 & 0x20) != 0 )
    {
      v17 = ContextRecord;
      v57 = *(_BYTE *)(v14 + 3);
    }
    else
    {
      v77 = 0;
      if ( *(_BYTE *)(v14 + 2) )
      {
        do
        {
          if ( (HIBYTE(*(_WORD *)(v14 + 2LL * v77 + 4)) & 0xF) == 3 )
            break;
          v77 += ((__int64 (*)(void))RtlpUnwindOpSlots)();
        }
        while ( v77 < *(unsigned __int8 *)(v14 + 2) );
        v8 = v107;
        v11 = ImageBase;
      }
      v78 = v56 < *(unsigned __int8 *)(v14 + 2LL * v77 + 4);
      v17 = ContextRecord;
      if ( v78 )
        goto LABEL_5;
      v57 = *(_BYTE *)(v14 + 3);
    }
    v58 = *(&v17->Rax + (v57 & 0xF));
    *EstablisherFrame = v58;
    Rsp = v58 - (*(_BYTE *)(v14 + 3) & 0xF0);
    goto LABEL_6;
  }
  v17 = ContextRecord;
LABEL_5:
  Rsp = v17->Rsp;
LABEL_6:
  *EstablisherFrame = Rsp;
  if ( v13 )
    goto LABEL_7;
  v48 = 0;
  if ( v16 >= 2 )
  {
    if ( *(_BYTE *)(v14 + 2) )
    {
      v49 = *(_WORD *)(v14 + 4);
      if ( (HIBYTE(v49) & 0xF) == 6 )
      {
        v50 = ControlPc - ImageBase;
        v51 = (unsigned __int8)v49;
        if ( (v49 & 0x1000) != 0 )
        {
          v52 = v8->EndAddress - (unsigned __int8)v49;
          LOBYTE(v48) = v50 - v52 < (unsigned int)(unsigned __int8)v49;
        }
        else
        {
          v52 = 0;
        }
        if ( v48 )
        {
LABEL_107:
          RtlpUnwindEpilogue(
            ImageBase,
            ControlPc,
            v50 - v52,
            (_DWORD)v8,
            (__int64)v17,
            (__int64)ContextPointers,
            0LL,
            0LL);
          return v9;
        }
        for ( i = 1; i < *(unsigned __int8 *)(v14 + 2); ++i )
        {
          v54 = *(_WORD *)(v14 + 2LL * i + 4);
          if ( (HIBYTE(v54) & 0xF) != 6 )
            break;
          v55 = (unsigned __int8)v54 + (HIBYTE(v54) >> 4 << 8);
          if ( !v55 )
            break;
          v52 = v8->EndAddress - v55;
          if ( v50 - v52 < v51 )
            goto LABEL_107;
        }
      }
    }
    goto LABEL_7;
  }
  v68 = *(_BYTE *)ControlPc;
  v69 = (char *)ControlPc;
  v70 = 0;
  if ( *(_BYTE *)ControlPc == 72 )
  {
    v71 = *(_BYTE *)(ControlPc + 1);
    if ( v71 == -125 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_134;
    if ( v71 == -127 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_128;
  }
  if ( (v68 & 0xFE) == 0x48 && *(_BYTE *)(ControlPc + 1) == 0x8D )
  {
    v70 = *(_BYTE *)(ControlPc + 2) & 7 | (8 * (v68 & 1));
    if ( v70 )
    {
      if ( v70 == (*(_BYTE *)(v14 + 3) & 0xF) )
      {
        v79 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v79 != 96 )
        {
          if ( v79 != -96 )
            goto LABEL_91;
LABEL_128:
          v69 = (char *)(ControlPc + 7);
          goto LABEL_91;
        }
LABEL_134:
        v69 = (char *)(ControlPc + 4);
        goto LABEL_91;
      }
    }
  }
  while ( 1 )
  {
LABEL_91:
    v72 = *v69;
    if ( (*v69 & 0xF8) == 0x58 )
    {
      v80 = 1LL;
      goto LABEL_137;
    }
    if ( (v72 & 0xF0) != 0x40 || (v69[1] & 0xF8) != 0x58 )
      break;
    v80 = 2LL;
LABEL_137:
    v69 += v80;
  }
  v73 = *v69;
  if ( v72 == -14 )
    v73 = v69[1];
  v74 = v69 + 1;
  if ( v72 != -14 )
    v74 = v69;
  if ( (unsigned __int8)(v73 + 62) <= 1u || v73 == -13 && (v73 = -13, v74[1] == -61) )
  {
LABEL_139:
    j = (char *)ControlPc;
    if ( (*(_BYTE *)ControlPc & 0xF8) != 0x48 )
      goto LABEL_166;
    v82 = *(_BYTE *)(ControlPc + 1);
    switch ( v82 )
    {
      case -125:
        v17->Rsp += *(char *)(ControlPc + 3);
LABEL_162:
        j = (char *)(ControlPc + 4);
        goto LABEL_166;
      case -127:
        v17->Rsp += ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8) | *(unsigned __int8 *)(ControlPc + 3);
        break;
      case -115:
        v87 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v87 == 96 )
        {
          v88 = *(&v17->Rax + v70);
          v17->Rsp = v88;
          v17->Rsp = v88 + *(char *)(ControlPc + 3);
          goto LABEL_162;
        }
        if ( v87 != -96 )
          goto LABEL_166;
        v17->Rsp = *(&v17->Rax + v70)
                 + (*(unsigned __int8 *)(ControlPc + 3) | ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_166;
    }
    for ( j = (char *)(ControlPc + 7); ; j += v92 )
    {
LABEL_166:
      v89 = *j;
      if ( (*j & 0xF8) == 0x58 )
      {
        v90 = (unsigned __int64 *)v17->Rsp;
        v91 = *j & 7;
        if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v90 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v17->Rax + v91) = *v90;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v91] = v90;
        v92 = 1LL;
      }
      else
      {
        if ( (v89 & 0xF0) != 0x40 || (j[1] & 0xF8) != 0x58 )
        {
          if ( ControlPc <= 0x7FFFFFFEFFFFLL )
          {
            v95 = v17->Rsp;
            if ( (v95 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
          }
          v96 = (unsigned __int64 *)v17->Rsp;
          v17->Rip = *v96;
          v17->Rsp = (unsigned __int64)(v96 + 1);
          return v9;
        }
        v93 = (unsigned __int64 *)v17->Rsp;
        v94 = j[1] & 7 | (8 * (v89 & 1u));
        if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v93 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v17->Rax + v94) = *v93;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v94] = v93;
        v92 = 2LL;
      }
      v17->Rsp += 8LL;
    }
  }
  if ( ((v73 + 23) & 0xFD) != 0 )
  {
    if ( v73 == -1 )
    {
      v73 = -1;
      if ( v74[1] == 37 )
        goto LABEL_139;
    }
    if ( (v73 & 0xF8) == 0x48 && v74[1] == -1 && (v74[2] & 0x38) == 0x20 )
      goto LABEL_139;
LABEL_7:
    v19 = v107;
  }
  else
  {
    if ( v73 == -21 )
      v83 = v74[1] + 2;
    else
      v83 = *(_DWORD *)(v74 + 1) + 5;
    v19 = v107;
    v84 = (unsigned __int64)&v74[v83 - v11];
    BeginAddress = v107->BeginAddress;
    if ( v84 < BeginAddress || v84 >= v107->EndAddress )
    {
      v86 = (_DWORD *)RtlpSameFunction(v107, v11, &v74[v83]);
      if ( !v86 || v84 == *v86 )
        goto LABEL_139;
      goto LABEL_7;
    }
    if ( v84 == BeginAddress && (*(_BYTE *)v14 & 0x20) == 0 )
      goto LABEL_139;
  }
  v20 = *EstablisherFrame;
  v21 = 0;
  v22 = ImageBase;
  v102 = *EstablisherFrame;
  while ( 1 )
  {
    v23 = (_BYTE *)(v22 + v19->UnwindData);
    v24 = ControlPc - v19->BeginAddress - v22;
    v106 = 0;
    LODWORD(v25) = 0;
    v26 = 0;
    if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = v23[2];
    if ( v27 )
    {
      do
      {
        v28 = v23[2 * (unsigned int)v25 + 5] & 0xF;
        v29 = (unsigned __int8)v23[2 * (unsigned int)v25 + 5] >> 4;
        if ( v24 < (unsigned __int8)v23[2 * (unsigned int)v25 + 4] )
        {
          v100 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v23[2 * (unsigned int)v25 + 4]);
          v20 = v102;
          LODWORD(v25) = v100 + v25;
        }
        else
        {
          if ( v28 > 5 )
          {
            v37 = v28 - 6;
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  v60 = v39 - 1;
                  if ( v60 )
                  {
                    if ( v60 != 1 )
LABEL_216:
                      RtlRaiseStatus(-1073741569);
                    v106 = 1;
                    v61 = v17->Rsp;
                    v62 = (unsigned __int64 *)(v61 + 32);
                    if ( !(_DWORD)v29 )
                      v62 = (unsigned __int64 *)(v61 + 24);
                    v63 = (unsigned __int64 *)(v61 + 8);
                    if ( !(_DWORD)v29 )
                      v63 = (unsigned __int64 *)v17->Rsp;
                    if ( ControlPc <= 0x7FFFFFFEFFFFLL )
                    {
                      if ( ((unsigned __int8)v63 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( ((unsigned __int8)v62 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    v17->Rip = *v63;
                    v17->Rsp = *v62;
                  }
                  else
                  {
                    v25 = (unsigned int)(v25 + 2);
                    v98 = (struct _M128A *)(v20
                                          + *(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4]
                                          + (*(unsigned __int16 *)&v23[2 * v25 + 4] << 16));
                    if ( ControlPc <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    v99 = (unsigned int)v29;
                    v17->FltSave.XmmRegisters[v99].Low = v98->Low;
                    v17->FltSave.XmmRegisters[v99].High = v98->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v29] = v98;
                  }
                }
                else
                {
                  v25 = (unsigned int)(v25 + 1);
                  v40 = (struct _M128A *)(v20 + 16 * (unsigned int)*(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v40 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v41 = (unsigned int)v29;
                  v17->FltSave.XmmRegisters[v41].Low = v40->Low;
                  v17->FltSave.XmmRegisters[v41].High = v40->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v29] = v40;
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
          else if ( v28 == 5 )
          {
            v25 = (unsigned int)(v25 + 2);
            v97 = (unsigned __int64 *)(v20
                                     + (*(unsigned __int16 *)&v23[2 * v25 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4]);
            if ( ControlPc <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
            *(&v17->Rax + v29) = *v97;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v29] = v97;
          }
          else if ( (v23[2 * (unsigned int)v25 + 5] & 0xF) != 0 )
          {
            v33 = v28 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                v35 = v34 - 1;
                if ( v35 )
                {
                  if ( v35 != 1 )
                    goto LABEL_216;
                  v25 = (unsigned int)(v25 + 1);
                  v36 = (unsigned __int64 *)(v20 + 8 * (unsigned int)*(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v36 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  *(&v17->Rax + v29) = *v36;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v29] = v36;
                }
                else
                {
                  v59 = *(&v17->Rax + (v23[3] & 0xF));
                  v17->Rsp = v59;
                  v17->Rsp = v59 - (v23[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v29 + 8);
              }
            }
            else
            {
              v25 = (unsigned int)(v25 + 1);
              v42 = *(unsigned __int16 *)&v23[2 * v25 + 4];
              if ( (_DWORD)v29 )
              {
                v25 = (unsigned int)(v25 + 1);
                v43 = (*(unsigned __int16 *)&v23[2 * v25 + 4] << 16) + v42;
              }
              else
              {
                v43 = 8 * v42;
              }
              v17->Rsp += v43;
            }
          }
          else
          {
            v30 = (unsigned __int64 *)v17->Rsp;
            if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v30 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(&v17->Rax + v29) = *v30;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v29] = v30;
            v17->Rsp += 8LL;
          }
          LODWORD(v25) = v25 + 1;
        }
        v27 = v23[2];
      }
      while ( (unsigned int)v25 < v27 );
      v26 = v106;
      v19 = v107;
      v22 = ImageBase;
    }
    if ( (*v23 & 0x20) == 0 )
      break;
    v64 = (unsigned int)v27 + 1;
    if ( (v27 & 1) == 0 )
      v64 = v27;
    v19 = (struct _RUNTIME_FUNCTION *)&v23[2 * v64 + 4];
    v107 = v19;
    if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v19 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned int)++v21 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !v26 )
  {
    if ( ControlPc <= 0x7FFFFFFEFFFFLL )
    {
      v101 = v17->Rsp;
      if ( (v101 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v31 = (unsigned __int64 *)v17->Rsp;
    v17->Rip = *v31;
    v17->Rsp = (unsigned __int64)(v31 + 1);
  }
  if ( v104 )
  {
    v44 = ControlPc - v19->BeginAddress - v22;
    v45 = (_BYTE *)(v22 + v19->UnwindData);
    if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v45 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v44 >= (unsigned __int8)v45[1] && ((*v45 >> 3) & (unsigned __int8)v104) != 0 )
    {
      v46 = (unsigned __int8)v45[2];
      v47 = v46 + 1;
      if ( (v46 & 1) == 0 )
        v47 = (unsigned __int8)v45[2];
      *HandlerData = &v45[2 * (v47 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)&v45[2 * v47 + 4]);
    }
  }
  return v9;
}

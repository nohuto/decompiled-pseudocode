/*
 * XREFs of RtlVirtualUnwind @ 0x14012C5E0
 * Callers:
 *     RtlUnwindEx @ 0x1400D5CB0 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1400D9210 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x140251460 (RtlRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x14013011C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1401302CC (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x140149A60 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, struct _CONTEXT *ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  PRUNTIME_FUNCTION v8; // r11
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rbp
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
  char v26; // r8
  unsigned int v27; // ecx
  __int64 v28; // r9
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned __int64 *v35; // rdx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  struct _M128A *v39; // rdx
  __int64 v40; // rcx
  int v41; // edx
  unsigned int v42; // edx
  char v43; // al
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned int v46; // ecx
  _BYTE *v47; // r9
  int v48; // ecx
  int v49; // eax
  int v50; // r9d
  __int16 v51; // ax
  int v52; // r8d
  unsigned int v53; // r10d
  int v54; // ecx
  unsigned int i; // r9d
  __int16 v56; // ax
  int v57; // edx
  unsigned int v58; // ecx
  unsigned __int64 *v59; // rcx
  unsigned __int64 *v60; // rdx
  DWORD64 v61; // rdx
  _BYTE *v62; // rcx
  int v63; // r8d
  int v64; // ecx
  __int64 v65; // r9
  char v66; // r8
  _BYTE *v67; // rdx
  unsigned int v68; // r15d
  char v69; // al
  char v70; // r8
  _BYTE *v71; // rcx
  char v72; // dl
  int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rax
  unsigned int v76; // r14d
  __int64 v77; // rcx
  bool v78; // cf
  char v79; // cl
  __int64 v80; // rax
  bool v81; // zf
  int v82; // eax
  unsigned __int64 v83; // r14
  unsigned __int64 BeginAddress; // rcx
  unsigned int *v85; // rax
  char *j; // rcx
  char v87; // al
  char v88; // al
  unsigned __int64 v89; // rcx
  char v90; // dl
  unsigned __int64 *Rsp; // rdx
  __int64 v92; // r8
  __int64 v93; // rax
  unsigned __int64 *v94; // r8
  __int64 v95; // rdx
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 *v98; // rcx
  struct _M128A *v99; // r8
  __int64 v100; // rcx
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
  v15 = *(_BYTE *)v14 & 7;
  if ( v15 < 2 )
  {
    v61 = ImageBase + v8->UnwindData;
    v62 = (_BYTE *)(v14 + 2);
    v63 = 0;
    while ( !*v62 )
    {
      if ( (*(_BYTE *)v61 & 0x20) == 0 )
      {
        v13 = 1;
        goto LABEL_3;
      }
      v74 = (unsigned __int8)*v62;
      v75 = v74 + 1;
      if ( (v74 & 1) == 0 )
        v75 = v74;
      if ( (unsigned int)++v63 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v61 = v11 + *(unsigned int *)(v61 + 2 * v75 + 12);
      if ( ControlPc <= 0x7FFFFFFEFFFFLL && (v61 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v62 = (_BYTE *)(v61 + 2);
    }
    if ( (HandlerType & 0x80000000) != 0 )
      return v103;
  }
LABEL_3:
  v104 = HandlerType & 0x7FFFFFFF;
  v16 = ControlPc - v8->BeginAddress - v11;
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
    v43 = *(_BYTE *)(v14 + 3);
  }
  else
  {
    v76 = 0;
    if ( *(_BYTE *)(v14 + 2) )
    {
      do
      {
        v77 = *(unsigned __int16 *)(v14 + 2LL * v76 + 4);
        if ( (BYTE1(v77) & 0xF) == 3 )
          break;
        v76 += RtlpUnwindOpSlots(v77);
      }
      while ( v76 < *(unsigned __int8 *)(v14 + 2) );
      v8 = v107;
      v11 = ImageBase;
    }
    v18 = EstablisherFrame;
    v78 = v16 < *(unsigned __int8 *)(v14 + 2LL * v76 + 4);
    v17 = ContextRecord;
    if ( v78 )
      goto LABEL_5;
    v43 = *(_BYTE *)(v14 + 3);
  }
  v44 = *(&v17->Rax + (v43 & 0xF));
  *v18 = v44;
  *v18 = v44 - (*(_BYTE *)(v14 + 3) & 0xF0);
LABEL_6:
  if ( v13 )
    goto LABEL_7;
  v50 = 0;
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v14 + 2) )
    {
      v51 = *(_WORD *)(v14 + 4);
      if ( (HIBYTE(v51) & 0xF) == 6 )
      {
        v52 = ControlPc - ImageBase;
        v53 = (unsigned __int8)v51;
        if ( (v51 & 0x1000) != 0 )
        {
          v54 = v8->EndAddress - (unsigned __int8)v51;
          LOBYTE(v50) = v52 - v54 < (unsigned int)(unsigned __int8)v51;
        }
        else
        {
          v54 = 0;
        }
        if ( v50 )
        {
LABEL_105:
          RtlpUnwindEpilogue(
            ImageBase,
            ControlPc,
            v52 - v54,
            (_DWORD)v8,
            (__int64)v17,
            (__int64)ContextPointers,
            0LL,
            0LL);
          return v9;
        }
        for ( i = 1; i < *(unsigned __int8 *)(v14 + 2); ++i )
        {
          v56 = *(_WORD *)(v14 + 2LL * i + 4);
          if ( (HIBYTE(v56) & 0xF) != 6 )
            break;
          v57 = (unsigned __int8)v56 + (HIBYTE(v56) >> 4 << 8);
          if ( !v57 )
            break;
          v54 = v8->EndAddress - v57;
          if ( v52 - v54 < v53 )
            goto LABEL_105;
        }
      }
    }
    goto LABEL_7;
  }
  v66 = *(_BYTE *)ControlPc;
  v67 = (_BYTE *)ControlPc;
  v68 = 0;
  if ( *(_BYTE *)ControlPc == 72 )
  {
    v69 = *(_BYTE *)(ControlPc + 1);
    if ( v69 == -125 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_126;
    if ( v69 == -127 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_128;
  }
  if ( (v66 & 0xFE) == 0x48 && *(_BYTE *)(ControlPc + 1) == 0x8D )
  {
    v68 = *(_BYTE *)(ControlPc + 2) & 7 | (8 * (v66 & 1));
    if ( v68 )
    {
      if ( v68 == (*(_BYTE *)(v14 + 3) & 0xF) )
      {
        v79 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v79 == 96 )
        {
LABEL_126:
          v67 = (_BYTE *)(ControlPc + 4);
          goto LABEL_91;
        }
        if ( v79 != -96 )
          goto LABEL_91;
LABEL_128:
        v67 = (_BYTE *)(ControlPc + 7);
        goto LABEL_91;
      }
    }
  }
  while ( 1 )
  {
LABEL_91:
    v70 = *v67;
    if ( (*v67 & 0xF8) == 0x58 )
    {
      v80 = 1LL;
      goto LABEL_134;
    }
    if ( (v70 & 0xF0) != 0x40 || (v67[1] & 0xF8) != 0x58 )
      break;
    v80 = 2LL;
LABEL_134:
    v67 += v80;
  }
  v71 = v67 + 1;
  if ( v70 != -14 )
    v71 = v67;
  v72 = *v71;
  if ( (unsigned __int8)(*v71 + 62) <= 1u || v72 == -13 && v71[1] == 0xC3 )
    goto LABEL_150;
  if ( ((v72 + 23) & 0xFD) != 0 )
  {
    if ( v72 != -1 || v71[1] != 37 )
    {
      if ( (v72 & 0xF8) == 0x48 && v71[1] == 0xFF )
      {
        v81 = (v71[2] & 0x38) == 32;
        goto LABEL_149;
      }
      goto LABEL_7;
    }
LABEL_150:
    j = (char *)ControlPc;
    if ( (*(_BYTE *)ControlPc & 0xF8) != 0x48 )
      goto LABEL_162;
    v87 = *(_BYTE *)(ControlPc + 1);
    switch ( v87 )
    {
      case -125:
        v17->Rsp += *(char *)(ControlPc + 3);
LABEL_158:
        j = (char *)(ControlPc + 4);
        goto LABEL_162;
      case -127:
        v17->Rsp += ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8) | *(unsigned __int8 *)(ControlPc + 3);
        break;
      case -115:
        v88 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v88 == 96 )
        {
          v89 = *(&v17->Rax + v68);
          v17->Rsp = v89;
          v17->Rsp = v89 + *(char *)(ControlPc + 3);
          goto LABEL_158;
        }
        if ( v88 != -96 )
          goto LABEL_162;
        v17->Rsp = *(&v17->Rax + v68)
                 + (*(unsigned __int8 *)(ControlPc + 3) | ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_162;
    }
    for ( j = (char *)(ControlPc + 7); ; j += v93 )
    {
LABEL_162:
      v90 = *j;
      if ( (*j & 0xF8) == 0x58 )
      {
        Rsp = (unsigned __int64 *)v17->Rsp;
        v92 = *j & 7;
        if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v17->Rax + v92) = *Rsp;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v92] = Rsp;
        v93 = 1LL;
      }
      else
      {
        if ( (v90 & 0xF0) != 0x40 || (j[1] & 0xF8) != 0x58 )
        {
          if ( ControlPc <= 0x7FFFFFFEFFFFLL )
          {
            v96 = v17->Rsp;
            if ( (v96 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
          }
          v97 = *(_QWORD *)v17->Rsp;
          v17->Rsp += 8LL;
          v17->Rip = v97;
          return v9;
        }
        v94 = (unsigned __int64 *)v17->Rsp;
        v95 = j[1] & 7 | (8 * (v90 & 1u));
        if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v94 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v17->Rax + v95) = *v94;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v95] = v94;
        v93 = 2LL;
      }
      v17->Rsp += 8LL;
    }
  }
  if ( v72 == -21 )
    v82 = (char)v71[1] + 2;
  else
    v82 = *(_DWORD *)(v71 + 1) + 5;
  v19 = v107;
  v83 = (unsigned __int64)&v71[v82 - v11];
  BeginAddress = v107->BeginAddress;
  if ( v83 < BeginAddress || v83 >= v107->EndAddress )
  {
    v85 = (unsigned int *)RtlpSameFunction(v107, v11, v83 + v11);
    if ( !v85 )
      goto LABEL_150;
    v81 = v83 == *v85;
LABEL_149:
    if ( v81 )
      goto LABEL_150;
LABEL_7:
    v19 = v107;
  }
  else if ( v83 == BeginAddress && (*(_BYTE *)v14 & 0x20) == 0 )
  {
    goto LABEL_150;
  }
  v20 = *v18;
  v21 = 0;
  v22 = ImageBase;
  v102 = v20;
  while ( 1 )
  {
    v23 = (_BYTE *)(v22 + v19->UnwindData);
    v24 = ControlPc - v19->BeginAddress - v22;
    v106 = 0;
    LODWORD(v25) = 0;
    v26 = 0;
    if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v23[2] )
    {
      do
      {
        v27 = v23[2 * (unsigned int)v25 + 5] & 0xF;
        v28 = (unsigned __int8)v23[2 * (unsigned int)v25 + 5] >> 4;
        if ( v24 < (unsigned __int8)v23[2 * (unsigned int)v25 + 4] )
        {
          v73 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v23[2 * (unsigned int)v25 + 4]);
          v20 = v102;
          LODWORD(v25) = v73 + v25;
        }
        else
        {
          if ( v27 > 5 )
          {
            v36 = v27 - 6;
            if ( v36 )
            {
              v37 = v36 - 1;
              if ( v37 )
              {
                v38 = v37 - 1;
                if ( v38 )
                {
                  v58 = v38 - 1;
                  if ( v58 )
                  {
                    if ( v58 != 1 )
LABEL_211:
                      RtlRaiseStatus(-1073741569);
                    v106 = 1;
                    v59 = (unsigned __int64 *)v17->Rsp;
                    v60 = v59 + 3;
                    if ( (_DWORD)v28 )
                    {
                      ++v59;
                      ++v60;
                    }
                    if ( ControlPc <= 0x7FFFFFFEFFFFLL )
                    {
                      if ( ((unsigned __int8)v59 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( ((unsigned __int8)v60 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    v17->Rip = *v59;
                    v17->Rsp = *v60;
                  }
                  else
                  {
                    v25 = (unsigned int)(v25 + 2);
                    v99 = (struct _M128A *)(v20
                                          + *(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4]
                                          + (*(unsigned __int16 *)&v23[2 * v25 + 4] << 16));
                    if ( ControlPc <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    v100 = (unsigned int)v28;
                    v17->FltSave.XmmRegisters[v100].Low = v99->Low;
                    v17->FltSave.XmmRegisters[v100].High = v99->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v28] = v99;
                  }
                }
                else
                {
                  v25 = (unsigned int)(v25 + 1);
                  v39 = (struct _M128A *)(v20 + 16 * (unsigned int)*(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v39 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v40 = (unsigned int)v28;
                  v17->FltSave.XmmRegisters[v40].Low = v39->Low;
                  v17->FltSave.XmmRegisters[v40].High = v39->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v28] = v39;
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
          else if ( v27 == 5 )
          {
            v25 = (unsigned int)(v25 + 2);
            v98 = (unsigned __int64 *)(v20
                                     + (*(unsigned __int16 *)&v23[2 * v25 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4]);
            if ( ControlPc <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
            *(&v17->Rax + v28) = *v98;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v28] = v98;
          }
          else if ( (v23[2 * (unsigned int)v25 + 5] & 0xF) != 0 )
          {
            v32 = v27 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                v34 = v33 - 1;
                if ( v34 )
                {
                  if ( v34 != 1 )
                    goto LABEL_211;
                  v25 = (unsigned int)(v25 + 1);
                  v35 = (unsigned __int64 *)(v20 + 8 * (unsigned int)*(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v35 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  *(&v17->Rax + v28) = *v35;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v28] = v35;
                }
                else
                {
                  v45 = *(&v17->Rax + (v23[3] & 0xF));
                  v17->Rsp = v45;
                  v17->Rsp = v45 - (v23[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v28 + 8);
              }
            }
            else
            {
              v25 = (unsigned int)(v25 + 1);
              v41 = *(unsigned __int16 *)&v23[2 * v25 + 4];
              if ( (_DWORD)v28 )
              {
                v25 = (unsigned int)(v25 + 1);
                v42 = (*(unsigned __int16 *)&v23[2 * v25 + 4] << 16) + v41;
              }
              else
              {
                v42 = 8 * v41;
              }
              v17->Rsp += v42;
            }
          }
          else
          {
            v29 = (unsigned __int64 *)v17->Rsp;
            if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v29 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(&v17->Rax + v28) = *v29;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v28] = v29;
            v17->Rsp += 8LL;
          }
          LODWORD(v25) = v25 + 1;
        }
      }
      while ( (unsigned int)v25 < (unsigned __int8)v23[2] );
      v26 = v106;
      v19 = v107;
      v22 = ImageBase;
    }
    if ( (*v23 & 0x20) == 0 )
      break;
    v64 = (unsigned __int8)v23[2];
    v65 = (unsigned int)(v64 + 1);
    if ( (v64 & 1) == 0 )
      v65 = (unsigned __int8)v23[2];
    v19 = (struct _RUNTIME_FUNCTION *)&v23[2 * v65 + 4];
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
    v30 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v30;
  }
  if ( v104 )
  {
    v46 = ControlPc - v19->BeginAddress - v22;
    v47 = (_BYTE *)(v22 + v19->UnwindData);
    if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v47 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v46 >= (unsigned __int8)v47[1] && ((*v47 >> 3) & (unsigned __int8)v104) != 0 )
    {
      v48 = (unsigned __int8)v47[2];
      v49 = v48 + 1;
      if ( (v48 & 1) == 0 )
        v49 = (unsigned __int8)v47[2];
      *HandlerData = &v47[2 * (v49 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v22 + *(unsigned int *)&v47[2 * v49 + 4]);
    }
  }
  return v9;
}

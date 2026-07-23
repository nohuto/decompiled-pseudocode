/*
 * XREFs of RtlVirtualUnwind @ 0x18000B340
 * Callers:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     __report_gsfailure @ 0x18008B130 (__report_gsfailure.c)
 * Callees:
 *     sub_180003F70 @ 0x180003F70 (sub_180003F70.c)
 *     sub_18000B108 @ 0x18000B108 (sub_18000B108.c)
 *     sub_18009A360 @ 0x18009A360 (sub_18009A360.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v8)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rsi
  ULONG64 v9; // rbp
  ULONG64 v11; // r11
  int v13; // r13d
  unsigned int v14; // r12d
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  unsigned int v17; // r8d
  DWORD64 Rsp; // rcx
  int v19; // edx
  char *v20; // rdx
  unsigned int v21; // r15d
  char v22; // cl
  char *v23; // r8
  unsigned int v24; // edx
  ULONG64 v25; // r11
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v26; // r8
  unsigned __int64 v27; // r10
  unsigned int v28; // r9d
  _BYTE *v29; // r14
  __int64 v30; // rbp
  char v31; // r13
  unsigned __int8 v32; // cl
  __int64 v33; // r8
  unsigned int v34; // ecx
  unsigned __int64 *v35; // rdx
  DWORD64 *v36; // rcx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned __int64 *v41; // rdx
  _BYTE *v42; // r9
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // edx
  __int64 v47; // rax
  bool v48; // zf
  char v49; // al
  DWORD64 *v50; // rcx
  char v51; // cl
  char v52; // al
  int v53; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v55; // r14
  unsigned int v56; // r14d
  unsigned __int64 v57; // rcx
  DWORD64 v58; // rcx
  unsigned int v59; // ecx
  __int16 v60; // cx
  unsigned int v61; // r10d
  int v62; // r8d
  DWORD v63; // ecx
  unsigned int v64; // r11d
  unsigned int v65; // r9d
  int v66; // r15d
  __int16 v67; // r14
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  __int64 v70; // rcx
  struct _M128A *v71; // rdx
  __int64 v72; // r8
  unsigned int v73; // r9d
  int v74; // edx
  __int64 v75; // rax
  unsigned __int64 *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // ecx
  DWORD64 v80; // rcx
  DWORD64 *v81; // rax
  DWORD64 *v82; // rax
  unsigned int *v83; // rax
  unsigned __int64 *v84; // r8
  unsigned __int64 v85; // rcx
  int v86; // eax
  unsigned int v87; // r15d
  unsigned __int16 v88; // cx
  char v89; // al
  DWORD64 v90; // rcx
  unsigned __int64 *v91; // rcx
  __int64 v92; // rcx
  struct _M128A *v93; // r9
  unsigned int v94; // [rsp+40h] [rbp-48h]
  unsigned int v95; // [rsp+44h] [rbp-44h]
  unsigned __int64 v96; // [rsp+48h] [rbp-40h]
  ULONG v97; // [rsp+90h] [rbp+8h]
  PRUNTIME_FUNCTION v99; // [rsp+A8h] [rbp+20h]

  v99 = FunctionEntry;
  v8 = 0LL;
  v9 = ImageBase + FunctionEntry->UnwindInfoAddress;
  v11 = ImageBase;
  v13 = 0;
  v14 = *(_BYTE *)v9 & 7;
  if ( v14 < 2 )
  {
    v15 = (_BYTE *)(v9 + 2);
    v16 = (_BYTE *)(ImageBase + FunctionEntry->UnwindInfoAddress);
    v17 = 0;
    if ( !*(_BYTE *)(v9 + 2) )
    {
      while ( (*v16 & 0x20) != 0 )
      {
        v73 = (unsigned __int8)*v15;
        ++v17;
        v74 = *v15 & 1;
        if ( v17 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v75 = v73 + 1;
        if ( !v74 )
          v75 = v73;
        v16 = (_BYTE *)(v11 + *(unsigned int *)&v16[2 * v75 + 12]);
        v15 = v16 + 2;
        if ( v16[2] )
          goto LABEL_113;
      }
      v13 = 1;
LABEL_113:
      FunctionEntry = v99;
    }
  }
  v97 = HandlerType & 0x7FFFFFFF;
  if ( (*(_BYTE *)(v9 + 3) & 0xF) == 0 )
    goto LABEL_4;
  v56 = ControlPc - v11 - FunctionEntry->BeginAddress;
  if ( v56 >= *(unsigned __int8 *)(v9 + 1) || (*(_BYTE *)v9 & 0x20) != 0 )
    goto LABEL_81;
  v87 = 0;
  if ( *(_BYTE *)(v9 + 2) )
  {
    do
    {
      v88 = *(_WORD *)(v9 + 2LL * v87 + 4);
      if ( (HIBYTE(v88) & 0xF) == 3 )
        break;
      v87 += sub_180003F70(v88);
    }
    while ( v87 < *(unsigned __int8 *)(v9 + 2) );
    v11 = ImageBase;
    FunctionEntry = v99;
  }
  if ( v56 >= *(unsigned __int8 *)(v9 + 2LL * v87 + 4) )
  {
LABEL_81:
    v57 = *(&ContextRecord->Rax + (*(_BYTE *)(v9 + 3) & 0xF));
    *EstablisherFrame = v57;
    Rsp = v57 - (*(_BYTE *)(v9 + 3) & 0xF0);
  }
  else
  {
LABEL_4:
    Rsp = ContextRecord->Rsp;
  }
  *EstablisherFrame = Rsp;
  if ( v13 )
    goto LABEL_20;
  v19 = 0;
  if ( v14 >= 2 )
  {
    if ( !*(_BYTE *)(v9 + 2) )
      goto LABEL_20;
    v60 = HIBYTE(*(_WORD *)(v9 + 4));
    if ( (v60 & 0xF) != 6 )
      goto LABEL_20;
    v61 = *(unsigned __int8 *)(v9 + 4);
    v62 = ControlPc - v11;
    if ( (v60 & 0x10) != 0 )
    {
      v63 = FunctionEntry->EndAddress - v61;
      LOBYTE(v19) = v62 - v63 < v61;
    }
    else
    {
      v63 = 0;
    }
    if ( v19 )
    {
      v66 = (int)v99;
    }
    else
    {
      v64 = *(unsigned __int8 *)(v9 + 2);
      v65 = 1;
      if ( v64 <= 1 )
        goto LABEL_20;
      v66 = (int)v99;
      while ( 1 )
      {
        v67 = *(_WORD *)(v9 + 2LL * v65 + 4);
        if ( (HIBYTE(v67) & 0xF) != 6 )
          goto LABEL_20;
        v19 = (unsigned __int8)v67 + (HIBYTE(v67) >> 4 << 8);
        if ( !v19 )
          goto LABEL_20;
        v63 = v99->EndAddress - v19;
        if ( v62 - v63 < v61 )
          break;
        if ( ++v65 >= v64 )
          goto LABEL_20;
      }
      LODWORD(v11) = ImageBase;
    }
    sub_18009A360(v11, v19, v62 - v63, v66, (__int64)ContextRecord, (__int64)ContextPointers, 0LL, 0LL);
    return v8;
  }
  v20 = (char *)ControlPc;
  v21 = 0;
  if ( *(_BYTE *)ControlPc == 72 )
  {
    v52 = *(_BYTE *)(ControlPc + 1);
    if ( v52 == -125 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_107;
    if ( v52 == -127 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
    {
LABEL_73:
      v20 = (char *)(ControlPc + 7);
      goto LABEL_9;
    }
  }
  if ( (*(_BYTE *)ControlPc & 0xFE) == 0x48 && *(_BYTE *)(ControlPc + 1) == 0x8D )
  {
    v21 = *(_BYTE *)(ControlPc + 2) & 7 | (8 * (*(_BYTE *)ControlPc & 1));
    if ( v21 )
    {
      if ( v21 == (*(_BYTE *)(v9 + 3) & 0xF) )
      {
        v51 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v51 != 96 )
        {
          if ( v51 != -96 )
            goto LABEL_9;
          goto LABEL_73;
        }
LABEL_107:
        v20 = (char *)(ControlPc + 4);
      }
    }
  }
LABEL_9:
  while ( (*v20 & 0xF8) == 0x58 )
  {
    v47 = 1LL;
LABEL_115:
    v20 += v47;
  }
  if ( (*v20 & 0xF0) == 0x40 && (v20[1] & 0xF8) == 0x58 )
  {
    v47 = 2LL;
    goto LABEL_115;
  }
  v22 = *v20;
  if ( *v20 == -14 )
    v22 = v20[1];
  v23 = v20 + 1;
  if ( *v20 != -14 )
    v23 = v20;
  if ( (unsigned __int8)(v22 + 62) <= 1u || v22 == -13 && (v22 = -13, v23[1] == -61) )
  {
LABEL_57:
    if ( (*(_BYTE *)ControlPc & 0xF8) != 0x48 )
      goto LABEL_61;
    v49 = *(_BYTE *)(ControlPc + 1);
    switch ( v49 )
    {
      case -125:
        ContextRecord->Rsp += *(char *)(ControlPc + 3);
LABEL_60:
        ControlPc += 4LL;
        goto LABEL_61;
      case -127:
        ContextRecord->Rsp += *(unsigned __int8 *)(ControlPc + 3) | (unsigned __int64)((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8);
        break;
      case -115:
        v89 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v89 == 96 )
        {
          v90 = *(&ContextRecord->Rax + v21);
          ContextRecord->Rsp = v90;
          ContextRecord->Rsp = v90 + *(char *)(ControlPc + 3);
          goto LABEL_60;
        }
        if ( v89 != -96 )
        {
          while ( 1 )
          {
LABEL_61:
            v50 = (DWORD64 *)ContextRecord->Rsp;
            if ( (*(_BYTE *)ControlPc & 0xF8) == 0x58 )
            {
              v76 = (unsigned __int64 *)ContextRecord->Rsp;
              v77 = *(_BYTE *)ControlPc & 7;
              *(&ContextRecord->Rax + v77) = *v76;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v77] = v76;
              v78 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)ControlPc & 0xF0) != 0x40 || (*(_BYTE *)(ControlPc + 1) & 0xF8) != 0x58 )
              {
                ContextRecord->Rip = *v50;
                ContextRecord->Rsp = (DWORD64)(v50 + 1);
                return v8;
              }
              v84 = (unsigned __int64 *)ContextRecord->Rsp;
              v85 = *(_BYTE *)(ControlPc + 1) & 7 | (unsigned __int64)(8 * (*(_BYTE *)ControlPc & 1u));
              *(&ContextRecord->Rax + v85) = *v84;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v85] = v84;
              v78 = 2LL;
            }
            ContextRecord->Rsp += 8LL;
            ControlPc += v78;
          }
        }
        ContextRecord->Rsp = *(&ContextRecord->Rax + v21)
                           + (*(unsigned __int8 *)(ControlPc + 3) | ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_61;
    }
    ControlPc += 7LL;
    goto LABEL_61;
  }
  if ( ((v22 + 23) & 0xFD) != 0 )
  {
    if ( v22 == -1 )
    {
      v22 = -1;
      if ( v23[1] == 37 )
        goto LABEL_57;
    }
    if ( (v22 & 0xF8) == 0x48 && v23[1] == -1 )
    {
      v48 = (v23[2] & 0x38) == 32;
      goto LABEL_56;
    }
  }
  else
  {
    if ( v22 == -21 )
      v53 = v23[1] + 2;
    else
      v53 = *(_DWORD *)(v23 + 1) + 5;
    BeginAddress = FunctionEntry->BeginAddress;
    v55 = (unsigned __int64)&v23[v53 - v11];
    if ( v55 < BeginAddress || v55 >= FunctionEntry->EndAddress )
    {
      v83 = (unsigned int *)sub_18000B108((__int64)FunctionEntry, v11, &v23[v53]);
      if ( !v83 )
        goto LABEL_57;
      v48 = v55 == *v83;
LABEL_56:
      if ( v48 )
        goto LABEL_57;
    }
    else if ( v55 == BeginAddress )
    {
      v48 = (*(_BYTE *)v9 & 0x20) == 0;
      goto LABEL_56;
    }
  }
LABEL_20:
  v24 = 0;
  v25 = ImageBase;
  v26 = v99;
  v27 = *EstablisherFrame;
  v96 = *EstablisherFrame;
  v94 = 0;
  while ( 1 )
  {
    v28 = ControlPc - ImageBase - v26->BeginAddress;
    v29 = (_BYTE *)(v25 + v26->UnwindInfoAddress);
    LODWORD(v30) = 0;
    v95 = v28;
    v31 = 0;
    v32 = v29[2];
    if ( v32 )
    {
      do
      {
        v33 = (unsigned __int8)v29[2 * (unsigned int)v30 + 5] >> 4;
        if ( v28 < (unsigned __int8)v29[2 * (unsigned int)v30 + 4] )
        {
          v86 = sub_180003F70(*(_WORD *)&v29[2 * (unsigned int)v30 + 4]);
          v27 = v96;
          LODWORD(v30) = v86 + v30;
        }
        else
        {
          v34 = v29[2 * (unsigned int)v30 + 5] & 0xF;
          if ( v34 > 5 )
          {
            v59 = v34 - 6;
            if ( v59 )
            {
              v68 = v59 - 1;
              if ( v68 )
              {
                v69 = v68 - 1;
                if ( v69 )
                {
                  v79 = v69 - 1;
                  if ( v79 )
                  {
                    if ( v79 != 1 )
LABEL_165:
                      RtlRaiseStatus(-1073741569);
                    v31 = 1;
                    v80 = ContextRecord->Rsp;
                    v81 = (DWORD64 *)(v80 + 8);
                    if ( !(_DWORD)v33 )
                      v81 = (DWORD64 *)ContextRecord->Rsp;
                    ContextRecord->Rip = *v81;
                    v82 = (DWORD64 *)(v80 + 32);
                    if ( !(_DWORD)v33 )
                      v82 = (DWORD64 *)(v80 + 24);
                    ContextRecord->Rsp = *v82;
                  }
                  else
                  {
                    v30 = (unsigned int)(v30 + 2);
                    v92 = (unsigned int)v33;
                    v93 = (struct _M128A *)(v27
                                          + *(unsigned __int16 *)&v29[2 * (unsigned int)(v30 - 1) + 4]
                                          + (*(unsigned __int16 *)&v29[2 * v30 + 4] << 16));
                    ContextRecord->FltSave.XmmRegisters[v92].Low = v93->Low;
                    ContextRecord->FltSave.XmmRegisters[v92].High = v93->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v33] = v93;
                  }
                }
                else
                {
                  v30 = (unsigned int)(v30 + 1);
                  v70 = (unsigned int)v33;
                  v71 = (struct _M128A *)(v27 + 16 * (unsigned int)*(unsigned __int16 *)&v29[2 * v30 + 4]);
                  ContextRecord->FltSave.XmmRegisters[v70].Low = v71->Low;
                  ContextRecord->FltSave.XmmRegisters[v70].High = v71->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v33] = v71;
                }
              }
              else
              {
                LODWORD(v30) = v30 + 2;
              }
            }
            else
            {
              LODWORD(v30) = v30 + 1;
            }
          }
          else if ( v34 == 5 )
          {
            v30 = (unsigned int)(v30 + 2);
            v91 = (unsigned __int64 *)(v27
                                     + (*(unsigned __int16 *)&v29[2 * v30 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v29[2 * (unsigned int)(v30 - 1) + 4]);
            *(&ContextRecord->Rax + v33) = *v91;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v33] = v91;
          }
          else if ( (v29[2 * (unsigned int)v30 + 5] & 0xF) != 0 )
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
                    goto LABEL_165;
                  v30 = (unsigned int)(v30 + 1);
                  v41 = (unsigned __int64 *)(v27 + 8 * (unsigned int)*(unsigned __int16 *)&v29[2 * v30 + 4]);
                  *(&ContextRecord->Rax + v33) = *v41;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v33] = v41;
                }
                else
                {
                  v58 = *(&ContextRecord->Rax + (v29[3] & 0xF));
                  ContextRecord->Rsp = v58;
                  ContextRecord->Rsp = v58 - (v29[3] & 0xF0);
                }
              }
              else
              {
                ContextRecord->Rsp += (unsigned int)(8 * v33 + 8);
              }
            }
            else
            {
              v30 = (unsigned int)(v30 + 1);
              v45 = *(unsigned __int16 *)&v29[2 * v30 + 4];
              if ( (_DWORD)v33 )
              {
                v30 = (unsigned int)(v30 + 1);
                v46 = (*(unsigned __int16 *)&v29[2 * v30 + 4] << 16) + v45;
              }
              else
              {
                v46 = 8 * v45;
              }
              ContextRecord->Rsp += v46;
            }
          }
          else
          {
            v35 = (unsigned __int64 *)ContextRecord->Rsp;
            *(&ContextRecord->Rax + v33) = *v35;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v33] = v35;
            ContextRecord->Rsp += 8LL;
          }
          LODWORD(v30) = v30 + 1;
        }
        v28 = v95;
        v32 = v29[2];
      }
      while ( (unsigned int)v30 < v32 );
      v24 = v94;
      v25 = ImageBase;
      v26 = v99;
    }
    if ( (*v29 & 0x20) == 0 )
      break;
    v72 = (unsigned int)v32 + 1;
    if ( (v32 & 1) == 0 )
      v72 = v32;
    v94 = ++v24;
    v26 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v29[2 * v72 + 4];
    v99 = v26;
    if ( v24 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !v31 )
  {
    v36 = (DWORD64 *)ContextRecord->Rsp;
    ContextRecord->Rip = *v36;
    ContextRecord->Rsp = (DWORD64)(v36 + 1);
  }
  if ( v97 )
  {
    v42 = (_BYTE *)(v25 + v26->UnwindInfoAddress);
    if ( (int)ControlPc - (int)v25 - v26->BeginAddress >= (unsigned __int8)v42[1]
      && ((*v42 >> 3) & (unsigned __int8)v97) != 0 )
    {
      v43 = (unsigned __int8)v42[2];
      v44 = v43 + 1;
      if ( (v43 & 1) == 0 )
        v44 = (unsigned __int8)v42[2];
      *HandlerData = &v42[2 * (v44 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v25 + *(unsigned int *)&v42[2 * v44 + 4]);
    }
  }
  return v8;
}

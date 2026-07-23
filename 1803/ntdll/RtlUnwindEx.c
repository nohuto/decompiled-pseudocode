/*
 * XREFs of RtlUnwindEx @ 0x18000DEA0
 * Callers:
 *     __C_specific_handler @ 0x18008B560 (__C_specific_handler.c)
 *     _local_unwind @ 0x18008BEA0 (_local_unwind.c)
 *     sub_18009E750 @ 0x18009E750 (sub_18009E750.c)
 *     sub_1800A1270 @ 0x1800A1270 (sub_1800A1270.c)
 *     RtlUnwind @ 0x1800F7110 (RtlUnwind.c)
 * Callees:
 *     sub_180003F70 @ 0x180003F70 (sub_180003F70.c)
 *     sub_18000B108 @ 0x18000B108 (sub_18000B108.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18000B210 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18000B304 @ 0x18000B304 (sub_18000B304.c)
 *     RtlVirtualUnwind @ 0x18000B340 (RtlVirtualUnwind.c)
 *     sub_18000E9E4 @ 0x18000E9E4 (sub_18000E9E4.c)
 *     RtlLookupFunctionEntry @ 0x18000EBA0 (RtlLookupFunctionEntry.c)
 *     sub_18000F2CC @ 0x18000F2CC (sub_18000F2CC.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_18008B410 @ 0x18008B410 (sub_18008B410.c)
 *     sub_18008B460 @ 0x18008B460 (sub_18008B460.c)
 *     sub_18009A360 @ 0x18009A360 (sub_18009A360.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x18009D670 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x18009EAD0 (RtlCaptureContext.c)
 *     sub_18009EB90 @ 0x18009EB90 (sub_18009EB90.c)
 *     nullsub_2 @ 0x18009F060 (nullsub_2.c)
 *     sub_18009F9A0 @ 0x18009F9A0 (sub_18009F9A0.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PVOID v6; // rsi
  struct _UNWIND_HISTORY_TABLE *v7; // rbx
  PCONTEXT v9; // rdi
  struct _CONTEXT *v10; // r13
  unsigned __int64 v11; // r15
  ULONG64 v12; // r14
  unsigned __int64 v13; // r12
  int v14; // r14d
  unsigned __int64 v15; // rsi
  unsigned int v16; // edi
  int v17; // r8d
  unsigned __int8 *v18; // rax
  _BYTE *v19; // rdx
  unsigned __int8 v20; // dl
  unsigned int v21; // ebx
  __int64 v22; // rdi
  char *v23; // r8
  char v24; // cl
  char v25; // cl
  char *v26; // rdx
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  _DWORD *p_BeginAddress; // r14
  int v30; // r12d
  char v31; // r8
  _BYTE *v32; // rdi
  __int64 v33; // rbx
  unsigned int v34; // esi
  unsigned __int8 v35; // cl
  _BYTE *v36; // rdx
  __int64 v37; // r9
  DWORD64 *v38; // rcx
  _BYTE *v39; // r8
  unsigned int v40; // ecx
  int v41; // ecx
  int v42; // eax
  unsigned __int64 v43; // rcx
  int v44; // ebx
  DWORD v45; // edx
  DWORD64 v46; // rax
  PEXCEPTION_RECORD v47; // rcx
  int v48; // eax
  struct _CONTEXT *v49; // rax
  int v50; // edx
  unsigned int v51; // edx
  struct _CONTEXT *v52; // rax
  __int64 v53; // rax
  char *v54; // r8
  char v55; // al
  char v56; // r9
  DWORD64 *v57; // rcx
  int v58; // eax
  char v59; // dl
  char v60; // al
  PEXCEPTION_RECORD v61; // r14
  DWORD64 *p_Rip; // rcx
  int v63; // eax
  int v64; // eax
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  unsigned __int64 BeginAddress; // rcx
  char v69; // cl
  int v70; // eax
  DWORD64 v71; // rcx
  unsigned __int8 v72; // r8
  __int16 v73; // dx
  int v74; // r10d
  unsigned int v75; // r9d
  int v76; // edx
  unsigned int v77; // r11d
  __int16 v78; // dx
  int v79; // ecx
  __int64 v80; // rdx
  M128A *v81; // rcx
  unsigned int v82; // eax
  ULONG_PTR v83; // rbx
  int v84; // eax
  ULONG_PTR v85; // rbx
  int v86; // eax
  __int64 v87; // r9
  __int64 v88; // rax
  struct _CONTEXT *v89; // r9
  PRUNTIME_FUNCTION v90; // r8
  PEXCEPTION_ROUTINE v91; // rax
  DWORD64 *v92; // rax
  DWORD64 *v93; // rcx
  DWORD64 Rip; // rax
  _DWORD *v95; // rax
  char v96; // r10
  __int64 i; // r15
  unsigned __int16 v98; // cx
  char v99; // al
  DWORD64 v100; // rcx
  ULONGLONG *v101; // r8
  M128A *v102; // rcx
  DWORD64 *Rsp; // rcx
  char v104; // [rsp+40h] [rbp-C0h]
  unsigned int v105; // [rsp+44h] [rbp-BCh]
  ULONG64 v106; // [rsp+48h] [rbp-B8h]
  PRUNTIME_FUNCTION v107; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v108; // [rsp+58h] [rbp-A8h]
  PCONTEXT v109; // [rsp+60h] [rbp-A0h]
  unsigned int v110; // [rsp+68h] [rbp-98h]
  unsigned __int64 ImageBase; // [rsp+70h] [rbp-90h] BYREF
  PVOID HandlerData; // [rsp+78h] [rbp-88h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+80h] [rbp-80h]
  unsigned __int64 EstablisherFrame; // [rsp+88h] [rbp-78h] BYREF
  PUNWIND_HISTORY_TABLE v115; // [rsp+90h] [rbp-70h]
  unsigned __int64 v116; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v117; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v118; // [rsp+A8h] [rbp-58h]
  PVOID v119; // [rsp+B0h] [rbp-50h]
  ULONG64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  ULONG64 v121; // [rsp+C8h] [rbp-38h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v122; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v123; // [rsp+D8h] [rbp-28h]
  PVOID v124; // [rsp+E0h] [rbp-20h]
  PCONTEXT v125; // [rsp+E8h] [rbp-18h]
  EXCEPTION_DISPOSITION (__cdecl *v126)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp-10h]
  PVOID v127; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v128; // [rsp+100h] [rbp+0h]
  int v129; // [rsp+108h] [rbp+8h]
  PVOID v130; // [rsp+110h] [rbp+10h]
  PCONTEXT v131; // [rsp+118h] [rbp+18h]
  int v132; // [rsp+120h] [rbp+20h] BYREF
  __int64 v133; // [rsp+128h] [rbp+28h]
  DWORD64 v134; // [rsp+130h] [rbp+30h]
  int v135; // [rsp+138h] [rbp+38h]
  struct _CONTEXT v136; // [rsp+1C0h] [rbp+C0h] BYREF

  v6 = TargetFrame;
  v7 = HistoryTable;
  v119 = TargetIp;
  v130 = TargetFrame;
  v131 = ContextRecord;
  v115 = HistoryTable;
  v118 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !(unsigned __int8)sub_18000F2CC(&v116, &v117) )
    RtlRaiseStatus(-1073741784);
  v109 = ContextRecord;
  v9 = ContextRecord;
  v10 = &v136;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (PEXCEPTION_RECORD)&v132;
    v134 = Rip;
    v132 = -1073741785;
    v133 = 0LL;
    v135 = 0;
  }
  v105 = 2;
  if ( !v6 )
    v105 = 6;
  v11 = 0LL;
  while ( 2 )
  {
    v12 = v9->Rip;
    v106 = v12;
    v107 = RtlLookupFunctionEntry(v12, &ImageBase, v7);
    if ( !v107 )
    {
      Rsp = (DWORD64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (DWORD64)(Rsp + 1);
      goto LABEL_56;
    }
    sub_18000E9E4(v10, v9);
    v13 = ImageBase;
    v14 = 0;
    v15 = ImageBase + v107->UnwindInfoAddress;
    v108 = 0LL;
    v16 = *(_BYTE *)v15 & 7;
    if ( v16 < 2 )
    {
      v17 = 0;
      v18 = (unsigned __int8 *)(v15 + 2);
      v19 = (_BYTE *)(ImageBase + v107->UnwindInfoAddress);
      if ( !*(_BYTE *)(v15 + 2) )
      {
        while ( (*v19 & 0x20) != 0 )
        {
          v87 = *v18;
          if ( (v87 & 1) != 0 )
            v87 = (unsigned int)(v87 + 1);
          if ( (unsigned int)++v17 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v19 = (_BYTE *)(ImageBase + *(unsigned int *)&v19[2 * v87 + 12]);
          v18 = v19 + 2;
          if ( v19[2] )
            goto LABEL_12;
        }
        v14 = 1;
      }
    }
LABEL_12:
    v20 = *(_BYTE *)(v15 + 3);
    v21 = v106 - ImageBase - v107->BeginAddress;
    if ( (v20 & 0xF) == 0 )
      goto LABEL_13;
    if ( v21 >= *(unsigned __int8 *)(v15 + 1) || (*(_BYTE *)v15 & 0x20) != 0 )
    {
      v69 = *(_BYTE *)(v15 + 3);
      v70 = v20;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v15 + 2); i = (unsigned int)sub_180003F70(v98)
                                                                        + (unsigned int)i )
      {
        v98 = *(_WORD *)(v15 + 2 * i + 4);
        if ( (HIBYTE(v98) & 0xF) == 3 )
          break;
      }
      if ( v21 < *(unsigned __int8 *)(v15 + 2 * i + 4) )
      {
LABEL_13:
        v11 = v10->Rsp;
        goto LABEL_14;
      }
      v70 = *(unsigned __int8 *)(v15 + 3);
      v69 = *(_BYTE *)(v15 + 3);
    }
    v11 = *(&v10->Rax + (v69 & 0xF)) - (v70 & 0xFFFFFFF0);
LABEL_14:
    EstablisherFrame = v11;
    if ( v14 )
      goto LABEL_27;
    if ( v16 >= 2 )
    {
      v72 = *(_BYTE *)(v15 + 2);
      if ( !v72 )
        goto LABEL_27;
      v73 = *(_WORD *)(v15 + 4);
      if ( (HIBYTE(v73) & 0xF) != 6 )
        goto LABEL_27;
      v12 = v106;
      v74 = v106 - v13;
      v75 = (unsigned __int8)v73;
      if ( (v73 & 0x1000) == 0 || (v76 = v107->EndAddress - (unsigned __int8)v73, v74 - v76 >= v75) )
      {
        v77 = 1;
        if ( v72 <= 1u )
          goto LABEL_27;
        while ( 1 )
        {
          v78 = *(_WORD *)(v15 + 2LL * v77 + 4);
          if ( (HIBYTE(v78) & 0xF) != 6 )
            goto LABEL_27;
          v79 = (unsigned __int8)v78 + (HIBYTE(v78) >> 4 << 8);
          if ( !v79 )
            goto LABEL_27;
          v76 = v107->EndAddress - v79;
          if ( v74 - v76 < v75 )
            break;
          if ( ++v77 >= v72 )
            goto LABEL_27;
        }
      }
      sub_18009A360(v13, v76, v74 - v76, (_DWORD)v107, (__int64)v10, 0LL, 0LL, 0LL);
      goto LABEL_80;
    }
    v12 = v106;
    v22 = 0LL;
    v23 = (char *)v106;
    v24 = *(_BYTE *)v106;
    if ( *(_BYTE *)v106 == 72 )
    {
      v60 = *(_BYTE *)(v106 + 1);
      if ( v60 == -125 && *(_BYTE *)(v106 + 2) == 0xC4 )
      {
        v23 = (char *)(v106 + 4);
        goto LABEL_18;
      }
      if ( v60 == -127 && *(_BYTE *)(v106 + 2) == 0xC4 )
      {
        v23 = (char *)(v106 + 7);
        goto LABEL_18;
      }
    }
    if ( (v24 & 0xFE) == 0x48 && *(_BYTE *)(v106 + 1) == 0x8D )
    {
      v58 = *(_BYTE *)(v106 + 2) & 7;
      v22 = v58 | (8 * (v24 & 1u));
      if ( v58 | (8 * (v24 & 1)) )
      {
        if ( (_DWORD)v22 == (*(_BYTE *)(v15 + 3) & 0xF) )
        {
          v59 = *(_BYTE *)(v106 + 2) & 0xF8;
          if ( v59 == 96 )
          {
            v23 = (char *)(v106 + 4);
          }
          else if ( v59 == -96 )
          {
            v23 = (char *)(v106 + 7);
          }
        }
      }
    }
LABEL_18:
    while ( 1 )
    {
      v25 = *v23;
      if ( (*v23 & 0xF8) != 0x58 )
        break;
      v53 = 1LL;
LABEL_144:
      v23 += v53;
    }
    v26 = v23 + 1;
    if ( (v25 & 0xF0) == 0x40 && (*v26 & 0xF8) == 0x58 )
    {
      v53 = 2LL;
      goto LABEL_144;
    }
    if ( v25 == -14 )
    {
      v25 = *v26;
      ++v23;
    }
    if ( (unsigned __int8)(v25 + 62) <= 1u || v25 == -13 && (v25 = -13, v23[1] == -61) )
    {
LABEL_74:
      v54 = (char *)v106;
      if ( (*(_BYTE *)v106 & 0xF8) != 0x48 )
        goto LABEL_77;
      v55 = *(_BYTE *)(v106 + 1);
      switch ( v55 )
      {
        case -125:
          v10->Rsp += *(char *)(v106 + 3);
          v54 = (char *)(v106 + 4);
          goto LABEL_77;
        case -127:
          v10->Rsp += *(unsigned __int8 *)(v106 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v106 + 4) | (*(unsigned __int16 *)(v106 + 5) << 8)) << 8);
          break;
        case -115:
          v99 = *(_BYTE *)(v106 + 2) & 0xF8;
          if ( v99 == 96 )
          {
            v100 = *(&v10->Rax + v22);
            v10->Rsp = v100;
            v10->Rsp = v100 + *(char *)(v106 + 3);
            v54 = (char *)(v106 + 4);
            goto LABEL_77;
          }
          if ( v99 != -96 )
          {
            while ( 1 )
            {
LABEL_77:
              v56 = *v54;
              v57 = (DWORD64 *)v10->Rsp;
              if ( (*v54 & 0xF8) == 0x58 )
              {
                *(&v10->Rax + (v56 & 7)) = *(_QWORD *)v10->Rsp;
                v88 = 1LL;
              }
              else
              {
                if ( (v56 & 0xF0) != 0x40 || (v96 = v54[1], (v96 & 0xF8) != 0x58) )
                {
                  v10->Rip = *v57;
                  v10->Rsp = (DWORD64)(v57 + 1);
                  goto LABEL_80;
                }
                *(&v10->Rax + (v96 & 7 | (unsigned __int64)(8 * (v56 & 1u)))) = *(_QWORD *)v10->Rsp;
                v88 = 2LL;
              }
              v10->Rsp += 8LL;
              v54 += v88;
            }
          }
          v10->Rsp = *(&v10->Rax + v22)
                   + (*(unsigned __int8 *)(v106 + 3) | ((*(unsigned __int8 *)(v106 + 4) | (*(unsigned __int16 *)(v106 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_77;
      }
      v54 = (char *)(v106 + 7);
      goto LABEL_77;
    }
    if ( ((v25 + 23) & 0xFD) != 0 )
    {
      if ( v25 == -1 )
      {
        v25 = -1;
        if ( v23[1] == 37 )
          goto LABEL_74;
      }
      if ( (v25 & 0xF8) == 0x48 && v23[1] == -1 && (v23[2] & 0x38) == 0x20 )
        goto LABEL_74;
    }
    else
    {
      if ( v25 == -21 )
        v64 = v23[1] + 2;
      else
        v64 = *(_DWORD *)(v23 + 1) + 5;
      v65 = v64;
      v66 = (__int64)v107;
      v67 = (unsigned __int64)&v23[v65 - v13];
      BeginAddress = v107->BeginAddress;
      if ( v67 >= BeginAddress )
      {
        if ( v67 < v107->EndAddress )
        {
          if ( v67 == BeginAddress && (*(_BYTE *)v15 & 0x20) == 0 )
            goto LABEL_74;
          goto LABEL_27;
        }
        v66 = (__int64)v107;
      }
      v95 = (_DWORD *)sub_18000B108(v66, v13, (void *)(v67 + v13));
      if ( !v95 || v67 == *v95 )
        goto LABEL_74;
    }
LABEL_27:
    v27 = 0;
    v28 = ImageBase;
    p_BeginAddress = &v107->BeginAddress;
    v30 = v106 - ImageBase;
    v110 = 0;
    while ( 1 )
    {
      v31 = 0;
      v32 = (_BYTE *)(v28 + (unsigned int)p_BeginAddress[2]);
      v104 = 0;
      v33 = 0LL;
      v34 = v30 - *p_BeginAddress;
      v35 = v32[2];
      if ( v35 )
      {
        do
        {
          v36 = &v32[2 * v33];
          v37 = (unsigned __int8)v36[5] >> 4;
          if ( v34 < (unsigned __int8)v36[4] )
          {
            v33 = (unsigned int)sub_180003F70(*((_WORD *)v36 + 2)) + (unsigned int)v33;
          }
          else
          {
            if ( (v32[2 * v33 + 5] & 0xF) != 0 )
            {
              if ( (v32[2 * v33 + 5] & 0xF) == 4 )
              {
                v33 = (unsigned int)(v33 + 1);
                *(&v10->Rax + v37) = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v32[2 * v33 + 4] + v11);
              }
              else
              {
                switch ( v32[2 * v33 + 5] & 0xF )
                {
                  case 1:
                    v33 = (unsigned int)(v33 + 1);
                    v50 = *(unsigned __int16 *)&v32[2 * v33 + 4];
                    if ( (_DWORD)v37 )
                    {
                      v33 = (unsigned int)(v33 + 1);
                      v51 = (*(unsigned __int16 *)&v32[2 * v33 + 4] << 16) + v50;
                    }
                    else
                    {
                      v51 = 8 * v50;
                    }
                    v10->Rsp += v51;
                    break;
                  case 2:
                    v10->Rsp += (unsigned int)(8 * v37 + 8);
                    break;
                  case 3:
                    v71 = *(&v10->Rax + (v32[3] & 0xF));
                    v10->Rsp = v71;
                    v10->Rsp = v71 - (v32[3] & 0xF0);
                    break;
                  case 5:
                    v33 = (unsigned int)(v33 + 2);
                    *(&v10->Rax + v37) = *(_QWORD *)(*(unsigned __int16 *)&v32[2 * (unsigned int)(v33 - 1) + 4]
                                                   + (*(unsigned __int16 *)&v32[2 * v33 + 4] << 16)
                                                   + v11);
                    break;
                  case 6:
                    LODWORD(v33) = v33 + 1;
                    break;
                  case 7:
                    LODWORD(v33) = v33 + 2;
                    break;
                  case 8:
                    v33 = (unsigned int)(v33 + 1);
                    v80 = 16 * (unsigned int)*(unsigned __int16 *)&v32[2 * v33 + 4];
                    v81 = &v10->FltSave.XmmRegisters[(unsigned int)v37];
                    v81->Low = *(_QWORD *)(v80 + v11);
                    v81->High = *(_QWORD *)(v80 + v11 + 8);
                    break;
                  case 9:
                    v33 = (unsigned int)(v33 + 2);
                    v101 = (ULONGLONG *)(v11
                                       + *(unsigned __int16 *)&v32[2 * (unsigned int)(v33 - 1) + 4]
                                       + (*(unsigned __int16 *)&v32[2 * v33 + 4] << 16));
                    v102 = &v10->FltSave.XmmRegisters[(unsigned int)v37];
                    v102->Low = *v101;
                    v102->High = v101[1];
                    break;
                  case 0xA:
                    v92 = (DWORD64 *)v10->Rsp;
                    v104 = 1;
                    v93 = v92 + 3;
                    if ( (_DWORD)v37 )
                    {
                      ++v92;
                      ++v93;
                    }
                    v10->Rip = *v92;
                    v10->Rsp = *v93;
                    break;
                  default:
                    RtlRaiseStatus(-1073741569);
                }
              }
            }
            else
            {
              *(&v10->Rax + v37) = *(_QWORD *)v10->Rsp;
              v10->Rsp += 8LL;
            }
            v33 = (unsigned int)(v33 + 1);
          }
          v35 = v32[2];
        }
        while ( (unsigned int)v33 < v35 );
        v31 = v104;
        v27 = v110;
      }
      if ( (*v32 & 0x20) == 0 )
        break;
      v82 = v35;
      if ( (v35 & 1) != 0 )
        v82 = v35 + 1;
      v110 = ++v27;
      p_BeginAddress = &v32[2 * v82 + 4];
      if ( v27 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v28 = ImageBase;
    }
    if ( !v31 )
    {
      v38 = (DWORD64 *)v10->Rsp;
      v10->Rip = *v38;
      v10->Rsp = (DWORD64)(v38 + 1);
    }
    v13 = ImageBase;
    v39 = (_BYTE *)(ImageBase + (unsigned int)p_BeginAddress[2]);
    v40 = v106 - ImageBase - *p_BeginAddress;
    v12 = v106;
    if ( v40 < (unsigned __int8)v39[1] || (*v39 & 0x10) == 0 )
    {
LABEL_80:
      v43 = 0LL;
      goto LABEL_43;
    }
    v41 = (unsigned __int8)v39[2];
    v42 = v41 + 1;
    if ( (v41 & 1) == 0 )
      v42 = (unsigned __int8)v39[2];
    v43 = ImageBase + *(unsigned int *)&v39[2 * v42 + 4];
    HandlerData = &v39[2 * (v42 + 2) + 4];
    v108 = v43;
LABEL_43:
    if ( (v11 & 7) != 0 || v11 < v116 || v11 >= v117 || (v6 = v130) != 0LL && (unsigned __int64)v130 < v11 )
      RtlRaiseStatus(-1073741784);
    if ( v43 )
    {
      v44 = 0;
      v45 = v105;
      v124 = v119;
      do
      {
        if ( v6 == (PVOID)v11 )
          v45 |= 0x20u;
        v9 = v109;
        v46 = (DWORD64)v118;
        v126 = (EXCEPTION_DISPOSITION (__cdecl *)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID))v43;
        v47 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v45;
        v109->Rax = v46;
        v122 = v107;
        v127 = HandlerData;
        v105 = v45 & 0xFFFFFF9F;
        v128 = v115;
        ControlPc = v12;
        v121 = v13;
        v123 = v11;
        v125 = v109;
        v129 = v44;
        v48 = sub_18009F9A0(v47, v11, v109, &ControlPc) - 1;
        if ( v48 )
        {
          if ( v48 != 2 )
            RtlRaiseStatus(-1073741786);
          v13 = v121;
          v12 = ControlPc;
          ImageBase = v121;
          v107 = v122;
          sub_18000E9E4(v131, v125);
          v109 = v89;
          v9 = v89;
          v10 = &v136;
          sub_18000E9E4(&v136, v89);
          v91 = RtlVirtualUnwind(2u, v13, v12, v90, &v136, &HandlerData, &EstablisherFrame, 0LL);
          v108 = (unsigned __int64)v91;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v91 != v126 || (v11 = EstablisherFrame, EstablisherFrame != v123) || HandlerData != v127 )
              __fastfail(0x27u);
          }
          else
          {
            v11 = v123;
            v108 = (unsigned __int64)v126;
            HandlerData = v127;
            EstablisherFrame = v123;
          }
          v45 = v105 | 0x40;
          v44 = v129;
          v105 |= 0x40u;
          v115 = v128;
        }
        else
        {
          v45 = v105;
          if ( (PVOID)v11 != v6 )
          {
            v49 = v109;
            v109 = v10;
            v9 = v10;
            v10 = v49;
          }
        }
        v43 = v108;
      }
      while ( (v45 & 0x40) != 0 );
    }
    else if ( (PVOID)v11 == v130 )
    {
      v9 = v109;
    }
    else
    {
      v52 = v109;
      v9 = v10;
      v109 = v10;
      v10 = v52;
    }
LABEL_56:
    if ( (v11 & 7) != 0 || v11 < v116 || v11 >= v117 )
    {
      if ( (PVOID)v11 == v6 )
        goto LABEL_91;
      if ( v12 == v9->Rip )
        RtlRaiseStatus(-1073741569);
      ZwRaiseException(ExceptionRecorda, v9, 0);
    }
    else
    {
      if ( (PVOID)v11 != v6 )
      {
        v7 = v115;
        continue;
      }
LABEL_91:
      v61 = ExceptionRecorda;
      p_Rip = &v9->Rip;
      v9->Rax = (DWORD64)v118;
      if ( v61->ExceptionCode != -2147483607 )
        *p_Rip = (DWORD64)v119;
      nullsub_2(p_Rip);
      if ( v61->ExceptionCode == -2147483610 )
      {
        v83 = v61->ExceptionInformation[0];
        LOBYTE(v84) = LdrControlFlowGuardEnforced();
        if ( v84 && !sub_18000B304(*(PVOID *)(v83 + 16)) )
          __fastfail(0xDu);
        RtlGuardCheckLongJumpTarget(*(PVOID *)(v83 + 80), 0, 0LL);
      }
      else
      {
        if ( v61->ExceptionCode == -2147483607 )
        {
          if ( v61->NumberParameters )
          {
            v85 = v61->ExceptionInformation[0];
            LOBYTE(v86) = LdrControlFlowGuardEnforced();
            if ( v86 )
            {
              if ( (unsigned int)sub_18001F704() )
                sub_18008B460(v85);
              else
                sub_18008B410(v85);
            }
          }
        }
        LOBYTE(v63) = LdrControlFlowGuardEnforced();
        if ( v63 )
        {
          if ( !sub_18000B304((PVOID)v9->Rsp) )
            __fastfail(0xDu);
        }
      }
      sub_18009EB90(v9, v61);
    }
    break;
  }
}

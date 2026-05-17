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
  int v45; // edx
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
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  unsigned __int64 BeginAddress; // rcx
  char v68; // cl
  int v69; // eax
  DWORD64 v70; // rcx
  unsigned __int8 v71; // r8
  __int16 v72; // dx
  int v73; // r10d
  unsigned int v74; // r9d
  int v75; // edx
  unsigned int v76; // r11d
  __int16 v77; // dx
  int v78; // ecx
  __int64 v79; // rdx
  M128A *v80; // rcx
  unsigned int v81; // eax
  ULONG_PTR v82; // rbx
  ULONG_PTR v83; // rbx
  __int64 v84; // r9
  __int64 v85; // rax
  struct _CONTEXT *v86; // r9
  PRUNTIME_FUNCTION v87; // r8
  PEXCEPTION_ROUTINE v88; // rax
  DWORD64 *v89; // rax
  DWORD64 *v90; // rcx
  DWORD64 Rip; // rax
  _DWORD *v92; // rax
  char v93; // r10
  __int64 i; // r15
  unsigned __int16 v95; // cx
  char v96; // al
  DWORD64 v97; // rcx
  ULONGLONG *v98; // r8
  M128A *v99; // rcx
  DWORD64 *Rsp; // rcx
  char v101; // [rsp+40h] [rbp-C0h]
  unsigned int v102; // [rsp+44h] [rbp-BCh]
  ULONG64 v103; // [rsp+48h] [rbp-B8h]
  PRUNTIME_FUNCTION v104; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v105; // [rsp+58h] [rbp-A8h]
  PCONTEXT v106; // [rsp+60h] [rbp-A0h]
  unsigned int v107; // [rsp+68h] [rbp-98h]
  unsigned __int64 ImageBase; // [rsp+70h] [rbp-90h] BYREF
  PVOID HandlerData; // [rsp+78h] [rbp-88h] BYREF
  PEXCEPTION_RECORD v110; // [rsp+80h] [rbp-80h]
  unsigned __int64 EstablisherFrame; // [rsp+88h] [rbp-78h] BYREF
  PUNWIND_HISTORY_TABLE v112; // [rsp+90h] [rbp-70h]
  unsigned __int64 v113; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v114; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v115; // [rsp+A8h] [rbp-58h]
  PVOID v116; // [rsp+B0h] [rbp-50h]
  ULONG64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  ULONG64 v118; // [rsp+C8h] [rbp-38h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v119; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v120; // [rsp+D8h] [rbp-28h]
  PVOID v121; // [rsp+E0h] [rbp-20h]
  PCONTEXT v122; // [rsp+E8h] [rbp-18h]
  EXCEPTION_ROUTINE *v123; // [rsp+F0h] [rbp-10h]
  PVOID v124; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v125; // [rsp+100h] [rbp+0h]
  int v126; // [rsp+108h] [rbp+8h]
  PVOID v127; // [rsp+110h] [rbp+10h]
  PCONTEXT v128; // [rsp+118h] [rbp+18h]
  int v129; // [rsp+120h] [rbp+20h] BYREF
  __int64 v130; // [rsp+128h] [rbp+28h]
  DWORD64 v131; // [rsp+130h] [rbp+30h]
  int v132; // [rsp+138h] [rbp+38h]
  struct _CONTEXT v133; // [rsp+1C0h] [rbp+C0h] BYREF

  v6 = TargetFrame;
  v7 = HistoryTable;
  v116 = TargetIp;
  v127 = TargetFrame;
  v128 = ContextRecord;
  v112 = HistoryTable;
  v115 = ReturnValue;
  v110 = ExceptionRecord;
  if ( !(unsigned __int8)sub_18000F2CC(&v113, &v114) )
    RtlRaiseStatus(3221225512LL);
  v106 = ContextRecord;
  v9 = ContextRecord;
  v10 = &v133;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    v110 = (PEXCEPTION_RECORD)&v129;
    v131 = Rip;
    v129 = -1073741785;
    v130 = 0LL;
    v132 = 0;
  }
  v102 = 2;
  if ( !v6 )
    v102 = 6;
  v11 = 0LL;
  while ( 2 )
  {
    v12 = v9->Rip;
    v103 = v12;
    v104 = RtlLookupFunctionEntry(v12, &ImageBase, v7);
    if ( !v104 )
    {
      Rsp = (DWORD64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (DWORD64)(Rsp + 1);
      goto LABEL_56;
    }
    sub_18000E9E4(v10, v9);
    v13 = ImageBase;
    v14 = 0;
    v15 = ImageBase + v104->UnwindInfoAddress;
    v105 = 0LL;
    v16 = *(_BYTE *)v15 & 7;
    if ( v16 < 2 )
    {
      v17 = 0;
      v18 = (unsigned __int8 *)(v15 + 2);
      v19 = (_BYTE *)(ImageBase + v104->UnwindInfoAddress);
      if ( !*(_BYTE *)(v15 + 2) )
      {
        while ( (*v19 & 0x20) != 0 )
        {
          v84 = *v18;
          if ( (v84 & 1) != 0 )
            v84 = (unsigned int)(v84 + 1);
          if ( (unsigned int)++v17 > 0x20 )
            RtlRaiseStatus(3221225727LL);
          v19 = (_BYTE *)(ImageBase + *(unsigned int *)&v19[2 * v84 + 12]);
          v18 = v19 + 2;
          if ( v19[2] )
            goto LABEL_12;
        }
        v14 = 1;
      }
    }
LABEL_12:
    v20 = *(_BYTE *)(v15 + 3);
    v21 = v103 - ImageBase - v104->BeginAddress;
    if ( (v20 & 0xF) == 0 )
      goto LABEL_13;
    if ( v21 >= *(unsigned __int8 *)(v15 + 1) || (*(_BYTE *)v15 & 0x20) != 0 )
    {
      v68 = *(_BYTE *)(v15 + 3);
      v69 = v20;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v15 + 2); i = (unsigned int)sub_180003F70(v95)
                                                                        + (unsigned int)i )
      {
        v95 = *(_WORD *)(v15 + 2 * i + 4);
        if ( (HIBYTE(v95) & 0xF) == 3 )
          break;
      }
      if ( v21 < *(unsigned __int8 *)(v15 + 2 * i + 4) )
      {
LABEL_13:
        v11 = v10->Rsp;
        goto LABEL_14;
      }
      v69 = *(unsigned __int8 *)(v15 + 3);
      v68 = *(_BYTE *)(v15 + 3);
    }
    v11 = *(&v10->Rax + (v68 & 0xF)) - (v69 & 0xFFFFFFF0);
LABEL_14:
    EstablisherFrame = v11;
    if ( v14 )
      goto LABEL_27;
    if ( v16 >= 2 )
    {
      v71 = *(_BYTE *)(v15 + 2);
      if ( !v71 )
        goto LABEL_27;
      v72 = *(_WORD *)(v15 + 4);
      if ( (HIBYTE(v72) & 0xF) != 6 )
        goto LABEL_27;
      v12 = v103;
      v73 = v103 - v13;
      v74 = (unsigned __int8)v72;
      if ( (v72 & 0x1000) == 0 || (v75 = v104->EndAddress - (unsigned __int8)v72, v73 - v75 >= v74) )
      {
        v76 = 1;
        if ( v71 <= 1u )
          goto LABEL_27;
        while ( 1 )
        {
          v77 = *(_WORD *)(v15 + 2LL * v76 + 4);
          if ( (HIBYTE(v77) & 0xF) != 6 )
            goto LABEL_27;
          v78 = (unsigned __int8)v77 + (HIBYTE(v77) >> 4 << 8);
          if ( !v78 )
            goto LABEL_27;
          v75 = v104->EndAddress - v78;
          if ( v73 - v75 < v74 )
            break;
          if ( ++v76 >= v71 )
            goto LABEL_27;
        }
      }
      sub_18009A360(v13, v75, v73 - v75, (_DWORD)v104, (__int64)v10, 0LL, 0LL, 0LL);
      goto LABEL_80;
    }
    v12 = v103;
    v22 = 0LL;
    v23 = (char *)v103;
    v24 = *(_BYTE *)v103;
    if ( *(_BYTE *)v103 == 72 )
    {
      v60 = *(_BYTE *)(v103 + 1);
      if ( v60 == -125 && *(_BYTE *)(v103 + 2) == 0xC4 )
      {
        v23 = (char *)(v103 + 4);
        goto LABEL_18;
      }
      if ( v60 == -127 && *(_BYTE *)(v103 + 2) == 0xC4 )
      {
        v23 = (char *)(v103 + 7);
        goto LABEL_18;
      }
    }
    if ( (v24 & 0xFE) == 0x48 && *(_BYTE *)(v103 + 1) == 0x8D )
    {
      v58 = *(_BYTE *)(v103 + 2) & 7;
      v22 = v58 | (8 * (v24 & 1u));
      if ( v58 | (8 * (v24 & 1)) )
      {
        if ( (_DWORD)v22 == (*(_BYTE *)(v15 + 3) & 0xF) )
        {
          v59 = *(_BYTE *)(v103 + 2) & 0xF8;
          if ( v59 == 96 )
          {
            v23 = (char *)(v103 + 4);
          }
          else if ( v59 == -96 )
          {
            v23 = (char *)(v103 + 7);
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
      v54 = (char *)v103;
      if ( (*(_BYTE *)v103 & 0xF8) != 0x48 )
        goto LABEL_77;
      v55 = *(_BYTE *)(v103 + 1);
      switch ( v55 )
      {
        case -125:
          v10->Rsp += *(char *)(v103 + 3);
          v54 = (char *)(v103 + 4);
          goto LABEL_77;
        case -127:
          v10->Rsp += *(unsigned __int8 *)(v103 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v103 + 4) | (*(unsigned __int16 *)(v103 + 5) << 8)) << 8);
          break;
        case -115:
          v96 = *(_BYTE *)(v103 + 2) & 0xF8;
          if ( v96 == 96 )
          {
            v97 = *(&v10->Rax + v22);
            v10->Rsp = v97;
            v10->Rsp = v97 + *(char *)(v103 + 3);
            v54 = (char *)(v103 + 4);
            goto LABEL_77;
          }
          if ( v96 != -96 )
          {
            while ( 1 )
            {
LABEL_77:
              v56 = *v54;
              v57 = (DWORD64 *)v10->Rsp;
              if ( (*v54 & 0xF8) == 0x58 )
              {
                *(&v10->Rax + (v56 & 7)) = *(_QWORD *)v10->Rsp;
                v85 = 1LL;
              }
              else
              {
                if ( (v56 & 0xF0) != 0x40 || (v93 = v54[1], (v93 & 0xF8) != 0x58) )
                {
                  v10->Rip = *v57;
                  v10->Rsp = (DWORD64)(v57 + 1);
                  goto LABEL_80;
                }
                *(&v10->Rax + (v93 & 7 | (unsigned __int64)(8 * (v56 & 1u)))) = *(_QWORD *)v10->Rsp;
                v85 = 2LL;
              }
              v10->Rsp += 8LL;
              v54 += v85;
            }
          }
          v10->Rsp = *(&v10->Rax + v22)
                   + (*(unsigned __int8 *)(v103 + 3) | ((*(unsigned __int8 *)(v103 + 4) | (*(unsigned __int16 *)(v103 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_77;
      }
      v54 = (char *)(v103 + 7);
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
        v63 = v23[1] + 2;
      else
        v63 = *(_DWORD *)(v23 + 1) + 5;
      v64 = v63;
      v65 = (__int64)v104;
      v66 = (unsigned __int64)&v23[v64 - v13];
      BeginAddress = v104->BeginAddress;
      if ( v66 >= BeginAddress )
      {
        if ( v66 < v104->EndAddress )
        {
          if ( v66 == BeginAddress && (*(_BYTE *)v15 & 0x20) == 0 )
            goto LABEL_74;
          goto LABEL_27;
        }
        v65 = (__int64)v104;
      }
      v92 = (_DWORD *)sub_18000B108(v65, v13, v66 + v13);
      if ( !v92 || v66 == *v92 )
        goto LABEL_74;
    }
LABEL_27:
    v27 = 0;
    v28 = ImageBase;
    p_BeginAddress = &v104->BeginAddress;
    v30 = v103 - ImageBase;
    v107 = 0;
    while ( 1 )
    {
      v31 = 0;
      v32 = (_BYTE *)(v28 + (unsigned int)p_BeginAddress[2]);
      v101 = 0;
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
                    v70 = *(&v10->Rax + (v32[3] & 0xF));
                    v10->Rsp = v70;
                    v10->Rsp = v70 - (v32[3] & 0xF0);
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
                    v79 = 16 * (unsigned int)*(unsigned __int16 *)&v32[2 * v33 + 4];
                    v80 = &v10->FltSave.XmmRegisters[(unsigned int)v37];
                    v80->Low = *(_QWORD *)(v79 + v11);
                    v80->High = *(_QWORD *)(v79 + v11 + 8);
                    break;
                  case 9:
                    v33 = (unsigned int)(v33 + 2);
                    v98 = (ULONGLONG *)(v11
                                      + *(unsigned __int16 *)&v32[2 * (unsigned int)(v33 - 1) + 4]
                                      + (*(unsigned __int16 *)&v32[2 * v33 + 4] << 16));
                    v99 = &v10->FltSave.XmmRegisters[(unsigned int)v37];
                    v99->Low = *v98;
                    v99->High = v98[1];
                    break;
                  case 0xA:
                    v89 = (DWORD64 *)v10->Rsp;
                    v101 = 1;
                    v90 = v89 + 3;
                    if ( (_DWORD)v37 )
                    {
                      ++v89;
                      ++v90;
                    }
                    v10->Rip = *v89;
                    v10->Rsp = *v90;
                    break;
                  default:
                    RtlRaiseStatus(3221225727LL);
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
        v31 = v101;
        v27 = v107;
      }
      if ( (*v32 & 0x20) == 0 )
        break;
      v81 = v35;
      if ( (v35 & 1) != 0 )
        v81 = v35 + 1;
      v107 = ++v27;
      p_BeginAddress = &v32[2 * v81 + 4];
      if ( v27 > 0x20 )
        RtlRaiseStatus(3221225727LL);
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
    v40 = v103 - ImageBase - *p_BeginAddress;
    v12 = v103;
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
    v105 = v43;
LABEL_43:
    if ( (v11 & 7) != 0 || v11 < v113 || v11 >= v114 || (v6 = v127) != 0LL && (unsigned __int64)v127 < v11 )
      RtlRaiseStatus(3221225512LL);
    if ( v43 )
    {
      v44 = 0;
      v45 = v102;
      v121 = v116;
      do
      {
        if ( v6 == (PVOID)v11 )
          v45 |= 0x20u;
        v9 = v106;
        v46 = (DWORD64)v115;
        v123 = (EXCEPTION_ROUTINE *)v43;
        v47 = v110;
        v110->ExceptionFlags = v45;
        v106->Rax = v46;
        v119 = v104;
        v124 = HandlerData;
        v102 = v45 & 0xFFFFFF9F;
        v125 = v112;
        ControlPc = v12;
        v118 = v13;
        v120 = v11;
        v122 = v106;
        v126 = v44;
        v48 = sub_18009F9A0(v47, v11, v106, &ControlPc) - 1;
        if ( v48 )
        {
          if ( v48 != 2 )
            RtlRaiseStatus(3221225510LL);
          v13 = v118;
          v12 = ControlPc;
          ImageBase = v118;
          v104 = v119;
          sub_18000E9E4(v128, v122);
          v106 = v86;
          v9 = v86;
          v10 = &v133;
          sub_18000E9E4(&v133, v86);
          v88 = RtlVirtualUnwind(2u, v13, v12, v87, &v133, &HandlerData, &EstablisherFrame, 0LL);
          v105 = (unsigned __int64)v88;
          if ( ((*((_QWORD *)&xmmword_18016F370 + 1) >> 12) & 3) == 1 )
          {
            if ( v88 != v123 || (v11 = EstablisherFrame, EstablisherFrame != v120) || HandlerData != v124 )
              __fastfail(0x27u);
          }
          else
          {
            v11 = v120;
            v105 = (unsigned __int64)v123;
            HandlerData = v124;
            EstablisherFrame = v120;
          }
          v45 = v102 | 0x40;
          v44 = v126;
          v102 |= 0x40u;
          v112 = v125;
        }
        else
        {
          v45 = v102;
          if ( (PVOID)v11 != v6 )
          {
            v49 = v106;
            v106 = v10;
            v9 = v10;
            v10 = v49;
          }
        }
        v43 = v105;
      }
      while ( (v45 & 0x40) != 0 );
    }
    else if ( (PVOID)v11 == v127 )
    {
      v9 = v106;
    }
    else
    {
      v52 = v106;
      v9 = v10;
      v106 = v10;
      v10 = v52;
    }
LABEL_56:
    if ( (v11 & 7) != 0 || v11 < v113 || v11 >= v114 )
    {
      if ( (PVOID)v11 == v6 )
        goto LABEL_91;
      if ( v12 == v9->Rip )
        RtlRaiseStatus(3221225727LL);
      ZwRaiseException(v110, v9, 0LL);
    }
    else
    {
      if ( (PVOID)v11 != v6 )
      {
        v7 = v112;
        continue;
      }
LABEL_91:
      v61 = v110;
      p_Rip = &v9->Rip;
      v9->Rax = (DWORD64)v115;
      if ( v61->ExceptionCode != -2147483607 )
        *p_Rip = (DWORD64)v116;
      nullsub_2(p_Rip);
      if ( v61->ExceptionCode == -2147483610 )
      {
        v82 = v61->ExceptionInformation[0];
        if ( (unsigned int)LdrControlFlowGuardEnforced() && !sub_18000B304(*(PVOID *)(v82 + 16)) )
          __fastfail(0xDu);
        RtlGuardCheckLongJumpTarget(*(_QWORD *)(v82 + 80), 0, 0LL);
      }
      else
      {
        if ( v61->ExceptionCode == -2147483607 )
        {
          if ( v61->NumberParameters )
          {
            v83 = v61->ExceptionInformation[0];
            if ( (unsigned int)LdrControlFlowGuardEnforced() )
            {
              if ( (unsigned int)sub_18001F704() )
                sub_18008B460(v83);
              else
                sub_18008B410(v83);
            }
          }
        }
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
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

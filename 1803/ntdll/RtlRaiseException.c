/*
 * XREFs of RtlRaiseException @ 0x18000BB80
 * Callers:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlGetActiveActivationContext @ 0x180041750 (RtlGetActiveActivationContext.c)
 *     sub_18004E114 @ 0x18004E114 (sub_18004E114.c)
 *     RtlDeactivateActivationContext @ 0x180072C10 (RtlDeactivateActivationContext.c)
 *     sub_180072D14 @ 0x180072D14 (sub_180072D14.c)
 *     TpCheckTerminateWorker @ 0x180073720 (TpCheckTerminateWorker.c)
 *     sub_180076128 @ 0x180076128 (sub_180076128.c)
 *     PssNtValidateDescriptor @ 0x180084F10 (PssNtValidateDescriptor.c)
 *     sub_180093600 @ 0x180093600 (sub_180093600.c)
 *     KiRaiseUserExceptionDispatcher @ 0x18009E8A0 (KiRaiseUserExceptionDispatcher.c)
 *     sub_1800E224C @ 0x1800E224C (sub_1800E224C.c)
 *     sub_1800EEFAC @ 0x1800EEFAC (sub_1800EEFAC.c)
 *     sub_1800F4894 @ 0x1800F4894 (sub_1800F4894.c)
 *     sub_18010861C @ 0x18010861C (sub_18010861C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 * Callees:
 *     sub_180003F70 @ 0x180003F70 (sub_180003F70.c)
 *     sub_18000B108 @ 0x18000B108 (sub_18000B108.c)
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlLookupFunctionEntry @ 0x18000EBA0 (RtlLookupFunctionEntry.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_18009A360 @ 0x18009A360 (sub_18009A360.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x18009D670 (ZwRaiseException.c)
 *     sub_18009EA50 @ 0x18009EA50 (sub_18009EA50.c)
 *     sub_18009EB90 @ 0x18009EB90 (sub_18009EB90.c)
 *     nullsub_2 @ 0x18009F060 (nullsub_2.c)
 *     __chkstk @ 0x18009F810 (__chkstk.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  unsigned int v1; // ebx
  ULONG64 v2; // rdi
  PRUNTIME_FUNCTION v3; // rax
  unsigned int *p_BeginAddress; // r13
  int v5; // r12d
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned int v9; // edx
  _BYTE *v10; // rax
  _BYTE *v11; // rcx
  unsigned int v12; // esi
  _QWORD *v13; // rdx
  int v14; // r9d
  __int64 v15; // r14
  char *v16; // r8
  char v17; // cl
  char *v18; // r9
  unsigned __int64 v19; // rax
  unsigned int v20; // r12d
  int v21; // edi
  unsigned int v22; // r14d
  _BYTE *v23; // rsi
  __int64 v24; // rbx
  char v25; // r15
  unsigned __int8 v26; // cl
  __int64 v27; // r9
  unsigned int v28; // ecx
  ULONG64 v29; // rax
  PEXCEPTION_RECORD v30; // rdi
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  void *v34; // rsp
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rax
  int v39; // r8d
  unsigned int v40; // r8d
  __int64 v41; // rax
  bool v42; // zf
  char v43; // al
  __int64 v44; // rax
  int v45; // eax
  char v46; // cl
  char v47; // al
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  unsigned __int8 v51; // cl
  int v52; // eax
  unsigned int v53; // ecx
  __int16 v54; // cx
  unsigned int v55; // esi
  int v56; // r8d
  unsigned int v57; // ecx
  unsigned int v58; // r11d
  unsigned int v59; // r10d
  __int16 v60; // r14
  int v61; // r9d
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  ULONG64 *v64; // rdx
  __int64 v65; // rcx
  ULONG64 v66; // rax
  __int64 v67; // r13
  unsigned int v68; // r9d
  int v69; // r8d
  __int64 v70; // rax
  unsigned int v71; // ecx
  ULONG64 *v72; // rax
  _QWORD **v73; // rax
  _DWORD *v74; // rax
  int v75; // eax
  __int64 v76; // r14
  unsigned __int16 v77; // cx
  char v78; // al
  ULONG64 *v79; // r8
  _QWORD *v80; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  PEXCEPTION_RECORD v82; // [rsp+50h] [rbp+10h]
  _BYTE v83[31]; // [rsp+60h] [rbp+20h] BYREF
  _BYTE v84[17]; // [rsp+7Fh] [rbp+3Fh] BYREF
  int v85; // [rsp+90h] [rbp+50h]
  _QWORD v86[4]; // [rsp+D8h] [rbp+98h]
  _QWORD *v87; // [rsp+F8h] [rbp+B8h]
  ULONG64 ControlPc[123]; // [rsp+158h] [rbp+118h] BYREF
  int v89; // [rsp+530h] [rbp+4F0h]
  int v90; // [rsp+534h] [rbp+4F4h]
  int v91; // [rsp+538h] [rbp+4F8h]
  int v92; // [rsp+53Ch] [rbp+4FCh]
  int v93; // [rsp+540h] [rbp+500h]
  int v94; // [rsp+544h] [rbp+504h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+550h] [rbp+510h] BYREF

  v82 = ExceptionRecord;
  v1 = -1073741786;
  sub_18009EA50(v83);
  v2 = ControlPc[0];
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v3 = RtlLookupFunctionEntry(ControlPc[0], &ImageBase, &HistoryTable);
  p_BeginAddress = &v3->BeginAddress;
  if ( !v3 )
LABEL_169:
    RtlRaiseStatus(v1);
  v5 = 0;
  v6 = ImageBase;
  v7 = ImageBase + v3->UnwindInfoAddress;
  v8 = *(_BYTE *)v7 & 7;
  if ( v8 < 2 )
  {
    v9 = 0;
    v10 = (_BYTE *)(v7 + 2);
    v11 = (_BYTE *)v7;
    if ( !*(_BYTE *)(v7 + 2) )
    {
      while ( (*v11 & 0x20) != 0 )
      {
        v68 = (unsigned __int8)*v10;
        ++v9;
        v69 = *v10 & 1;
        if ( v9 > 0x20 )
          RtlRaiseStatus(3221225727LL);
        v70 = v68 + 1;
        if ( !v69 )
          v70 = v68;
        v11 = (_BYTE *)(ImageBase + *(unsigned int *)&v11[2 * v70 + 12]);
        v10 = v11 + 2;
        if ( v11[2] )
          goto LABEL_4;
      }
      v5 = 1;
    }
  }
LABEL_4:
  v12 = v2 - *p_BeginAddress - ImageBase;
  if ( (*(_BYTE *)(v7 + 3) & 0xF) != 0 )
  {
    if ( v12 >= *(unsigned __int8 *)(v7 + 1) || (*(_BYTE *)v7 & 0x20) != 0 )
    {
      v51 = *(_BYTE *)(v7 + 3);
      v52 = v51;
      v13 = v87;
    }
    else
    {
      v76 = 0LL;
      if ( *(_BYTE *)(v7 + 2) )
      {
        do
        {
          v77 = *(_WORD *)(v7 + 2 * v76 + 4);
          if ( (HIBYTE(v77) & 0xF) == 3 )
            break;
          v76 = (unsigned int)sub_180003F70(v77) + (unsigned int)v76;
        }
        while ( (unsigned int)v76 < *(unsigned __int8 *)(v7 + 2) );
        v6 = ImageBase;
      }
      v13 = v87;
      if ( v12 < *(unsigned __int8 *)(v7 + 2 * v76 + 4) )
        goto LABEL_6;
      v52 = *(unsigned __int8 *)(v7 + 3);
      v51 = *(_BYTE *)(v7 + 3);
    }
    v80 = (_QWORD *)(v86[v51 & 0xF] - (v52 & 0xFFFFFFF0));
    goto LABEL_7;
  }
  v13 = v87;
LABEL_6:
  v80 = v13;
LABEL_7:
  if ( v5 )
    goto LABEL_22;
  v14 = 0;
  if ( v8 >= 2 )
  {
    if ( !*(_BYTE *)(v7 + 2) )
      goto LABEL_22;
    v54 = HIBYTE(*(_WORD *)(v7 + 4));
    if ( (v54 & 0xF) != 6 )
      goto LABEL_22;
    v55 = *(unsigned __int8 *)(v7 + 4);
    v56 = v2 - v6;
    if ( (v54 & 0x10) != 0 )
    {
      v57 = p_BeginAddress[1] - v55;
      LOBYTE(v14) = v56 - v57 < v55;
    }
    else
    {
      v57 = 0;
    }
    if ( !v14 )
    {
      v58 = *(unsigned __int8 *)(v7 + 2);
      v59 = 1;
      if ( v58 <= 1 )
        goto LABEL_22;
      while ( 1 )
      {
        v60 = *(_WORD *)(v7 + 2LL * v59 + 4);
        if ( (HIBYTE(v60) & 0xF) != 6 )
          goto LABEL_22;
        v61 = (unsigned __int8)v60 + (HIBYTE(v60) >> 4 << 8);
        if ( !v61 )
          goto LABEL_22;
        v57 = p_BeginAddress[1] - v61;
        if ( v56 - v57 < v55 )
          break;
        if ( ++v59 >= v58 )
          goto LABEL_22;
      }
      LODWORD(v6) = ImageBase;
    }
    sub_18009A360(v6, (_DWORD)v13, v56 - v57, (_DWORD)p_BeginAddress, (__int64)v83, 0LL, 0LL, 0LL);
    goto LABEL_35;
  }
  v15 = 0LL;
  v16 = (char *)v2;
  if ( *(_BYTE *)v2 == 72 )
  {
    v47 = *(_BYTE *)(v2 + 1);
    if ( v47 == -125 && *(_BYTE *)(v2 + 2) == 0xC4 )
    {
      v16 = (char *)(v2 + 4);
      goto LABEL_11;
    }
    if ( v47 == -127 && *(_BYTE *)(v2 + 2) == 0xC4 )
    {
      v16 = (char *)(v2 + 7);
      goto LABEL_11;
    }
  }
  if ( (*(_BYTE *)v2 & 0xFE) == 0x48 && *(_BYTE *)(v2 + 1) == 0x8D )
  {
    v45 = *(_BYTE *)(v2 + 2) & 7;
    v15 = v45 | (8 * (*(_BYTE *)v2 & 1u));
    if ( v45 | (8 * (*(_BYTE *)v2 & 1)) )
    {
      if ( (_DWORD)v15 == (*(_BYTE *)(v7 + 3) & 0xF) )
      {
        v46 = *(_BYTE *)(v2 + 2) & 0xF8;
        if ( v46 == 96 )
        {
          v16 = (char *)(v2 + 4);
        }
        else if ( v46 == -96 )
        {
          v16 = (char *)(v2 + 7);
        }
      }
    }
  }
LABEL_11:
  while ( (*v16 & 0xF8) == 0x58 )
  {
    v41 = 1LL;
LABEL_120:
    v16 += v41;
  }
  if ( (*v16 & 0xF0) == 0x40 && (v16[1] & 0xF8) == 0x58 )
  {
    v41 = 2LL;
    goto LABEL_120;
  }
  v17 = *v16;
  if ( *v16 == -14 )
    v17 = v16[1];
  v18 = v16 + 1;
  if ( *v16 != -14 )
    v18 = v16;
  if ( (unsigned __int8)(v17 + 62) <= 1u || v17 == -13 && (v17 = -13, v18[1] == -61) )
  {
LABEL_60:
    if ( (*(_BYTE *)v2 & 0xF8) != 0x48 )
      goto LABEL_65;
    v43 = *(_BYTE *)(v2 + 1);
    if ( v43 == -125 )
    {
      v13 = (_QWORD *)((char *)v13 + *(char *)(v2 + 3));
LABEL_63:
      for ( v2 += 4LL; ; v2 += v44 )
      {
LABEL_64:
        v87 = v13;
LABEL_65:
        if ( (*(_BYTE *)v2 & 0xF8) == 0x58 )
        {
          v86[*(_BYTE *)v2 & 7] = *v13;
          v44 = 1LL;
        }
        else
        {
          if ( (*(_BYTE *)v2 & 0xF0) != 0x40 || (*(_BYTE *)(v2 + 1) & 0xF8) != 0x58 )
            goto LABEL_34;
          v86[*(_BYTE *)(v2 + 1) & 7 | (unsigned __int64)(8 * (*(_BYTE *)v2 & 1u))] = *v13;
          v44 = 2LL;
        }
        v13 = v87 + 1;
      }
    }
    if ( v43 == -127 )
    {
      v13 = (_QWORD *)((char *)v13
                     + (*(unsigned __int8 *)(v2 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v2 + 4) | (*(unsigned __int16 *)(v2 + 5) << 8)) << 8)));
    }
    else
    {
      if ( v43 != -115 )
        goto LABEL_65;
      v78 = *(_BYTE *)(v2 + 2) & 0xF8;
      if ( v78 == 96 )
      {
        v87 = (_QWORD *)v86[v15];
        v13 = (_QWORD *)((char *)v87 + *(char *)(v2 + 3));
        goto LABEL_63;
      }
      if ( v78 != -96 )
        goto LABEL_65;
      v13 = (_QWORD *)(v86[v15]
                     + (*(unsigned __int8 *)(v2 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v2 + 4) | (*(unsigned __int16 *)(v2 + 5) << 8)) << 8)));
    }
    v2 += 7LL;
    goto LABEL_64;
  }
  if ( ((v17 + 23) & 0xFD) != 0 )
  {
    if ( v17 == -1 )
    {
      v17 = -1;
      if ( v18[1] == 37 )
        goto LABEL_60;
    }
    if ( (v17 & 0xF8) == 0x48 && v18[1] == -1 )
    {
      v42 = (v18[2] & 0x38) == 32;
LABEL_59:
      if ( v42 )
        goto LABEL_60;
    }
  }
  else
  {
    if ( v17 == -21 )
      v48 = v18[1] + 2;
    else
      v48 = *(_DWORD *)(v18 + 1) + 5;
    v49 = *p_BeginAddress;
    v50 = (unsigned __int64)&v18[v48 - v6];
    if ( v50 < v49 || v50 >= p_BeginAddress[1] )
    {
      v74 = (_DWORD *)sub_18000B108((__int64)p_BeginAddress, v6, (__int64)&v18[v48]);
      if ( !v74 || v50 == *v74 )
      {
        v13 = v87;
        goto LABEL_60;
      }
      v13 = v87;
    }
    else if ( v50 == v49 )
    {
      v42 = (*(_BYTE *)v7 & 0x20) == 0;
      goto LABEL_59;
    }
  }
LABEL_22:
  v19 = ImageBase;
  v20 = 0;
  v21 = v2 - ImageBase;
  while ( 2 )
  {
    v22 = v21 - *p_BeginAddress;
    v23 = (_BYTE *)(v19 + p_BeginAddress[2]);
    v24 = 0LL;
    v25 = 0;
    v26 = v23[2];
    if ( v26 )
    {
      while ( 2 )
      {
        v27 = (unsigned __int8)v23[2 * v24 + 5] >> 4;
        if ( v22 < (unsigned __int8)v23[2 * v24 + 4] )
        {
          v75 = sub_180003F70(*(_WORD *)&v23[2 * v24 + 4]);
          v13 = v87;
          v24 = (unsigned int)(v75 + v24);
          goto LABEL_31;
        }
        v28 = v23[2 * v24 + 5] & 0xF;
        if ( v28 <= 5 )
        {
          if ( v28 == 5 )
          {
            v24 = (unsigned int)(v24 + 2);
            v38 = (*(unsigned __int16 *)&v23[2 * v24 + 4] << 16)
                + (unsigned int)*(unsigned __int16 *)&v23[2 * (unsigned int)(v24 - 1) + 4];
            goto LABEL_49;
          }
          if ( (v23[2 * v24 + 5] & 0xF) == 0 )
          {
            v86[v27] = *v13;
            v13 = v87 + 1;
            goto LABEL_29;
          }
          v35 = v28 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              v37 = v36 - 1;
              if ( v37 )
              {
                if ( v37 != 1 )
                  goto LABEL_164;
                v24 = (unsigned int)(v24 + 1);
                v38 = 8 * (unsigned int)*(unsigned __int16 *)&v23[2 * v24 + 4];
LABEL_49:
                v86[v27] = *(_QWORD *)((char *)v80 + v38);
LABEL_50:
                v13 = v87;
LABEL_30:
                v24 = (unsigned int)(v24 + 1);
LABEL_31:
                v26 = v23[2];
                if ( (unsigned int)v24 >= v26 )
                  goto LABEL_32;
                continue;
              }
              v87 = (_QWORD *)v86[v23[3] & 0xF];
              v13 = (_QWORD *)((char *)v87 - (v23[3] & 0xF0));
            }
            else
            {
              v13 = (_QWORD *)((char *)v13 + (unsigned int)(8 * v27 + 8));
            }
          }
          else
          {
            v24 = (unsigned int)(v24 + 1);
            v39 = *(unsigned __int16 *)&v23[2 * v24 + 4];
            if ( (_DWORD)v27 )
            {
              v24 = (unsigned int)(v24 + 1);
              v40 = (*(unsigned __int16 *)&v23[2 * v24 + 4] << 16) + v39;
            }
            else
            {
              v40 = 8 * v39;
            }
            v13 = (_QWORD *)((char *)v13 + v40);
          }
LABEL_29:
          v87 = v13;
          goto LABEL_30;
        }
        break;
      }
      v53 = v28 - 6;
      if ( !v53 )
      {
        LODWORD(v24) = v24 + 1;
        goto LABEL_30;
      }
      v62 = v53 - 1;
      if ( !v62 )
      {
        LODWORD(v24) = v24 + 2;
        goto LABEL_30;
      }
      v63 = v62 - 1;
      if ( v63 )
      {
        v71 = v63 - 1;
        if ( v71 )
        {
          if ( v71 != 1 )
LABEL_164:
            RtlRaiseStatus(3221225727LL);
          v72 = v13 + 1;
          v25 = 1;
          if ( !(_DWORD)v27 )
            v72 = v13;
          ControlPc[0] = *v72;
          v73 = (_QWORD **)(v13 + 4);
          if ( !(_DWORD)v27 )
            v73 = (_QWORD **)(v13 + 3);
          v13 = *v73;
          goto LABEL_29;
        }
        v24 = (unsigned int)(v24 + 2);
        v79 = (_QWORD *)((char *)&v80[0x2000 * *(unsigned __int16 *)&v23[2 * v24 + 4]]
                       + *(unsigned __int16 *)&v23[2 * (unsigned int)(v24 - 1) + 4]);
        v65 = 2LL * (unsigned int)v27;
        ControlPc[v65 + 21] = *v79;
        v66 = v79[1];
      }
      else
      {
        v24 = (unsigned int)(v24 + 1);
        v64 = &v80[2 * (unsigned int)*(unsigned __int16 *)&v23[2 * v24 + 4]];
        v65 = 2LL * (unsigned int)v27;
        ControlPc[v65 + 21] = *v64;
        v66 = v64[1];
      }
      ControlPc[v65 + 22] = v66;
      goto LABEL_50;
    }
LABEL_32:
    if ( (*v23 & 0x20) != 0 )
    {
      v67 = (unsigned int)v26 + 1;
      if ( (v26 & 1) == 0 )
        v67 = v26;
      ++v20;
      p_BeginAddress = (unsigned int *)&v23[2 * v67 + 4];
      if ( v20 > 0x20 )
        RtlRaiseStatus(3221225727LL);
      v19 = ImageBase;
      continue;
    }
    break;
  }
  if ( !v25 )
  {
LABEL_34:
    v29 = *v13;
    v87 = v13 + 1;
    ControlPc[0] = v29;
  }
LABEL_35:
  v30 = v82;
  v82->ExceptionAddress = (PVOID)ControlPc[0];
  nullsub_2(ControlPc);
  if ( NtCurrentPeb()->BeingDebugged )
  {
    LOBYTE(v31) = 1;
    goto LABEL_168;
  }
  if ( MEMORY[0x7FFE03D8] )
  {
    v32 = (unsigned int)(MEMORY[0x7FFE03E8] - 448) - 16LL;
    v33 = v32 + 15;
    if ( v32 + 15 < v32 )
      v33 = 0xFFFFFFFFFFFFFF0LL;
    v34 = alloca(v33 & 0xFFFFFFFFFFFFFFF0uLL);
    v93 = ((unsigned __int64)v84 & 0xFFFFFFFFFFFFFFC0uLL) - ((unsigned int)&v80 + 1264);
    v89 = v93;
    v94 = MEMORY[0x7FFE03E8] - 512;
    v91 = -1232;
    v90 = 24 - v93;
    v92 = 1232;
    memset((void *)((unsigned __int64)v84 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)(((unsigned __int64)v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    v85 |= 0x100040u;
  }
  if ( !(unsigned __int8)sub_18000D490(v30, v83) )
  {
    v31 = 0LL;
LABEL_168:
    v1 = ZwRaiseException(v30, v83, v31);
    goto LABEL_169;
  }
  sub_18009EB90(v83, v30);
}

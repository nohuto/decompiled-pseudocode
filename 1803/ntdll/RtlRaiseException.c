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
  NTSTATUS v1; // ebx
  DWORD64 Rip; // rdi
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
  DWORD64 *Rsp; // rdx
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
  DWORD64 v29; // rax
  EXCEPTION_RECORD *v30; // rdi
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  void *v33; // rsp
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  __int64 v37; // rax
  int v38; // r8d
  unsigned int v39; // r8d
  __int64 v40; // rax
  bool v41; // zf
  char v42; // al
  __int64 v43; // rax
  int v44; // eax
  char v45; // cl
  char v46; // al
  int v47; // eax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rsi
  unsigned __int8 v50; // cl
  int v51; // eax
  unsigned int v52; // ecx
  __int16 v53; // cx
  unsigned int v54; // esi
  int v55; // r8d
  unsigned int v56; // ecx
  unsigned int v57; // r11d
  unsigned int v58; // r10d
  __int16 v59; // r14
  int v60; // r9d
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  ULONGLONG *v63; // rdx
  __int64 v64; // rcx
  LONGLONG v65; // rax
  __int64 v66; // r13
  unsigned int v67; // r9d
  int v68; // r8d
  __int64 v69; // rax
  unsigned int v70; // ecx
  DWORD64 *v71; // rax
  DWORD64 **v72; // rax
  _DWORD *v73; // rax
  int v74; // eax
  __int64 v75; // r14
  unsigned __int16 v76; // cx
  char v77; // al
  ULONGLONG *v78; // r8
  BOOLEAN v79; // r8
  DWORD64 v80; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+50h] [rbp+10h]
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp+20h] BYREF
  int v84; // [rsp+530h] [rbp+4F0h]
  int v85; // [rsp+534h] [rbp+4F4h]
  int v86; // [rsp+538h] [rbp+4F8h]
  int v87; // [rsp+53Ch] [rbp+4FCh]
  int v88; // [rsp+540h] [rbp+500h]
  int v89; // [rsp+544h] [rbp+504h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+550h] [rbp+510h] BYREF

  ExceptionRecorda = ExceptionRecord;
  v1 = -1073741786;
  sub_18009EA50(&ContextRecord);
  Rip = ContextRecord.Rip;
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, &HistoryTable);
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
        v67 = (unsigned __int8)*v10;
        ++v9;
        v68 = *v10 & 1;
        if ( v9 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v69 = v67 + 1;
        if ( !v68 )
          v69 = v67;
        v11 = (_BYTE *)(ImageBase + *(unsigned int *)&v11[2 * v69 + 12]);
        v10 = v11 + 2;
        if ( v11[2] )
          goto LABEL_4;
      }
      v5 = 1;
    }
  }
LABEL_4:
  v12 = Rip - *p_BeginAddress - ImageBase;
  if ( (*(_BYTE *)(v7 + 3) & 0xF) != 0 )
  {
    if ( v12 >= *(unsigned __int8 *)(v7 + 1) || (*(_BYTE *)v7 & 0x20) != 0 )
    {
      v50 = *(_BYTE *)(v7 + 3);
      v51 = v50;
      Rsp = (DWORD64 *)ContextRecord.Rsp;
    }
    else
    {
      v75 = 0LL;
      if ( *(_BYTE *)(v7 + 2) )
      {
        do
        {
          v76 = *(_WORD *)(v7 + 2 * v75 + 4);
          if ( (HIBYTE(v76) & 0xF) == 3 )
            break;
          v75 = (unsigned int)sub_180003F70(v76) + (unsigned int)v75;
        }
        while ( (unsigned int)v75 < *(unsigned __int8 *)(v7 + 2) );
        v6 = ImageBase;
      }
      Rsp = (DWORD64 *)ContextRecord.Rsp;
      if ( v12 < *(unsigned __int8 *)(v7 + 2 * v75 + 4) )
        goto LABEL_6;
      v51 = *(unsigned __int8 *)(v7 + 3);
      v50 = *(_BYTE *)(v7 + 3);
    }
    v80 = *(&ContextRecord.Rax + (v50 & 0xF)) - (v51 & 0xFFFFFFF0);
    goto LABEL_7;
  }
  Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_6:
  v80 = (DWORD64)Rsp;
LABEL_7:
  if ( v5 )
    goto LABEL_22;
  v14 = 0;
  if ( v8 >= 2 )
  {
    if ( !*(_BYTE *)(v7 + 2) )
      goto LABEL_22;
    v53 = HIBYTE(*(_WORD *)(v7 + 4));
    if ( (v53 & 0xF) != 6 )
      goto LABEL_22;
    v54 = *(unsigned __int8 *)(v7 + 4);
    v55 = Rip - v6;
    if ( (v53 & 0x10) != 0 )
    {
      v56 = p_BeginAddress[1] - v54;
      LOBYTE(v14) = v55 - v56 < v54;
    }
    else
    {
      v56 = 0;
    }
    if ( !v14 )
    {
      v57 = *(unsigned __int8 *)(v7 + 2);
      v58 = 1;
      if ( v57 <= 1 )
        goto LABEL_22;
      while ( 1 )
      {
        v59 = *(_WORD *)(v7 + 2LL * v58 + 4);
        if ( (HIBYTE(v59) & 0xF) != 6 )
          goto LABEL_22;
        v60 = (unsigned __int8)v59 + (HIBYTE(v59) >> 4 << 8);
        if ( !v60 )
          goto LABEL_22;
        v56 = p_BeginAddress[1] - v60;
        if ( v55 - v56 < v54 )
          break;
        if ( ++v58 >= v57 )
          goto LABEL_22;
      }
      LODWORD(v6) = ImageBase;
    }
    sub_18009A360(v6, (_DWORD)Rsp, v55 - v56, (_DWORD)p_BeginAddress, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
    goto LABEL_35;
  }
  v15 = 0LL;
  v16 = (char *)Rip;
  if ( *(_BYTE *)Rip == 72 )
  {
    v46 = *(_BYTE *)(Rip + 1);
    if ( v46 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v16 = (char *)(Rip + 4);
      goto LABEL_11;
    }
    if ( v46 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v16 = (char *)(Rip + 7);
      goto LABEL_11;
    }
  }
  if ( (*(_BYTE *)Rip & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
  {
    v44 = *(_BYTE *)(Rip + 2) & 7;
    v15 = v44 | (8 * (*(_BYTE *)Rip & 1u));
    if ( v44 | (8 * (*(_BYTE *)Rip & 1)) )
    {
      if ( (_DWORD)v15 == (*(_BYTE *)(v7 + 3) & 0xF) )
      {
        v45 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v45 == 96 )
        {
          v16 = (char *)(Rip + 4);
        }
        else if ( v45 == -96 )
        {
          v16 = (char *)(Rip + 7);
        }
      }
    }
  }
LABEL_11:
  while ( (*v16 & 0xF8) == 0x58 )
  {
    v40 = 1LL;
LABEL_120:
    v16 += v40;
  }
  if ( (*v16 & 0xF0) == 0x40 && (v16[1] & 0xF8) == 0x58 )
  {
    v40 = 2LL;
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
    if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
      goto LABEL_65;
    v42 = *(_BYTE *)(Rip + 1);
    if ( v42 == -125 )
    {
      Rsp = (DWORD64 *)((char *)Rsp + *(char *)(Rip + 3));
LABEL_63:
      for ( Rip += 4LL; ; Rip += v43 )
      {
LABEL_64:
        ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_65:
        if ( (*(_BYTE *)Rip & 0xF8) == 0x58 )
        {
          *(&ContextRecord.Rax + (*(_BYTE *)Rip & 7)) = *Rsp;
          v43 = 1LL;
        }
        else
        {
          if ( (*(_BYTE *)Rip & 0xF0) != 0x40 || (*(_BYTE *)(Rip + 1) & 0xF8) != 0x58 )
            goto LABEL_34;
          *(&ContextRecord.Rax + (*(_BYTE *)(Rip + 1) & 7 | (unsigned __int64)(8 * (*(_BYTE *)Rip & 1u)))) = *Rsp;
          v43 = 2LL;
        }
        Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
      }
    }
    if ( v42 == -127 )
    {
      Rsp = (DWORD64 *)((char *)Rsp
                      + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
    }
    else
    {
      if ( v42 != -115 )
        goto LABEL_65;
      v77 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v77 == 96 )
      {
        ContextRecord.Rsp = *(&ContextRecord.Rax + v15);
        Rsp = (DWORD64 *)(ContextRecord.Rsp + *(char *)(Rip + 3));
        goto LABEL_63;
      }
      if ( v77 != -96 )
        goto LABEL_65;
      Rsp = (DWORD64 *)(*(&ContextRecord.Rax + v15)
                      + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
    }
    Rip += 7LL;
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
      v41 = (v18[2] & 0x38) == 32;
LABEL_59:
      if ( v41 )
        goto LABEL_60;
    }
  }
  else
  {
    if ( v17 == -21 )
      v47 = v18[1] + 2;
    else
      v47 = *(_DWORD *)(v18 + 1) + 5;
    v48 = *p_BeginAddress;
    v49 = (unsigned __int64)&v18[v47 - v6];
    if ( v49 < v48 || v49 >= p_BeginAddress[1] )
    {
      v73 = (_DWORD *)sub_18000B108((__int64)p_BeginAddress, v6, &v18[v47]);
      if ( !v73 || v49 == *v73 )
      {
        Rsp = (DWORD64 *)ContextRecord.Rsp;
        goto LABEL_60;
      }
      Rsp = (DWORD64 *)ContextRecord.Rsp;
    }
    else if ( v49 == v48 )
    {
      v41 = (*(_BYTE *)v7 & 0x20) == 0;
      goto LABEL_59;
    }
  }
LABEL_22:
  v19 = ImageBase;
  v20 = 0;
  v21 = Rip - ImageBase;
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
          v74 = sub_180003F70(*(_WORD *)&v23[2 * v24 + 4]);
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          v24 = (unsigned int)(v74 + v24);
          goto LABEL_31;
        }
        v28 = v23[2 * v24 + 5] & 0xF;
        if ( v28 <= 5 )
        {
          if ( v28 == 5 )
          {
            v24 = (unsigned int)(v24 + 2);
            v37 = (*(unsigned __int16 *)&v23[2 * v24 + 4] << 16)
                + (unsigned int)*(unsigned __int16 *)&v23[2 * (unsigned int)(v24 - 1) + 4];
            goto LABEL_49;
          }
          if ( (v23[2 * v24 + 5] & 0xF) == 0 )
          {
            *(&ContextRecord.Rax + v27) = *Rsp;
            Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
            goto LABEL_29;
          }
          v34 = v28 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              v36 = v35 - 1;
              if ( v36 )
              {
                if ( v36 != 1 )
                  goto LABEL_164;
                v24 = (unsigned int)(v24 + 1);
                v37 = 8 * (unsigned int)*(unsigned __int16 *)&v23[2 * v24 + 4];
LABEL_49:
                *(&ContextRecord.Rax + v27) = *(_QWORD *)(v37 + v80);
LABEL_50:
                Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_30:
                v24 = (unsigned int)(v24 + 1);
LABEL_31:
                v26 = v23[2];
                if ( (unsigned int)v24 >= v26 )
                  goto LABEL_32;
                continue;
              }
              ContextRecord.Rsp = *(&ContextRecord.Rax + (v23[3] & 0xF));
              Rsp = (DWORD64 *)(ContextRecord.Rsp - (v23[3] & 0xF0));
            }
            else
            {
              Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)(8 * v27 + 8));
            }
          }
          else
          {
            v24 = (unsigned int)(v24 + 1);
            v38 = *(unsigned __int16 *)&v23[2 * v24 + 4];
            if ( (_DWORD)v27 )
            {
              v24 = (unsigned int)(v24 + 1);
              v39 = (*(unsigned __int16 *)&v23[2 * v24 + 4] << 16) + v38;
            }
            else
            {
              v39 = 8 * v38;
            }
            Rsp = (DWORD64 *)((char *)Rsp + v39);
          }
LABEL_29:
          ContextRecord.Rsp = (DWORD64)Rsp;
          goto LABEL_30;
        }
        break;
      }
      v52 = v28 - 6;
      if ( !v52 )
      {
        LODWORD(v24) = v24 + 1;
        goto LABEL_30;
      }
      v61 = v52 - 1;
      if ( !v61 )
      {
        LODWORD(v24) = v24 + 2;
        goto LABEL_30;
      }
      v62 = v61 - 1;
      if ( v62 )
      {
        v70 = v62 - 1;
        if ( v70 )
        {
          if ( v70 != 1 )
LABEL_164:
            RtlRaiseStatus(-1073741569);
          v71 = Rsp + 1;
          v25 = 1;
          if ( !(_DWORD)v27 )
            v71 = Rsp;
          ContextRecord.Rip = *v71;
          v72 = (DWORD64 **)(Rsp + 4);
          if ( !(_DWORD)v27 )
            v72 = (DWORD64 **)(Rsp + 3);
          Rsp = *v72;
          goto LABEL_29;
        }
        v24 = (unsigned int)(v24 + 2);
        v78 = (ULONGLONG *)(v80
                          + *(unsigned __int16 *)&v23[2 * (unsigned int)(v24 - 1) + 4]
                          + (*(unsigned __int16 *)&v23[2 * v24 + 4] << 16));
        v64 = 16LL * (unsigned int)v27;
        *(ULONGLONG *)((char *)&ContextRecord.Xmm0.Low + v64) = *v78;
        v65 = v78[1];
      }
      else
      {
        v24 = (unsigned int)(v24 + 1);
        v63 = (ULONGLONG *)(v80 + 16 * (unsigned int)*(unsigned __int16 *)&v23[2 * v24 + 4]);
        v64 = 16LL * (unsigned int)v27;
        *(ULONGLONG *)((char *)&ContextRecord.Xmm0.Low + v64) = *v63;
        v65 = v63[1];
      }
      *(LONGLONG *)((char *)&ContextRecord.Xmm0.High + v64) = v65;
      goto LABEL_50;
    }
LABEL_32:
    if ( (*v23 & 0x20) != 0 )
    {
      v66 = (unsigned int)v26 + 1;
      if ( (v26 & 1) == 0 )
        v66 = v26;
      ++v20;
      p_BeginAddress = (unsigned int *)&v23[2 * v66 + 4];
      if ( v20 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v19 = ImageBase;
      continue;
    }
    break;
  }
  if ( !v25 )
  {
LABEL_34:
    v29 = *Rsp;
    ContextRecord.Rsp = (DWORD64)(Rsp + 1);
    ContextRecord.Rip = v29;
  }
LABEL_35:
  v30 = ExceptionRecorda;
  ExceptionRecorda->ExceptionAddress = (PVOID)ContextRecord.Rip;
  nullsub_2(&ContextRecord.Rip);
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v79 = 1;
    goto LABEL_168;
  }
  if ( MEMORY[0x7FFE03D8] )
  {
    v31 = (unsigned int)(MEMORY[0x7FFE03E8] - 448) - 16LL;
    v32 = v31 + 15;
    if ( v31 + 15 < v31 )
      v32 = 0xFFFFFFFFFFFFFF0LL;
    v33 = alloca(v32 & 0xFFFFFFFFFFFFFFF0uLL);
    v88 = (((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) - ((unsigned int)&v80 + 1264);
    v84 = v88;
    v89 = MEMORY[0x7FFE03E8] - 512;
    v86 = -1232;
    v85 = 24 - v88;
    v87 = 1232;
    memset((void *)(((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    ContextRecord.ContextFlags |= 0x100040u;
  }
  if ( !(unsigned __int8)sub_18000D490(v30, &ContextRecord) )
  {
    v79 = 0;
LABEL_168:
    v1 = ZwRaiseException(v30, &ContextRecord, v79);
    goto LABEL_169;
  }
  sub_18009EB90(&ContextRecord, v30);
}

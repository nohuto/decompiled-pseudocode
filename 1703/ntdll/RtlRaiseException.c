/*
 * XREFs of RtlRaiseException @ 0x180030AC0
 * Callers:
 *     PssNtValidateDescriptor @ 0x180001DE0 (PssNtValidateDescriptor.c)
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     sub_180015A40 @ 0x180015A40 (sub_180015A40.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     TpCheckTerminateWorker @ 0x180050E80 (TpCheckTerminateWorker.c)
 *     sub_1800556B4 @ 0x1800556B4 (sub_1800556B4.c)
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 *     RtlDeactivateActivationContext @ 0x1800783E0 (RtlDeactivateActivationContext.c)
 *     sub_1800784E4 @ 0x1800784E4 (sub_1800784E4.c)
 *     RtlGetActiveActivationContext @ 0x18007A760 (RtlGetActiveActivationContext.c)
 *     sub_18008A588 @ 0x18008A588 (sub_18008A588.c)
 *     sub_18009E390 @ 0x18009E390 (sub_18009E390.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A90D0 (KiRaiseUserExceptionDispatcher.c)
 *     sub_1800E758C @ 0x1800E758C (sub_1800E758C.c)
 *     sub_1800F2264 @ 0x1800F2264 (sub_1800F2264.c)
 *     sub_1800F7568 @ 0x1800F7568 (sub_1800F7568.c)
 *     sub_18010580C @ 0x18010580C (sub_18010580C.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x180034710 (RtlLookupFunctionEntry.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 *     sub_180089A50 @ 0x180089A50 (sub_180089A50.c)
 *     sub_18008DF80 @ 0x18008DF80 (sub_18008DF80.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A4C00 @ 0x1800A4C00 (sub_1800A4C00.c)
 *     ZwRaiseException @ 0x1800A7E10 (ZwRaiseException.c)
 *     sub_1800A9130 @ 0x1800A9130 (sub_1800A9130.c)
 *     sub_1800A9270 @ 0x1800A9270 (sub_1800A9270.c)
 *     nullsub_3 @ 0x1800A9740 (nullsub_3.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  int v1; // edi
  ULONG64 v2; // rbx
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 v4; // r8
  unsigned int *p_BeginAddress; // r13
  int v6; // r12d
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdi
  unsigned int v9; // r15d
  unsigned int v10; // edx
  _BYTE *v11; // rax
  _BYTE *v12; // rcx
  unsigned int v13; // esi
  _QWORD *v14; // rdx
  int v15; // r9d
  __int64 v16; // r14
  _BYTE *v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned int v19; // r12d
  int v20; // ebx
  unsigned int v21; // r15d
  _BYTE *v22; // rsi
  __int64 v23; // rdi
  char v24; // r14
  __int64 v25; // r9
  unsigned int v26; // ecx
  ULONG64 v27; // rax
  PEXCEPTION_RECORD v28; // rdi
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // rsp
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rax
  int v37; // r8d
  unsigned __int8 v38; // cl
  int v39; // eax
  _BYTE *v40; // r9
  int v41; // eax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  char v45; // al
  __int64 v46; // rax
  int v47; // eax
  char v48; // cl
  char v49; // al
  unsigned int v50; // ecx
  __int16 v51; // cx
  unsigned int v52; // esi
  unsigned int v53; // ecx
  unsigned int v54; // r11d
  unsigned int v55; // r10d
  __int16 v56; // r9
  int v57; // r9d
  int v58; // ecx
  __int64 v59; // r13
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  ULONG64 *v62; // rdx
  __int64 v63; // rcx
  ULONG64 v64; // rax
  unsigned int v65; // r9d
  __int64 v66; // rax
  unsigned int v67; // ecx
  _QWORD **v68; // rcx
  _DWORD *v69; // rax
  int v70; // eax
  __int64 v71; // r14
  bool v72; // zf
  char v73; // al
  _QWORD *v74; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  PEXCEPTION_RECORD v76; // [rsp+50h] [rbp+10h]
  _BYTE v77[31]; // [rsp+60h] [rbp+20h] BYREF
  _BYTE v78[17]; // [rsp+7Fh] [rbp+3Fh] BYREF
  int v79; // [rsp+90h] [rbp+50h]
  _QWORD v80[4]; // [rsp+D8h] [rbp+98h]
  _QWORD *v81; // [rsp+F8h] [rbp+B8h]
  ULONG64 ControlPc[123]; // [rsp+158h] [rbp+118h] BYREF
  int v83; // [rsp+530h] [rbp+4F0h]
  int v84; // [rsp+534h] [rbp+4F4h]
  int v85; // [rsp+538h] [rbp+4F8h]
  int v86; // [rsp+53Ch] [rbp+4FCh]
  int v87; // [rsp+540h] [rbp+500h]
  int v88; // [rsp+544h] [rbp+504h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+550h] [rbp+510h] BYREF

  v76 = ExceptionRecord;
  v1 = -1073741786;
  sub_1800A9130(v77);
  v2 = ControlPc[0];
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v3 = RtlLookupFunctionEntry(ControlPc[0], &ImageBase, &HistoryTable);
  p_BeginAddress = &v3->BeginAddress;
  if ( !v3 )
LABEL_163:
    RtlRaiseStatus(v1);
  v6 = 0;
  v7 = ImageBase;
  v8 = ImageBase + v3->UnwindInfoAddress;
  v9 = *(_BYTE *)v8 & 7;
  if ( v9 < 2 )
  {
    v10 = 0;
    v11 = (_BYTE *)(v8 + 2);
    v12 = (_BYTE *)v8;
    if ( !*(_BYTE *)(v8 + 2) )
    {
      while ( (*v12 & 0x20) != 0 )
      {
        v65 = (unsigned __int8)*v11;
        ++v10;
        v4 = *v11 & 1;
        if ( v10 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v66 = v65 + 1;
        if ( !(_DWORD)v4 )
          v66 = v65;
        v12 = (_BYTE *)(ImageBase + *(unsigned int *)&v12[2 * v66 + 12]);
        v11 = v12 + 2;
        if ( v12[2] )
          goto LABEL_4;
      }
      v6 = 1;
    }
  }
LABEL_4:
  v13 = v2 - *p_BeginAddress - ImageBase;
  if ( (*(_BYTE *)(v8 + 3) & 0xF) != 0 )
  {
    if ( v13 >= *(unsigned __int8 *)(v8 + 1) || (*(_BYTE *)v8 & 0x20) != 0 )
    {
      v38 = *(_BYTE *)(v8 + 3);
      v39 = v38;
      v14 = v81;
    }
    else
    {
      v71 = 0LL;
      if ( *(_BYTE *)(v8 + 2) )
      {
        do
        {
          if ( (HIBYTE(*(_WORD *)(v8 + 2 * v71 + 4)) & 0xF) == 3 )
            break;
          v71 = (unsigned int)((__int64 (*)(void))sub_180089A50)() + (unsigned int)v71;
        }
        while ( (unsigned int)v71 < *(unsigned __int8 *)(v8 + 2) );
        v7 = ImageBase;
      }
      v14 = v81;
      if ( v13 < *(unsigned __int8 *)(v8 + 2 * v71 + 4) )
        goto LABEL_6;
      v39 = *(unsigned __int8 *)(v8 + 3);
      v38 = *(_BYTE *)(v8 + 3);
    }
    v74 = (_QWORD *)(v80[v38 & 0xF] - (v39 & 0xFFFFFFF0));
    goto LABEL_7;
  }
  v14 = v81;
LABEL_6:
  v74 = v14;
LABEL_7:
  if ( v6 )
    goto LABEL_20;
  v15 = 0;
  if ( v9 >= 2 )
  {
    if ( !*(_BYTE *)(v8 + 2) )
      goto LABEL_20;
    v51 = HIBYTE(*(_WORD *)(v8 + 4));
    if ( (v51 & 0xF) != 6 )
      goto LABEL_20;
    v52 = *(unsigned __int8 *)(v8 + 4);
    v4 = (unsigned int)(v2 - v7);
    if ( (v51 & 0x10) != 0 )
    {
      v53 = p_BeginAddress[1] - v52;
      LOBYTE(v15) = (unsigned int)v4 - v53 < v52;
    }
    else
    {
      v53 = 0;
    }
    if ( !v15 )
    {
      v54 = *(unsigned __int8 *)(v8 + 2);
      v55 = 1;
      if ( v54 <= 1 )
        goto LABEL_20;
      while ( 1 )
      {
        v56 = HIBYTE(*(_WORD *)(v8 + 2LL * v55 + 4));
        if ( (v56 & 0xF) != 6 )
          goto LABEL_20;
        v57 = *(unsigned __int8 *)(v8 + 2LL * v55 + 4) + ((unsigned __int8)v56 >> 4 << 8);
        if ( !v57 )
          goto LABEL_20;
        v53 = p_BeginAddress[1] - v57;
        if ( (unsigned int)v4 - v53 < v52 )
          break;
        if ( ++v55 >= v54 )
          goto LABEL_20;
      }
      LODWORD(v7) = ImageBase;
    }
    sub_1800A4C00(v7, (_DWORD)v14, v4 - v53, (_DWORD)p_BeginAddress, (__int64)v77, 0LL, 0LL, 0LL);
    goto LABEL_33;
  }
  v16 = 0LL;
  v4 = v2;
  if ( *(_BYTE *)v2 == 72 )
  {
    v49 = *(_BYTE *)(v2 + 1);
    if ( v49 == -125 && *(_BYTE *)(v2 + 2) == 0xC4 )
      goto LABEL_109;
    if ( v49 == -127 && *(_BYTE *)(v2 + 2) == 0xC4 )
    {
LABEL_85:
      v4 = v2 + 7;
      goto LABEL_11;
    }
  }
  if ( (*(_BYTE *)v2 & 0xFE) == 0x48 && *(_BYTE *)(v2 + 1) == 0x8D )
  {
    v47 = *(_BYTE *)(v2 + 2) & 7;
    v16 = v47 | (8 * (*(_BYTE *)v2 & 1u));
    if ( v47 | (8 * (*(_BYTE *)v2 & 1)) )
    {
      if ( (_DWORD)v16 == (*(_BYTE *)(v8 + 3) & 0xF) )
      {
        v48 = *(_BYTE *)(v2 + 2) & 0xF8;
        if ( v48 != 96 )
        {
          if ( v48 != -96 )
            goto LABEL_11;
          goto LABEL_85;
        }
LABEL_109:
        v4 = v2 + 4;
      }
    }
  }
LABEL_11:
  while ( (*(_BYTE *)v4 & 0xF8) == 0x58 )
  {
    v44 = 1LL;
LABEL_122:
    v4 += v44;
  }
  if ( (*(_BYTE *)v4 & 0xF0) == 0x40 && (*(_BYTE *)(v4 + 1) & 0xF8) == 0x58 )
  {
    v44 = 2LL;
    goto LABEL_122;
  }
  v17 = (_BYTE *)(v4 + 1);
  if ( *(_BYTE *)v4 != 0xF2 )
    v17 = (_BYTE *)v4;
  LOBYTE(v4) = *v17;
  if ( (unsigned __int8)(*v17 + 62) <= 1u || (_BYTE)v4 == 0xF3 && v17[1] == 0xC3 )
  {
LABEL_68:
    if ( (*(_BYTE *)v2 & 0xF8) != 0x48 )
      goto LABEL_72;
    v45 = *(_BYTE *)(v2 + 1);
    switch ( v45 )
    {
      case -125:
        goto LABEL_70;
      case -127:
        v14 = (_QWORD *)((char *)v14
                       + (*(unsigned __int8 *)(v2 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v2 + 4) | (*(unsigned __int16 *)(v2 + 5) << 8)) << 8)));
        break;
      case -115:
        v73 = *(_BYTE *)(v2 + 2) & 0xF8;
        if ( v73 == 96 )
        {
          v14 = (_QWORD *)v80[v16];
          v81 = v14;
LABEL_70:
          v14 = (_QWORD *)((char *)v14 + *(char *)(v2 + 3));
          for ( v2 += 4LL; ; v2 += v46 )
          {
LABEL_71:
            v81 = v14;
LABEL_72:
            if ( (*(_BYTE *)v2 & 0xF8) == 0x58 )
            {
              v80[*(_BYTE *)v2 & 7] = *v14;
              v46 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)v2 & 0xF0) != 0x40 || (*(_BYTE *)(v2 + 1) & 0xF8) != 0x58 )
                goto LABEL_32;
              v80[*(_BYTE *)(v2 + 1) & 7 | (8LL * (*(_BYTE *)v2 & 1))] = *v14;
              v46 = 2LL;
            }
            v14 = v81 + 1;
          }
        }
        if ( v73 != -96 )
          goto LABEL_72;
        v14 = (_QWORD *)(v80[v16]
                       + (*(unsigned __int8 *)(v2 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v2 + 4) | (*(unsigned __int16 *)(v2 + 5) << 8)) << 8)));
        break;
      default:
        goto LABEL_72;
    }
    v2 += 7LL;
    goto LABEL_71;
  }
  if ( (((_BYTE)v4 + 23) & 0xFD) != 0 )
  {
    if ( (_BYTE)v4 == 0xFF && v17[1] == 37 )
      goto LABEL_68;
    LOBYTE(v4) = v4 & 0xF8;
    if ( (_BYTE)v4 == 72 && v17[1] == 0xFF )
    {
      v72 = (v17[2] & 0x38) == 32;
      goto LABEL_67;
    }
  }
  else
  {
    v40 = &v17[-v7];
    if ( (_BYTE)v4 == 0xEB )
      v41 = (char)v17[1] + 2;
    else
      v41 = *(_DWORD *)(v17 + 1) + 5;
    v42 = *p_BeginAddress;
    v43 = (unsigned __int64)&v40[v41];
    if ( v43 < v42 || v43 >= p_BeginAddress[1] )
    {
      v69 = (_DWORD *)sub_18008DF80(p_BeginAddress, v7, v43 + v7);
      if ( !v69 || v43 == *v69 )
      {
        v14 = v81;
        goto LABEL_68;
      }
      v14 = v81;
    }
    else if ( v43 == v42 )
    {
      v72 = (*(_BYTE *)v8 & 0x20) == 0;
LABEL_67:
      if ( v72 )
        goto LABEL_68;
    }
  }
LABEL_20:
  v18 = ImageBase;
  v19 = 0;
  v20 = v2 - ImageBase;
  while ( 2 )
  {
    v21 = v20 - *p_BeginAddress;
    v22 = (_BYTE *)(v18 + p_BeginAddress[2]);
    v23 = 0LL;
    v24 = 0;
    if ( v22[2] )
    {
      while ( 2 )
      {
        v25 = (unsigned __int8)v22[2 * v23 + 5] >> 4;
        if ( v21 < (unsigned __int8)v22[2 * v23 + 4] )
        {
          v70 = sub_180089A50(*(unsigned __int16 *)&v22[2 * v23 + 4], v14, v4, v25);
          v14 = v81;
          v23 = (unsigned int)(v70 + v23);
          goto LABEL_29;
        }
        v26 = v22[2 * v23 + 5] & 0xF;
        if ( v26 <= 5 )
        {
          if ( v26 == 5 )
          {
            v23 = (unsigned int)(v23 + 2);
            v4 = (unsigned __int64)*(unsigned __int16 *)&v22[2 * v23 + 4] << 16;
            v36 = *(_QWORD *)((char *)v74 + v4 + *(unsigned __int16 *)&v22[2 * (unsigned int)(v23 - 1) + 4]);
            goto LABEL_47;
          }
          if ( (v22[2 * v23 + 5] & 0xF) == 0 )
          {
            v80[v25] = *v14;
            v14 = v81 + 1;
            goto LABEL_27;
          }
          v33 = v26 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              v35 = v34 - 1;
              if ( v35 )
              {
                if ( v35 != 1 )
                  goto LABEL_158;
                LODWORD(v23) = v23 + 1;
                v36 = v74[*(unsigned __int16 *)&v22[2 * (unsigned int)v23 + 4]];
LABEL_47:
                v80[v25] = v36;
LABEL_48:
                v14 = v81;
LABEL_28:
                v23 = (unsigned int)(v23 + 1);
LABEL_29:
                if ( (unsigned int)v23 >= (unsigned __int8)v22[2] )
                  goto LABEL_30;
                continue;
              }
              v81 = (_QWORD *)v80[v22[3] & 0xF];
              v14 = (_QWORD *)((char *)v81 - (v22[3] & 0xF0));
            }
            else
            {
              v14 = (_QWORD *)((char *)v14 + (unsigned int)(8 * v25 + 8));
            }
          }
          else
          {
            v23 = (unsigned int)(v23 + 1);
            v37 = *(unsigned __int16 *)&v22[2 * v23 + 4];
            if ( (_DWORD)v25 )
            {
              v23 = (unsigned int)(v23 + 1);
              v4 = (*(unsigned __int16 *)&v22[2 * v23 + 4] << 16) + v37;
            }
            else
            {
              v4 = (unsigned int)(8 * v37);
            }
            v14 = (_QWORD *)((char *)v14 + (unsigned int)v4);
          }
LABEL_27:
          v81 = v14;
          goto LABEL_28;
        }
        break;
      }
      v50 = v26 - 6;
      if ( !v50 )
      {
        LODWORD(v23) = v23 + 1;
        goto LABEL_28;
      }
      v60 = v50 - 1;
      if ( !v60 )
      {
        LODWORD(v23) = v23 + 2;
        goto LABEL_28;
      }
      v61 = v60 - 1;
      if ( v61 )
      {
        v67 = v61 - 1;
        if ( v67 )
        {
          if ( v67 != 1 )
LABEL_158:
            RtlRaiseStatus(-1073741569);
          v24 = 1;
          v68 = (_QWORD **)(v14 + 3);
          if ( (_DWORD)v25 )
          {
            ++v14;
            ++v68;
          }
          ControlPc[0] = *v14;
          v14 = *v68;
          goto LABEL_27;
        }
        v23 = (unsigned int)(v23 + 2);
        v4 = (unsigned __int64)&v74[0x2000 * (unsigned __int64)*(unsigned __int16 *)&v22[2 * v23 + 4]]
           + *(unsigned __int16 *)&v22[2 * (unsigned int)(v23 - 1) + 4];
        v63 = 2LL * (unsigned int)v25;
        ControlPc[2 * (unsigned int)v25 + 21] = *(_QWORD *)v4;
        v64 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        v23 = (unsigned int)(v23 + 1);
        v62 = &v74[2 * *(unsigned __int16 *)&v22[2 * v23 + 4]];
        v63 = 2LL * (unsigned int)v25;
        ControlPc[2 * (unsigned int)v25 + 21] = *v62;
        v64 = v62[1];
      }
      ControlPc[v63 + 22] = v64;
      goto LABEL_48;
    }
LABEL_30:
    if ( (*v22 & 0x20) != 0 )
    {
      v58 = (unsigned __int8)v22[2];
      v59 = (unsigned int)(v58 + 1);
      if ( (v58 & 1) == 0 )
        v59 = (unsigned __int8)v22[2];
      ++v19;
      p_BeginAddress = (unsigned int *)&v22[2 * v59 + 4];
      if ( v19 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v18 = ImageBase;
      continue;
    }
    break;
  }
  if ( !v24 )
  {
LABEL_32:
    v27 = *v14;
    v81 = v14 + 1;
    ControlPc[0] = v27;
  }
LABEL_33:
  v28 = v76;
  v76->ExceptionAddress = (PVOID)ControlPc[0];
  nullsub_3(ControlPc);
  if ( NtCurrentPeb()->BeingDebugged )
  {
    LOBYTE(v29) = 1;
    goto LABEL_162;
  }
  if ( MEMORY[0x7FFE03D8] )
  {
    v30 = (unsigned int)(MEMORY[0x7FFE03E8] - 448) - 16LL;
    v31 = v30 + 15;
    if ( v30 + 15 < v30 )
      v31 = 0xFFFFFFFFFFFFFF0LL;
    v32 = alloca(v31 & 0xFFFFFFFFFFFFFFF0uLL);
    v87 = ((unsigned __int64)v78 & 0xFFFFFFFFFFFFFFC0uLL) - ((unsigned int)&v74 + 1264);
    v83 = v87;
    v88 = MEMORY[0x7FFE03E8] - 512;
    v85 = -1232;
    v84 = 24 - v87;
    v86 = 1232;
    memset((void *)((unsigned __int64)v78 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)(((unsigned __int64)v78 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    v79 |= 0x100040u;
  }
  if ( !(unsigned __int8)sub_180034E60(v28, v77) )
  {
    v29 = 0LL;
LABEL_162:
    v1 = ZwRaiseException(v28, v77, v29);
    goto LABEL_163;
  }
  sub_1800A9270(v77, v28);
}

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
  NTSTATUS v1; // edi
  DWORD64 Rip; // rbx
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
  DWORD64 *Rsp; // rdx
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
  DWORD64 v27; // rax
  EXCEPTION_RECORD *v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rsp
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  DWORD64 v35; // rax
  int v36; // r8d
  unsigned __int8 v37; // cl
  int v38; // eax
  _BYTE *v39; // r9
  int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  char v44; // al
  __int64 v45; // rax
  int v46; // eax
  char v47; // cl
  char v48; // al
  unsigned int v49; // ecx
  __int16 v50; // cx
  unsigned int v51; // esi
  unsigned int v52; // ecx
  unsigned int v53; // r11d
  unsigned int v54; // r10d
  __int16 v55; // r9
  int v56; // r9d
  int v57; // ecx
  __int64 v58; // r13
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  ULONGLONG *v61; // rdx
  __int64 v62; // rcx
  LONGLONG v63; // rax
  unsigned int v64; // r9d
  __int64 v65; // rax
  unsigned int v66; // ecx
  DWORD64 **v67; // rcx
  _DWORD *v68; // rax
  int v69; // eax
  __int64 v70; // r14
  bool v71; // zf
  char v72; // al
  BOOLEAN v73; // r8
  DWORD64 v74; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+50h] [rbp+10h]
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp+20h] BYREF
  int v78; // [rsp+530h] [rbp+4F0h]
  int v79; // [rsp+534h] [rbp+4F4h]
  int v80; // [rsp+538h] [rbp+4F8h]
  int v81; // [rsp+53Ch] [rbp+4FCh]
  int v82; // [rsp+540h] [rbp+500h]
  int v83; // [rsp+544h] [rbp+504h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+550h] [rbp+510h] BYREF

  ExceptionRecorda = ExceptionRecord;
  v1 = -1073741786;
  sub_1800A9130(&ContextRecord);
  Rip = ContextRecord.Rip;
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, &HistoryTable);
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
        v64 = (unsigned __int8)*v11;
        ++v10;
        v4 = *v11 & 1;
        if ( v10 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v65 = v64 + 1;
        if ( !(_DWORD)v4 )
          v65 = v64;
        v12 = (_BYTE *)(ImageBase + *(unsigned int *)&v12[2 * v65 + 12]);
        v11 = v12 + 2;
        if ( v12[2] )
          goto LABEL_4;
      }
      v6 = 1;
    }
  }
LABEL_4:
  v13 = Rip - *p_BeginAddress - ImageBase;
  if ( (*(_BYTE *)(v8 + 3) & 0xF) != 0 )
  {
    if ( v13 >= *(unsigned __int8 *)(v8 + 1) || (*(_BYTE *)v8 & 0x20) != 0 )
    {
      v37 = *(_BYTE *)(v8 + 3);
      v38 = v37;
      Rsp = (DWORD64 *)ContextRecord.Rsp;
    }
    else
    {
      v70 = 0LL;
      if ( *(_BYTE *)(v8 + 2) )
      {
        do
        {
          if ( (HIBYTE(*(_WORD *)(v8 + 2 * v70 + 4)) & 0xF) == 3 )
            break;
          v70 = (unsigned int)((__int64 (*)(void))sub_180089A50)() + (unsigned int)v70;
        }
        while ( (unsigned int)v70 < *(unsigned __int8 *)(v8 + 2) );
        v7 = ImageBase;
      }
      Rsp = (DWORD64 *)ContextRecord.Rsp;
      if ( v13 < *(unsigned __int8 *)(v8 + 2 * v70 + 4) )
        goto LABEL_6;
      v38 = *(unsigned __int8 *)(v8 + 3);
      v37 = *(_BYTE *)(v8 + 3);
    }
    v74 = *(&ContextRecord.Rax + (v37 & 0xF)) - (v38 & 0xFFFFFFF0);
    goto LABEL_7;
  }
  Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_6:
  v74 = (DWORD64)Rsp;
LABEL_7:
  if ( v6 )
    goto LABEL_20;
  v15 = 0;
  if ( v9 >= 2 )
  {
    if ( !*(_BYTE *)(v8 + 2) )
      goto LABEL_20;
    v50 = HIBYTE(*(_WORD *)(v8 + 4));
    if ( (v50 & 0xF) != 6 )
      goto LABEL_20;
    v51 = *(unsigned __int8 *)(v8 + 4);
    v4 = (unsigned int)(Rip - v7);
    if ( (v50 & 0x10) != 0 )
    {
      v52 = p_BeginAddress[1] - v51;
      LOBYTE(v15) = (unsigned int)v4 - v52 < v51;
    }
    else
    {
      v52 = 0;
    }
    if ( !v15 )
    {
      v53 = *(unsigned __int8 *)(v8 + 2);
      v54 = 1;
      if ( v53 <= 1 )
        goto LABEL_20;
      while ( 1 )
      {
        v55 = HIBYTE(*(_WORD *)(v8 + 2LL * v54 + 4));
        if ( (v55 & 0xF) != 6 )
          goto LABEL_20;
        v56 = *(unsigned __int8 *)(v8 + 2LL * v54 + 4) + ((unsigned __int8)v55 >> 4 << 8);
        if ( !v56 )
          goto LABEL_20;
        v52 = p_BeginAddress[1] - v56;
        if ( (unsigned int)v4 - v52 < v51 )
          break;
        if ( ++v54 >= v53 )
          goto LABEL_20;
      }
      LODWORD(v7) = ImageBase;
    }
    sub_1800A4C00(v7, (_DWORD)Rsp, v4 - v52, (_DWORD)p_BeginAddress, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
    goto LABEL_33;
  }
  v16 = 0LL;
  v4 = Rip;
  if ( *(_BYTE *)Rip == 72 )
  {
    v48 = *(_BYTE *)(Rip + 1);
    if ( v48 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
      goto LABEL_109;
    if ( v48 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
LABEL_85:
      v4 = Rip + 7;
      goto LABEL_11;
    }
  }
  if ( (*(_BYTE *)Rip & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
  {
    v46 = *(_BYTE *)(Rip + 2) & 7;
    v16 = v46 | (8 * (*(_BYTE *)Rip & 1u));
    if ( v46 | (8 * (*(_BYTE *)Rip & 1)) )
    {
      if ( (_DWORD)v16 == (*(_BYTE *)(v8 + 3) & 0xF) )
      {
        v47 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v47 != 96 )
        {
          if ( v47 != -96 )
            goto LABEL_11;
          goto LABEL_85;
        }
LABEL_109:
        v4 = Rip + 4;
      }
    }
  }
LABEL_11:
  while ( (*(_BYTE *)v4 & 0xF8) == 0x58 )
  {
    v43 = 1LL;
LABEL_122:
    v4 += v43;
  }
  if ( (*(_BYTE *)v4 & 0xF0) == 0x40 && (*(_BYTE *)(v4 + 1) & 0xF8) == 0x58 )
  {
    v43 = 2LL;
    goto LABEL_122;
  }
  v17 = (_BYTE *)(v4 + 1);
  if ( *(_BYTE *)v4 != 0xF2 )
    v17 = (_BYTE *)v4;
  LOBYTE(v4) = *v17;
  if ( (unsigned __int8)(*v17 + 62) <= 1u || (_BYTE)v4 == 0xF3 && v17[1] == 0xC3 )
  {
LABEL_68:
    if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
      goto LABEL_72;
    v44 = *(_BYTE *)(Rip + 1);
    switch ( v44 )
    {
      case -125:
        goto LABEL_70;
      case -127:
        Rsp = (DWORD64 *)((char *)Rsp
                        + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
        break;
      case -115:
        v72 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v72 == 96 )
        {
          Rsp = (DWORD64 *)*(&ContextRecord.Rax + v16);
          ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_70:
          Rsp = (DWORD64 *)((char *)Rsp + *(char *)(Rip + 3));
          for ( Rip += 4LL; ; Rip += v45 )
          {
LABEL_71:
            ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_72:
            if ( (*(_BYTE *)Rip & 0xF8) == 0x58 )
            {
              *(&ContextRecord.Rax + (*(_BYTE *)Rip & 7)) = *Rsp;
              v45 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)Rip & 0xF0) != 0x40 || (*(_BYTE *)(Rip + 1) & 0xF8) != 0x58 )
                goto LABEL_32;
              *(&ContextRecord.Rax + (*(_BYTE *)(Rip + 1) & 7 | (8LL * (*(_BYTE *)Rip & 1)))) = *Rsp;
              v45 = 2LL;
            }
            Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
          }
        }
        if ( v72 != -96 )
          goto LABEL_72;
        Rsp = (DWORD64 *)(*(&ContextRecord.Rax + v16)
                        + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
        break;
      default:
        goto LABEL_72;
    }
    Rip += 7LL;
    goto LABEL_71;
  }
  if ( (((_BYTE)v4 + 23) & 0xFD) != 0 )
  {
    if ( (_BYTE)v4 == 0xFF && v17[1] == 37 )
      goto LABEL_68;
    LOBYTE(v4) = v4 & 0xF8;
    if ( (_BYTE)v4 == 72 && v17[1] == 0xFF )
    {
      v71 = (v17[2] & 0x38) == 32;
      goto LABEL_67;
    }
  }
  else
  {
    v39 = &v17[-v7];
    if ( (_BYTE)v4 == 0xEB )
      v40 = (char)v17[1] + 2;
    else
      v40 = *(_DWORD *)(v17 + 1) + 5;
    v41 = *p_BeginAddress;
    v42 = (unsigned __int64)&v39[v40];
    if ( v42 < v41 || v42 >= p_BeginAddress[1] )
    {
      v68 = (_DWORD *)sub_18008DF80(p_BeginAddress, v7, v42 + v7);
      if ( !v68 || v42 == *v68 )
      {
        Rsp = (DWORD64 *)ContextRecord.Rsp;
        goto LABEL_68;
      }
      Rsp = (DWORD64 *)ContextRecord.Rsp;
    }
    else if ( v42 == v41 )
    {
      v71 = (*(_BYTE *)v8 & 0x20) == 0;
LABEL_67:
      if ( v71 )
        goto LABEL_68;
    }
  }
LABEL_20:
  v18 = ImageBase;
  v19 = 0;
  v20 = Rip - ImageBase;
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
          v69 = sub_180089A50(*(unsigned __int16 *)&v22[2 * v23 + 4], Rsp, v4, v25);
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          v23 = (unsigned int)(v69 + v23);
          goto LABEL_29;
        }
        v26 = v22[2 * v23 + 5] & 0xF;
        if ( v26 <= 5 )
        {
          if ( v26 == 5 )
          {
            v23 = (unsigned int)(v23 + 2);
            v4 = (unsigned __int64)*(unsigned __int16 *)&v22[2 * v23 + 4] << 16;
            v35 = *(_QWORD *)(*(unsigned __int16 *)&v22[2 * (unsigned int)(v23 - 1) + 4] + v4 + v74);
            goto LABEL_47;
          }
          if ( (v22[2 * v23 + 5] & 0xF) == 0 )
          {
            *(&ContextRecord.Rax + v25) = *Rsp;
            Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
            goto LABEL_27;
          }
          v32 = v26 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                if ( v34 != 1 )
                  goto LABEL_158;
                LODWORD(v23) = v23 + 1;
                v35 = *(_QWORD *)(v74 + 8LL * *(unsigned __int16 *)&v22[2 * (unsigned int)v23 + 4]);
LABEL_47:
                *(&ContextRecord.Rax + v25) = v35;
LABEL_48:
                Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_28:
                v23 = (unsigned int)(v23 + 1);
LABEL_29:
                if ( (unsigned int)v23 >= (unsigned __int8)v22[2] )
                  goto LABEL_30;
                continue;
              }
              ContextRecord.Rsp = *(&ContextRecord.Rax + (v22[3] & 0xF));
              Rsp = (DWORD64 *)(ContextRecord.Rsp - (v22[3] & 0xF0));
            }
            else
            {
              Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)(8 * v25 + 8));
            }
          }
          else
          {
            v23 = (unsigned int)(v23 + 1);
            v36 = *(unsigned __int16 *)&v22[2 * v23 + 4];
            if ( (_DWORD)v25 )
            {
              v23 = (unsigned int)(v23 + 1);
              v4 = (*(unsigned __int16 *)&v22[2 * v23 + 4] << 16) + v36;
            }
            else
            {
              v4 = (unsigned int)(8 * v36);
            }
            Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)v4);
          }
LABEL_27:
          ContextRecord.Rsp = (DWORD64)Rsp;
          goto LABEL_28;
        }
        break;
      }
      v49 = v26 - 6;
      if ( !v49 )
      {
        LODWORD(v23) = v23 + 1;
        goto LABEL_28;
      }
      v59 = v49 - 1;
      if ( !v59 )
      {
        LODWORD(v23) = v23 + 2;
        goto LABEL_28;
      }
      v60 = v59 - 1;
      if ( v60 )
      {
        v66 = v60 - 1;
        if ( v66 )
        {
          if ( v66 != 1 )
LABEL_158:
            RtlRaiseStatus(-1073741569);
          v24 = 1;
          v67 = (DWORD64 **)(Rsp + 3);
          if ( (_DWORD)v25 )
          {
            ++Rsp;
            ++v67;
          }
          ContextRecord.Rip = *Rsp;
          Rsp = *v67;
          goto LABEL_27;
        }
        v23 = (unsigned int)(v23 + 2);
        v4 = ((unsigned __int64)*(unsigned __int16 *)&v22[2 * v23 + 4] << 16)
           + v74
           + *(unsigned __int16 *)&v22[2 * (unsigned int)(v23 - 1) + 4];
        v62 = 2LL * (unsigned int)v25;
        *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v25) = *(_QWORD *)v4;
        v63 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        v23 = (unsigned int)(v23 + 1);
        v61 = (ULONGLONG *)(v74 + 16LL * *(unsigned __int16 *)&v22[2 * v23 + 4]);
        v62 = 2LL * (unsigned int)v25;
        *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v25) = *v61;
        v63 = v61[1];
      }
      *(&ContextRecord.Xmm0.High + v62) = v63;
      goto LABEL_48;
    }
LABEL_30:
    if ( (*v22 & 0x20) != 0 )
    {
      v57 = (unsigned __int8)v22[2];
      v58 = (unsigned int)(v57 + 1);
      if ( (v57 & 1) == 0 )
        v58 = (unsigned __int8)v22[2];
      ++v19;
      p_BeginAddress = (unsigned int *)&v22[2 * v58 + 4];
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
    v27 = *Rsp;
    ContextRecord.Rsp = (DWORD64)(Rsp + 1);
    ContextRecord.Rip = v27;
  }
LABEL_33:
  v28 = ExceptionRecorda;
  ExceptionRecorda->ExceptionAddress = (PVOID)ContextRecord.Rip;
  nullsub_3(&ContextRecord.Rip);
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v73 = 1;
    goto LABEL_162;
  }
  if ( MEMORY[0x7FFE03D8] )
  {
    v29 = (unsigned int)(MEMORY[0x7FFE03E8] - 448) - 16LL;
    v30 = v29 + 15;
    if ( v29 + 15 < v29 )
      v30 = 0xFFFFFFFFFFFFFF0LL;
    v31 = alloca(v30 & 0xFFFFFFFFFFFFFFF0uLL);
    v82 = (((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) - ((unsigned int)&v74 + 1264);
    v78 = v82;
    v83 = MEMORY[0x7FFE03E8] - 512;
    v80 = -1232;
    v79 = 24 - v82;
    v81 = 1232;
    memset((void *)(((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    ContextRecord.ContextFlags |= 0x100040u;
  }
  if ( !(unsigned __int8)sub_180034E60(v28, &ContextRecord) )
  {
    v73 = 0;
LABEL_162:
    v1 = ZwRaiseException(v28, &ContextRecord, v73);
    goto LABEL_163;
  }
  sub_1800A9270(&ContextRecord, v28);
}

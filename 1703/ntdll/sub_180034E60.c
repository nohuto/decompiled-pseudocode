/*
 * XREFs of sub_180034E60 @ 0x180034E60
 * Callers:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A9060 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_1800313AC @ 0x1800313AC (sub_1800313AC.c)
 *     sub_180034554 @ 0x180034554 (sub_180034554.c)
 *     RtlLookupFunctionEntry @ 0x180034710 (RtlLookupFunctionEntry.c)
 *     sub_180037780 @ 0x180037780 (sub_180037780.c)
 *     RtlVirtualUnwind @ 0x1800377A0 (RtlVirtualUnwind.c)
 *     sub_18006EC1C @ 0x18006EC1C (sub_18006EC1C.c)
 *     sub_180089A50 @ 0x180089A50 (sub_180089A50.c)
 *     sub_18008DF80 @ 0x18008DF80 (sub_18008DF80.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A4C00 @ 0x1800A4C00 (sub_1800A4C00.c)
 *     sub_1800AA000 @ 0x1800AA000 (sub_1800AA000.c)
 *     sub_1800F88C4 @ 0x1800F88C4 (sub_1800F88C4.c)
 *     sub_1800F8A60 @ 0x1800F8A60 (sub_1800F8A60.c)
 */

char __fastcall sub_180034E60(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdi
  __int64 v4; // r15
  int v5; // esi
  ULONG64 Rip; // r13
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  PRUNTIME_FUNCTION v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *p_BeginAddress; // rdi
  int v13; // r12d
  unsigned __int64 v14; // r14
  unsigned int v15; // r15d
  _BYTE *v16; // rcx
  _BYTE *v17; // rax
  unsigned int v18; // esi
  DWORD64 *Rsp; // r9
  int v20; // edx
  _BYTE *v21; // rdx
  unsigned int v22; // esi
  _BYTE *v23; // rcx
  char v24; // dl
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v25; // r15
  unsigned int v26; // edx
  __int64 v27; // rdi
  unsigned int v28; // r14d
  _BYTE *v29; // rsi
  char v30; // r12
  __int64 v31; // r10
  unsigned int v32; // ecx
  DWORD64 v33; // rax
  ULONG64 v34; // r12
  _BYTE *v35; // r8
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v36; // rdi
  int v37; // ecx
  __int64 v38; // rax
  _BYTE *v39; // r10
  PEXCEPTION_ROUTINE v40; // rcx
  unsigned __int64 v41; // r14
  struct _UNWIND_HISTORY_TABLE *v42; // rdx
  int v43; // eax
  __int64 v44; // rdi
  int v45; // edx
  unsigned __int64 v46; // r14
  int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  DWORD64 v51; // rax
  int v52; // edx
  unsigned int v53; // edx
  _BYTE *v54; // rdx
  char v55; // al
  DWORD64 v56; // rax
  unsigned __int8 v57; // cl
  int v58; // eax
  int v59; // eax
  unsigned __int64 v60; // rdi
  unsigned __int64 BeginAddress; // rcx
  __int64 v62; // rax
  char v63; // cl
  char v64; // al
  unsigned int v65; // ecx
  __int16 v66; // cx
  unsigned int v67; // edi
  unsigned int v68; // ecx
  unsigned int v69; // r11d
  unsigned int v70; // r10d
  __int16 v71; // dx
  int v72; // ecx
  __int64 v73; // r15
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  ULONGLONG *v76; // rdx
  __int64 v77; // rcx
  LONGLONG v78; // rax
  __int64 v79; // rax
  unsigned int v80; // ecx
  DWORD64 **v81; // rcx
  __int64 v82; // rax
  int v84; // edx
  _DWORD *v85; // rax
  int v86; // eax
  unsigned int i; // edi
  __int64 v88; // rcx
  char v89; // al
  char v90; // [rsp+40h] [rbp-C0h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v91; // [rsp+48h] [rbp-B8h]
  int v92; // [rsp+50h] [rbp-B0h]
  unsigned __int64 ImageBase; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v94; // [rsp+60h] [rbp-A0h]
  PVOID HandlerData; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v97; // [rsp+78h] [rbp-88h]
  unsigned __int64 v98; // [rsp+88h] [rbp-78h]
  struct _UNWIND_HISTORY_TABLE *v99; // [rsp+90h] [rbp-70h]
  __int64 v100; // [rsp+98h] [rbp-68h]
  __int64 v101; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v102; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v103[2]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  ULONG64 v105; // [rsp+C8h] [rbp-38h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v107; // [rsp+D8h] [rbp-28h]
  struct _CONTEXT *p_ContextRecord; // [rsp+E8h] [rbp-18h]
  EXCEPTION_DISPOSITION (__cdecl *v109)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp-10h]
  _BYTE *v110; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v111; // [rsp+100h] [rbp+0h]
  int v112; // [rsp+108h] [rbp+8h]
  struct _CONTEXT ContextRecord; // [rsp+110h] [rbp+10h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5E0h] [rbp+4E0h] BYREF

  v2 = 0;
  v3 = a2;
  v101 = a2;
  v4 = a1;
  v100 = a1;
  v90 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v90 = 1;
    sub_1800F88C4();
  }
  if ( (unsigned __int8)sub_18006EC1C(v4, v3, 0LL) )
  {
    v2 = 1;
    goto LABEL_150;
  }
  v5 = *(_DWORD *)(v4 + 4) & 1;
  v92 = v5;
  if ( !sub_1800313AC(v103, (PVOID *)&v102) )
  {
    v5 |= 8u;
LABEL_205:
    *(_DWORD *)(v4 + 4) = v5;
    goto LABEL_150;
  }
  sub_180034554((__int64)&ContextRecord, v3);
  Rip = *(_QWORD *)(v3 + 248);
  p_HistoryTable = &HistoryTable;
  HistoryTable.LowAddress = -1LL;
  v99 = &HistoryTable;
  v98 = 0LL;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.HighAddress = 0LL;
  while ( 1 )
  {
    v8 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v91 = v8;
    p_BeginAddress = &v8->BeginAddress;
    if ( !v8 )
    {
      if ( Rip != *(_QWORD *)ContextRecord.Rsp )
      {
        Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
        ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
        ContextRecord.Rsp += 8LL;
        goto LABEL_60;
      }
LABEL_204:
      v3 = v101;
      goto LABEL_205;
    }
    v13 = 0;
    v14 = ImageBase + v8->UnwindInfoAddress;
    v15 = *(_BYTE *)v14 & 7;
    if ( v15 < 2 )
    {
      v16 = (_BYTE *)(ImageBase + v8->UnwindInfoAddress);
      v17 = (_BYTE *)(v14 + 2);
      v11 = 0LL;
      while ( !*v17 )
      {
        if ( (*v16 & 0x20) == 0 )
        {
          v13 = 1;
          break;
        }
        v10 = (unsigned __int8)*v17;
        v11 = (unsigned int)(v11 + 1);
        v9 = *v17 & 1;
        if ( (unsigned int)v11 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v79 = (unsigned int)(v10 + 1);
        if ( !(_DWORD)v9 )
          v79 = (unsigned int)v10;
        v16 = (_BYTE *)(ImageBase + *(unsigned int *)&v16[2 * v79 + 12]);
        v17 = v16 + 2;
      }
    }
    v18 = Rip - *p_BeginAddress - ImageBase;
    if ( (*(_BYTE *)(v14 + 3) & 0xF) != 0 )
    {
      if ( v18 >= *(unsigned __int8 *)(v14 + 1) || (*(_BYTE *)v14 & 0x20) != 0 )
      {
        v57 = *(_BYTE *)(v14 + 3);
        v58 = v57;
        Rsp = (DWORD64 *)ContextRecord.Rsp;
      }
      else
      {
        for ( i = 0; i < *(unsigned __int8 *)(v14 + 2); i += sub_180089A50(v88, v9, v10, v11) )
        {
          v88 = *(unsigned __int16 *)(v14 + 2LL * i + 4);
          if ( (BYTE1(v88) & 0xF) == 3 )
            break;
        }
        Rsp = (DWORD64 *)ContextRecord.Rsp;
        if ( v18 < *(unsigned __int8 *)(v14 + 2LL * i + 4) )
          goto LABEL_12;
        v58 = *(unsigned __int8 *)(v14 + 3);
        v57 = *(_BYTE *)(v14 + 3);
      }
      EstablisherFrame = *(&ContextRecord.Rax + (v57 & 0xF)) - (v58 & 0xFFFFFFF0);
      v94 = EstablisherFrame;
      goto LABEL_13;
    }
    Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_12:
    v94 = (unsigned __int64)Rsp;
    EstablisherFrame = (unsigned __int64)Rsp;
LABEL_13:
    if ( v13 )
      goto LABEL_26;
    v20 = 0;
    if ( v15 < 2 )
    {
      v21 = (_BYTE *)Rip;
      v22 = 0;
      if ( *(_BYTE *)Rip == 72 )
      {
        v64 = *(_BYTE *)(Rip + 1);
        if ( v64 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
          goto LABEL_131;
        if ( v64 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        {
LABEL_107:
          v21 = (_BYTE *)(Rip + 7);
          goto LABEL_17;
        }
      }
      if ( (*(_BYTE *)Rip & 0xFE) != 0x48
        || *(_BYTE *)(Rip + 1) != 0x8D
        || (v22 = *(_BYTE *)(Rip + 2) & 7 | (8 * (*(_BYTE *)Rip & 1))) == 0
        || v22 != (*(_BYTE *)(v14 + 3) & 0xF) )
      {
        while ( 1 )
        {
LABEL_17:
          if ( (*v21 & 0xF8) == 0x58 )
          {
            v62 = 1LL;
          }
          else
          {
            if ( (*v21 & 0xF0) != 0x40 || (v21[1] & 0xF8) != 0x58 )
            {
              v23 = v21 + 1;
              if ( *v21 != 0xF2 )
                v23 = v21;
              v24 = *v23;
              if ( (unsigned __int8)(*v23 + 62) <= 1u || v24 == -13 && v23[1] == 0xC3 )
              {
LABEL_73:
                v34 = ImageBase;
                goto LABEL_74;
              }
              if ( ((v24 + 23) & 0xFD) != 0 )
              {
                if ( v24 == -1 && v23[1] == 37 || (v24 & 0xF8) == 0x48 && v23[1] == 0xFF && (v23[2] & 0x38) == 0x20 )
                  goto LABEL_73;
LABEL_26:
                v25 = v91;
                goto LABEL_27;
              }
              v34 = ImageBase;
              v10 = (unsigned __int64)&v23[-ImageBase];
              if ( v24 == -21 )
                v59 = (char)v23[1] + 2;
              else
                v59 = *(_DWORD *)(v23 + 1) + 5;
              v25 = v91;
              v60 = v10 + v59;
              BeginAddress = v91->BeginAddress;
              if ( v60 < BeginAddress || v60 >= v91->EndAddress )
              {
                v85 = (_DWORD *)sub_18008DF80(v91, ImageBase, v60 + ImageBase);
                if ( v85 && v60 != *v85 )
                {
                  Rsp = (DWORD64 *)ContextRecord.Rsp;
                  goto LABEL_27;
                }
                Rsp = (DWORD64 *)ContextRecord.Rsp;
              }
              else if ( v60 != BeginAddress || (*(_BYTE *)v14 & 0x20) != 0 )
              {
                goto LABEL_27;
              }
LABEL_74:
              v54 = (_BYTE *)Rip;
              if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
                goto LABEL_78;
              v55 = *(_BYTE *)(Rip + 1);
              switch ( v55 )
              {
                case -125:
LABEL_76:
                  v54 = (_BYTE *)(Rip + 4);
                  Rsp = (DWORD64 *)((char *)Rsp + *(char *)(Rip + 3));
                  goto LABEL_77;
                case -127:
                  Rsp = (DWORD64 *)((char *)Rsp
                                  + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
                  break;
                case -115:
                  v89 = *(_BYTE *)(Rip + 2) & 0xF8;
                  if ( v89 == 96 )
                  {
                    Rsp = (DWORD64 *)*(&ContextRecord.Rax + v22);
                    ContextRecord.Rsp = (DWORD64)Rsp;
                    goto LABEL_76;
                  }
                  if ( v89 != -96 )
                  {
                    while ( 1 )
                    {
LABEL_78:
                      if ( (*v54 & 0xF8) == 0x58 )
                      {
                        *(&ContextRecord.Rax + (*v54 & 7)) = *Rsp;
                        v82 = 1LL;
                      }
                      else
                      {
                        if ( (*v54 & 0xF0) != 0x40 || (v54[1] & 0xF8) != 0x58 )
                        {
                          v56 = *Rsp++;
                          ContextRecord.Rsp = (DWORD64)Rsp;
                          ContextRecord.Rip = v56;
                          goto LABEL_81;
                        }
                        *(&ContextRecord.Rax + (v54[1] & 7 | (8LL * (*v54 & 1)))) = *Rsp;
                        v82 = 2LL;
                      }
                      Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
                      v54 += v82;
LABEL_77:
                      ContextRecord.Rsp = (DWORD64)Rsp;
                    }
                  }
                  Rsp = (DWORD64 *)(*(&ContextRecord.Rax + v22)
                                  + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
                  break;
                default:
                  goto LABEL_78;
              }
              v54 = (_BYTE *)(Rip + 7);
              goto LABEL_77;
            }
            v62 = 2LL;
          }
          v21 += v62;
        }
      }
      v63 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v63 != 96 )
      {
        if ( v63 != -96 )
          goto LABEL_17;
        goto LABEL_107;
      }
LABEL_131:
      v21 = (_BYTE *)(Rip + 4);
      goto LABEL_17;
    }
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_26;
    v25 = v91;
    v66 = HIBYTE(*(_WORD *)(v14 + 4));
    if ( (v66 & 0xF) == 6 )
    {
      v34 = ImageBase;
      v67 = *(unsigned __int8 *)(v14 + 4);
      v10 = (unsigned int)(Rip - ImageBase);
      if ( (v66 & 0x10) != 0 )
      {
        v68 = v91->EndAddress - v67;
        LOBYTE(v20) = (unsigned int)v10 - v68 < v67;
      }
      else
      {
        v68 = 0;
      }
      if ( !v20 )
      {
        v69 = *(unsigned __int8 *)(v14 + 2);
        v70 = 1;
        if ( v69 <= 1 )
          goto LABEL_27;
        while ( 1 )
        {
          v71 = HIBYTE(*(_WORD *)(v14 + 2LL * v70 + 4));
          if ( (v71 & 0xF) != 6 )
            goto LABEL_27;
          v20 = *(unsigned __int8 *)(v14 + 2LL * v70 + 4) + ((unsigned __int8)v71 >> 4 << 8);
          if ( !v20 )
            goto LABEL_27;
          v68 = v91->EndAddress - v20;
          if ( (unsigned int)v10 - v68 < v67 )
            break;
          if ( ++v70 >= v69 )
            goto LABEL_27;
        }
      }
      v36 = v91;
      sub_1800A4C00(ImageBase, v20, v10 - v68, (_DWORD)v91, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
      Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_82:
      v39 = HandlerData;
      v40 = 0LL;
      goto LABEL_46;
    }
LABEL_27:
    v26 = 0;
    v97 = 0;
    while ( 2 )
    {
      LODWORD(v27) = 0;
      v28 = Rip - v25->BeginAddress - ImageBase;
      v29 = (_BYTE *)(ImageBase + v25->UnwindInfoAddress);
      v30 = 0;
      if ( !v29[2] )
        goto LABEL_38;
      do
      {
        v31 = (unsigned __int8)v29[2 * (unsigned int)v27 + 5] >> 4;
        if ( v28 >= (unsigned __int8)v29[2 * (unsigned int)v27 + 4] )
        {
          v32 = v29[2 * (unsigned int)v27 + 5] & 0xF;
          if ( v32 > 5 )
          {
            v65 = v32 - 6;
            if ( !v65 )
            {
              LODWORD(v27) = v27 + 1;
              goto LABEL_35;
            }
            v74 = v65 - 1;
            if ( !v74 )
            {
              LODWORD(v27) = v27 + 2;
              goto LABEL_35;
            }
            v75 = v74 - 1;
            if ( v75 )
            {
              v80 = v75 - 1;
              if ( v80 )
              {
                if ( v80 != 1 )
LABEL_200:
                  RtlRaiseStatus(-1073741569);
                v30 = 1;
                v81 = (DWORD64 **)(Rsp + 3);
                if ( (_DWORD)v31 )
                {
                  ++Rsp;
                  ++v81;
                }
                ContextRecord.Rip = *Rsp;
                Rsp = *v81;
                goto LABEL_34;
              }
              v27 = (unsigned int)(v27 + 2);
              v10 = ((unsigned __int64)*(unsigned __int16 *)&v29[2 * v27 + 4] << 16)
                  + v94
                  + *(unsigned __int16 *)&v29[2 * (unsigned int)(v27 - 1) + 4];
              v77 = 2LL * (unsigned int)v31;
              *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v31) = *(_QWORD *)v10;
              v78 = *(_QWORD *)(v10 + 8);
            }
            else
            {
              v27 = (unsigned int)(v27 + 1);
              v76 = (ULONGLONG *)(v94 + 16LL * *(unsigned __int16 *)&v29[2 * v27 + 4]);
              v77 = 2LL * (unsigned int)v31;
              *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v31) = *v76;
              v78 = v76[1];
            }
            *(&ContextRecord.Xmm0.High + v77) = v78;
          }
          else
          {
            if ( v32 == 5 )
            {
              v27 = (unsigned int)(v27 + 2);
              v10 = (unsigned __int64)*(unsigned __int16 *)&v29[2 * v27 + 4] << 16;
              v51 = *(_QWORD *)(*(unsigned __int16 *)&v29[2 * (unsigned int)(v27 - 1) + 4] + v10 + v94);
            }
            else
            {
              if ( (v29[2 * (unsigned int)v27 + 5] & 0xF) == 0 )
              {
                *(&ContextRecord.Rax + v31) = *Rsp;
                Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
LABEL_34:
                ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_35:
                LODWORD(v27) = v27 + 1;
                continue;
              }
              v48 = v32 - 1;
              if ( !v48 )
              {
                v27 = (unsigned int)(v27 + 1);
                v52 = *(unsigned __int16 *)&v29[2 * v27 + 4];
                if ( (_DWORD)v31 )
                {
                  v27 = (unsigned int)(v27 + 1);
                  v53 = (*(unsigned __int16 *)&v29[2 * v27 + 4] << 16) + v52;
                }
                else
                {
                  v53 = 8 * v52;
                }
                Rsp = (DWORD64 *)((char *)Rsp + v53);
                goto LABEL_34;
              }
              v49 = v48 - 1;
              if ( !v49 )
              {
                Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)(8 * v31 + 8));
                goto LABEL_34;
              }
              v50 = v49 - 1;
              if ( !v50 )
              {
                ContextRecord.Rsp = *(&ContextRecord.Rax + (v29[3] & 0xF));
                Rsp = (DWORD64 *)(ContextRecord.Rsp - (v29[3] & 0xF0));
                goto LABEL_34;
              }
              if ( v50 != 1 )
                goto LABEL_200;
              LODWORD(v27) = v27 + 1;
              v51 = *(_QWORD *)(v94 + 8LL * *(unsigned __int16 *)&v29[2 * (unsigned int)v27 + 4]);
            }
            *(&ContextRecord.Rax + v31) = v51;
          }
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          goto LABEL_35;
        }
        v86 = sub_180089A50(*(unsigned __int16 *)&v29[2 * (unsigned int)v27 + 4], (unsigned int)v27, v10, Rsp);
        Rsp = (DWORD64 *)ContextRecord.Rsp;
        LODWORD(v27) = v86 + v27;
      }
      while ( (unsigned int)v27 < (unsigned __int8)v29[2] );
      v26 = v97;
LABEL_38:
      if ( (*v29 & 0x20) != 0 )
      {
        v72 = (unsigned __int8)v29[2];
        v73 = (unsigned int)(v72 + 1);
        if ( (v72 & 1) == 0 )
          v73 = (unsigned __int8)v29[2];
        v97 = ++v26;
        v25 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v29[2 * v73 + 4];
        if ( v26 > 0x20 )
          RtlRaiseStatus(-1073741569);
        continue;
      }
      break;
    }
    if ( !v30 )
    {
      v33 = *Rsp++;
      ContextRecord.Rsp = (DWORD64)Rsp;
      ContextRecord.Rip = v33;
    }
    v34 = ImageBase;
    v35 = (_BYTE *)(ImageBase + v25->UnwindInfoAddress);
    if ( (int)Rip - v25->BeginAddress - (int)ImageBase < (unsigned __int8)v35[1] )
    {
LABEL_81:
      v36 = v91;
      goto LABEL_82;
    }
    v36 = v91;
    if ( (*v35 & 8) == 0 )
      goto LABEL_82;
    v37 = (unsigned __int8)v35[2];
    v38 = (unsigned int)(v37 + 1);
    if ( (v37 & 1) == 0 )
      v38 = (unsigned __int8)v35[2];
    v39 = &v35[2 * (unsigned int)(v38 + 2) + 4];
    v40 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)&v35[2 * v38 + 4]);
    HandlerData = v39;
LABEL_46:
    v41 = v94;
    if ( (v94 & 7) != 0 || v94 < v103[0] || v94 >= v102 )
    {
      v4 = v100;
      v5 = v92 | 8;
      goto LABEL_204;
    }
    v5 = v92;
    v4 = v100;
    if ( !v40 )
      goto LABEL_60;
    v42 = v99;
    v43 = 0;
LABEL_51:
    FunctionEntry = v36;
    v44 = 0LL;
    p_ContextRecord = &ContextRecord;
    *(_DWORD *)(v4 + 4) = v5;
    ControlPc = Rip;
    v105 = v34;
    v107 = v41;
    v109 = v40;
    v110 = v39;
    v111 = v42;
    v112 = v43;
    if ( v90 )
      v44 = sub_1800F8A60(v4, &ContextRecord, Rip, v40);
    v45 = sub_1800AA000(v4, v41, v101, &ControlPc);
    if ( v44 )
      *(_DWORD *)(v44 + 1396) = v45;
    v5 |= *(_DWORD *)(v4 + 4) & 1;
    v92 = v5;
    if ( v98 == v41 )
    {
      v5 &= ~0x10u;
      v98 = 0LL;
      v92 = v5;
      v46 = 0LL;
    }
    else
    {
      v46 = v98;
    }
    if ( !v45 )
      break;
    v47 = v45 - 1;
    if ( !v47 )
      goto LABEL_59;
    v84 = v47 - 1;
    if ( v84 )
    {
      if ( v84 != 1 )
        RtlRaiseStatus(-1073741786);
      v34 = v105;
      Rip = ControlPc;
      v36 = FunctionEntry;
      ImageBase = v105;
      sub_180034554((__int64)&ContextRecord, (__int64)p_ContextRecord);
      v40 = RtlVirtualUnwind(1u, v34, Rip, v36, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
      {
        if ( v40 != v109
          || (v41 = EstablisherFrame, EstablisherFrame != v107)
          || (v39 = HandlerData, HandlerData != v110) )
        {
          __fastfail(0x27u);
        }
      }
      else
      {
        v41 = v107;
        v39 = v110;
        v40 = v109;
        EstablisherFrame = v107;
        HandlerData = v110;
      }
      v42 = v111;
      v43 = v112;
      v99 = v111;
      goto LABEL_51;
    }
    v5 |= 0x10u;
    v92 = v5;
    if ( v107 > v46 )
      v98 = v107;
LABEL_59:
    Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_60:
    Rip = ContextRecord.Rip;
    if ( (unsigned __int8)sub_180037780(v103, Rsp, &v102) != 1 )
      goto LABEL_204;
    p_HistoryTable = v99;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  v3 = v101;
  v2 = 1;
LABEL_150:
  sub_18006EC1C(v4, v3, 1LL);
  return v2;
}

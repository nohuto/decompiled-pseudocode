/*
 * XREFs of RtlUnwindEx @ 0x180033870
 * Callers:
 *     __C_specific_handler @ 0x180096300 (__C_specific_handler.c)
 *     _local_unwind @ 0x180096C40 (_local_unwind.c)
 *     sub_1800A8F80 @ 0x1800A8F80 (sub_1800A8F80.c)
 *     sub_1800AB950 @ 0x1800AB950 (sub_1800AB950.c)
 *     RtlUnwind @ 0x1800F9610 (RtlUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_1800313AC @ 0x1800313AC (sub_1800313AC.c)
 *     sub_180034554 @ 0x180034554 (sub_180034554.c)
 *     RtlLookupFunctionEntry @ 0x180034710 (RtlLookupFunctionEntry.c)
 *     sub_180036954 @ 0x180036954 (sub_180036954.c)
 *     RtlVirtualUnwind @ 0x1800377A0 (RtlVirtualUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180079EB0 (RtlGuardCheckLongJumpTarget.c)
 *     sub_180089A50 @ 0x180089A50 (sub_180089A50.c)
 *     sub_18008DF80 @ 0x18008DF80 (sub_18008DF80.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800961B0 @ 0x1800961B0 (sub_1800961B0.c)
 *     sub_180096200 @ 0x180096200 (sub_180096200.c)
 *     sub_1800A4C00 @ 0x1800A4C00 (sub_1800A4C00.c)
 *     ZwRaiseException @ 0x1800A7E10 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x1800A91B0 (RtlCaptureContext.c)
 *     sub_1800A9270 @ 0x1800A9270 (sub_1800A9270.c)
 *     nullsub_3 @ 0x1800A9740 (nullsub_3.c)
 *     sub_1800AA080 @ 0x1800AA080 (sub_1800AA080.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v7; // rdi
  PCONTEXT v9; // r15
  struct _CONTEXT *v10; // rsi
  DWORD64 Rip; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned __int8 *v15; // r13
  __int64 v16; // r8
  unsigned int *p_BeginAddress; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r11
  int v20; // r12d
  unsigned __int64 v21; // rdi
  unsigned int v22; // r15d
  unsigned int v23; // r9d
  _BYTE *v24; // rax
  _BYTE *v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // r14d
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // eax
  char v33; // cl
  __int64 v34; // r15
  unsigned __int8 *v35; // rcx
  unsigned __int8 v36; // al
  int v37; // eax
  char v38; // dl
  unsigned __int8 *v39; // rdx
  unsigned __int8 v40; // cl
  bool v41; // zf
  int v42; // eax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rbx
  unsigned int *v45; // rax
  unsigned __int8 *v46; // r8
  unsigned __int8 v47; // al
  char v48; // al
  DWORD64 v49; // rcx
  unsigned __int8 v50; // dl
  unsigned __int8 v51; // r9
  DWORD64 v52; // rcx
  ULONG64 v53; // r12
  EXCEPTION_DISPOSITION (__cdecl *v54)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rdx
  _BYTE *v55; // rax
  PVOID v56; // rcx
  int v57; // ebx
  DWORD v58; // edi
  PEXCEPTION_RECORD v59; // r10
  DWORD64 v60; // rcx
  PCONTEXT v61; // r8
  PUNWIND_HISTORY_TABLE v62; // rax
  int v63; // eax
  struct _CONTEXT *v64; // r9
  __int64 v65; // r8
  PRUNTIME_FUNCTION v66; // r8
  PEXCEPTION_ROUTINE v67; // rax
  unsigned __int8 v68; // r11
  unsigned __int16 v69; // ax
  int v70; // edx
  int v71; // r10d
  unsigned int v72; // ebx
  unsigned int v73; // r9d
  __int16 v74; // ax
  unsigned int v75; // r13d
  unsigned __int64 v76; // rdx
  _DWORD *v77; // r12
  int v78; // eax
  _BYTE *v79; // rdi
  __int64 v80; // rbx
  unsigned int v81; // r15d
  _BYTE *v82; // rdx
  __int64 v83; // r9
  __int64 v84; // rbx
  int v85; // edx
  unsigned int v86; // edx
  DWORD64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rbx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rbx
  __int64 v96; // rcx
  DWORD64 *v97; // rax
  DWORD64 *v98; // rcx
  int v99; // ecx
  __int64 v100; // r12
  DWORD64 v101; // rcx
  _BYTE *v102; // r8
  int v103; // ecx
  int v104; // eax
  __int64 v105; // rdx
  struct _CONTEXT *v106; // rax
  struct _CONTEXT *v107; // rax
  DWORD64 *Rsp; // rcx
  _QWORD *v109; // rax
  PEXCEPTION_RECORD v110; // r14
  ULONG_PTR v111; // rbx
  unsigned __int8 v112; // [rsp+40h] [rbp-C0h]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp-B8h] BYREF
  PRUNTIME_FUNCTION v114; // [rsp+50h] [rbp-B0h]
  PVOID HandlerData; // [rsp+58h] [rbp-A8h] BYREF
  PEXCEPTION_ROUTINE v116; // [rsp+60h] [rbp-A0h]
  DWORD v117; // [rsp+68h] [rbp-98h]
  unsigned __int64 EstablisherFrame; // [rsp+70h] [rbp-90h] BYREF
  PCONTEXT v119; // [rsp+78h] [rbp-88h]
  PUNWIND_HISTORY_TABLE v120; // [rsp+80h] [rbp-80h]
  PVOID v121; // [rsp+88h] [rbp-78h]
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+90h] [rbp-70h]
  int i; // [rsp+98h] [rbp-68h]
  unsigned __int64 v124; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 *v125; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v126; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v127; // [rsp+B8h] [rbp-48h]
  PVOID v128; // [rsp+C0h] [rbp-40h]
  ULONG64 ControlPc; // [rsp+D0h] [rbp-30h] BYREF
  ULONG64 v130; // [rsp+D8h] [rbp-28h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v131; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v132; // [rsp+E8h] [rbp-18h]
  PVOID v133; // [rsp+F0h] [rbp-10h]
  PCONTEXT v134; // [rsp+F8h] [rbp-8h]
  EXCEPTION_DISPOSITION (__cdecl *v135)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+100h] [rbp+0h]
  PVOID v136; // [rsp+108h] [rbp+8h]
  struct _UNWIND_HISTORY_TABLE *v137; // [rsp+110h] [rbp+10h]
  int v138; // [rsp+118h] [rbp+18h]
  PCONTEXT v139; // [rsp+120h] [rbp+20h]
  int v140; // [rsp+130h] [rbp+30h] BYREF
  __int64 v141; // [rsp+138h] [rbp+38h]
  DWORD64 v142; // [rsp+140h] [rbp+40h]
  int v143; // [rsp+148h] [rbp+48h]
  struct _CONTEXT v144; // [rsp+1D0h] [rbp+D0h] BYREF

  v7 = HistoryTable;
  v128 = TargetIp;
  v121 = TargetFrame;
  v139 = ContextRecord;
  v120 = HistoryTable;
  v127 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !sub_1800313AC(&v126, (PVOID *)&v124) )
    RtlRaiseStatus(-1073741784);
  v119 = ContextRecord;
  v9 = ContextRecord;
  v10 = &v144;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (PEXCEPTION_RECORD)&v140;
    v142 = Rip;
    v140 = -1073741785;
    v141 = 0LL;
    v143 = 0;
  }
  v41 = TargetFrame == 0LL;
  v12 = 0LL;
  v13 = v124;
  v14 = 6;
  if ( !v41 )
    v14 = 2;
  v117 = v14;
  while ( 1 )
  {
    v15 = (unsigned __int8 *)v9->Rip;
    v125 = v15;
    v114 = RtlLookupFunctionEntry((ULONG64)v15, &ImageBase, v7);
    if ( !v114 )
    {
      Rsp = (DWORD64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v109 = Rsp + 1;
      v56 = v121;
      v9->Rsp = (DWORD64)v109;
      goto LABEL_166;
    }
    sub_180034554(v10, v9, v16, v114);
    v18 = 0LL;
    v19 = ImageBase;
    v20 = 0;
    v21 = ImageBase + p_BeginAddress[2];
    v116 = 0LL;
    v22 = *(_BYTE *)v21 & 7;
    if ( v22 < 2 )
    {
      v23 = 0;
      v24 = (_BYTE *)(v21 + 2);
      v25 = (_BYTE *)v21;
      if ( !*(_BYTE *)(v21 + 2) )
      {
        while ( (*v25 & 0x20) != 0 )
        {
          v18 = (unsigned __int8)*v24;
          ++v23;
          v26 = *v24 & 1;
          if ( v23 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v27 = (unsigned int)(v18 + 1);
          if ( !v26 )
            v27 = (unsigned int)v18;
          v25 = (_BYTE *)(ImageBase + *(unsigned int *)&v25[2 * v27 + 12]);
          v24 = v25 + 2;
          if ( v25[2] )
            goto LABEL_19;
        }
        v20 = 1;
      }
LABEL_19:
      p_BeginAddress = &v114->BeginAddress;
    }
    v28 = *(unsigned __int8 *)(v21 + 3);
    v29 = (_DWORD)v15 - ImageBase - *p_BeginAddress;
    if ( (v28 & 0xF) == 0 )
    {
LABEL_21:
      v12 = v10->Rsp;
      goto LABEL_32;
    }
    if ( v29 >= *(unsigned __int8 *)(v21 + 1) || (*(_BYTE *)v21 & 0x20) != 0 )
    {
      v33 = *(_BYTE *)(v21 + 3);
      v32 = (unsigned __int8)v28;
    }
    else
    {
      v30 = 0LL;
      if ( *(_BYTE *)(v21 + 2) )
      {
        do
        {
          v31 = *(unsigned __int16 *)(v21 + 2 * v30 + 4);
          if ( (BYTE1(v31) & 0xF) == 3 )
            break;
          v30 = (unsigned int)sub_180089A50(v31, v28, v18, p_BeginAddress) + (unsigned int)v30;
        }
        while ( (unsigned int)v30 < *(unsigned __int8 *)(v21 + 2) );
        v19 = ImageBase;
        p_BeginAddress = &v114->BeginAddress;
      }
      if ( v29 < *(unsigned __int8 *)(v21 + 2 * v30 + 4) )
        goto LABEL_21;
      v32 = *(unsigned __int8 *)(v21 + 3);
      v33 = *(_BYTE *)(v21 + 3);
    }
    v12 = *(&v10->Rax + (v33 & 0xF)) - (v32 & 0xFFFFFFF0);
LABEL_32:
    EstablisherFrame = v12;
    if ( v20 )
      goto LABEL_118;
    if ( v22 >= 2 )
    {
      v68 = *(_BYTE *)(v21 + 2);
      if ( v68 )
      {
        v69 = *(_WORD *)(v21 + 4);
        v70 = v69;
        LOWORD(v70) = HIBYTE(v69);
        if ( (HIBYTE(v69) & 0xF) == 6 )
        {
          v53 = ImageBase;
          v71 = (_DWORD)v15 - ImageBase;
          v72 = (unsigned __int8)v69;
          if ( (v69 & 0x1000) != 0 )
          {
            v18 = p_BeginAddress[1] - (unsigned __int8)v69;
            if ( v71 - (int)v18 < (unsigned int)(unsigned __int8)v69 )
            {
LABEL_123:
              sub_1800A4C00(ImageBase, v70, v71 - v18, (_DWORD)p_BeginAddress, (__int64)v10, 0LL, 0LL, 0LL);
              goto LABEL_92;
            }
          }
          v73 = 1;
          if ( v68 > 1u )
          {
            while ( 1 )
            {
              v74 = *(_WORD *)(v21 + 2LL * v73 + 4);
              if ( (HIBYTE(v74) & 0xF) != 6 )
                break;
              v70 = (unsigned __int8)v74 + (HIBYTE(v74) >> 4 << 8);
              if ( !v70 )
                break;
              v18 = v114->EndAddress - v70;
              if ( v71 - (int)v18 < v72 )
              {
                LODWORD(p_BeginAddress) = (_DWORD)v114;
                goto LABEL_123;
              }
              if ( ++v73 >= v68 )
                goto LABEL_118;
            }
          }
        }
      }
      goto LABEL_118;
    }
    v18 = *v15;
    v34 = 0LL;
    v35 = v15;
    if ( (_BYTE)v18 == 72 )
    {
      v36 = v15[1];
      if ( v36 == 0x83 && v15[2] == 0xC4 )
      {
        v35 = v15 + 4;
        goto LABEL_48;
      }
      if ( v36 == 0x81 && v15[2] == 0xC4 )
        goto LABEL_47;
    }
    if ( (v18 & 0xFE) != 0x48 )
      goto LABEL_48;
    if ( v15[1] != 0x8D )
      goto LABEL_48;
    v37 = v15[2] & 7;
    v34 = v37 | (8 * (unsigned int)(v18 & 1));
    if ( !(v37 | (8 * (v18 & 1))) || (_DWORD)v34 != (*(_BYTE *)(v21 + 3) & 0xF) )
      goto LABEL_48;
    v38 = v15[2] & 0xF8;
    if ( v38 == 96 )
    {
      v35 = v15 + 4;
      goto LABEL_48;
    }
    if ( v38 == -96 )
LABEL_47:
      v35 = v15 + 7;
    while ( 1 )
    {
LABEL_48:
      while ( (*v35 & 0xF8) == 0x58 )
        ++v35;
      if ( (*v35 & 0xF0) != 0x40 || (v35[1] & 0xF8) != 0x58 )
        break;
      v35 += 2;
    }
    v39 = v35 + 1;
    if ( *v35 != 0xF2 )
      v39 = v35;
    v40 = *v39;
    if ( (unsigned __int8)(*v39 + 62) <= 1u || v40 == 0xF3 && v39[1] == 0xC3 )
    {
LABEL_74:
      v46 = v15;
      if ( (*v15 & 0xF8) == 0x48 )
      {
        v47 = v15[1];
        if ( v47 != 0x83 )
        {
          if ( v47 == 0x81 )
          {
            v10->Rsp += v15[3] | (unsigned __int64)((v15[4] | (*(unsigned __int16 *)(v15 + 5) << 8)) << 8);
          }
          else
          {
            if ( v47 != 0x8D )
              goto LABEL_85;
            v48 = v15[2] & 0xF8;
            if ( v48 == 96 )
            {
              v49 = *(&v10->Rax + v34);
              v46 = v15 + 4;
              v10->Rsp = v49;
              v10->Rsp = v49 + (char)v15[3];
              goto LABEL_85;
            }
            if ( v48 != -96 )
              goto LABEL_85;
            v10->Rsp = *(&v10->Rax + v34) + (v15[3] | ((v15[4] | (*(unsigned __int16 *)(v15 + 5) << 8)) << 8));
          }
          v46 = v15 + 7;
          goto LABEL_85;
        }
        v46 = v15 + 4;
        v10->Rsp += (char)v15[3];
      }
      while ( 1 )
      {
LABEL_85:
        while ( 1 )
        {
          v50 = *v46;
          if ( (*v46 & 0xF8) != 0x58 )
            break;
          *(&v10->Rax + (v50 & 7)) = *(_QWORD *)v10->Rsp;
          v10->Rsp += 8LL;
          ++v46;
        }
        if ( (v50 & 0xF0) != 0x40 )
          break;
        v51 = v46[1];
        if ( (v51 & 0xF8) != 0x58 )
          break;
        *(&v10->Rax + (v51 & 7 | (8LL * (*v46 & 1)))) = *(_QWORD *)v10->Rsp;
        v10->Rsp += 8LL;
        v46 += 2;
      }
      v52 = *(_QWORD *)v10->Rsp;
      v10->Rsp += 8LL;
      v10->Rip = v52;
LABEL_91:
      v53 = ImageBase;
      goto LABEL_92;
    }
    if ( ((v40 + 23) & 0xFD) == 0 )
    {
      v18 = (unsigned __int64)&v39[-v19];
      if ( v40 == 0xEB )
        v42 = (char)v39[1] + 2;
      else
        v42 = *(_DWORD *)(v39 + 1) + 5;
      v43 = *p_BeginAddress;
      v44 = v18 + v42;
      if ( v44 < v43 || v44 >= p_BeginAddress[1] )
      {
        v45 = (unsigned int *)sub_18008DF80(p_BeginAddress, v19, v44 + v19);
        if ( !v45 )
          goto LABEL_74;
        v41 = v44 == *v45;
      }
      else
      {
        if ( v44 != v43 )
          goto LABEL_118;
        v41 = (*(_BYTE *)v21 & 0x20) == 0;
      }
      goto LABEL_73;
    }
    if ( v40 == 0xFF && v39[1] == 37 )
      goto LABEL_74;
    if ( (v40 & 0xF8) == 0x48 && v39[1] == 0xFF )
    {
      v41 = (v39[2] & 0x38) == 32;
LABEL_73:
      if ( v41 )
        goto LABEL_74;
    }
LABEL_118:
    v75 = 0;
    v76 = ImageBase;
    v77 = &v114->BeginAddress;
    v78 = (_DWORD)v125 - ImageBase;
    for ( i = (_DWORD)v125 - ImageBase; ; v78 = i )
    {
      LOBYTE(v18) = 0;
      v79 = (_BYTE *)(v76 + (unsigned int)v77[2]);
      v112 = 0;
      v80 = 0LL;
      v81 = v78 - *v77;
      if ( v79[2] )
      {
        do
        {
          v82 = &v79[2 * v80];
          v83 = (unsigned __int8)v82[5] >> 4;
          if ( v81 < (unsigned __int8)v82[4] )
          {
            v80 = (unsigned int)sub_180089A50(*((unsigned __int16 *)v82 + 2), v82, v18, v83) + (unsigned int)v80;
          }
          else
          {
            switch ( v79[2 * v80 + 5] & 0xF )
            {
              case 0:
                *(&v10->Rax + v83) = *(_QWORD *)v10->Rsp;
                v10->Rsp += 8LL;
                v80 = (unsigned int)(v80 + 1);
                break;
              case 1:
                v84 = (unsigned int)(v80 + 1);
                v85 = *(unsigned __int16 *)&v79[2 * v84 + 4];
                if ( (_DWORD)v83 )
                {
                  v84 = (unsigned int)(v84 + 1);
                  v86 = (*(unsigned __int16 *)&v79[2 * v84 + 4] << 16) + v85;
                }
                else
                {
                  v86 = 8 * v85;
                }
                v10->Rsp += v86;
                v80 = (unsigned int)(v84 + 1);
                break;
              case 2:
                v10->Rsp += (unsigned int)(8 * v83 + 8);
                v80 = (unsigned int)(v80 + 1);
                break;
              case 3:
                v87 = *(&v10->Rax + (v79[3] & 0xF));
                v10->Rsp = v87;
                v10->Rsp = v87 - (v79[3] & 0xF0);
                v80 = (unsigned int)(v80 + 1);
                break;
              case 4:
                v88 = (unsigned int)(v80 + 1);
                v89 = *(unsigned __int16 *)&v79[2 * v88 + 4];
                v80 = (unsigned int)(v88 + 1);
                *(&v10->Rax + v83) = *(_QWORD *)(v12 + 8 * v89);
                break;
              case 5:
                v90 = (unsigned int)(v80 + 2);
                v91 = *(unsigned __int16 *)&v79[2 * (unsigned int)(v90 - 1) + 4];
                v18 = (unsigned __int64)*(unsigned __int16 *)&v79[2 * v90 + 4] << 16;
                v80 = (unsigned int)(v90 + 1);
                *(&v10->Rax + v83) = *(_QWORD *)(v91 + v12 + v18);
                break;
              case 6:
                v80 = (unsigned int)(v80 + 2);
                break;
              case 7:
                v80 = (unsigned int)(v80 + 3);
                break;
              case 8:
                v92 = (unsigned int)(v80 + 1);
                v93 = (unsigned int)v83;
                v94 = 2LL * *(unsigned __int16 *)&v79[2 * v92 + 4];
                v80 = (unsigned int)(v92 + 1);
                v10->FltSave.XmmRegisters[v93].Low = *(_QWORD *)(v12 + 8 * v94);
                v10->FltSave.XmmRegisters[v93].High = *(_QWORD *)(v12 + 8 * v94 + 8);
                break;
              case 9:
                v95 = (unsigned int)(v80 + 2);
                v96 = (unsigned int)v83;
                v18 = v12
                    + ((unsigned __int64)*(unsigned __int16 *)&v79[2 * v95 + 4] << 16)
                    + *(unsigned __int16 *)&v79[2 * (unsigned int)(v95 - 1) + 4];
                v80 = (unsigned int)(v95 + 1);
                v10->FltSave.XmmRegisters[v96].Low = *(_QWORD *)v18;
                v10->FltSave.XmmRegisters[v96].High = *(_QWORD *)(v18 + 8);
                break;
              case 0xA:
                v97 = (DWORD64 *)v10->Rsp;
                v112 = 1;
                v98 = v97 + 3;
                if ( (_DWORD)v83 )
                {
                  ++v97;
                  ++v98;
                }
                v80 = (unsigned int)(v80 + 1);
                v10->Rip = *v97;
                v10->Rsp = *v98;
                break;
              default:
                RtlRaiseStatus(-1073741569);
            }
          }
        }
        while ( (unsigned int)v80 < (unsigned __int8)v79[2] );
        v18 = v112;
        v76 = ImageBase;
      }
      if ( (*v79 & 0x20) == 0 )
        break;
      v99 = (unsigned __int8)v79[2];
      v100 = (unsigned int)(v99 + 1);
      if ( (v99 & 1) == 0 )
        v100 = (unsigned __int8)v79[2];
      ++v75;
      v77 = &v79[2 * v100 + 4];
      if ( v75 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !(_BYTE)v18 )
    {
      v101 = *(_QWORD *)v10->Rsp;
      v10->Rsp += 8LL;
      v10->Rip = v101;
    }
    v15 = v125;
    v102 = (_BYTE *)(v76 + (unsigned int)v77[2]);
    if ( (int)v125 - (int)v76 - *v77 < (unsigned int)(unsigned __int8)v102[1] )
      goto LABEL_91;
    v53 = ImageBase;
    if ( (*v102 & 0x10) != 0 )
    {
      v103 = (unsigned __int8)v102[2];
      v104 = v103 + 1;
      if ( (v103 & 1) == 0 )
        v104 = (unsigned __int8)v102[2];
      v105 = *(unsigned int *)&v102[2 * v104 + 4];
      v55 = &v102[2 * (v104 + 2) + 4];
      v54 = (EXCEPTION_DISPOSITION (__cdecl *)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID))(ImageBase + v105);
      HandlerData = v55;
      v116 = v54;
      goto LABEL_93;
    }
LABEL_92:
    v54 = v116;
    v55 = HandlerData;
LABEL_93:
    if ( (v12 & 7) != 0
      || v12 < v126
      || (v13 = v124, v12 >= v124)
      || (v56 = v121) != 0LL && (unsigned __int64)v121 < v12 )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v54 )
    {
      v57 = 0;
      v58 = v117;
      v133 = v128;
      do
      {
        if ( v56 == (PVOID)v12 )
          v58 |= 0x20u;
        v59 = ExceptionRecorda;
        v9 = v119;
        v60 = (DWORD64)v127;
        v61 = v119;
        v136 = v55;
        v62 = v120;
        ExceptionRecorda->ExceptionFlags = v58;
        v58 &= 0xFFFFFF9F;
        v61->Rax = v60;
        v131 = v114;
        v135 = v54;
        ControlPc = (ULONG64)v15;
        v130 = v53;
        v132 = v12;
        v134 = v61;
        v137 = v62;
        v138 = v57;
        v117 = v58;
        v63 = sub_1800AA080(v59, v12, v61, &ControlPc) - 1;
        if ( v63 )
        {
          if ( v63 != 2 )
            RtlRaiseStatus(-1073741786);
          v53 = v130;
          v15 = (unsigned __int8 *)ControlPc;
          ImageBase = v130;
          v114 = v131;
          sub_180034554(v139, v134, v131, v139);
          v119 = v64;
          v9 = v64;
          v10 = &v144;
          sub_180034554(&v144, v64, v65, v64);
          v67 = RtlVirtualUnwind(2u, v53, (ULONG64)v15, v66, &v144, &HandlerData, &EstablisherFrame, 0LL);
          v116 = v67;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v67 != v135 || (v12 = EstablisherFrame, EstablisherFrame != v132) || HandlerData != v136 )
              __fastfail(0x27u);
          }
          else
          {
            v12 = v132;
            EstablisherFrame = v132;
            v116 = v135;
            HandlerData = v136;
          }
          v58 |= 0x40u;
          v57 = v138;
          v56 = v121;
          v120 = v137;
          v117 = v58;
        }
        else
        {
          v56 = v121;
          if ( (PVOID)v12 != v121 )
          {
            v106 = v9;
            v119 = v10;
            v9 = v10;
            v10 = v106;
          }
        }
        v55 = HandlerData;
        v54 = v116;
      }
      while ( (v58 & 0x40) != 0 );
      v13 = v124;
    }
    else if ( (PVOID)v12 == v121 )
    {
      v9 = v119;
    }
    else
    {
      v107 = v119;
      v9 = v10;
      v119 = v10;
      v10 = v107;
    }
    v7 = v120;
LABEL_166:
    if ( (v12 & 7) != 0 || v12 < v126 || v12 >= v13 )
      break;
    if ( (PVOID)v12 == v56 )
      goto LABEL_172;
  }
  if ( (PVOID)v12 == v56 )
  {
LABEL_172:
    v110 = ExceptionRecorda;
    v9->Rax = (DWORD64)v127;
    if ( v110->ExceptionCode != -2147483607 )
      v9->Rip = (DWORD64)v128;
    nullsub_3(&v9->Rip);
    if ( v110->ExceptionCode == -2147483610 )
    {
      v111 = v110->ExceptionInformation[0];
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && !(unsigned int)sub_180036954(*(_QWORD *)(v111 + 16)) )
        __fastfail(0xDu);
      RtlGuardCheckLongJumpTarget(*(PVOID *)(v111 + 80), 0, 0LL);
    }
    else
    {
      if ( v110->ExceptionCode != -2147483607 || !v110->NumberParameters )
        goto LABEL_181;
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      {
        if ( sub_180030138() )
          sub_180096200();
        else
          sub_1800961B0();
LABEL_181:
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
        {
          if ( !(unsigned int)sub_180036954(v9->Rsp) )
            __fastfail(0xDu);
        }
      }
    }
    sub_1800A9270(v9, v110);
    return;
  }
  if ( v15 == (unsigned __int8 *)v9->Rip )
    RtlRaiseStatus(-1073741569);
  ZwRaiseException(ExceptionRecorda, v9, 0);
}

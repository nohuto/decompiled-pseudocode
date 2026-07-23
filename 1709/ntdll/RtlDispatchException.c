/*
 * XREFs of RtlDispatchException @ 0x180025D00
 * Callers:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A3DF0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlpGetStackLimits @ 0x180024B7C (RtlpGetStackLimits.c)
 *     RtlpCopyContext @ 0x180027AC0 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180027C80 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x18002A090 (RtlVirtualUnwind.c)
 *     RtlpCallVectoredHandlers @ 0x18006CBA8 (RtlpCallVectoredHandlers.c)
 *     RtlpSameFunction @ 0x18007C774 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088B08 (RtlpUnwindOpSlots.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x18009F9C0 (RtlpUnwindEpilogue.c)
 *     RtlpExecuteHandlerForException @ 0x1800A4EE0 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1800F9D00 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1800F9E9C (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // bl
  PCONTEXT v3; // rdi
  PEXCEPTION_RECORD v4; // r15
  int v5; // esi
  ULONG64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  PRUNTIME_FUNCTION v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *p_BeginAddress; // rdi
  int v13; // r13d
  unsigned __int64 v14; // r14
  unsigned int v15; // r15d
  unsigned int v16; // esi
  DWORD64 Rsp; // r8
  int v18; // edx
  _BYTE *v19; // rdx
  unsigned int v20; // esi
  _BYTE *v21; // rcx
  char v22; // dl
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v23; // r15
  unsigned int v24; // edx
  __int64 v25; // rdi
  unsigned int v26; // r14d
  _BYTE *v27; // rsi
  char v28; // r13
  __int64 v29; // r9
  unsigned int v30; // ecx
  DWORD64 v31; // rax
  ULONG64 v32; // r13
  _BYTE *v33; // r9
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v34; // rdi
  int v35; // ecx
  __int64 v36; // rax
  _BYTE *v37; // r10
  PEXCEPTION_ROUTINE v38; // rcx
  unsigned __int64 v39; // r14
  struct _UNWIND_HISTORY_TABLE *v40; // rdx
  int v41; // eax
  __int64 v42; // rdi
  int v43; // edx
  unsigned __int64 v44; // r14
  int v45; // edx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  DWORD64 v49; // rax
  _BYTE *v50; // rcx
  _BYTE *v51; // rax
  __int64 v52; // rax
  int v53; // edx
  unsigned int v54; // edx
  __int64 v55; // rax
  _BYTE *v56; // rdx
  char v57; // al
  DWORD64 v58; // rax
  char v59; // cl
  char v60; // al
  unsigned __int8 v61; // cl
  int v62; // eax
  int v63; // eax
  unsigned __int64 v64; // rdi
  unsigned __int64 BeginAddress; // rcx
  unsigned int v66; // ecx
  __int16 v67; // cx
  unsigned int v68; // edi
  int v69; // r10d
  unsigned int v70; // ecx
  unsigned int v71; // r11d
  unsigned int v72; // r9d
  __int16 v73; // dx
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  ULONGLONG *v76; // rdx
  __int64 v77; // rcx
  LONGLONG v78; // rax
  int v79; // ecx
  __int64 v80; // r15
  _DWORD *v81; // rax
  unsigned int v82; // ecx
  DWORD64 *v83; // rcx
  __int64 v84; // rax
  int v85; // edx
  int v87; // eax
  unsigned int i; // edi
  __int64 v89; // rcx
  char v90; // al
  ULONGLONG *v91; // r8
  char v92; // [rsp+40h] [rbp-C0h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v93; // [rsp+48h] [rbp-B8h]
  int v94; // [rsp+50h] [rbp-B0h]
  unsigned __int64 ImageBase; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v96; // [rsp+60h] [rbp-A0h]
  PVOID HandlerData; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v99; // [rsp+78h] [rbp-88h]
  unsigned __int64 v100; // [rsp+88h] [rbp-78h]
  struct _UNWIND_HISTORY_TABLE *v101; // [rsp+90h] [rbp-70h]
  PEXCEPTION_RECORD v102; // [rsp+98h] [rbp-68h]
  PCONTEXT v103; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v104; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v105; // [rsp+B0h] [rbp-50h] BYREF
  ULONG64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  ULONG64 v107; // [rsp+C8h] [rbp-38h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v109; // [rsp+D8h] [rbp-28h]
  struct _CONTEXT *v110; // [rsp+E8h] [rbp-18h]
  EXCEPTION_DISPOSITION (__cdecl *v111)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp-10h]
  _BYTE *v112; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v113; // [rsp+100h] [rbp+0h]
  int v114; // [rsp+108h] [rbp+8h]
  struct _CONTEXT v115; // [rsp+110h] [rbp+10h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5E0h] [rbp+4E0h] BYREF

  v2 = 0;
  v3 = ContextRecord;
  v103 = ContextRecord;
  v4 = ExceptionRecord;
  v102 = ExceptionRecord;
  v92 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v92 = 1;
    RtlpLogExceptionDispatch();
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(v4, v3, 0LL) )
  {
    v2 = 1;
    goto LABEL_163;
  }
  v5 = v4->ExceptionFlags & 1;
  v94 = v5;
  if ( !RtlpGetStackLimits(&v104, (void **)&v105) )
  {
    v5 |= 8u;
LABEL_172:
    v4->ExceptionFlags = v5;
    goto LABEL_163;
  }
  RtlpCopyContext(&v115, v3);
  Rip = v3->Rip;
  p_HistoryTable = &HistoryTable;
  HistoryTable.LowAddress = -1LL;
  v101 = &HistoryTable;
  v100 = 0LL;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.HighAddress = 0LL;
  while ( 1 )
  {
    v8 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v93 = v8;
    p_BeginAddress = &v8->BeginAddress;
    if ( !v8 )
    {
      if ( Rip != *(_QWORD *)v115.Rsp )
      {
        Rsp = v115.Rsp + 8;
        v115.Rip = *(_QWORD *)v115.Rsp;
        v115.Rsp += 8LL;
        goto LABEL_58;
      }
LABEL_171:
      v3 = v103;
      goto LABEL_172;
    }
    v13 = 0;
    v14 = ImageBase + v8->UnwindInfoAddress;
    v15 = *(_BYTE *)v14 & 7;
    if ( v15 < 2 )
    {
      v50 = (_BYTE *)(ImageBase + v8->UnwindInfoAddress);
      v51 = (_BYTE *)(v14 + 2);
      v11 = 0LL;
      while ( !*v51 )
      {
        if ( (*v50 & 0x20) == 0 )
        {
          v13 = 1;
          break;
        }
        v10 = (unsigned __int8)*v51;
        v11 = (unsigned int)(v11 + 1);
        v9 = *v51 & 1;
        if ( (unsigned int)v11 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v52 = (unsigned int)(v10 + 1);
        if ( !(_DWORD)v9 )
          v52 = (unsigned int)v10;
        v50 = (_BYTE *)(ImageBase + *(unsigned int *)&v50[2 * v52 + 12]);
        v51 = v50 + 2;
      }
    }
    v16 = Rip - *p_BeginAddress - ImageBase;
    if ( (*(_BYTE *)(v14 + 3) & 0xF) != 0 )
    {
      if ( v16 >= *(unsigned __int8 *)(v14 + 1) || (*(_BYTE *)v14 & 0x20) != 0 )
      {
        v61 = *(_BYTE *)(v14 + 3);
        v62 = v61;
        Rsp = v115.Rsp;
      }
      else
      {
        for ( i = 0; i < *(unsigned __int8 *)(v14 + 2); i += RtlpUnwindOpSlots(v89, v9, v10, v11) )
        {
          v89 = *(unsigned __int16 *)(v14 + 2LL * i + 4);
          if ( (BYTE1(v89) & 0xF) == 3 )
            break;
        }
        Rsp = v115.Rsp;
        if ( v16 < *(unsigned __int8 *)(v14 + 2LL * i + 4) )
          goto LABEL_10;
        v62 = *(unsigned __int8 *)(v14 + 3);
        v61 = *(_BYTE *)(v14 + 3);
      }
      EstablisherFrame = *(&v115.Rax + (v61 & 0xF)) - (v62 & 0xFFFFFFF0);
      v96 = EstablisherFrame;
      goto LABEL_11;
    }
    Rsp = v115.Rsp;
LABEL_10:
    v96 = Rsp;
    EstablisherFrame = Rsp;
LABEL_11:
    if ( v13 )
      goto LABEL_24;
    v18 = 0;
    if ( v15 < 2 )
    {
      v19 = (_BYTE *)Rip;
      v20 = 0;
      if ( *(_BYTE *)Rip == 72 )
      {
        v60 = *(_BYTE *)(Rip + 1);
        if ( v60 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
          goto LABEL_137;
        if ( v60 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        {
LABEL_103:
          v19 = (_BYTE *)(Rip + 7);
          goto LABEL_15;
        }
      }
      if ( (*(_BYTE *)Rip & 0xFE) != 0x48
        || *(_BYTE *)(Rip + 1) != 0x8D
        || (v20 = *(_BYTE *)(Rip + 2) & 7 | (8 * (*(_BYTE *)Rip & 1))) == 0
        || v20 != (*(_BYTE *)(v14 + 3) & 0xF) )
      {
        while ( 1 )
        {
LABEL_15:
          if ( (*v19 & 0xF8) == 0x58 )
          {
            v55 = 1LL;
          }
          else
          {
            if ( (*v19 & 0xF0) != 0x40 || (v19[1] & 0xF8) != 0x58 )
            {
              v21 = v19 + 1;
              if ( *v19 != 0xF2 )
                v21 = v19;
              v22 = *v21;
              if ( (unsigned __int8)(*v21 + 62) <= 1u || v22 == -13 && v21[1] == 0xC3 )
              {
LABEL_84:
                v32 = ImageBase;
                goto LABEL_85;
              }
              if ( ((v22 + 23) & 0xFD) != 0 )
              {
                if ( v22 == -1 && v21[1] == 37 || (v22 & 0xF8) == 0x48 && v21[1] == 0xFF && (v21[2] & 0x38) == 0x20 )
                  goto LABEL_84;
LABEL_24:
                v23 = v93;
                goto LABEL_25;
              }
              v32 = ImageBase;
              if ( v22 == -21 )
                v63 = (char)v21[1] + 2;
              else
                v63 = *(_DWORD *)(v21 + 1) + 5;
              v23 = v93;
              v64 = (unsigned __int64)&v21[v63 - ImageBase];
              BeginAddress = v93->BeginAddress;
              if ( v64 < BeginAddress || v64 >= v93->EndAddress )
              {
                v81 = (_DWORD *)RtlpSameFunction(v93, ImageBase, v64 + ImageBase);
                if ( v81 && v64 != *v81 )
                {
                  Rsp = v115.Rsp;
                  goto LABEL_25;
                }
                Rsp = v115.Rsp;
              }
              else if ( v64 != BeginAddress || (*(_BYTE *)v14 & 0x20) != 0 )
              {
                goto LABEL_25;
              }
LABEL_85:
              v56 = (_BYTE *)Rip;
              if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
                goto LABEL_89;
              v57 = *(_BYTE *)(Rip + 1);
              switch ( v57 )
              {
                case -125:
LABEL_87:
                  v56 = (_BYTE *)(Rip + 4);
                  Rsp += *(char *)(Rip + 3);
                  goto LABEL_88;
                case -127:
                  Rsp += *(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
                  break;
                case -115:
                  v90 = *(_BYTE *)(Rip + 2) & 0xF8;
                  if ( v90 == 96 )
                  {
                    Rsp = *(&v115.Rax + v20);
                    v115.Rsp = Rsp;
                    goto LABEL_87;
                  }
                  if ( v90 != -96 )
                  {
                    while ( 1 )
                    {
LABEL_89:
                      if ( (*v56 & 0xF8) == 0x58 )
                      {
                        *(&v115.Rax + (*v56 & 7)) = *(_QWORD *)Rsp;
                        v84 = 1LL;
                      }
                      else
                      {
                        if ( (*v56 & 0xF0) != 0x40 || (v56[1] & 0xF8) != 0x58 )
                        {
                          v58 = *(_QWORD *)Rsp;
                          Rsp += 8LL;
                          v115.Rsp = Rsp;
                          v115.Rip = v58;
                          goto LABEL_92;
                        }
                        *(&v115.Rax + (v56[1] & 7 | (unsigned __int64)(8 * (*v56 & 1u)))) = *(_QWORD *)Rsp;
                        v84 = 2LL;
                      }
                      Rsp = v115.Rsp + 8;
                      v56 += v84;
LABEL_88:
                      v115.Rsp = Rsp;
                    }
                  }
                  Rsp = *(&v115.Rax + v20)
                      + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
                  break;
                default:
                  goto LABEL_89;
              }
              v56 = (_BYTE *)(Rip + 7);
              goto LABEL_88;
            }
            v55 = 2LL;
          }
          v19 += v55;
        }
      }
      v59 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v59 != 96 )
      {
        if ( v59 != -96 )
          goto LABEL_15;
        goto LABEL_103;
      }
LABEL_137:
      v19 = (_BYTE *)(Rip + 4);
      goto LABEL_15;
    }
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_24;
    v23 = v93;
    v67 = HIBYTE(*(_WORD *)(v14 + 4));
    if ( (v67 & 0xF) == 6 )
    {
      v32 = ImageBase;
      v68 = *(unsigned __int8 *)(v14 + 4);
      v69 = Rip - ImageBase;
      if ( (v67 & 0x10) != 0 )
      {
        v70 = v93->EndAddress - v68;
        LOBYTE(v18) = v69 - v70 < v68;
      }
      else
      {
        v70 = 0;
      }
      if ( !v18 )
      {
        v71 = *(unsigned __int8 *)(v14 + 2);
        v72 = 1;
        if ( v71 <= 1 )
          goto LABEL_25;
        while ( 1 )
        {
          v73 = HIBYTE(*(_WORD *)(v14 + 2LL * v72 + 4));
          if ( (v73 & 0xF) != 6 )
            goto LABEL_25;
          v18 = *(unsigned __int8 *)(v14 + 2LL * v72 + 4) + ((unsigned __int8)v73 >> 4 << 8);
          if ( !v18 )
            goto LABEL_25;
          v70 = v93->EndAddress - v18;
          if ( v69 - v70 < v68 )
            break;
          if ( ++v72 >= v71 )
            goto LABEL_25;
        }
      }
      v34 = v93;
      RtlpUnwindEpilogue(ImageBase, v18, v69 - v70, (_DWORD)v93, (__int64)&v115, 0LL, 0LL, 0LL);
      Rsp = v115.Rsp;
LABEL_93:
      v37 = HandlerData;
      v38 = 0LL;
      goto LABEL_44;
    }
LABEL_25:
    v24 = 0;
    v99 = 0;
    while ( 2 )
    {
      LODWORD(v25) = 0;
      v26 = Rip - v23->BeginAddress - ImageBase;
      v27 = (_BYTE *)(ImageBase + v23->UnwindInfoAddress);
      v28 = 0;
      if ( !v27[2] )
        goto LABEL_36;
      do
      {
        v29 = (unsigned __int8)v27[2 * (unsigned int)v25 + 5] >> 4;
        if ( v26 >= (unsigned __int8)v27[2 * (unsigned int)v25 + 4] )
        {
          v30 = v27[2 * (unsigned int)v25 + 5] & 0xF;
          if ( v30 > 5 )
          {
            v66 = v30 - 6;
            if ( !v66 )
            {
              LODWORD(v25) = v25 + 1;
              goto LABEL_33;
            }
            v74 = v66 - 1;
            if ( !v74 )
            {
              LODWORD(v25) = v25 + 2;
              goto LABEL_33;
            }
            v75 = v74 - 1;
            if ( v75 )
            {
              v82 = v75 - 1;
              if ( v82 )
              {
                if ( v82 != 1 )
LABEL_203:
                  RtlRaiseStatus(-1073741569);
                v28 = 1;
                v83 = (DWORD64 *)(Rsp + 24);
                if ( (_DWORD)v29 )
                {
                  Rsp += 8LL;
                  ++v83;
                }
                v115.Rip = *(_QWORD *)Rsp;
                Rsp = *v83;
                goto LABEL_32;
              }
              v25 = (unsigned int)(v25 + 2);
              v91 = (ULONGLONG *)(v96
                                + *(unsigned __int16 *)&v27[2 * (unsigned int)(v25 - 1) + 4]
                                + (*(unsigned __int16 *)&v27[2 * v25 + 4] << 16));
              v77 = 2LL * (unsigned int)v29;
              *(&v115.Xmm0.Low + 2 * (unsigned int)v29) = *v91;
              v78 = v91[1];
            }
            else
            {
              v25 = (unsigned int)(v25 + 1);
              v76 = (ULONGLONG *)(v96 + 16 * (unsigned int)*(unsigned __int16 *)&v27[2 * v25 + 4]);
              v77 = 2LL * (unsigned int)v29;
              *(&v115.Xmm0.Low + 2 * (unsigned int)v29) = *v76;
              v78 = v76[1];
            }
            *(&v115.Xmm0.High + v77) = v78;
          }
          else
          {
            if ( v30 == 5 )
            {
              v25 = (unsigned int)(v25 + 2);
              v49 = *(_QWORD *)((*(unsigned __int16 *)&v27[2 * v25 + 4] << 16)
                              + (unsigned int)*(unsigned __int16 *)&v27[2 * (unsigned int)(v25 - 1) + 4]
                              + v96);
            }
            else
            {
              if ( (v27[2 * (unsigned int)v25 + 5] & 0xF) == 0 )
              {
                *(&v115.Rax + v29) = *(_QWORD *)Rsp;
                Rsp = v115.Rsp + 8;
LABEL_32:
                v115.Rsp = Rsp;
LABEL_33:
                LODWORD(v25) = v25 + 1;
                continue;
              }
              v46 = v30 - 1;
              if ( !v46 )
              {
                v25 = (unsigned int)(v25 + 1);
                v53 = *(unsigned __int16 *)&v27[2 * v25 + 4];
                if ( (_DWORD)v29 )
                {
                  v25 = (unsigned int)(v25 + 1);
                  v54 = (*(unsigned __int16 *)&v27[2 * v25 + 4] << 16) + v53;
                }
                else
                {
                  v54 = 8 * v53;
                }
                Rsp += v54;
                goto LABEL_32;
              }
              v47 = v46 - 1;
              if ( !v47 )
              {
                Rsp += (unsigned int)(8 * v29 + 8);
                goto LABEL_32;
              }
              v48 = v47 - 1;
              if ( !v48 )
              {
                v115.Rsp = *(&v115.Rax + (v27[3] & 0xF));
                Rsp = v115.Rsp - (v27[3] & 0xF0);
                goto LABEL_32;
              }
              if ( v48 != 1 )
                goto LABEL_203;
              v25 = (unsigned int)(v25 + 1);
              v49 = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v27[2 * v25 + 4] + v96);
            }
            *(&v115.Rax + v29) = v49;
          }
          Rsp = v115.Rsp;
          goto LABEL_33;
        }
        v87 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v27[2 * (unsigned int)v25 + 4], (unsigned int)v25, Rsp, v29);
        Rsp = v115.Rsp;
        LODWORD(v25) = v87 + v25;
      }
      while ( (unsigned int)v25 < (unsigned __int8)v27[2] );
      v24 = v99;
LABEL_36:
      if ( (*v27 & 0x20) != 0 )
      {
        v79 = (unsigned __int8)v27[2];
        v80 = (unsigned int)(v79 + 1);
        if ( (v79 & 1) == 0 )
          v80 = (unsigned __int8)v27[2];
        v99 = ++v24;
        v23 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v27[2 * v80 + 4];
        if ( v24 > 0x20 )
          RtlRaiseStatus(-1073741569);
        continue;
      }
      break;
    }
    if ( !v28 )
    {
      v31 = *(_QWORD *)Rsp;
      Rsp += 8LL;
      v115.Rsp = Rsp;
      v115.Rip = v31;
    }
    v32 = ImageBase;
    v33 = (_BYTE *)(ImageBase + v23->UnwindInfoAddress);
    if ( (int)Rip - v23->BeginAddress - (int)ImageBase < (unsigned __int8)v33[1] )
    {
LABEL_92:
      v34 = v93;
      goto LABEL_93;
    }
    v34 = v93;
    if ( (*v33 & 8) == 0 )
      goto LABEL_93;
    v35 = (unsigned __int8)v33[2];
    v36 = (unsigned int)(v35 + 1);
    if ( (v35 & 1) == 0 )
      v36 = (unsigned __int8)v33[2];
    v37 = &v33[2 * (unsigned int)(v36 + 2) + 4];
    v38 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)&v33[2 * v36 + 4]);
    HandlerData = v37;
LABEL_44:
    v39 = v96;
    if ( (v96 & 7) != 0 || v96 < v104 || v96 >= v105 )
    {
      v4 = v102;
      v5 = v94 | 8;
      goto LABEL_171;
    }
    v5 = v94;
    v4 = v102;
    if ( !v38 )
      goto LABEL_58;
    v40 = v101;
    v41 = 0;
LABEL_49:
    FunctionEntry = v34;
    v42 = 0LL;
    v110 = &v115;
    v4->ExceptionFlags = v5;
    ControlPc = Rip;
    v107 = v32;
    v109 = v39;
    v111 = v38;
    v112 = v37;
    v113 = v40;
    v114 = v41;
    if ( v92 )
      v42 = RtlpLogExceptionHandler(v4, &v115, Rip, v38);
    v43 = RtlpExecuteHandlerForException(v4, v39, v103, &ControlPc);
    if ( v42 )
      *(_DWORD *)(v42 + 1396) = v43;
    v5 |= v4->ExceptionFlags & 1;
    v94 = v5;
    if ( v100 == v39 )
    {
      v5 &= ~0x10u;
      v100 = 0LL;
      v94 = v5;
      v44 = 0LL;
    }
    else
    {
      v44 = v100;
    }
    if ( !v43 )
      break;
    v45 = v43 - 1;
    if ( !v45 )
      goto LABEL_57;
    v85 = v45 - 1;
    if ( v85 )
    {
      if ( v85 != 1 )
        RtlRaiseStatus(-1073741786);
      v32 = v107;
      Rip = ControlPc;
      v34 = FunctionEntry;
      ImageBase = v107;
      RtlpCopyContext(&v115, v110);
      v38 = RtlVirtualUnwind(1u, v32, Rip, v34, &v115, &HandlerData, &EstablisherFrame, 0LL);
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
      {
        if ( v38 != v111
          || (v39 = EstablisherFrame, EstablisherFrame != v109)
          || (v37 = HandlerData, HandlerData != v112) )
        {
          __fastfail(0x27u);
        }
      }
      else
      {
        v39 = v109;
        v37 = v112;
        v38 = v111;
        EstablisherFrame = v109;
        HandlerData = v112;
      }
      v40 = v113;
      v41 = v114;
      v101 = v113;
      goto LABEL_49;
    }
    v5 |= 0x10u;
    v94 = v5;
    if ( v109 > v44 )
      v100 = v109;
LABEL_57:
    Rsp = v115.Rsp;
LABEL_58:
    Rip = v115.Rip;
    if ( (Rsp & 7) != 0 || Rsp < v104 || Rsp >= v105 )
      goto LABEL_171;
    p_HistoryTable = v101;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  v3 = v103;
  v2 = 1;
LABEL_163:
  RtlpCallVectoredHandlers(v4, v3, 1LL);
  return v2;
}

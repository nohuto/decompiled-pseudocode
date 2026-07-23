/*
 * XREFs of sub_18000D490 @ 0x18000D490
 * Callers:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x18009E830 (KiUserExceptionDispatcher.c)
 * Callees:
 *     sub_180003F70 @ 0x180003F70 (sub_180003F70.c)
 *     sub_18000B108 @ 0x18000B108 (sub_18000B108.c)
 *     RtlVirtualUnwind @ 0x18000B340 (RtlVirtualUnwind.c)
 *     sub_18000E9E4 @ 0x18000E9E4 (sub_18000E9E4.c)
 *     RtlLookupFunctionEntry @ 0x18000EBA0 (RtlLookupFunctionEntry.c)
 *     sub_18000F2CC @ 0x18000F2CC (sub_18000F2CC.c)
 *     sub_1800677B0 @ 0x1800677B0 (sub_1800677B0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_18009A360 @ 0x18009A360 (sub_18009A360.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     sub_18009F920 @ 0x18009F920 (sub_18009F920.c)
 *     sub_1800F63C0 @ 0x1800F63C0 (sub_1800F63C0.c)
 *     sub_1800F655C @ 0x1800F655C (sub_1800F655C.c)
 */

__int64 __fastcall sub_18000D490(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  int v4; // edi
  ULONG64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // r14
  PRUNTIME_FUNCTION v7; // rax
  _DWORD *p_BeginAddress; // r15
  PEXCEPTION_ROUTINE v9; // r11
  unsigned __int64 v10; // r10
  int v11; // r14d
  unsigned __int64 v12; // rsi
  unsigned int v13; // ebx
  int v14; // r8d
  unsigned __int8 *v15; // rax
  _BYTE *v16; // rdx
  unsigned __int8 v17; // dl
  unsigned int v18; // edi
  DWORD64 Rsp; // r8
  DWORD64 v20; // r15
  char v21; // cl
  __int64 v22; // rdi
  char *v23; // r9
  char v24; // cl
  char *v25; // rdx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v26; // r14
  unsigned int v27; // edx
  _BYTE *v28; // rdi
  __int64 v29; // rbx
  char v30; // r13
  unsigned int v31; // esi
  unsigned __int8 v32; // cl
  _BYTE *v33; // rdx
  __int64 v34; // r9
  DWORD64 v35; // rax
  _BYTE *v36; // r9
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v37; // rbx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rbx
  int v42; // edx
  unsigned __int64 v43; // rbx
  int v44; // edx
  unsigned int v45; // edx
  __int64 v46; // rax
  char *v47; // rdx
  char v48; // al
  char v49; // cl
  DWORD64 v50; // rax
  int v51; // eax
  char v52; // dl
  char v53; // al
  int v54; // eax
  unsigned __int64 v55; // rbx
  unsigned __int64 BeginAddress; // rcx
  char v57; // cl
  int v58; // eax
  unsigned __int8 v59; // r9
  __int16 v60; // dx
  int v61; // r10d
  unsigned int v62; // r11d
  int v63; // edx
  unsigned int v64; // ebx
  __int16 v65; // dx
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned int v69; // eax
  __int64 v70; // r9
  __int64 v71; // rax
  int v72; // edx
  ULONG64 v73; // rdi
  DWORD64 *v74; // rcx
  _DWORD *v75; // rax
  char v76; // r9
  unsigned __int8 v77; // bl
  int v79; // eax
  __int64 v80; // r15
  unsigned __int16 v81; // cx
  char v82; // al
  char v83; // [rsp+40h] [rbp-C0h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v84; // [rsp+48h] [rbp-B8h]
  int v85; // [rsp+50h] [rbp-B0h]
  unsigned __int64 ImageBase; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v88; // [rsp+68h] [rbp-98h]
  EXCEPTION_DISPOSITION (__cdecl *v89)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+70h] [rbp-90h]
  PVOID HandlerData; // [rsp+78h] [rbp-88h] BYREF
  __int64 v91; // [rsp+80h] [rbp-80h]
  unsigned __int64 v92; // [rsp+88h] [rbp-78h]
  struct _UNWIND_HISTORY_TABLE *v93; // [rsp+90h] [rbp-70h]
  __int64 v94; // [rsp+98h] [rbp-68h]
  DWORD64 v95; // [rsp+A0h] [rbp-60h] BYREF
  DWORD64 v96; // [rsp+A8h] [rbp-58h] BYREF
  ULONG64 ControlPc; // [rsp+B0h] [rbp-50h] BYREF
  ULONG64 v98; // [rsp+B8h] [rbp-48h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v100; // [rsp+C8h] [rbp-38h]
  struct _CONTEXT *p_ContextRecord; // [rsp+D8h] [rbp-28h]
  EXCEPTION_DISPOSITION (__cdecl *v102)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+E0h] [rbp-20h]
  PVOID v103; // [rsp+E8h] [rbp-18h]
  struct _UNWIND_HISTORY_TABLE *v104; // [rsp+F0h] [rbp-10h]
  int v105; // [rsp+F8h] [rbp-8h]
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5D0h] [rbp+4D0h] BYREF

  v2 = a2;
  v94 = a2;
  v3 = a1;
  v91 = a1;
  v83 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v83 = 1;
    sub_1800F63C0();
  }
  if ( (unsigned __int8)sub_1800677B0(v3, v2, 0LL) )
    goto LABEL_153;
  v4 = *(_DWORD *)(v3 + 4) & 1;
  v85 = v4;
  if ( !(unsigned __int8)sub_18000F2CC(&v95, &v96) )
    goto LABEL_193;
  sub_18000E9E4(&ContextRecord, v2);
  Rip = *(_QWORD *)(v2 + 248);
  p_HistoryTable = &HistoryTable;
  v93 = &HistoryTable;
  v92 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v7 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v84 = v7;
    p_BeginAddress = &v7->BeginAddress;
    if ( v7 )
      break;
    if ( Rip == *(_QWORD *)ContextRecord.Rsp )
      goto LABEL_194;
    Rsp = ContextRecord.Rsp + 8;
    ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
    ContextRecord.Rsp += 8LL;
LABEL_61:
    Rip = ContextRecord.Rip;
    if ( (Rsp & 7) != 0 || Rsp < v95 || Rsp >= v96 )
      goto LABEL_194;
  }
  v9 = 0LL;
  v10 = ImageBase;
  v11 = 0;
  v12 = ImageBase + v7->UnwindInfoAddress;
  v89 = 0LL;
  v13 = *(_BYTE *)v12 & 7;
  if ( v13 < 2 )
  {
    v14 = 0;
    v15 = (unsigned __int8 *)(v12 + 2);
    v16 = (_BYTE *)v12;
    if ( !*(_BYTE *)(v12 + 2) )
    {
      while ( (*v16 & 0x20) != 0 )
      {
        v70 = *v15;
        if ( (v70 & 1) != 0 )
          v70 = (unsigned int)(v70 + 1);
        if ( (unsigned int)++v14 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v16 = (_BYTE *)(ImageBase + *(unsigned int *)&v16[2 * v70 + 12]);
        v15 = v16 + 2;
        if ( v16[2] )
          goto LABEL_9;
      }
      v11 = 1;
    }
  }
LABEL_9:
  v17 = *(_BYTE *)(v12 + 3);
  v18 = Rip - *p_BeginAddress - ImageBase;
  if ( (v17 & 0xF) != 0 )
  {
    if ( v18 >= *(unsigned __int8 *)(v12 + 1) || (*(_BYTE *)v12 & 0x20) != 0 )
    {
      Rsp = ContextRecord.Rsp;
      v57 = *(_BYTE *)(v12 + 3);
      v58 = v17;
    }
    else
    {
      v80 = 0LL;
      if ( *(_BYTE *)(v12 + 2) )
      {
        do
        {
          v81 = *(_WORD *)(v12 + 2 * v80 + 4);
          if ( (HIBYTE(v81) & 0xF) == 3 )
            break;
          v80 = (unsigned int)sub_180003F70(v81) + (unsigned int)v80;
        }
        while ( (unsigned int)v80 < *(unsigned __int8 *)(v12 + 2) );
        v10 = ImageBase;
        v9 = v89;
      }
      Rsp = ContextRecord.Rsp;
      if ( v18 < *(unsigned __int8 *)(v12 + 2 * v80 + 4) )
        goto LABEL_11;
      v58 = *(unsigned __int8 *)(v12 + 3);
      v57 = *(_BYTE *)(v12 + 3);
    }
    v20 = *(&ContextRecord.Rax + (v57 & 0xF)) - (v58 & 0xFFFFFFF0);
    EstablisherFrame = v20;
    goto LABEL_12;
  }
  Rsp = ContextRecord.Rsp;
LABEL_11:
  v20 = Rsp;
  EstablisherFrame = Rsp;
LABEL_12:
  if ( v11 )
    goto LABEL_25;
  if ( v13 >= 2 )
  {
    v59 = *(_BYTE *)(v12 + 2);
    if ( !v59 )
      goto LABEL_25;
    v60 = *(_WORD *)(v12 + 4);
    if ( (HIBYTE(v60) & 0xF) != 6 )
      goto LABEL_25;
    v61 = Rip - ImageBase;
    v62 = (unsigned __int8)v60;
    if ( (v60 & 0x1000) == 0 || (v37 = v84, v63 = v84->EndAddress - (unsigned __int8)v60, v61 - v63 >= v62) )
    {
      v26 = v84;
      v64 = 1;
      if ( v59 <= 1u )
      {
LABEL_108:
        v10 = ImageBase;
        goto LABEL_26;
      }
      while ( 1 )
      {
        v65 = *(_WORD *)(v12 + 2LL * v64 + 4);
        if ( (HIBYTE(v65) & 0xF) != 6 )
          goto LABEL_108;
        v66 = (unsigned __int8)v65 + (HIBYTE(v65) >> 4 << 8);
        if ( !v66 )
          goto LABEL_108;
        v63 = v84->EndAddress - v66;
        if ( v61 - v63 < v62 )
          break;
        if ( ++v64 >= v59 )
          goto LABEL_108;
      }
      v37 = v84;
    }
    sub_18009A360(ImageBase, v63, v61 - v63, (_DWORD)v37, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
    Rsp = ContextRecord.Rsp;
    v10 = ImageBase;
    goto LABEL_47;
  }
  v21 = *(_BYTE *)Rip;
  v22 = 0LL;
  v23 = (char *)Rip;
  if ( *(_BYTE *)Rip == 72 )
  {
    v53 = *(_BYTE *)(Rip + 1);
    if ( v53 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v23 = (char *)(Rip + 4);
      goto LABEL_16;
    }
    if ( v53 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v23 = (char *)(Rip + 7);
      goto LABEL_16;
    }
  }
  if ( (v21 & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
  {
    v51 = *(_BYTE *)(Rip + 2) & 7;
    v22 = v51 | (8 * (v21 & 1u));
    if ( v51 | (8 * (v21 & 1)) )
    {
      if ( (_DWORD)v22 == (*(_BYTE *)(v12 + 3) & 0xF) )
      {
        v52 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v52 == 96 )
        {
          v23 = (char *)(Rip + 4);
        }
        else if ( v52 == -96 )
        {
          v23 = (char *)(Rip + 7);
        }
      }
    }
  }
LABEL_16:
  while ( 1 )
  {
    v24 = *v23;
    if ( (*v23 & 0xF8) != 0x58 )
      break;
    v46 = 1LL;
LABEL_127:
    v23 += v46;
  }
  v25 = v23 + 1;
  if ( (v24 & 0xF0) == 0x40 && (*v25 & 0xF8) == 0x58 )
  {
    v46 = 2LL;
    goto LABEL_127;
  }
  if ( v24 == -14 )
  {
    v24 = *v25;
    ++v23;
  }
  if ( (unsigned __int8)(v24 + 62) <= 1u || v24 == -13 && (v24 = -13, v23[1] == -61) )
  {
LABEL_72:
    v47 = (char *)Rip;
    if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
      goto LABEL_76;
    v48 = *(_BYTE *)(Rip + 1);
    switch ( v48 )
    {
      case -125:
        Rsp += *(char *)(Rip + 3);
        v47 = (char *)(Rip + 4);
        goto LABEL_75;
      case -127:
        Rsp += *(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
        break;
      case -115:
        v82 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v82 == 96 )
        {
          ContextRecord.Rsp = *(&ContextRecord.Rax + v22);
          Rsp = ContextRecord.Rsp + *(char *)(Rip + 3);
          v47 = (char *)(Rip + 4);
          goto LABEL_75;
        }
        if ( v82 != -96 )
        {
LABEL_197:
          while ( 1 )
          {
LABEL_76:
            v49 = *v47;
            if ( (*v47 & 0xF8) == 0x58 )
            {
              *(&ContextRecord.Rax + (*v47 & 7)) = *(_QWORD *)Rsp;
              v71 = 1LL;
            }
            else
            {
              if ( (v49 & 0xF0) != 0x40 || (v76 = v47[1], (v76 & 0xF8) != 0x58) )
              {
                v50 = *(_QWORD *)Rsp;
                Rsp += 8LL;
                ContextRecord.Rsp = Rsp;
                ContextRecord.Rip = v50;
                goto LABEL_79;
              }
              *(&ContextRecord.Rax + (v76 & 7 | (unsigned __int64)(8 * (v49 & 1u)))) = *(_QWORD *)Rsp;
              v71 = 2LL;
            }
            Rsp = ContextRecord.Rsp + 8;
            v47 += v71;
LABEL_75:
            ContextRecord.Rsp = Rsp;
          }
        }
        Rsp = *(&ContextRecord.Rax + v22)
            + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_197;
    }
    v47 = (char *)(Rip + 7);
    goto LABEL_75;
  }
  if ( ((v24 + 23) & 0xFD) != 0 )
  {
    if ( v24 == -1 )
    {
      v24 = -1;
      if ( v23[1] == 37 )
        goto LABEL_72;
    }
    if ( (v24 & 0xF8) == 0x48 && v23[1] == -1 && (v23[2] & 0x38) == 0x20 )
      goto LABEL_72;
LABEL_25:
    v26 = v84;
  }
  else
  {
    if ( v24 == -21 )
      v54 = v23[1] + 2;
    else
      v54 = *(_DWORD *)(v23 + 1) + 5;
    v26 = v84;
    v55 = (unsigned __int64)&v23[v54 - v10];
    BeginAddress = v84->BeginAddress;
    if ( v55 < BeginAddress || v55 >= v84->EndAddress )
    {
      v75 = (_DWORD *)sub_18000B108((__int64)v84, v10, &v23[v54]);
      if ( !v75 || v55 == *v75 )
      {
        Rsp = ContextRecord.Rsp;
        v10 = ImageBase;
        v9 = v89;
        goto LABEL_72;
      }
      Rsp = ContextRecord.Rsp;
      v10 = ImageBase;
    }
    else if ( v55 == BeginAddress && (*(_BYTE *)v12 & 0x20) == 0 )
    {
      goto LABEL_72;
    }
  }
LABEL_26:
  v27 = 0;
  v88 = 0;
  while ( 1 )
  {
    v28 = (_BYTE *)(v10 + v26->UnwindInfoAddress);
    v29 = 0LL;
    v30 = 0;
    v31 = Rip - v26->BeginAddress - v10;
    v32 = v28[2];
    if ( v32 )
    {
      do
      {
        v33 = &v28[2 * v29];
        v34 = (unsigned __int8)v33[5] >> 4;
        if ( v31 < (unsigned __int8)v33[4] )
        {
          v79 = sub_180003F70(*((_WORD *)v33 + 2));
          Rsp = ContextRecord.Rsp;
          v29 = (unsigned int)(v79 + v29);
        }
        else
        {
          if ( (v28[2 * v29 + 5] & 0xF) != 0 )
          {
            if ( (v28[2 * v29 + 5] & 0xF) != 4 )
            {
              switch ( v28[2 * v29 + 5] & 0xF )
              {
                case 1:
                  v29 = (unsigned int)(v29 + 1);
                  v44 = *(unsigned __int16 *)&v28[2 * v29 + 4];
                  if ( (_DWORD)v34 )
                  {
                    v29 = (unsigned int)(v29 + 1);
                    v45 = (*(unsigned __int16 *)&v28[2 * v29 + 4] << 16) + v44;
                  }
                  else
                  {
                    v45 = 8 * v44;
                  }
                  Rsp += v45;
                  goto LABEL_31;
                case 2:
                  Rsp += (unsigned int)(8 * v34 + 8);
                  goto LABEL_31;
                case 3:
                  ContextRecord.Rsp = *(&ContextRecord.Rax + (v28[3] & 0xF));
                  Rsp = ContextRecord.Rsp - (v28[3] & 0xF0);
                  goto LABEL_31;
                case 5:
                  v29 = (unsigned int)(v29 + 2);
                  *(&ContextRecord.Rax + v34) = *(_QWORD *)(*(unsigned __int16 *)&v28[2 * (unsigned int)(v29 - 1) + 4]
                                                          + (*(unsigned __int16 *)&v28[2 * v29 + 4] << 16)
                                                          + v20);
                  Rsp = ContextRecord.Rsp;
                  goto LABEL_32;
                case 6:
                  LODWORD(v29) = v29 + 1;
                  goto LABEL_32;
                case 7:
                  LODWORD(v29) = v29 + 2;
                  goto LABEL_32;
                case 8:
                  v29 = (unsigned int)(v29 + 1);
                  v67 = 16 * (unsigned int)*(unsigned __int16 *)&v28[2 * v29 + 4];
                  goto LABEL_113;
                case 9:
                  v29 = (unsigned int)(v29 + 2);
                  v67 = *(unsigned __int16 *)&v28[2 * (unsigned int)(v29 - 1) + 4]
                      + (*(unsigned __int16 *)&v28[2 * v29 + 4] << 16);
LABEL_113:
                  v68 = 16LL * (unsigned int)v34;
                  *(ULONGLONG *)((char *)&ContextRecord.Xmm0.Low + v68) = *(_QWORD *)(v67 + v20);
                  *(LONGLONG *)((char *)&ContextRecord.Xmm0.High + v68) = *(_QWORD *)(v67 + v20 + 8);
                  Rsp = ContextRecord.Rsp;
                  goto LABEL_32;
                case 0xA:
                  v74 = (DWORD64 *)(Rsp + 24);
                  v30 = 1;
                  if ( (_DWORD)v34 )
                  {
                    Rsp += 8LL;
                    ++v74;
                  }
                  ContextRecord.Rip = *(_QWORD *)Rsp;
                  Rsp = *v74;
                  goto LABEL_31;
                default:
                  RtlRaiseStatus(-1073741569);
              }
            }
            v29 = (unsigned int)(v29 + 1);
            *(&ContextRecord.Rax + v34) = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v28[2 * v29 + 4] + v20);
            Rsp = ContextRecord.Rsp;
          }
          else
          {
            *(&ContextRecord.Rax + v34) = *(_QWORD *)Rsp;
            Rsp = ContextRecord.Rsp + 8;
LABEL_31:
            ContextRecord.Rsp = Rsp;
          }
LABEL_32:
          v29 = (unsigned int)(v29 + 1);
        }
        v32 = v28[2];
      }
      while ( (unsigned int)v29 < v32 );
      v10 = ImageBase;
      v27 = v88;
    }
    if ( (*v28 & 0x20) == 0 )
      break;
    v69 = v32;
    if ( (v32 & 1) != 0 )
      v69 = v32 + 1;
    v88 = ++v27;
    v26 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v28[2 * v69 + 4];
    if ( v27 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !v30 )
  {
    v35 = *(_QWORD *)Rsp;
    Rsp += 8LL;
    ContextRecord.Rsp = Rsp;
    ContextRecord.Rip = v35;
  }
  v36 = (_BYTE *)(v10 + v26->UnwindInfoAddress);
  v3 = v91;
  if ( (int)Rip - v26->BeginAddress - (int)v10 >= (unsigned __int8)v36[1] )
  {
    v37 = v84;
    if ( (*v36 & 8) != 0 )
    {
      v38 = (unsigned __int8)v36[2];
      v39 = v38 + 1;
      if ( (v38 & 1) == 0 )
        v39 = (unsigned __int8)v36[2];
      v9 = (PEXCEPTION_ROUTINE)(v10 + *(unsigned int *)&v36[2 * v39 + 4]);
      HandlerData = &v36[2 * (v39 + 2) + 4];
      goto LABEL_48;
    }
LABEL_47:
    v9 = v89;
    goto LABEL_48;
  }
  v9 = v89;
LABEL_79:
  v37 = v84;
LABEL_48:
  if ( (v20 & 7) != 0 || v20 < v95 || v20 >= v96 )
  {
    v4 = v85;
    v2 = v94;
LABEL_193:
    v4 |= 8u;
LABEL_194:
    v77 = 0;
    *(_DWORD *)(v3 + 4) = v4;
    goto LABEL_154;
  }
  v2 = v94;
  p_HistoryTable = v93;
  if ( !v9 )
  {
    v4 = v85;
    goto LABEL_61;
  }
  v40 = 0;
  while ( 1 )
  {
    FunctionEntry = v37;
    v41 = 0LL;
    p_ContextRecord = &ContextRecord;
    v103 = HandlerData;
    *(_DWORD *)(v3 + 4) = v85;
    ControlPc = Rip;
    v98 = v10;
    v100 = v20;
    v102 = v9;
    v104 = p_HistoryTable;
    v105 = v40;
    if ( v83 )
      v41 = sub_1800F655C(v3, &ContextRecord, Rip, v9);
    v42 = sub_18009F920(v3, v20, v2, &ControlPc);
    if ( v41 )
      *(_DWORD *)(v41 + 1396) = v42;
    v43 = v92;
    v4 = *(_DWORD *)(v3 + 4) & 1 | v85;
    v85 = v4;
    if ( v92 == v20 )
    {
      v4 &= ~0x10u;
      v43 = 0LL;
      v85 = v4;
      v92 = 0LL;
    }
    if ( v42 == 1 )
      goto LABEL_60;
    if ( !v42 )
      break;
    v72 = v42 - 2;
    if ( !v72 )
    {
      v4 |= 0x10u;
      v85 = v4;
      if ( v100 > v43 )
        v92 = v100;
LABEL_60:
      Rsp = ContextRecord.Rsp;
      goto LABEL_61;
    }
    if ( v72 != 1 )
      RtlRaiseStatus(-1073741786);
    v73 = v98;
    Rip = ControlPc;
    v37 = FunctionEntry;
    ImageBase = v98;
    sub_18000E9E4(&ContextRecord, p_ContextRecord);
    v9 = RtlVirtualUnwind(1u, v73, Rip, v37, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
    {
      if ( v9 != v102 || (v20 = EstablisherFrame, EstablisherFrame != v100) || HandlerData != v103 )
        __fastfail(0x27u);
    }
    else
    {
      v20 = v100;
      v9 = v102;
      EstablisherFrame = v100;
      HandlerData = v103;
    }
    p_HistoryTable = v104;
    v40 = v105;
    v10 = ImageBase;
    v93 = v104;
  }
  if ( (v4 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
LABEL_153:
  v77 = 1;
LABEL_154:
  sub_1800677B0(v3, v2, 1LL);
  return v77;
}

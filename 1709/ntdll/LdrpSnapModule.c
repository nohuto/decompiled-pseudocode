/*
 * XREFs of LdrpSnapModule @ 0x180027FC0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     LdrpDoPostSnapWork @ 0x18001C2FC (LdrpDoPostSnapWork.c)
 *     RtlAddressInSectionTable @ 0x180020840 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x18002993C (RtlpImageDirectoryEntryToData32.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     LdrpReportError @ 0x180052C64 (LdrpReportError.c)
 *     LdrpFreeReplacedModule @ 0x18006D4E0 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006D638 (LdrpHandlePendingModuleReplaced.c)
 *     CompatCachepLookupCdb @ 0x18007873C (CompatCachepLookupCdb.c)
 *     RtlCharToInteger @ 0x18007A550 (RtlCharToInteger.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081194 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x180083E08 (LdrpLogError.c)
 *     strrchr @ 0x180095CB0 (strrchr.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  bool v13; // bl
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int16 v16; // ax
  __int64 v17; // rdx
  unsigned __int64 v18; // r10
  unsigned int v19; // r9d
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r13
  int v23; // esi
  __int64 v24; // r15
  unsigned __int64 v25; // rbx
  unsigned __int16 *v26; // rax
  const char *v27; // rdi
  int v28; // r11d
  int v29; // r10d
  const char *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int8 v32; // cl
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned __int64 *v36; // rdx
  char *v37; // rdi
  char *i; // r12
  char *v39; // rax
  __int16 v40; // bx
  const char *v41; // r15
  __int64 v42; // r13
  unsigned __int64 v43; // r14
  bool v44; // bl
  unsigned __int64 v45; // rdi
  char *v46; // rsi
  int v47; // eax
  __int16 v48; // ax
  __int64 v49; // rdx
  int v50; // r11d
  int v51; // r10d
  int v52; // r8d
  const char *v53; // rax
  signed __int64 v54; // rdx
  unsigned __int8 v55; // cl
  int v56; // eax
  ULONG v57; // eax
  unsigned __int64 v58; // rbx
  int v59; // eax
  __int64 v60; // rdx
  ULONG v62; // ebx
  __int64 v63; // rdi
  unsigned __int16 *v64; // rdx
  char v65; // al
  unsigned __int64 v66; // [rsp+40h] [rbp-138h]
  __int64 v67; // [rsp+48h] [rbp-130h]
  int v68; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v69; // [rsp+54h] [rbp-124h]
  __int64 v70; // [rsp+58h] [rbp-120h]
  unsigned __int64 v71; // [rsp+60h] [rbp-118h] BYREF
  unsigned __int64 v72; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v73; // [rsp+70h] [rbp-108h]
  __int64 v74; // [rsp+78h] [rbp-100h] BYREF
  _QWORD *v75; // [rsp+80h] [rbp-F8h]
  __int64 v76; // [rsp+88h] [rbp-F0h] BYREF
  char *v77; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v78; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v80; // [rsp+A8h] [rbp-D0h]
  unsigned __int16 *v81; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 *v82; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v83; // [rsp+C0h] [rbp-B8h]
  __int64 v84; // [rsp+C8h] [rbp-B0h]
  unsigned __int64 v85; // [rsp+D0h] [rbp-A8h]
  __int64 v86; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v87; // [rsp+E0h] [rbp-98h]
  char *v88; // [rsp+E8h] [rbp-90h]
  STRING SourceString; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v90; // [rsp+100h] [rbp-78h] BYREF
  __int64 v91; // [rsp+110h] [rbp-68h]
  __int128 v92; // [rsp+118h] [rbp-60h] BYREF
  __int64 v93; // [rsp+128h] [rbp-50h]
  int v95; // [rsp+188h] [rbp+10h]
  unsigned int v96; // [rsp+190h] [rbp+18h] BYREF
  ULONG Value; // [rsp+198h] [rbp+20h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 56);
  v70 = v2;
  v86 = *(_QWORD *)(v2 + 48);
  LdrpLogDllState(v86, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(v1);
  v69 = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v1 + 120);
    if ( v5 >= *(_DWORD *)(v1 + 96) )
    {
      v23 = LdrpDoPostSnapWork(v1, v3, v4);
      if ( v23 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_112;
    }
    v6 = v5;
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8LL * v5);
    v4 = v7;
    v67 = v7;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 176);
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 32) & 0x80000) == 0 && *(_QWORD *)(v8 + 56) != v7 )
        {
          v4 = *(_QWORD *)(v8 + 56);
          v67 = v4;
          *(_QWORD *)(v8 + 56) = v7;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v6) != v4 )
    {
      LdrpFreeReplacedModule();
      v4 = v67;
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v6) = v67;
    }
    v9 = *(_QWORD *)(v1 + 128);
    v3 = *(unsigned int *)(v9 + 20 * v6);
    v10 = v86 + v3;
    v11 = v86 + *(unsigned int *)(v9 + 20 * v6 + 16);
    if ( !(_DWORD)v3 || (unsigned int)v3 > *(_DWORD *)(v2 + 64) )
      v10 = v86 + *(unsigned int *)(v9 + 20 * v6 + 16);
    if ( v4 )
      break;
LABEL_50:
    ++*(_DWORD *)(v1 + 120);
  }
  v12 = *(_QWORD *)(v4 + 48);
  v80 = v12;
  v13 = 1;
  v14 = v12;
  v71 = 0LL;
  v66 = 0LL;
  v72 = 0LL;
  if ( (v12 & 3) != 0 )
  {
    v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
    v13 = (v12 & 1) == 0;
  }
  v15 = RtlImageNtHeaderEx(1LL, v14, 0LL, &v71);
  if ( !v71 )
  {
    v3 = 0LL;
LABEL_141:
    if ( v15 >= 0 )
      goto LABEL_20;
    goto LABEL_142;
  }
  v16 = *(_WORD *)(v71 + 24);
  if ( v16 == 267 )
  {
    v15 = RtlpImageDirectoryEntryToData32(v14, v13, 0, (unsigned int)&v96, v71, (__int64)&v72);
    v3 = v72;
    v66 = v72;
    goto LABEL_141;
  }
  if ( v16 != 523 || !*(_DWORD *)(v71 + 132) || (v17 = *(unsigned int *)(v71 + 136), !(_DWORD)v17) )
  {
LABEL_142:
    v3 = 0LL;
    goto LABEL_19;
  }
  v96 = *(_DWORD *)(v71 + 140);
  if ( !v13 && (unsigned int)v17 >= *(_DWORD *)(v71 + 84) )
  {
    v3 = RtlAddressInSectionTable();
    v66 = v3;
    if ( v3 )
    {
      v15 = 0;
      goto LABEL_141;
    }
    goto LABEL_142;
  }
  v3 = v14 + v17;
LABEL_19:
  v66 = v3;
LABEL_20:
  if ( !v3 )
  {
    v65 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2482,
        (unsigned int)"LdrpSnapModule",
        0,
        "DLL \"%wZ\" does not contain an export table\n",
        v67 + 72);
      v65 = LdrpDebugFlags;
    }
    if ( (v65 & 0x10) != 0 )
      __debugbreak();
    v23 = -1073741701;
    goto LABEL_148;
  }
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    if ( v12 < *((_QWORD *)&xmmword_18016F4D0 + 1)
      || v12 >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
    {
      RtlpxLookupFunctionTable(v12, &v90);
      v3 = v66;
    }
    else
    {
      v90 = xmmword_18016F4D0;
      v91 = qword_18016F4E0;
    }
    if ( *((_QWORD *)&v90 + 1) != v12 )
      __fastfail(0x18u);
  }
  v18 = v3 + v96;
  v85 = v18;
  v4 = v12 + *(unsigned int *)(v3 + 28);
  v84 = v4;
  v19 = *(_DWORD *)(v3 + 24);
  v73 = v19;
  v20 = v12 + *(unsigned int *)(v3 + 32);
  v83 = v20;
  v87 = v12 + *(unsigned int *)(v3 + 36);
  v1 = a1;
  v21 = 8LL * *(unsigned int *)(a1 + 124);
  v22 = (_QWORD *)(v21 + v10);
  v82 = (unsigned __int64 *)(v21 + v11);
  while ( 1 )
  {
    v75 = v22;
    if ( !*v22 )
    {
      *(_DWORD *)(v1 + 124) = 0;
      v2 = v70;
      goto LABEL_50;
    }
    v23 = -1073741702;
    v24 = *v22 >> 63;
    v79 = v24;
    v25 = -4530927LL;
    v81 = 0LL;
    if ( (_BYTE)v24 )
    {
      v69 = *(unsigned __int16 *)v22;
      v34 = v69 - *(_DWORD *)(v3 + 16);
    }
    else
    {
      v26 = (unsigned __int16 *)(*(_QWORD *)(v70 + 48) + *(unsigned int *)v22);
      v27 = (const char *)(v26 + 1);
      v81 = v26 + 1;
      v4 = *v26;
      v28 = 0;
      v29 = v19 - 1;
      if ( (unsigned int)v4 >= v19 )
        v4 = (unsigned int)(v29 / 2);
      if ( v29 < 0 )
      {
LABEL_150:
        if ( (LdrpDebugFlags & 3) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1414,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v27,
            (const void *)v12);
        if ( (LdrpDebugFlags & 0x40) != 0 )
          __debugbreak();
        goto LABEL_46;
      }
      while ( 1 )
      {
        v30 = v27;
        v31 = v12 + *(unsigned int *)(v20 + 4LL * (int)v4) - (_QWORD)v27;
        while ( 1 )
        {
          v32 = *v30;
          if ( *v30 != v30[v31] )
            break;
          ++v30;
          if ( !v32 )
          {
            v33 = 0;
            goto LABEL_36;
          }
        }
        v33 = v32 < (unsigned int)v30[v31] ? -1 : 1;
LABEL_36:
        if ( !v33 )
          break;
        if ( v33 < 0 )
          v29 = v4 - 1;
        else
          v28 = v4 + 1;
        v4 = (unsigned int)((v29 + v28) / 2);
        v20 = v83;
        if ( v29 < v28 )
          goto LABEL_150;
      }
      v34 = *(unsigned __int16 *)(v87 + 2LL * (int)v4);
      v3 = v66;
      v4 = v84;
      v18 = v85;
    }
    if ( v34 >= *(_DWORD *)(v3 + 20) )
      goto LABEL_46;
    _mm_lfence();
    v35 = *(unsigned int *)(v4 + 4LL * (int)v34);
    if ( !(_DWORD)v35 )
    {
      v23 = -1073741702;
      goto LABEL_46;
    }
    v25 = v12 + v35;
    v71 = v12 + v35;
    v23 = 0;
    if ( v12 + v35 > v3 && v25 < v18 )
      break;
LABEL_46:
    if ( v23 < 0 )
    {
      if ( v23 == -1073741702 || v23 == -1073741515 )
      {
        v63 = v70;
        if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v70 + 80))
          || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v67 + 80)) )
        {
          LdrpLogLoadFailureEtwEvent(v63 + 72, v67 + 72, 1, (unsigned int)&LoadFailure, 0);
          LdrpLogLoadFailureEtwEvent(v63 + 72, v67 + 72, 1, (unsigned int)&LoadFailureOperational, 1);
        }
        if ( (_BYTE)v24 )
        {
          v23 = -1073741512;
          v64 = (unsigned __int16 *)v69;
        }
        else
        {
          v23 = -1073741511;
          v64 = v81;
        }
        LdrpReportError(v63 + 72, v64, (unsigned int)v23);
        v1 = a1;
        goto LABEL_112;
      }
LABEL_148:
      v1 = a1;
LABEL_112:
      v60 = *(_QWORD *)(v1 + 184);
      if ( v60 )
      {
        NtUnmapViewOfSection(-1LL, v60, v4);
        *(_QWORD *)(v1 + 184) = 0LL;
      }
      if ( v23 < 0 )
        LdrpLogError((unsigned int)v23, 25LL, 0LL, v1);
      return (unsigned int)v23;
    }
    v36 = v82;
    *v82 = v25;
    ++v22;
    v82 = v36 + 1;
    v1 = a1;
    ++*(_DWORD *)(a1 + 124);
    v20 = v83;
    v3 = v66;
    v19 = v73;
    v4 = v84;
    v18 = v85;
  }
  v37 = (char *)(v12 + v35);
  v95 = 0;
  v74 = 0LL;
  v72 = *(_QWORD *)(v70 + 176);
  v78 = 0LL;
  for ( i = v88; ; v37 = i )
  {
    v39 = strrchr(v37, 46);
    if ( !v39 || (v40 = (_WORD)v39 - (_WORD)v37, (unsigned __int64)(v39 - v37) > 0xFFFF) )
    {
LABEL_168:
      v23 = -1073741701;
      goto LABEL_93;
    }
    SourceString.Buffer = v37;
    SourceString.Length = (_WORD)v39 - (_WORD)v37;
    SourceString.MaximumLength = (_WORD)v39 - (_WORD)v37;
    v41 = v39 + 1;
    if ( v39[1] == 35 )
    {
      if ( RtlCharToInteger(v39 + 2, 0, &Value) < 0 )
        goto LABEL_168;
      v41 = 0LL;
    }
    if ( v40 == 5 && (*(_DWORD *)v37 | 0x20202020) == 0x6C64746E && ((unsigned __int8)v37[4] | 0x20) == 0x6C )
    {
      v42 = LdrpNtDllDataTableEntry;
      v74 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v59 = LdrpLoadDependentModule(&SourceString, (__int64)&v74, (__int64)&v78);
      v23 = v59;
      if ( v59 < 0 || v59 == 259 )
        goto LABEL_93;
      v42 = v74;
    }
    v43 = *(_QWORD *)(v42 + 48);
    v44 = 1;
    v45 = v43;
    v76 = 0LL;
    v46 = 0LL;
    v77 = 0LL;
    if ( (v43 & 3) != 0 )
    {
      v45 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
      v44 = (v43 & 1) == 0;
    }
    v47 = RtlImageNtHeaderEx(1LL, v45, 0LL, &v76);
    if ( !v76 )
      goto LABEL_158;
    v48 = *(_WORD *)(v76 + 24);
    if ( v48 == 267 )
    {
      v47 = RtlpImageDirectoryEntryToData32(v45, v44, 0, (unsigned int)&v68, v76, (__int64)&v77);
      v46 = v77;
      goto LABEL_158;
    }
    if ( v48 == 523 )
    {
      if ( *(_DWORD *)(v76 + 132) )
      {
        v49 = *(unsigned int *)(v76 + 136);
        if ( (_DWORD)v49 )
        {
          v68 = *(_DWORD *)(v76 + 140);
          if ( v44 || (unsigned int)v49 < *(_DWORD *)(v76 + 84) )
          {
            v46 = (char *)(v45 + v49);
            goto LABEL_69;
          }
          v46 = (char *)RtlAddressInSectionTable();
          if ( v46 )
          {
            v47 = 0;
LABEL_158:
            if ( v47 >= 0 )
              goto LABEL_69;
          }
        }
      }
    }
    v46 = 0LL;
LABEL_69:
    if ( !v46 )
      goto LABEL_167;
    if ( v41 )
    {
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          685,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Locating procedure \"%s\" by name\n",
          v41);
      v50 = 0;
      v51 = *((_DWORD *)v46 + 6) - 1;
      v52 = v51 / 2;
      if ( v51 < 0 )
      {
LABEL_160:
        if ( (LdrpDebugFlags & 3) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1414,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v41,
            (const void *)v43);
        if ( (LdrpDebugFlags & 0x40) != 0 )
          __debugbreak();
LABEL_167:
        v23 = -1073741702;
        goto LABEL_93;
      }
      while ( 1 )
      {
        v53 = v41;
        v54 = v43 + *(unsigned int *)(v43 + *((unsigned int *)v46 + 8) + 4LL * v52) - (_QWORD)v41;
        while ( 1 )
        {
          v55 = *v53;
          if ( *v53 != v53[v54] )
            break;
          ++v53;
          if ( !v55 )
          {
            v56 = 0;
            goto LABEL_78;
          }
        }
        v56 = v55 < (unsigned int)v53[v54] ? -1 : 1;
LABEL_78:
        if ( !v56 )
          break;
        if ( v56 >= 0 )
          v50 = v52 + 1;
        else
          v51 = v52 - 1;
        v52 = (v51 + v50) / 2;
        if ( v51 < v50 )
          goto LABEL_160;
      }
      v57 = *(unsigned __int16 *)(v43 + *((unsigned int *)v46 + 9) + 2LL * v52);
    }
    else
    {
      v62 = Value;
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          703,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Loading procedure 0x%lx by ordinal\n",
          Value);
      if ( !v62 )
      {
        v23 = -1073741811;
        goto LABEL_93;
      }
      v57 = v62 - *((_DWORD *)v46 + 4);
    }
    if ( v57 >= *((_DWORD *)v46 + 5) )
    {
      v23 = (v41 != 0LL) - 1073741512;
      goto LABEL_93;
    }
    i = (char *)(v43 + *(unsigned int *)(v43 + *((unsigned int *)v46 + 7) + 4LL * (int)v57));
    v88 = i;
    if ( i < v46 || i >= &v46[v68] )
      break;
    if ( ++v95 == 32 )
      goto LABEL_168;
  }
  v23 = 0;
  v58 = *(_QWORD *)(v42 + 48);
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    if ( v58 < *((_QWORD *)&xmmword_18016F4D0 + 1)
      || v58 >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
    {
      RtlpxLookupFunctionTable(*(_QWORD *)(v42 + 48), &v92);
    }
    else
    {
      v92 = xmmword_18016F4D0;
      v93 = qword_18016F4E0;
    }
    if ( *((_QWORD *)&v92 + 1) != v58 )
      __fastfail(0x18u);
  }
LABEL_93:
  v4 = v78;
  if ( v78 )
    RtlFreeHeap(LdrpHeap, 0LL, v78);
  if ( v23 != 259 )
  {
    LOBYTE(v24) = v79;
    v22 = v75;
    if ( v23 < 0 )
      v25 = v71;
    else
      v25 = (unsigned __int64)i;
    v12 = v80;
    goto LABEL_46;
  }
  return 0LL;
}

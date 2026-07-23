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
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // r12
  bool v14; // bl
  void *v15; // rdi
  NTSTATUS v16; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  unsigned __int64 v19; // r10
  unsigned int v20; // r9d
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // r13
  NTSTATUS v24; // esi
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  unsigned __int16 *v27; // rax
  const char *v28; // rdi
  int v29; // r8d
  int v30; // r11d
  int v31; // r10d
  const char *v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int8 v34; // cl
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned __int64 *v38; // rdx
  char *v39; // rdi
  char *i; // r12
  char *v41; // rax
  __int16 v42; // bx
  const char *v43; // r15
  __int64 v44; // r13
  unsigned __int64 v45; // r14
  bool v46; // bl
  char *v47; // rdi
  char *v48; // rsi
  NTSTATUS v49; // eax
  unsigned __int16 v50; // ax
  __int64 v51; // rdx
  int v52; // r11d
  int v53; // r10d
  int v54; // r8d
  const char *v55; // rax
  signed __int64 v56; // rdx
  unsigned __int8 v57; // cl
  int v58; // eax
  ULONG v59; // eax
  unsigned __int64 v60; // rbx
  int v61; // eax
  void *v62; // rdx
  ULONG v64; // ebx
  __int64 v65; // rdi
  unsigned __int16 *v66; // rdx
  char v67; // al
  int v68; // [rsp+20h] [rbp-158h]
  int v69; // [rsp+20h] [rbp-158h]
  __int64 v70; // [rsp+40h] [rbp-138h]
  __int64 v71; // [rsp+48h] [rbp-130h]
  int v72; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v73; // [rsp+54h] [rbp-124h]
  __int64 v74; // [rsp+58h] [rbp-120h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp-118h] BYREF
  __int64 v76; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v77; // [rsp+70h] [rbp-108h]
  __int64 v78; // [rsp+78h] [rbp-100h] BYREF
  _QWORD *v79; // [rsp+80h] [rbp-F8h]
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v81; // [rsp+90h] [rbp-E8h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v84; // [rsp+A8h] [rbp-D0h]
  unsigned __int16 *v85; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 *v86; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v87; // [rsp+C0h] [rbp-B8h]
  __int64 v88; // [rsp+C8h] [rbp-B0h]
  unsigned __int64 v89; // [rsp+D0h] [rbp-A8h]
  __int64 v90; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v91; // [rsp+E0h] [rbp-98h]
  char *v92; // [rsp+E8h] [rbp-90h]
  ANSI_STRING SourceString; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v94; // [rsp+100h] [rbp-78h]
  __int64 v95; // [rsp+110h] [rbp-68h]
  __int128 v96; // [rsp+118h] [rbp-60h]
  __int64 v97; // [rsp+128h] [rbp-50h]
  int v99; // [rsp+188h] [rbp+10h]
  int Size; // [rsp+190h] [rbp+18h] BYREF
  ULONG Value; // [rsp+198h] [rbp+20h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 56);
  v74 = v2;
  v90 = *(_QWORD *)(v2 + 48);
  LdrpLogDllState(v90, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(v1);
  v73 = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v1 + 120);
    if ( v5 >= *(_DWORD *)(v1 + 96) )
    {
      v24 = LdrpDoPostSnapWork(v1, v3, v4);
      if ( v24 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_112;
    }
    v6 = v5;
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8LL * v5);
    v4 = v7;
    v71 = v7;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 176);
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 32) & 0x80000) == 0 && *(_QWORD *)(v8 + 56) != v7 )
        {
          v4 = *(_QWORD *)(v8 + 56);
          v71 = v4;
          *(_QWORD *)(v8 + 56) = v7;
        }
      }
    }
    v9 = *(void **)(*(_QWORD *)(v1 + 88) + 8 * v6);
    if ( v9 != (void *)v4 )
    {
      LdrpFreeReplacedModule(v9);
      v4 = v71;
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v6) = v71;
    }
    v10 = *(_QWORD *)(v1 + 128);
    v3 = *(unsigned int *)(v10 + 20 * v6);
    v11 = v90 + v3;
    v12 = v90 + *(unsigned int *)(v10 + 20 * v6 + 16);
    if ( !(_DWORD)v3 || (unsigned int)v3 > *(_DWORD *)(v2 + 64) )
      v11 = v90 + *(unsigned int *)(v10 + 20 * v6 + 16);
    if ( v4 )
      break;
LABEL_50:
    ++*(_DWORD *)(v1 + 120);
  }
  v13 = *(_QWORD *)(v4 + 48);
  v84 = v13;
  v14 = 1;
  v15 = (void *)v13;
  OutHeaders = 0LL;
  v70 = 0LL;
  v76 = 0LL;
  if ( (v13 & 3) != 0 )
  {
    v15 = (void *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
    v14 = (v13 & 1) == 0;
  }
  v16 = RtlImageNtHeaderEx(1u, v15, 0LL, &OutHeaders);
  if ( !OutHeaders )
  {
    v3 = 0LL;
LABEL_141:
    if ( v16 >= 0 )
      goto LABEL_20;
    goto LABEL_142;
  }
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    v16 = RtlpImageDirectoryEntryToData32((int)v15, v14, 0, (int)&Size, OutHeaders, (__int64)&v76);
    v3 = v76;
    v70 = v76;
    goto LABEL_141;
  }
  if ( Magic != 523
    || !OutHeaders->OptionalHeader.NumberOfRvaAndSizes
    || (VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress, !(_DWORD)VirtualAddress) )
  {
LABEL_142:
    v3 = 0LL;
    goto LABEL_19;
  }
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( !v14 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v3 = (unsigned __int64)RtlAddressInSectionTable(OutHeaders, v15, VirtualAddress);
    v70 = v3;
    if ( v3 )
    {
      v16 = 0;
      goto LABEL_141;
    }
    goto LABEL_142;
  }
  v3 = (unsigned __int64)v15 + VirtualAddress;
LABEL_19:
  v70 = v3;
LABEL_20:
  if ( !v3 )
  {
    v67 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2482,
        (unsigned int)"LdrpSnapModule",
        0,
        "DLL \"%wZ\" does not contain an export table\n",
        v71 + 72);
      v67 = LdrpDebugFlags;
    }
    if ( (v67 & 0x10) != 0 )
      __debugbreak();
    v24 = -1073741701;
    goto LABEL_148;
  }
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( v13 < *((_QWORD *)&xmmword_18016F4D0 + 1)
      || v13 >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
    {
      RtlpxLookupFunctionTable((PVOID)v13);
      v3 = v70;
    }
    else
    {
      v94 = xmmword_18016F4D0;
      v95 = qword_18016F4E0;
    }
    if ( *((_QWORD *)&v94 + 1) != v13 )
      __fastfail(0x18u);
  }
  v19 = v3 + (unsigned int)Size;
  v89 = v19;
  v4 = v13 + *(unsigned int *)(v3 + 28);
  v88 = v4;
  v20 = *(_DWORD *)(v3 + 24);
  v77 = v20;
  v21 = v13 + *(unsigned int *)(v3 + 32);
  v87 = v21;
  v91 = v13 + *(unsigned int *)(v3 + 36);
  v1 = a1;
  v22 = 8LL * *(unsigned int *)(a1 + 124);
  v23 = (_QWORD *)(v22 + v11);
  v86 = (unsigned __int64 *)(v22 + v12);
  while ( 1 )
  {
    v79 = v23;
    if ( !*v23 )
    {
      *(_DWORD *)(v1 + 124) = 0;
      v2 = v74;
      goto LABEL_50;
    }
    v24 = -1073741702;
    v25 = *v23 >> 63;
    v83 = v25;
    v26 = -4530927LL;
    v85 = 0LL;
    if ( (_BYTE)v25 )
    {
      v73 = *(unsigned __int16 *)v23;
      v36 = v73 - *(_DWORD *)(v3 + 16);
    }
    else
    {
      v27 = (unsigned __int16 *)(*(_QWORD *)(v74 + 48) + *(unsigned int *)v23);
      v28 = (const char *)(v27 + 1);
      v85 = v27 + 1;
      v29 = *v27;
      v30 = 0;
      v31 = v20 - 1;
      if ( v29 >= v20 )
        v29 = v31 / 2;
      if ( v31 < 0 )
      {
LABEL_150:
        if ( (LdrpDebugFlags & 3) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1414,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v28,
            (const void *)v13);
        if ( (LdrpDebugFlags & 0x40) != 0 )
          __debugbreak();
        goto LABEL_46;
      }
      while ( 1 )
      {
        v32 = v28;
        v33 = v13 + *(unsigned int *)(v21 + 4LL * v29) - (_QWORD)v28;
        while ( 1 )
        {
          v34 = *v32;
          if ( *v32 != v32[v33] )
            break;
          ++v32;
          if ( !v34 )
          {
            v35 = 0;
            goto LABEL_36;
          }
        }
        v35 = v34 < (unsigned int)v32[v33] ? -1 : 1;
LABEL_36:
        if ( !v35 )
          break;
        if ( v35 < 0 )
          v31 = v29 - 1;
        else
          v30 = v29 + 1;
        v29 = (v31 + v30) / 2;
        v21 = v87;
        if ( v31 < v30 )
          goto LABEL_150;
      }
      v36 = *(unsigned __int16 *)(v91 + 2LL * v29);
      v3 = v70;
      v4 = v88;
      v19 = v89;
    }
    if ( v36 >= *(_DWORD *)(v3 + 20) )
      goto LABEL_46;
    _mm_lfence();
    v37 = *(unsigned int *)(v4 + 4LL * (int)v36);
    if ( !(_DWORD)v37 )
    {
      v24 = -1073741702;
      goto LABEL_46;
    }
    v26 = v13 + v37;
    OutHeaders = (PIMAGE_NT_HEADERS)(v13 + v37);
    v24 = 0;
    if ( v13 + v37 > v3 && v26 < v19 )
      break;
LABEL_46:
    if ( v24 < 0 )
    {
      if ( v24 == -1073741702 || v24 == -1073741515 )
      {
        v65 = v74;
        if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v74 + 80))
          || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v71 + 80)) )
        {
          LOBYTE(v68) = 0;
          LdrpLogLoadFailureEtwEvent(v65 + 72, v71 + 72, 1LL, &LoadFailure, v68);
          LOBYTE(v69) = 1;
          LdrpLogLoadFailureEtwEvent(v65 + 72, v71 + 72, 1LL, &LoadFailureOperational, v69);
        }
        if ( (_BYTE)v25 )
        {
          v24 = -1073741512;
          v66 = (unsigned __int16 *)v73;
        }
        else
        {
          v24 = -1073741511;
          v66 = v85;
        }
        LdrpReportError(v65 + 72, v66, (unsigned int)v24);
        v1 = a1;
        goto LABEL_112;
      }
LABEL_148:
      v1 = a1;
LABEL_112:
      v62 = *(void **)(v1 + 184);
      if ( v62 )
      {
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v62);
        *(_QWORD *)(v1 + 184) = 0LL;
      }
      if ( v24 < 0 )
        LdrpLogError((unsigned int)v24, 25LL, 0LL, v1);
      return (unsigned int)v24;
    }
    v38 = v86;
    *v86 = v26;
    ++v23;
    v86 = v38 + 1;
    v1 = a1;
    ++*(_DWORD *)(a1 + 124);
    v21 = v87;
    v3 = v70;
    v20 = v77;
    v4 = v88;
    v19 = v89;
  }
  v39 = (char *)(v13 + v37);
  v99 = 0;
  v78 = 0LL;
  v76 = *(_QWORD *)(v74 + 176);
  BaseAddress = 0LL;
  for ( i = v92; ; v39 = i )
  {
    v41 = strrchr(v39, 46);
    if ( !v41 || (v42 = (_WORD)v41 - (_WORD)v39, (unsigned __int64)(v41 - v39) > 0xFFFF) )
    {
LABEL_168:
      v24 = -1073741701;
      goto LABEL_93;
    }
    SourceString.Buffer = v39;
    SourceString.Length = (_WORD)v41 - (_WORD)v39;
    SourceString.MaximumLength = (_WORD)v41 - (_WORD)v39;
    v43 = v41 + 1;
    if ( v41[1] == 35 )
    {
      if ( RtlCharToInteger(v41 + 2, 0, &Value) < 0 )
        goto LABEL_168;
      v43 = 0LL;
    }
    if ( v42 == 5 && (*(_DWORD *)v39 | 0x20202020) == 0x6C64746E && ((unsigned __int8)v39[4] | 0x20) == 0x6C )
    {
      v44 = LdrpNtDllDataTableEntry;
      v78 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v61 = LdrpLoadDependentModule(&SourceString, (__int64)&v78, (__int64)&BaseAddress);
      v24 = v61;
      if ( v61 < 0 || v61 == 259 )
        goto LABEL_93;
      v44 = v78;
    }
    v45 = *(_QWORD *)(v44 + 48);
    v46 = 1;
    v47 = (char *)v45;
    NtHeaders = 0LL;
    v48 = 0LL;
    v81 = 0LL;
    if ( (v45 & 3) != 0 )
    {
      v47 = (char *)(v45 & 0xFFFFFFFFFFFFFFFCuLL);
      v46 = (v45 & 1) == 0;
    }
    v49 = RtlImageNtHeaderEx(1u, v47, 0LL, &NtHeaders);
    if ( !NtHeaders )
      goto LABEL_158;
    v50 = NtHeaders->OptionalHeader.Magic;
    if ( v50 == 267 )
    {
      v49 = RtlpImageDirectoryEntryToData32((int)v47, v46, 0, (int)&v72, NtHeaders, (__int64)&v81);
      v48 = (char *)v81;
      goto LABEL_158;
    }
    if ( v50 == 523 )
    {
      if ( NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
      {
        v51 = NtHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( (_DWORD)v51 )
        {
          v72 = NtHeaders->OptionalHeader.DataDirectory[0].Size;
          if ( v46 || (unsigned int)v51 < NtHeaders->OptionalHeader.SizeOfHeaders )
          {
            v48 = &v47[v51];
            goto LABEL_69;
          }
          v48 = (char *)RtlAddressInSectionTable(NtHeaders, v47, v51);
          if ( v48 )
          {
            v49 = 0;
LABEL_158:
            if ( v49 >= 0 )
              goto LABEL_69;
          }
        }
      }
    }
    v48 = 0LL;
LABEL_69:
    if ( !v48 )
      goto LABEL_167;
    if ( v43 )
    {
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          685,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Locating procedure \"%s\" by name\n",
          v43);
      v52 = 0;
      v53 = *((_DWORD *)v48 + 6) - 1;
      v54 = v53 / 2;
      if ( v53 < 0 )
      {
LABEL_160:
        if ( (LdrpDebugFlags & 3) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1414,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v43,
            (const void *)v45);
        if ( (LdrpDebugFlags & 0x40) != 0 )
          __debugbreak();
LABEL_167:
        v24 = -1073741702;
        goto LABEL_93;
      }
      while ( 1 )
      {
        v55 = v43;
        v56 = v45 + *(unsigned int *)(v45 + *((unsigned int *)v48 + 8) + 4LL * v54) - (_QWORD)v43;
        while ( 1 )
        {
          v57 = *v55;
          if ( *v55 != v55[v56] )
            break;
          ++v55;
          if ( !v57 )
          {
            v58 = 0;
            goto LABEL_78;
          }
        }
        v58 = v57 < (unsigned int)v55[v56] ? -1 : 1;
LABEL_78:
        if ( !v58 )
          break;
        if ( v58 >= 0 )
          v52 = v54 + 1;
        else
          v53 = v54 - 1;
        v54 = (v53 + v52) / 2;
        if ( v53 < v52 )
          goto LABEL_160;
      }
      v59 = *(unsigned __int16 *)(v45 + *((unsigned int *)v48 + 9) + 2LL * v54);
    }
    else
    {
      v64 = Value;
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          703,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Loading procedure 0x%lx by ordinal\n",
          Value);
      if ( !v64 )
      {
        v24 = -1073741811;
        goto LABEL_93;
      }
      v59 = v64 - *((_DWORD *)v48 + 4);
    }
    if ( v59 >= *((_DWORD *)v48 + 5) )
    {
      v24 = (v43 != 0LL) - 1073741512;
      goto LABEL_93;
    }
    i = (char *)(v45 + *(unsigned int *)(v45 + *((unsigned int *)v48 + 7) + 4LL * (int)v59));
    v92 = i;
    if ( i < v48 || i >= &v48[v72] )
      break;
    if ( ++v99 == 32 )
      goto LABEL_168;
  }
  v24 = 0;
  v60 = *(_QWORD *)(v44 + 48);
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( v60 < *((_QWORD *)&xmmword_18016F4D0 + 1)
      || v60 >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
    {
      RtlpxLookupFunctionTable(*(PVOID *)(v44 + 48));
    }
    else
    {
      v96 = xmmword_18016F4D0;
      v97 = qword_18016F4E0;
    }
    if ( *((_QWORD *)&v96 + 1) != v60 )
      __fastfail(0x18u);
  }
LABEL_93:
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  if ( v24 != 259 )
  {
    LOBYTE(v25) = v83;
    v23 = v79;
    if ( v24 < 0 )
      v26 = (unsigned __int64)OutHeaders;
    else
      v26 = (unsigned __int64)i;
    v13 = v84;
    goto LABEL_46;
  }
  return 0LL;
}

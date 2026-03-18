/*
 * XREFs of EtwStartAutoLogger @ 0x1405A90A0
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x1405A8E4C (EtwpInitializeAutoLoggers.c)
 *     PerfDiagpProxyWorker @ 0x14073E0C0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCbCatW @ 0x1400DE508 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcscmp @ 0x140160450 (wcscmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x14056B830 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x14058C9E0 (RtlWriteRegistryValue.c)
 *     EtwpUpdateDisallowList @ 0x140743F50 (EtwpUpdateDisallowList.c)
 *     EtwpParsePoolTagFilter @ 0x14074FDE4 (EtwpParsePoolTagFilter.c)
 */

__int64 __fastcall EtwStartAutoLogger(wchar_t *SourceString, NTSTRSAFE_PCWSTR pszSrc, _DWORD *a3)
{
  int v3; // ebx
  GUID *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  SIZE_T v10; // r12
  wchar_t *PoolWithTag; // rax
  wchar_t *v12; // r14
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  char *v15; // r9
  wchar_t v16; // cx
  NTSTATUS RegistryValues; // esi
  PVOID v18; // rax
  _WORD *v19; // r12
  _WORD *v20; // r13
  int v21; // eax
  unsigned int v22; // r14d
  int v23; // ecx
  unsigned int v24; // edx
  int v25; // r12d
  unsigned __int16 v26; // r13
  int v27; // eax
  NTSTATUS v28; // eax
  GUID v29; // xmm0
  __int64 v30; // r14
  __int64 v31; // rcx
  NTSTATUS started; // eax
  _WORD *v33; // r12
  int v34; // eax
  const WCHAR *v35; // rdx
  unsigned int v37; // eax
  unsigned int v38; // eax
  _WORD *v39; // rcx
  int v40; // eax
  unsigned int v41; // eax
  int v42; // r8d
  _WORD *v43; // r14
  unsigned __int16 v44; // ax
  _WORD *v45; // rcx
  __int64 v46; // r9
  _WORD *v47; // r9
  unsigned int v48; // r14d
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG v50; // eax
  _WORD v51[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh]
  unsigned int v53; // [rsp+38h] [rbp-C8h]
  unsigned int v54; // [rsp+40h] [rbp-C0h] BYREF
  int v55; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  int v58; // [rsp+54h] [rbp-ACh] BYREF
  ULONG ValueData; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+6Ch] [rbp-94h] BYREF
  int v63; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v64; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v65; // [rsp+88h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-68h]
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v69; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]
  int v71; // [rsp+D0h] [rbp-30h] BYREF
  char *v72; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  void *v74; // [rsp+F0h] [rbp-10h]
  wchar_t *Str1; // [rsp+F8h] [rbp-8h]
  unsigned int v76; // [rsp+100h] [rbp+0h] BYREF
  __int64 v77; // [rsp+108h] [rbp+8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  GUID Guid; // [rsp+140h] [rbp+40h] BYREF
  int v80; // [rsp+150h] [rbp+50h] BYREF
  int *v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+160h] [rbp+60h] BYREF
  __int64 v83; // [rsp+168h] [rbp+68h]
  int v84; // [rsp+170h] [rbp+70h] BYREF
  __int64 v85; // [rsp+178h] [rbp+78h]
  int v86; // [rsp+180h] [rbp+80h] BYREF
  __int64 v87; // [rsp+188h] [rbp+88h]
  int v88; // [rsp+190h] [rbp+90h] BYREF
  __int64 v89; // [rsp+198h] [rbp+98h]
  int v90; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  int v92; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int *v93; // [rsp+1B8h] [rbp+B8h]
  int v94; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int *v95; // [rsp+1C8h] [rbp+C8h]
  int v96; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v97; // [rsp+1D8h] [rbp+D8h]
  int v98; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v99; // [rsp+1E8h] [rbp+E8h]
  int v100; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v101; // [rsp+1F8h] [rbp+F8h]
  int v102; // [rsp+200h] [rbp+100h] BYREF
  int *v103; // [rsp+208h] [rbp+108h]
  int v104; // [rsp+210h] [rbp+110h] BYREF
  UNICODE_STRING *p_GuidString; // [rsp+218h] [rbp+118h]
  int v106; // [rsp+220h] [rbp+120h] BYREF
  __int64 v107; // [rsp+228h] [rbp+128h]
  int v108; // [rsp+230h] [rbp+130h] BYREF
  unsigned int *v109; // [rsp+238h] [rbp+138h]
  int v110; // [rsp+240h] [rbp+140h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+248h] [rbp+148h]
  int v112; // [rsp+250h] [rbp+150h] BYREF
  int *v113; // [rsp+258h] [rbp+158h]
  int v114; // [rsp+260h] [rbp+160h] BYREF
  int *v115; // [rsp+268h] [rbp+168h]
  int v116; // [rsp+270h] [rbp+170h] BYREF
  UNICODE_STRING *v117; // [rsp+278h] [rbp+178h]
  _QWORD v118[140]; // [rsp+290h] [rbp+190h] BYREF

  v3 = 0;
  Str1 = SourceString;
  v60 = a3;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  v6 = 0LL;
  GuidString.Buffer = 0LL;
  v7 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v65.Length = 0LL;
  v65.Buffer = 0LL;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  ValueData = 0;
  v57 = 0;
  v54 = 0;
  v58 = 0;
  v55 = 0;
  v51[0] = 0;
  v61 = 1;
  v63 = 0;
  v62 = 100;
  *a3 = 0;
  *(_QWORD *)&v64.Length = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v8 = -1LL;
  while ( pszSrc[++v8] != 0 )
    ;
  v10 = (unsigned int)(2 * v8 + 104);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x50777445u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryValues = -1073741801;
    goto LABEL_42;
  }
  v13 = (unsigned __int64)(unsigned int)v10 >> 1;
  if ( v13 )
  {
    v14 = 2147483646 - v13;
    v15 = (char *)((char *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\" - (char *)PoolWithTag);
    while ( v13 + v14 )
    {
      v16 = *(_WORD *)&v15[(_QWORD)PoolWithTag];
      if ( !v16 )
        break;
      *PoolWithTag++ = v16;
      if ( !--v13 )
      {
        --PoolWithTag;
        break;
      }
    }
    *PoolWithTag = 0;
  }
  RtlStringCbCatW(v12, v10, pszSrc);
  RtlInitUnicodeString(&DestinationString, v12);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    v6 = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x50777445u);
    if ( !v6 )
    {
      RegistryValues = -1073741801;
      goto LABEL_42;
    }
    v18 = ExAllocatePoolWithTag(PagedPool, 0x504uLL, 0x50777445u);
    v7 = (__int64)v18;
    if ( !v18 )
    {
      RegistryValues = -1073741801;
      goto LABEL_42;
    }
    memset(v18, 0, 0x504uLL);
    *(_DWORD *)(v7 + 44) = 0x20000;
    *(_DWORD *)(v7 + 48) = 4;
    RtlInitUnicodeString((PUNICODE_STRING)(v7 + 144), SourceString);
    *(_DWORD *)(v7 + 72) = 0x80000000;
    *(_BYTE *)(v7 + 74) = -1;
    *(_WORD *)(v7 + 72) = 176;
    *(_DWORD *)(v7 + 176) = 1;
    v19 = (_WORD *)(v7 + 180);
    v52 = 180;
    v20 = (_WORD *)(v7 + 224);
    Src = (void *)(v7 + 1272);
    memset(v118, 0, sizeof(v118));
    v118[0] = &EtwpQueryRegistryCallback;
    LODWORD(v118[4]) = 4;
    v118[3] = &v80;
    v80 = 4;
    v118[2] = L"Start";
    v81 = &v57;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v118, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( v57 )
      {
        v83 = v7 + 48;
        LODWORD(v118[4]) = 4;
        v80 = 4;
        v118[3] = &v80;
        LODWORD(v118[11]) = 4;
        v118[2] = L"FlushThreshold";
        v82 = 4;
        v81 = (int *)(v7 + 76);
        v118[10] = &v82;
        v118[9] = L"BufferSize";
        v118[17] = &v84;
        v118[16] = L"MinimumBuffers";
        v85 = v7 + 52;
        v118[24] = &v86;
        v118[23] = L"FlushTimer";
        v87 = v7 + 68;
        v118[31] = &v88;
        v118[30] = L"MaximumBuffers";
        v89 = v7 + 56;
        v118[38] = &v90;
        v118[37] = L"FileName";
        v118[40] = v51;
        v91 = v7 + 128;
        v77 = v7 + 184;
        v118[45] = &v92;
        v118[44] = L"EnableKernelFlags";
        v93 = &v76;
        v70 = v7 + 228;
        v118[52] = &v94;
        LODWORD(v118[18]) = 4;
        v84 = 4;
        LODWORD(v118[25]) = 4;
        v86 = 4;
        LODWORD(v118[32]) = 4;
        v88 = 4;
        v118[51] = L"StackWalkingFilter";
        v118[0] = &EtwpQueryRegistryCallback;
        v118[7] = &EtwpQueryRegistryCallback;
        v118[14] = &EtwpQueryRegistryCallback;
        v118[21] = &EtwpQueryRegistryCallback;
        v118[28] = &EtwpQueryRegistryCallback;
        v118[35] = &EtwpQueryRegistryCallback;
        LODWORD(v118[39]) = 1;
        v90 = 1;
        v76 = 40;
        v118[42] = &EtwpQueryRegistryCallback;
        LODWORD(v118[46]) = 3;
        v92 = 3;
        v69 = 1024;
        v118[49] = &EtwpQueryRegistryCallback;
        LODWORD(v118[53]) = 3;
        v94 = 3;
        v95 = &v69;
        v118[59] = &v96;
        v118[58] = L"ClockType";
        v118[61] = &v61;
        v97 = v7 + 40;
        v118[66] = &v98;
        v118[65] = L"MaxFileSize";
        v118[68] = &v62;
        v99 = v7 + 60;
        v118[73] = &v100;
        v118[72] = L"LogFileMode";
        v118[75] = &v63;
        v101 = v7 + 64;
        v118[80] = &v102;
        v118[79] = L"DisableRealtimePersistence";
        v103 = &v58;
        v118[87] = &v104;
        v118[86] = L"Guid";
        v118[89] = v51;
        p_GuidString = &GuidString;
        v118[94] = &v106;
        v118[93] = L"FileCounter";
        v107 = v7 + 96;
        v118[101] = &v108;
        v118[100] = L"FileMax";
        v109 = &v54;
        v118[108] = &v110;
        v118[56] = &EtwpQueryRegistryCallback;
        LODWORD(v118[60]) = 4;
        LODWORD(v118[62]) = 4;
        v96 = 4;
        v118[63] = &EtwpQueryRegistryCallback;
        LODWORD(v118[67]) = 4;
        LODWORD(v118[69]) = 4;
        v98 = 4;
        v118[70] = &EtwpQueryRegistryCallback;
        LODWORD(v118[74]) = 4;
        LODWORD(v118[76]) = 4;
        v100 = 4;
        v118[77] = &EtwpQueryRegistryCallback;
        LODWORD(v118[81]) = 4;
        v102 = 4;
        v118[84] = &EtwpQueryRegistryCallback;
        LODWORD(v118[88]) = 1;
        v104 = 1;
        v118[91] = &EtwpQueryRegistryCallback;
        LODWORD(v118[95]) = 4;
        v106 = 4;
        v118[98] = &EtwpQueryRegistryCallback;
        LODWORD(v118[102]) = 4;
        v108 = 4;
        v118[105] = &EtwpQueryRegistryCallback;
        v118[107] = L"PoolTagFilter";
        LODWORD(v118[109]) = 1;
        v118[110] = v51;
        p_UnicodeString = &UnicodeString;
        v110 = 1;
        v72 = (char *)Src + 4;
        v118[115] = &v112;
        v118[114] = L"StackCaching";
        v113 = &v71;
        v118[122] = &v114;
        v118[121] = L"EnableSecurityProvider";
        v115 = &v55;
        v118[129] = &v116;
        v118[128] = L"DisallowList";
        v118[131] = v51;
        v118[112] = &EtwpQueryRegistryCallback;
        LODWORD(v118[116]) = 3;
        v112 = 3;
        v118[119] = &EtwpQueryRegistryCallback;
        v118[126] = &EtwpQueryRegistryCallback;
        LODWORD(v118[130]) = 1;
        v116 = 1;
        v117 = &v65;
        v71 = 8;
        LODWORD(v118[123]) = 4;
        v114 = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v118, 0LL);
        if ( RegistryValues >= 0 )
        {
          v21 = *(_DWORD *)(v7 + 112) | 2;
          *(_DWORD *)(v7 + 112) = v21;
          if ( !v58 )
            *(_DWORD *)(v7 + 112) = v21 | 1;
          v22 = v76 >> 2;
          v53 = v76 >> 2;
          if ( (unsigned __int16)(v76 >> 2) )
          {
            *(_WORD *)(v7 + 182) = 1;
            *v19 = v22 + 1;
            ++*(_WORD *)(v7 + 178);
            *(_WORD *)(v7 + 176) += *v19;
            v23 = 4 * (unsigned __int16)*v19 + 180;
            v52 = v23;
          }
          else
          {
            v23 = 180;
          }
          v24 = v69;
          if ( v69 )
          {
            v41 = v69 >> 2;
            *(_WORD *)(v7 + 226) = 3;
            v42 = (v24 >> 2) + 1;
            if ( (v24 & 3) == 0 )
              LOWORD(v42) = v41;
            *v20 = v42 + 1;
            ++*(_WORD *)(v7 + 178);
            *(_WORD *)(v7 + 176) += *v20;
            v52 = v23 + 4 * (unsigned __int16)*v20;
            if ( (_WORD)v22 )
              v19 += 2 * (unsigned __int16)*v19;
            if ( v19 != v20 )
              memmove(v19, (const void *)(v7 + 224), 4LL * (unsigned __int16)v42 + 4);
          }
          if ( UnicodeString.Buffer )
          {
            v43 = (_WORD *)(v7 + 1252);
            v74 = (void *)(v7 + 4 * (*(unsigned __int16 *)(v7 + 176) + 44LL));
            v44 = EtwpParsePoolTagFilter(&UnicodeString, v7 + 1256);
            v25 = v52;
            v26 = v44;
            if ( v44 )
            {
              *v43 = v44 + 1;
              *(_WORD *)(v7 + 1254) = 4;
              ++*(_WORD *)(v7 + 178);
              *(_WORD *)(v7 + 176) += *v43;
              v25 += 4 * (unsigned __int16)*v43;
              if ( v74 != v43 )
                memmove(v74, v43, 4LL * v44 + 4);
            }
            LOWORD(v22) = v53;
          }
          else
          {
            v25 = v52;
            v26 = 0;
          }
          if ( v71 == 8 )
          {
            v45 = Src;
            v46 = *(unsigned __int16 *)(v7 + 176) + 44LL;
            *(_DWORD *)Src = 327683;
            ++*(_WORD *)(v7 + 178);
            v47 = (_WORD *)(v7 + 4 * v46);
            *(_WORD *)(v7 + 176) += *v45;
            v25 += 4 * (unsigned __int16)*v45;
            if ( v47 != v45 )
              memmove(v47, v45, 0xCuLL);
          }
          if ( !(_WORD)v22 && !v69 && !v71 && !v26 )
            *(_DWORD *)(v7 + 72) = 0;
          v27 = *(_DWORD *)(v7 + 64);
          if ( ((v27 & 0x500) == 0 || (v27 & 0x200) != 0) && !*(_QWORD *)(v7 + 136) )
          {
            if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v7 + 128), L"%SystemRoot%") )
            {
              RegistryValues = -1073741801;
              goto LABEL_86;
            }
            RegistryValues = 0;
          }
          if ( v55 )
          {
            v40 = *(_DWORD *)(v7 + 64);
            if ( (v40 & 0x80u) == 0 || (v40 & 0x100) == 0 || *(_QWORD *)(v7 + 136) )
            {
              RegistryValues = -1073741790;
              goto LABEL_86;
            }
            *(_DWORD *)(v7 + 112) |= 0x8004000u;
          }
          if ( v54 )
          {
            v37 = *(_DWORD *)(v7 + 96) + 1;
            *(_DWORD *)(v7 + 96) = v37;
            if ( v37 > v54 || v37 > 0x10 )
              *(_DWORD *)(v7 + 96) = 1;
            RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"FileCounter", 4u, (PVOID)(v7 + 96), 4u);
          }
          if ( !wcscmp(Str1, L"GlobalLogger") )
          {
            v29 = GlobalLoggerGuid;
            Guid = GlobalLoggerGuid;
          }
          else
          {
            if ( !GuidString.Buffer )
            {
              RegistryValues = -1073741811;
              goto LABEL_86;
            }
            v28 = RtlGUIDFromString(&GuidString, &Guid);
            v29 = Guid;
            RegistryValues = v28;
          }
          if ( RegistryValues >= 0 )
          {
            v30 = *(_QWORD *)&v64.Length;
            v31 = *(_QWORD *)&v64.Length;
            *(_DWORD *)v7 = v25;
            *(GUID *)(v7 + 24) = v29;
            started = EtwpStartLogger(v31, v7);
            v33 = v60;
            RegistryValues = started;
            v34 = *(unsigned __int16 *)(v7 + 8);
            *v60 = v34;
            if ( RegistryValues >= 0 && v34 && v55 )
            {
              v38 = 0;
              v39 = (_WORD *)(v30 + 4016);
              while ( *v39 )
              {
                ++v38;
                ++v39;
                if ( v38 >= 8 )
                  goto LABEL_41;
              }
              *(_WORD *)(v30 + 2LL * v38 + 4016) = *v33;
            }
            goto LABEL_41;
          }
LABEL_86:
          v33 = v60;
LABEL_41:
          if ( v65.Length )
          {
            v48 = v65.Length / 0x4Cu;
            if ( v65.Length == 76 * v48 )
            {
              v64.Buffer = v65.Buffer;
              v64.Length = 76;
              v64.MaximumLength = v65.MaximumLength - v65.Length + 76;
              if ( v48 <= 0x200 )
              {
                if ( v48 )
                {
                  while ( 1 )
                  {
                    RegistryValues = RtlGUIDFromString(&v64, &v6[v3]);
                    if ( RegistryValues )
                      break;
                    v64.Buffer += 38;
                    if ( ++v3 >= v48 )
                      goto LABEL_96;
                  }
                }
                else if ( !RegistryValues )
                {
LABEL_96:
                  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                  EtwpUpdateDisallowList(CurrentServerSiloGlobals[108], *(unsigned int *)v33, v48, v6);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_42:
  v35 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v50 = RtlNtStatusToDosError(RegistryValues);
      v35 = (const WCHAR *)KeyHandle;
      ValueData = v50;
    }
    RtlWriteRegistryValue(0x40000000u, v35, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( v7 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v7 + 128));
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  RtlFreeUnicodeString(&GuidString);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v65);
  return (unsigned int)RegistryValues;
}

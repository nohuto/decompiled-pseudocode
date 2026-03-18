/*
 * XREFs of EtwStartAutoLogger @ 0x14063DF10
 * Callers:
 *     PerfDiagpRestartCKCL @ 0x140584B40 (PerfDiagpRestartCKCL.c)
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlStringCbCatW @ 0x140073A90 (RtlStringCbCatW.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcscmp @ 0x14018A5F0 (wcscmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     RtlWriteRegistryValue @ 0x140579A30 (RtlWriteRegistryValue.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     RtlNtStatusToDosError @ 0x1405B74B0 (RtlNtStatusToDosError.c)
 *     EtwpUpdateDisallowList @ 0x1407A5C30 (EtwpUpdateDisallowList.c)
 *     EtwpParsePoolTagFilter @ 0x1407B0C64 (EtwpParsePoolTagFilter.c)
 */

__int64 __fastcall EtwStartAutoLogger(wchar_t *SourceString, NTSTRSAFE_PCWSTR pszSrc, _DWORD *a3)
{
  int v3; // esi
  GUID *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  SIZE_T v10; // r12
  wchar_t *PoolWithTag; // rax
  wchar_t *v12; // r14
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  char *v15; // r9
  wchar_t v16; // cx
  NTSTATUS RegistryValues; // edi
  PVOID v18; // rax
  _WORD *v19; // r15
  int v20; // r13d
  _WORD *v21; // r12
  const WCHAR *v22; // rdx
  int v24; // eax
  unsigned int v25; // r14d
  unsigned int v26; // ecx
  unsigned __int16 v27; // r12
  int v28; // eax
  NTSTATUS v29; // eax
  GUID v30; // xmm0
  __int64 v31; // r14
  __int64 v32; // rcx
  NTSTATUS started; // eax
  _WORD *v34; // r12
  int v35; // eax
  unsigned int v36; // eax
  _WORD *v37; // rcx
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned __int16 v41; // dx
  _WORD *v42; // r15
  _WORD *v43; // rcx
  __int64 v44; // r9
  _WORD *v45; // r9
  unsigned int v46; // r14d
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG v48; // eax
  __int16 v49; // [rsp+30h] [rbp-D0h] BYREF
  GUID *v50; // [rsp+38h] [rbp-C8h]
  unsigned int v51; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  int v55; // [rsp+54h] [rbp-ACh] BYREF
  ULONG ValueData; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v57; // [rsp+60h] [rbp-A0h]
  void *v58; // [rsp+68h] [rbp-98h]
  int v59; // [rsp+70h] [rbp-90h] BYREF
  int v60; // [rsp+74h] [rbp-8Ch] BYREF
  int v61; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING GuidString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v63; // [rsp+90h] [rbp-70h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v66; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v67; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h] BYREF
  char *v70; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t *Str1; // [rsp+F8h] [rbp-8h]
  unsigned int v73; // [rsp+100h] [rbp+0h] BYREF
  __int64 v74; // [rsp+108h] [rbp+8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  GUID Guid; // [rsp+140h] [rbp+40h] BYREF
  int v77; // [rsp+150h] [rbp+50h] BYREF
  int *v78; // [rsp+158h] [rbp+58h]
  int v79; // [rsp+160h] [rbp+60h] BYREF
  __int64 v80; // [rsp+168h] [rbp+68h]
  int v81; // [rsp+170h] [rbp+70h] BYREF
  __int64 v82; // [rsp+178h] [rbp+78h]
  int v83; // [rsp+180h] [rbp+80h] BYREF
  __int64 v84; // [rsp+188h] [rbp+88h]
  int v85; // [rsp+190h] [rbp+90h] BYREF
  __int64 v86; // [rsp+198h] [rbp+98h]
  int v87; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v88; // [rsp+1A8h] [rbp+A8h]
  int v89; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int *v90; // [rsp+1B8h] [rbp+B8h]
  int v91; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int *v92; // [rsp+1C8h] [rbp+C8h]
  int v93; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v94; // [rsp+1D8h] [rbp+D8h]
  int v95; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v96; // [rsp+1E8h] [rbp+E8h]
  int v97; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v98; // [rsp+1F8h] [rbp+F8h]
  int v99; // [rsp+200h] [rbp+100h] BYREF
  int *v100; // [rsp+208h] [rbp+108h]
  int v101; // [rsp+210h] [rbp+110h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+218h] [rbp+118h]
  int v103; // [rsp+220h] [rbp+120h] BYREF
  __int64 v104; // [rsp+228h] [rbp+128h]
  int v105; // [rsp+230h] [rbp+130h] BYREF
  unsigned int *v106; // [rsp+238h] [rbp+138h]
  int v107; // [rsp+240h] [rbp+140h] BYREF
  UNICODE_STRING *v108; // [rsp+248h] [rbp+148h]
  int v109; // [rsp+250h] [rbp+150h] BYREF
  int *v110; // [rsp+258h] [rbp+158h]
  int v111; // [rsp+260h] [rbp+160h] BYREF
  int *v112; // [rsp+268h] [rbp+168h]
  int v113; // [rsp+270h] [rbp+170h] BYREF
  UNICODE_STRING *v114; // [rsp+278h] [rbp+178h]
  _QWORD v115[140]; // [rsp+290h] [rbp+190h] BYREF

  v3 = 0;
  Str1 = SourceString;
  v57 = a3;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = 0LL;
  UnicodeString.Buffer = 0LL;
  v7 = 0LL;
  *(_QWORD *)&v66.Length = 0LL;
  v66.Buffer = 0LL;
  *(_QWORD *)&v63.Length = 0LL;
  v63.Buffer = 0LL;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  ValueData = 0;
  v54 = 0;
  v51 = 0;
  v55 = 0;
  v52 = 0;
  v49 = 0;
  v59 = 1;
  v61 = 0;
  v60 = 100;
  *a3 = 0;
  *(_QWORD *)&GuidString.Length = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v8 = -1LL;
  while ( pszSrc[++v8] != 0 )
    ;
  v10 = (unsigned int)(2 * v8 + 104);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x50777445u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryValues = -1073741801;
    goto LABEL_17;
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
    v50 = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x50777445u);
    v6 = v50;
    if ( !v50 )
    {
      RegistryValues = -1073741801;
      goto LABEL_17;
    }
    v18 = ExAllocatePoolWithTag(PagedPool, 0x504uLL, 0x50777445u);
    v7 = (__int64)v18;
    if ( !v18 )
    {
      RegistryValues = -1073741801;
      goto LABEL_17;
    }
    memset(v18, 0, 0x504uLL);
    *(_DWORD *)(v7 + 44) = 0x20000;
    *(_DWORD *)(v7 + 48) = 4;
    RtlInitUnicodeString((PUNICODE_STRING)(v7 + 144), SourceString);
    *(_DWORD *)(v7 + 72) = 0x80000000;
    *(_WORD *)(v7 + 72) = 176;
    v19 = (_WORD *)(v7 + 180);
    *(_BYTE *)(v7 + 74) = -1;
    *(_DWORD *)(v7 + 176) = 1;
    v20 = 180;
    v21 = (_WORD *)(v7 + 224);
    Src = (void *)(v7 + 1272);
    memset(v115, 0, sizeof(v115));
    v115[0] = EtwpQueryRegistryCallback;
    LODWORD(v115[4]) = 4;
    v115[3] = &v77;
    v77 = 4;
    v115[2] = L"Start";
    v78 = &v54;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v115, 0LL);
    if ( RegistryValues < 0 )
      goto LABEL_16;
    if ( !v54 )
      goto LABEL_16;
    v80 = v7 + 48;
    LODWORD(v115[4]) = 4;
    v115[0] = EtwpQueryRegistryCallback;
    v115[3] = &v77;
    v77 = 4;
    v115[2] = L"FlushThreshold";
    v115[7] = EtwpQueryRegistryCallback;
    v78 = (int *)(v7 + 76);
    v115[10] = &v79;
    v115[9] = L"BufferSize";
    v115[17] = &v81;
    v115[16] = L"MinimumBuffers";
    v82 = v7 + 52;
    v115[24] = &v83;
    v115[23] = L"FlushTimer";
    v84 = v7 + 68;
    v115[31] = &v85;
    v115[30] = L"MaximumBuffers";
    v86 = v7 + 56;
    v115[38] = &v87;
    v115[37] = L"FileName";
    v115[40] = &v49;
    v88 = v7 + 128;
    v74 = v7 + 184;
    v115[45] = &v89;
    v115[44] = L"EnableKernelFlags";
    v90 = &v73;
    v68 = v7 + 228;
    v115[52] = &v91;
    v115[51] = L"StackWalkingFilter";
    LODWORD(v115[11]) = 4;
    v79 = 4;
    v115[14] = EtwpQueryRegistryCallback;
    LODWORD(v115[18]) = 4;
    v81 = 4;
    v115[21] = EtwpQueryRegistryCallback;
    LODWORD(v115[25]) = 4;
    v83 = 4;
    v115[28] = EtwpQueryRegistryCallback;
    LODWORD(v115[32]) = 4;
    v85 = 4;
    v115[35] = EtwpQueryRegistryCallback;
    LODWORD(v115[39]) = 1;
    v87 = 1;
    v73 = 40;
    v115[42] = EtwpQueryRegistryCallback;
    LODWORD(v115[46]) = 3;
    v89 = 3;
    v67 = 1024;
    v115[49] = EtwpQueryRegistryCallback;
    LODWORD(v115[53]) = 3;
    v91 = 3;
    v115[56] = EtwpQueryRegistryCallback;
    v92 = &v67;
    v115[59] = &v93;
    v115[58] = L"ClockType";
    v115[61] = &v59;
    v94 = v7 + 40;
    v115[66] = &v95;
    v115[65] = L"MaxFileSize";
    v115[68] = &v60;
    v96 = v7 + 60;
    v115[73] = &v97;
    v115[72] = L"LogFileMode";
    v115[75] = &v61;
    v98 = v7 + 64;
    v115[80] = &v99;
    v115[79] = L"DisableRealtimePersistence";
    v100 = &v55;
    v115[87] = &v101;
    v115[86] = L"Guid";
    v115[89] = &v49;
    p_UnicodeString = &UnicodeString;
    v115[94] = &v103;
    v115[93] = L"FileCounter";
    v104 = v7 + 96;
    v115[101] = &v105;
    v115[100] = L"FileMax";
    v106 = &v51;
    v115[108] = &v107;
    v115[107] = L"PoolTagFilter";
    LODWORD(v115[60]) = 4;
    LODWORD(v115[62]) = 4;
    v93 = 4;
    v115[63] = EtwpQueryRegistryCallback;
    LODWORD(v115[67]) = 4;
    LODWORD(v115[69]) = 4;
    v95 = 4;
    v115[70] = EtwpQueryRegistryCallback;
    LODWORD(v115[74]) = 4;
    LODWORD(v115[76]) = 4;
    v97 = 4;
    v115[77] = EtwpQueryRegistryCallback;
    LODWORD(v115[81]) = 4;
    v99 = 4;
    v115[84] = EtwpQueryRegistryCallback;
    LODWORD(v115[88]) = 1;
    v101 = 1;
    v115[91] = EtwpQueryRegistryCallback;
    LODWORD(v115[95]) = 4;
    v103 = 4;
    v115[98] = EtwpQueryRegistryCallback;
    LODWORD(v115[102]) = 4;
    v105 = 4;
    v115[105] = EtwpQueryRegistryCallback;
    LODWORD(v115[109]) = 1;
    v115[110] = &v49;
    v108 = &v66;
    v107 = 1;
    v70 = (char *)Src + 4;
    v115[115] = &v109;
    v115[114] = L"StackCaching";
    v110 = &v69;
    v115[122] = &v111;
    v115[121] = L"EnableSecurityProvider";
    v112 = &v52;
    v115[129] = &v113;
    v115[128] = L"DisallowList";
    v115[131] = &v49;
    v115[112] = EtwpQueryRegistryCallback;
    LODWORD(v115[116]) = 3;
    v109 = 3;
    v115[119] = EtwpQueryRegistryCallback;
    LODWORD(v115[123]) = 4;
    v111 = 4;
    v115[126] = EtwpQueryRegistryCallback;
    LODWORD(v115[130]) = 1;
    v113 = 1;
    v114 = &v63;
    v69 = 8;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v115, 0LL);
    if ( RegistryValues < 0 )
      goto LABEL_16;
    v24 = *(_DWORD *)(v7 + 112) | 2;
    *(_DWORD *)(v7 + 112) = v24;
    if ( !v55 )
      *(_DWORD *)(v7 + 112) = v24 | 1;
    v25 = v73 >> 2;
    if ( (unsigned __int16)(v73 >> 2) )
    {
      *(_WORD *)(v7 + 182) = 1;
      *v19 = v25 + 1;
      ++*(_WORD *)(v7 + 178);
      *(_WORD *)(v7 + 176) += *v19;
      v20 = 4 * (unsigned __int16)*v19 + 180;
    }
    v26 = v67;
    if ( v67 )
    {
      v40 = v67 >> 2;
      *(_WORD *)(v7 + 226) = 3;
      v41 = (v26 >> 2) + 1;
      if ( (v26 & 3) == 0 )
        v41 = v40;
      *v21 = v41 + 1;
      ++*(_WORD *)(v7 + 178);
      *(_WORD *)(v7 + 176) += *v21;
      v20 += 4 * (unsigned __int16)*v21;
      if ( (_WORD)v25 )
        v19 += 2 * (unsigned __int16)*v19;
      if ( v19 != v21 )
        memmove(v19, (const void *)(v7 + 224), 4LL * v41 + 4);
    }
    if ( v66.Buffer )
    {
      v42 = (_WORD *)(v7 + 1252);
      v58 = (void *)(v7 + 4 * (*(unsigned __int16 *)(v7 + 176) + 44LL));
      v27 = EtwpParsePoolTagFilter(&v66, v7 + 1256);
      if ( v27 )
      {
        *v42 = v27 + 1;
        *(_WORD *)(v7 + 1254) = 4;
        ++*(_WORD *)(v7 + 178);
        *(_WORD *)(v7 + 176) += *v42;
        v20 += 4 * (unsigned __int16)*v42;
        if ( v58 != v42 )
          memmove(v58, v42, 4LL * v27 + 4);
      }
    }
    else
    {
      v27 = 0;
    }
    if ( v69 == 8 )
    {
      v43 = Src;
      v44 = *(unsigned __int16 *)(v7 + 176) + 44LL;
      *(_DWORD *)Src = 327683;
      ++*(_WORD *)(v7 + 178);
      v45 = (_WORD *)(v7 + 4 * v44);
      *(_WORD *)(v7 + 176) += *v43;
      v20 += 4 * (unsigned __int16)*v43;
      if ( v45 != v43 )
        memmove(v45, v43, 0xCuLL);
    }
    if ( !(_WORD)v25 && !v67 && !v69 && !v27 )
      *(_DWORD *)(v7 + 72) = 0;
    v28 = *(_DWORD *)(v7 + 64);
    if ( ((v28 & 0x500) == 0 || (v28 & 0x200) != 0) && !*(_QWORD *)(v7 + 136) )
    {
      if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v7 + 128), L"%SystemRoot%") )
      {
        RegistryValues = -1073741801;
        goto LABEL_85;
      }
      RegistryValues = 0;
    }
    if ( v52 )
    {
      v38 = *(_DWORD *)(v7 + 64);
      if ( (v38 & 0x80u) == 0 || (v38 & 0x100) == 0 || *(_QWORD *)(v7 + 136) )
      {
        RegistryValues = -1073741790;
        goto LABEL_85;
      }
      *(_DWORD *)(v7 + 112) |= 0x8004000u;
    }
    if ( v51 )
    {
      v39 = *(_DWORD *)(v7 + 96) + 1;
      *(_DWORD *)(v7 + 96) = v39;
      if ( v39 > v51 || v39 > 0x10 )
        *(_DWORD *)(v7 + 96) = 1;
      RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"FileCounter", 4u, (PVOID)(v7 + 96), 4u);
    }
    if ( !wcscmp(Str1, L"GlobalLogger") )
    {
      v30 = GlobalLoggerGuid;
      Guid = GlobalLoggerGuid;
    }
    else
    {
      if ( !UnicodeString.Buffer )
      {
        RegistryValues = -1073741811;
        goto LABEL_85;
      }
      v29 = RtlGUIDFromString(&UnicodeString, &Guid);
      v30 = Guid;
      RegistryValues = v29;
    }
    if ( RegistryValues >= 0 )
    {
      v31 = *(_QWORD *)&GuidString.Length;
      v32 = *(_QWORD *)&GuidString.Length;
      *(_DWORD *)v7 = v20;
      *(GUID *)(v7 + 24) = v30;
      started = EtwpStartLogger(v32, v7);
      v34 = v57;
      RegistryValues = started;
      v35 = *(unsigned __int16 *)(v7 + 8);
      *v57 = v35;
      if ( RegistryValues >= 0 && v35 && v52 )
      {
        v36 = 0;
        v37 = (_WORD *)(v31 + 4024);
        while ( *v37 )
        {
          ++v36;
          ++v37;
          if ( v36 >= 8 )
            goto LABEL_51;
        }
        *(_WORD *)(v31 + 2LL * v36 + 4024) = *v34;
      }
LABEL_51:
      if ( v63.Length )
      {
        v46 = v63.Length / 0x4Cu;
        if ( v63.Length == 76 * v46 )
        {
          v6 = v50;
          GuidString.Buffer = v63.Buffer;
          GuidString.Length = 76;
          GuidString.MaximumLength = v63.MaximumLength - v63.Length + 76;
          if ( v46 <= 0x200 )
          {
            if ( v46 )
            {
              while ( 1 )
              {
                RegistryValues = RtlGUIDFromString(&GuidString, &v6[v3]);
                if ( RegistryValues )
                  break;
                GuidString.Buffer += 38;
                if ( ++v3 >= v46 )
                  goto LABEL_95;
              }
            }
            else if ( !RegistryValues )
            {
LABEL_95:
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              EtwpUpdateDisallowList(CurrentServerSiloGlobals[108], *(unsigned int *)v34, v46, v6);
            }
          }
          goto LABEL_17;
        }
      }
LABEL_16:
      v6 = v50;
      goto LABEL_17;
    }
LABEL_85:
    v34 = v57;
    goto LABEL_51;
  }
LABEL_17:
  v22 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v48 = RtlNtStatusToDosError(RegistryValues);
      v22 = (const WCHAR *)KeyHandle;
      ValueData = v48;
    }
    RtlWriteRegistryValue(0x40000000u, v22, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( v7 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(v7 + 128));
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v66);
  RtlFreeAnsiString(&v63);
  return (unsigned int)RegistryValues;
}

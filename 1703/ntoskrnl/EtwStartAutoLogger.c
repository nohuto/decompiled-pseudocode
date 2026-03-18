/*
 * XREFs of EtwStartAutoLogger @ 0x140555730
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14045C280 (PerfDiagpProxyWorker.c)
 *     EtwpInitializeAutoLoggers @ 0x1405B059C (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCbCatW @ 0x14006E870 (RtlStringCbCatW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcscmp @ 0x14016BB70 (wcscmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x140430830 (RtlNtStatusToDosError.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     RtlWriteRegistryValue @ 0x140556350 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     EtwpUpdateDisallowList @ 0x1405C7C60 (EtwpUpdateDisallowList.c)
 *     EtwpParsePoolTagFilter @ 0x140712284 (EtwpParsePoolTagFilter.c)
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
  int RegistryValues; // edi
  PVOID v18; // rax
  _WORD *v19; // r15
  _WORD *v20; // r12
  _WORD *v21; // r13
  int v22; // eax
  unsigned int v23; // r14d
  int v24; // edx
  unsigned int v25; // ecx
  int v26; // r15d
  unsigned __int16 v27; // ax
  int v28; // eax
  NTSTATUS v29; // eax
  GUID v30; // xmm0
  __int64 v31; // r14
  __int64 v32; // rcx
  int started; // eax
  _WORD *v34; // r12
  int v35; // eax
  const WCHAR *v36; // rdx
  unsigned int v38; // eax
  unsigned int v39; // eax
  _WORD *v40; // rcx
  int v41; // eax
  unsigned int v42; // eax
  int v43; // r8d
  _WORD *v44; // r12
  __int64 v45; // r9
  void *v46; // r9
  unsigned int v47; // r14d
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG v49; // eax
  unsigned __int16 v50; // [rsp+30h] [rbp-D0h]
  _WORD v51[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v52; // [rsp+38h] [rbp-C8h]
  GUID *v53; // [rsp+40h] [rbp-C0h]
  unsigned int v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG ValueData; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v60; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+74h] [rbp-8Ch] BYREF
  int v63; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v64; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v65; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v68; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *Str1; // [rsp+F0h] [rbp-10h]
  unsigned int v74; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v75; // [rsp+100h] [rbp+0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp+8h] BYREF
  GUID Guid; // [rsp+138h] [rbp+38h] BYREF
  int v78; // [rsp+150h] [rbp+50h] BYREF
  int *v79; // [rsp+158h] [rbp+58h]
  int v80; // [rsp+160h] [rbp+60h] BYREF
  __int64 v81; // [rsp+168h] [rbp+68h]
  int v82; // [rsp+170h] [rbp+70h] BYREF
  __int64 v83; // [rsp+178h] [rbp+78h]
  int v84; // [rsp+180h] [rbp+80h] BYREF
  __int64 v85; // [rsp+188h] [rbp+88h]
  int v86; // [rsp+190h] [rbp+90h] BYREF
  __int64 v87; // [rsp+198h] [rbp+98h]
  int v88; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  int v90; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int *v91; // [rsp+1B8h] [rbp+B8h]
  int v92; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int *v93; // [rsp+1C8h] [rbp+C8h]
  int v94; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v95; // [rsp+1D8h] [rbp+D8h]
  int v96; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v97; // [rsp+1E8h] [rbp+E8h]
  int v98; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v99; // [rsp+1F8h] [rbp+F8h]
  int v100; // [rsp+200h] [rbp+100h] BYREF
  int *v101; // [rsp+208h] [rbp+108h]
  int v102; // [rsp+210h] [rbp+110h] BYREF
  UNICODE_STRING *p_GuidString; // [rsp+218h] [rbp+118h]
  int v104; // [rsp+220h] [rbp+120h] BYREF
  __int64 v105; // [rsp+228h] [rbp+128h]
  int v106; // [rsp+230h] [rbp+130h] BYREF
  unsigned int *v107; // [rsp+238h] [rbp+138h]
  int v108; // [rsp+240h] [rbp+140h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+248h] [rbp+148h]
  int v110; // [rsp+250h] [rbp+150h] BYREF
  int *v111; // [rsp+258h] [rbp+158h]
  int v112; // [rsp+260h] [rbp+160h] BYREF
  int *v113; // [rsp+268h] [rbp+168h]
  int v114; // [rsp+270h] [rbp+170h] BYREF
  UNICODE_STRING *v115; // [rsp+278h] [rbp+178h]
  _QWORD v116[140]; // [rsp+290h] [rbp+190h] BYREF

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
  v50 = 0;
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
    goto LABEL_43;
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
    v53 = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x50777445u);
    v6 = v53;
    if ( !v53 )
    {
      RegistryValues = -1073741801;
      goto LABEL_43;
    }
    v18 = ExAllocatePoolWithTag(PagedPool, 0x504uLL, 0x50777445u);
    v7 = (__int64)v18;
    if ( !v18 )
    {
      RegistryValues = -1073741801;
      goto LABEL_43;
    }
    memset(v18, 0, 0x504uLL);
    *(_DWORD *)(v7 + 44) = 0x20000;
    *(_DWORD *)(v7 + 48) = 4;
    RtlInitUnicodeString((PUNICODE_STRING)(v7 + 144), SourceString);
    *(_DWORD *)(v7 + 72) = 0x80000000;
    v19 = (_WORD *)(v7 + 180);
    *(_BYTE *)(v7 + 74) = -1;
    *(_WORD *)(v7 + 72) = 176;
    *(_DWORD *)(v7 + 176) = 1;
    v20 = (_WORD *)(v7 + 224);
    v52 = 180;
    v21 = (_WORD *)(v7 + 1252);
    memset(v116, 0, sizeof(v116));
    v116[0] = &EtwpQueryRegistryCallback;
    LODWORD(v116[4]) = 4;
    v116[3] = &v78;
    v78 = 4;
    v116[2] = L"Start";
    v79 = &v57;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, KeyHandle, v116);
    if ( RegistryValues < 0 )
      goto LABEL_42;
    if ( !v57 )
      goto LABEL_42;
    v81 = v7 + 48;
    LODWORD(v116[4]) = 4;
    v116[0] = &EtwpQueryRegistryCallback;
    v116[3] = &v78;
    v78 = 4;
    v116[2] = L"FlushThreshold";
    v116[7] = &EtwpQueryRegistryCallback;
    v79 = (int *)(v7 + 76);
    v116[10] = &v80;
    v116[9] = L"BufferSize";
    v116[17] = &v82;
    v116[16] = L"MinimumBuffers";
    v83 = v7 + 52;
    v116[24] = &v84;
    v116[23] = L"FlushTimer";
    v85 = v7 + 68;
    v116[31] = &v86;
    v116[30] = L"MaximumBuffers";
    v87 = v7 + 56;
    v116[38] = &v88;
    v116[37] = L"FileName";
    v116[40] = v51;
    v89 = v7 + 128;
    v75 = v7 + 184;
    v116[45] = &v90;
    v116[44] = L"EnableKernelFlags";
    v91 = &v74;
    v69 = v7 + 228;
    v116[52] = &v92;
    v116[51] = L"StackWalkingFilter";
    LODWORD(v116[11]) = 4;
    v80 = 4;
    v116[14] = &EtwpQueryRegistryCallback;
    LODWORD(v116[18]) = 4;
    v82 = 4;
    v116[21] = &EtwpQueryRegistryCallback;
    LODWORD(v116[25]) = 4;
    v84 = 4;
    v116[28] = &EtwpQueryRegistryCallback;
    LODWORD(v116[32]) = 4;
    v86 = 4;
    v116[35] = &EtwpQueryRegistryCallback;
    LODWORD(v116[39]) = 1;
    v88 = 1;
    v74 = 40;
    v116[42] = &EtwpQueryRegistryCallback;
    LODWORD(v116[46]) = 3;
    v90 = 3;
    v68 = 1024;
    v116[49] = &EtwpQueryRegistryCallback;
    LODWORD(v116[53]) = 3;
    v92 = 3;
    v116[56] = &EtwpQueryRegistryCallback;
    v93 = &v68;
    v116[59] = &v94;
    v116[58] = L"ClockType";
    v116[61] = &v61;
    v95 = v7 + 40;
    v116[66] = &v96;
    v116[65] = L"MaxFileSize";
    v116[68] = &v62;
    v97 = v7 + 60;
    v116[73] = &v98;
    v116[72] = L"LogFileMode";
    v116[75] = &v63;
    v99 = v7 + 64;
    v116[80] = &v100;
    v116[79] = L"DisableRealtimePersistence";
    v101 = &v58;
    v116[87] = &v102;
    v116[86] = L"Guid";
    v116[89] = v51;
    p_GuidString = &GuidString;
    v116[94] = &v104;
    v116[93] = L"FileCounter";
    v105 = v7 + 96;
    v116[101] = &v106;
    v116[100] = L"FileMax";
    v107 = &v54;
    v116[108] = &v108;
    v116[107] = L"PoolTagFilter";
    LODWORD(v116[60]) = 4;
    LODWORD(v116[62]) = 4;
    v94 = 4;
    v116[63] = &EtwpQueryRegistryCallback;
    LODWORD(v116[67]) = 4;
    LODWORD(v116[69]) = 4;
    v96 = 4;
    v116[70] = &EtwpQueryRegistryCallback;
    LODWORD(v116[74]) = 4;
    LODWORD(v116[76]) = 4;
    v98 = 4;
    v116[77] = &EtwpQueryRegistryCallback;
    LODWORD(v116[81]) = 4;
    v100 = 4;
    v116[84] = &EtwpQueryRegistryCallback;
    LODWORD(v116[88]) = 1;
    v102 = 1;
    v116[91] = &EtwpQueryRegistryCallback;
    LODWORD(v116[95]) = 4;
    v104 = 4;
    v116[98] = &EtwpQueryRegistryCallback;
    LODWORD(v116[102]) = 4;
    v106 = 4;
    v116[105] = &EtwpQueryRegistryCallback;
    LODWORD(v116[109]) = 1;
    v116[110] = v51;
    p_UnicodeString = &UnicodeString;
    v71 = v7 + 1276;
    v116[115] = &v110;
    v116[114] = L"StackCaching";
    v111 = &v70;
    v116[122] = &v112;
    v116[121] = L"EnableSecurityProvider";
    v113 = &v55;
    v116[129] = &v114;
    v116[128] = L"DisallowList";
    v116[131] = v51;
    v108 = 1;
    v116[112] = &EtwpQueryRegistryCallback;
    LODWORD(v116[116]) = 3;
    v110 = 3;
    v116[119] = &EtwpQueryRegistryCallback;
    LODWORD(v116[123]) = 4;
    v112 = 4;
    v116[126] = &EtwpQueryRegistryCallback;
    LODWORD(v116[130]) = 1;
    v114 = 1;
    v115 = &v65;
    v70 = 8;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, KeyHandle, v116);
    if ( RegistryValues < 0 )
      goto LABEL_42;
    v22 = *(_DWORD *)(v7 + 112) | 2;
    *(_DWORD *)(v7 + 112) = v22;
    if ( !v58 )
      *(_DWORD *)(v7 + 112) = v22 | 1;
    v23 = v74 >> 2;
    if ( (unsigned __int16)(v74 >> 2) )
    {
      *(_WORD *)(v7 + 182) = 1;
      *v19 = v23 + 1;
      ++*(_WORD *)(v7 + 178);
      *(_WORD *)(v7 + 176) += *v19;
      v24 = 4 * (unsigned __int16)*v19 + 180;
      v52 = v24;
    }
    else
    {
      v24 = 180;
    }
    v25 = v68;
    if ( v68 )
    {
      v42 = v68 >> 2;
      *(_WORD *)(v7 + 226) = 3;
      v43 = (v25 >> 2) + 1;
      if ( (v25 & 3) == 0 )
        LOWORD(v43) = v42;
      *v20 = v43 + 1;
      ++*(_WORD *)(v7 + 178);
      *(_WORD *)(v7 + 176) += *v20;
      v52 = v24 + 4 * (unsigned __int16)*v20;
      if ( (_WORD)v23 )
        v19 += 2 * (unsigned __int16)*v19;
      if ( v19 != v20 )
        memmove(v19, (const void *)(v7 + 224), 4LL * (unsigned __int16)v43 + 4);
    }
    if ( UnicodeString.Buffer )
    {
      v44 = (_WORD *)(v7 + 4 * (*(unsigned __int16 *)(v7 + 176) + 44LL));
      v27 = EtwpParsePoolTagFilter(&UnicodeString, v7 + 1256);
      v26 = v52;
      v50 = v27;
      if ( v27 )
      {
        *(_WORD *)(v7 + 1254) = 4;
        *v21 = v27 + 1;
        ++*(_WORD *)(v7 + 178);
        *(_WORD *)(v7 + 176) += *v21;
        v26 += 4 * (unsigned __int16)*v21;
        if ( v44 != v21 )
        {
          memmove(v44, (const void *)(v7 + 1252), 4LL * v27 + 4);
          v27 = v50;
        }
      }
    }
    else
    {
      v26 = v52;
      v27 = 0;
    }
    if ( v70 == 8 )
    {
      v45 = *(unsigned __int16 *)(v7 + 176);
      *(_DWORD *)(v7 + 1272) = 327683;
      ++*(_WORD *)(v7 + 178);
      *(_WORD *)(v7 + 176) += *(_WORD *)(v7 + 1272);
      v46 = (void *)(v7 + 4 * (v45 + 44));
      v26 += 4 * *(unsigned __int16 *)(v7 + 1272);
      if ( v46 != (void *)(v7 + 1272) )
        memmove(v46, (const void *)(v7 + 1272), 0xCuLL);
      v27 = v50;
    }
    if ( !(_WORD)v23 && !v68 && !v70 && !v27 )
      *(_DWORD *)(v7 + 72) = 0;
    v28 = *(_DWORD *)(v7 + 64);
    if ( ((v28 & 0x500) == 0 || (v28 & 0x200) != 0) && !*(_QWORD *)(v7 + 136) )
    {
      if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v7 + 128), L"%SystemRoot%") )
      {
        RegistryValues = -1073741801;
        goto LABEL_87;
      }
      RegistryValues = 0;
    }
    if ( v55 )
    {
      v41 = *(_DWORD *)(v7 + 64);
      if ( (v41 & 0x80u) == 0 || (v41 & 0x100) == 0 || *(_QWORD *)(v7 + 136) )
      {
        RegistryValues = -1073741790;
        goto LABEL_87;
      }
      *(_DWORD *)(v7 + 112) |= 0x8004000u;
    }
    if ( v54 )
    {
      v38 = *(_DWORD *)(v7 + 96) + 1;
      *(_DWORD *)(v7 + 96) = v38;
      if ( v38 > v54 || v38 > 0x10 )
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
      if ( !GuidString.Buffer )
      {
        RegistryValues = -1073741811;
        goto LABEL_87;
      }
      v29 = RtlGUIDFromString(&GuidString, &Guid);
      v30 = Guid;
      RegistryValues = v29;
    }
    if ( RegistryValues >= 0 )
    {
      v31 = *(_QWORD *)&v64.Length;
      v32 = *(_QWORD *)&v64.Length;
      *(_DWORD *)v7 = v26;
      *(GUID *)(v7 + 24) = v30;
      started = EtwpStartLogger(v32, v7);
      v34 = v60;
      RegistryValues = started;
      v35 = *(unsigned __int16 *)(v7 + 8);
      *v60 = v35;
      if ( RegistryValues >= 0 && v35 && v55 )
      {
        v39 = 0;
        v40 = (_WORD *)(v31 + 5016);
        while ( *v40 )
        {
          ++v39;
          ++v40;
          if ( v39 >= 8 )
            goto LABEL_41;
        }
        *(_WORD *)(v31 + 2LL * v39 + 5016) = *v34;
      }
LABEL_41:
      if ( v65.Length )
      {
        v47 = v65.Length / 0x4Cu;
        if ( v65.Length == 76 * v47 )
        {
          v6 = v53;
          v64.Buffer = v65.Buffer;
          v64.Length = 76;
          v64.MaximumLength = v65.MaximumLength - v65.Length + 76;
          if ( v47 <= 0x200 )
          {
            if ( v47 )
            {
              while ( 1 )
              {
                RegistryValues = RtlGUIDFromString(&v64, &v6[v3]);
                if ( RegistryValues )
                  break;
                v64.Buffer += 38;
                if ( ++v3 >= v47 )
                  goto LABEL_97;
              }
            }
            else if ( !RegistryValues )
            {
LABEL_97:
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              EtwpUpdateDisallowList(CurrentServerSiloGlobals[108], *(unsigned int *)v34, v47, v6);
            }
          }
          goto LABEL_43;
        }
      }
LABEL_42:
      v6 = v53;
      goto LABEL_43;
    }
LABEL_87:
    v34 = v60;
    goto LABEL_41;
  }
LABEL_43:
  v36 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v49 = RtlNtStatusToDosError(RegistryValues);
      v36 = (const WCHAR *)KeyHandle;
      ValueData = v49;
    }
    RtlWriteRegistryValue(0x40000000u, v36, L"Status", 4u, &ValueData, 4u);
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
